#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#include <string>
#include <thread>
#include <mutex>

#pragma comment(lib, "Ws2_32.lib")

std::mutex output_mutex;

bool send_all(SOCKET s, const std::string& message) {
    size_t sent = 0;
    while (sent < message.size()) {
        int n = send(s, message.data() + sent,
                     static_cast<int>(message.size() - sent), 0);
        if (n <= 0) return false;
        sent += static_cast<size_t>(n);
    }
    return true;
}

void receive_messages(SOCKET s) {
    std::string pending;
    char buffer[1024];

    while (true) {
        int n = recv(s, buffer, sizeof(buffer), 0);
        if (n <= 0) break;

        pending.append(buffer, n);

        size_t pos;
        while ((pos = pending.find('\n')) != std::string::npos) {
            std::string line = pending.substr(0, pos);
            pending.erase(0, pos + 1);

            std::lock_guard<std::mutex> lock(output_mutex);

            if (line.rfind("DICE ", 0) == 0) {
                int player = 0;
                int value = 0;
                if (sscanf(line.c_str(), "DICE %d %d",
                           &player, &value) == 2) {
                    std::cout << "\n🎲 Joueur " << player
                              << " a obtenu " << value << " / 6\n";
                }
            } else if (line.rfind("CHAT ", 0) == 0) {
                std::cout << "\n" << line << '\n';
            } else if (line.rfind("INFO ", 0) == 0) {
                std::cout << "\n" << line << '\n';
            } else {
                std::cout << "\nServeur : " << line << '\n';
            }

            std::cout << "> " << std::flush;
        }
    }

    std::lock_guard<std::mutex> lock(output_mutex);
    std::cout << "\nConnexion au serveur fermee.\n";
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage : lan_client.exe ADRESSE_IP_DU_SERVEUR\n";
        return 1;
    }

    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        std::cerr << "Echec de WSAStartup.\n";
        return 1;
    }

    SOCKET sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (sock == INVALID_SOCKET) {
        std::cerr << "Creation du socket impossible.\n";
        WSACleanup();
        return 1;
    }

    sockaddr_in server{};
    server.sin_family = AF_INET;
    server.sin_port = htons(28080);

    if (inet_pton(AF_INET, argv[1], &server.sin_addr) != 1) {
        std::cerr << "Adresse IP invalide.\n";
        closesocket(sock);
        WSACleanup();
        return 1;
    }

    if (connect(sock, reinterpret_cast<sockaddr*>(&server),
                sizeof(server)) == SOCKET_ERROR) {
        std::cerr << "Connexion impossible. Verifie le serveur, "
                  << "l'adresse IP et le pare-feu.\n";
        closesocket(sock);
        WSACleanup();
        return 1;
    }

    std::cout << "Connecte ! Commandes : /roll, /chat MESSAGE, /quit\n";

    std::thread receiver(receive_messages, sock);

    std::string line;
    while (true) {
        {
            std::lock_guard<std::mutex> lock(output_mutex);
            std::cout << "> " << std::flush;
        }

        if (!std::getline(std::cin, line)) break;
        if (line == "/quit") break;

        if (line != "/roll" && line.rfind("/chat ", 0) != 0) {
            std::cout << "Commande inconnue. Utilise /roll, "
                      << "/chat MESSAGE ou /quit.\n";
            continue;
        }

        if (!send_all(sock, line + "\n")) {
            std::cerr << "Erreur d'envoi au serveur.\n";
            break;
        }
    }

    shutdown(sock, SD_BOTH);
    closesocket(sock);
    receiver.join();
    WSACleanup();
    return 0;
}
