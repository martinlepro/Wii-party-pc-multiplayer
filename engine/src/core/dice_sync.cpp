#include "wp/cpu.h"
#include "wp/modules.h"
#include <winsock2.h>
#include <ws2tcpip.h>
#include <atomic>
#include <thread>
#include <mutex>
#include <string>

#pragma comment(lib, "Ws2_32.lib")

namespace wp::dice_sync {

std::atomic<int> g_syncedDiceValue{0};
std::atomic<bool> g_diceSyncEnabled{false};
std::atomic<bool> g_waitForSync{false};
SOCKET g_socket = INVALID_SOCKET;
std::mutex g_syncMutex;

bool initNetwork(const char* serverIP) {
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) return false;

    g_socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (g_socket == INVALID_SOCKET) return false;

    sockaddr_in serverAddr{};
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_port = htons(28080);

    // Si serverIP est vide ou "0.0.0.0", on est en mode host
    if (!serverIP || strlen(serverIP) == 0 || strcmp(serverIP, "0.0.0.0") == 0) {
        // Mode host: bind sur toutes les interfaces
        serverAddr.sin_addr.s_addr = htonl(INADDR_ANY);
        if (bind(g_socket, reinterpret_cast<sockaddr*>(&serverAddr), sizeof(serverAddr)) == SOCKET_ERROR) {
            closesocket(g_socket);
            g_socket = INVALID_SOCKET;
            return false;
        }
        listen(g_socket, SOMAXCONN);
        g_diceSyncEnabled = true;
        return true;
    }

    inet_pton(AF_INET, serverIP, &serverAddr.sin_addr);

    if (connect(g_socket, reinterpret_cast<sockaddr*>(&serverAddr), sizeof(serverAddr)) == SOCKET_ERROR) {
        closesocket(g_socket);
        g_socket = INVALID_SOCKET;
        return false;
    }

    g_diceSyncEnabled = true;

    // Thread de réception
    std::thread([&]() {
        char buffer[512];
        std::string data;
        while (g_diceSyncEnabled) {
            int received = recv(g_socket, buffer, sizeof(buffer), 0);
            if (received <= 0) break;

            data.append(buffer, received);
            size_t newline;
            while ((newline = data.find('\n')) != std::string::npos) {
                std::string line = data.substr(0, newline);
                data.erase(0, newline + 1);
                if (line.rfind("DICE_AUTH ", 0) == 0) {
                    try {
                        int value = std::stoi(line.substr(10));
                        g_syncedDiceValue = value;
                        g_waitForSync = false;
                    } catch (...) {}
                }
            }
        }
    }).detach();

    return true;
}

int getSyncedDiceValue() {
    return g_syncedDiceValue.load();
}

bool isSyncEnabled() {
    return g_diceSyncEnabled.load();
}

void setWaitForSync(bool wait) {
    g_waitForSync = wait;
}

bool shouldWaitForSync() {
    return g_waitForSync.load();
}

} // namespace wp::dice_sync
