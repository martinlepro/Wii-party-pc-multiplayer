#include "wp/lan_lobby.h"
#include "wp/log.h"
#include <winsock2.h>
#include <ws2tcpip.h>
#include <thread>
#include <chrono>
#include <atomic>
#include <mutex>

#pragma comment(lib, "Ws2_32.lib")

namespace wp::lan_lobby {

class Lobby::Impl {
public:
    Impl() : isHostFlag(false), connected(false) {
        WSADATA wsaData;
        WSAStartup(MAKEWORD(2, 2), &wsaData);

        // Créer socket UDP pour découverte
        discoverySocket = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
        int broadcastEnable = 1;
        setsockopt(discoverySocket, SOL_SOCKET, SO_BROADCAST,
                   reinterpret_cast<char*>(&broadcastEnable), sizeof(broadcastEnable));

        // Bind sur port découverte
        sockaddr_in addr{};
        addr.sin_family = AF_INET;
        addr.sin_port = htons(28081);
        addr.sin_addr.s_addr = htonl(INADDR_ANY);
        bind(discoverySocket, reinterpret_cast<sockaddr*>(&addr), sizeof(addr));
    }

    ~Impl() {
        if (serverSocket != INVALID_SOCKET) closesocket(serverSocket);
        if (discoverySocket != INVALID_SOCKET) closesocket(discoverySocket);
        WSACleanup();
    }

    bool startHost(const std::string& partyName, int maxPlayers) {
        isHostFlag = true;

        // Créer socket serveur TCP
        serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
        if (serverSocket == INVALID_SOCKET) return false;

        sockaddr_in addr{};
        addr.sin_family = AF_INET;
        addr.sin_port = htons(28080);
        addr.sin_addr.s_addr = htonl(INADDR_ANY);

        if (bind(serverSocket, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)) == SOCKET_ERROR) {
            closesocket(serverSocket);
            serverSocket = INVALID_SOCKET;
            return false;
        }

        listen(serverSocket, SOMAXCONN);
        connected = true;

        // Démarrer thread broadcast
        broadcastThread = std::thread([this, partyName, maxPlayers]() {
            while (isHostFlag) {
                sockaddr_in broadcastAddr{};
                broadcastAddr.sin_family = AF_INET;
                broadcastAddr.sin_port = htons(28081);
                broadcastAddr.sin_addr.s_addr = htonl(INADDR_BROADCAST);

                std::string msg = "PARTY:" + partyName + ":" +
                                 std::to_string(maxPlayers) + ":0";
                sendto(discoverySocket, msg.c_str(), msg.length(), 0,
                       reinterpret_cast<sockaddr*>(&broadcastAddr), sizeof(broadcastAddr));

                std::this_thread::sleep_for(std::chrono::seconds(2));
            }
        });
        broadcastThread.detach();

        return true;
    }

    std::vector<Party> discoverParties(int timeoutMs) {
        std::vector<Party> parties;

        // Démarrer thread d'écoute
        std::atomic<bool> done{false};
        std::thread listener([this, &parties, &done]() {
            char buffer[512];
            sockaddr_in fromAddr{};
            int fromLen = sizeof(fromAddr);

            auto start = std::chrono::steady_clock::now();
            while (!done) {
                fd_set readSet;
                FD_ZERO(&readSet);
                FD_SET(discoverySocket, &readSet);

                timeval tv{0, 100000}; // 100ms
                int result = select(0, &readSet, nullptr, nullptr, &tv);

                if (result > 0) {
                    int bytes = recvfrom(discoverySocket, buffer, sizeof(buffer), 0,
                                        reinterpret_cast<sockaddr*>(&fromAddr), &fromLen);
                    if (bytes > 0) {
                        buffer[bytes] = '\0';
                        std::string msg(buffer);

                        // Parser PARTY:name:maxPlayers:players
                        if (msg.rfind("PARTY:", 0) == 0) {
                            auto parts = split(msg.substr(6), ':');
                            if (parts.size() >= 3) {
                                Party party;
                                party.name = parts[0];
                                party.maxPlayers = std::stoi(parts[1]);
                                party.players = std::stoi(parts[2]);
                                party.hostIP = inet_ntoa(fromAddr.sin_addr);
                                party.pingMs = measurePing(party.hostIP);
                                party.gameMode = "Board Game Island";
                                parties.push_back(party);
                            }
                        }
                    }
                }

                auto now = std::chrono::steady_clock::now();
                if (std::chrono::duration_cast<std::chrono::milliseconds>(now - start).count() > timeoutMs) {
                    done = true;
                }
            }
        });

        std::this_thread::sleep_for(std::chrono::milliseconds(timeoutMs));
        done = true;
        listener.join();

        return parties;
    }

    bool joinParty(const Party& party) {
        serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
        if (serverSocket == INVALID_SOCKET) return false;

        sockaddr_in addr{};
        addr.sin_family = AF_INET;
        addr.sin_port = htons(28080);
        inet_pton(AF_INET, party.hostIP.c_str(), &addr.sin_addr);

        if (connect(serverSocket, reinterpret_cast<sockaddr*>(&addr), sizeof(addr)) == SOCKET_ERROR) {
            closesocket(serverSocket);
            serverSocket = INVALID_SOCKET;
            return false;
        }

        connected = true;
        return true;
    }

    int measurePing(const std::string& ip) {
        // Mesure simple via TCP connect
        auto start = std::chrono::high_resolution_clock::now();

        SOCKET testSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
        if (testSocket == INVALID_SOCKET) return 999;

        sockaddr_in addr{};
        addr.sin_family = AF_INET;
        addr.sin_port = htons(28080);
        inet_pton(AF_INET, ip.c_str(), &addr.sin_addr);

        int result = connect(testSocket, reinterpret_cast<sockaddr*>(&addr), sizeof(addr));
        closesocket(testSocket);

        auto end = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);

        return result == 0 ? static_cast<int>(duration.count()) : 999;
    }

    std::vector<std::string> split(const std::string& s, char delimiter) {
        std::vector<std::string> tokens;
        std::string token;
        for (char c : s) {
            if (c == delimiter) {
                tokens.push_back(token);
                token.clear();
            } else {
                token += c;
            }
        }
        tokens.push_back(token);
        return tokens;
    }

    SOCKET serverSocket = INVALID_SOCKET;
    SOCKET discoverySocket = INVALID_SOCKET;
    std::atomic<bool> isHostFlag;
    std::atomic<bool> connected;
    std::thread broadcastThread;
};

Lobby::Lobby() : impl(std::make_unique<Impl>()) {}
Lobby::~Lobby() = default;

bool Lobby::startHost(const std::string& partyName, int maxPlayers) {
    return impl->startHost(partyName, maxPlayers);
}

std::vector<Party> Lobby::discoverParties(int timeoutMs) {
    return impl->discoverParties(timeoutMs);
}

bool Lobby::joinParty(const Party& party) {
    return impl->joinParty(party);
}

bool Lobby::isHost() const {
    return impl->isHostFlag;
}

bool Lobby::isConnected() const {
    return impl->connected;
}

std::string Lobby::getServerIP() const {
    return "127.0.0.1"; // TODO: récupérer IP réelle
}

void Lobby::refreshParties() {
    // TODO: implémenter refresh
}

} // namespace wp::lan_lobby
