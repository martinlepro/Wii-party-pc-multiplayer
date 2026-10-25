
#include <winsock2.h>
#include <ws2tcpip.h>

#include <atomic>
#include <iostream>
#include <mutex>
#include <random>
#include <string>
#include <thread>
#include <vector>

#pragma comment(lib, "Ws2_32.lib")

constexpr unsigned short PORT = 28080;

struct Player {
    SOCKET socket;
    int id;
};

std::vector<Player> players;
std::mutex playersMutex;
std::atomic<int> nextPlayerId{2};
std::atomic<bool> running{true};

bool sendAll(SOCKET socket, const std::string& message) {
    size_t sent = 0;

    while (sent < message.size()) {
        int result = send(
            socket,
            message.data() + sent,
            static_cast<int>(message.size() - sent),
            0
        );

        if (result == SOCKET_ERROR || result == 0) {
            return false;
        }

        sent += static_cast<size_t>(result);
    }

    return true;
}

void broadcast(const std::string& message) {
    std::lock_guard<std::mutex> lock(playersMutex);

    for (const auto& player : players) {
        sendAll(player.socket, message);
    }
}

int rollDice() {
    static std::random_device rd;
    static std::mt19937 generator(rd());
    static std::uniform_int_distribution<int> distribution(1, 6);

    return distribution(generator);
}

void handleCommand(const std::string& command, int playerId) {
    if (command == "/roll") {
        int value = rollDice();

        std::string message =
            "DICE " + std::to_string(playerId) + " " +
            std::to_string(value) + "\n";

        // Affiche aussi le lancer dans la fenêtre du serveur.
        std::cout << "Joueur " << playerId
                  << " a obtenu " << value << " / 6\n";

        // Envoie le résultat à tous les clients connectés.
        broadcast(message);
    } else if (command.rfind("/chat ", 0) == 0) {
        std::string text = command.substr(6);

        std::string message =
            "CHAT " + std::to_string(playerId) + " " +
            text + "\n";

        std::cout << "[Joueur " << playerId << "] "
                  << text << '\n';

        broadcast(message);
    } else if (command == "/quit") {
        std::cout << "Commande /quit recue.\n";
    } else {
        std::cout << "Commandes : /roll, /chat MESSAGE, /quit\n";
    }
}

void handlePlayer(SOCKET clientSocket, int playerId) {
    std::string buffer;
    char data[512];

    while (running) {
        int received = recv(clientSocket, data, sizeof(data), 0);

        if (received <= 0) {
            break;
        }

        buffer.append(data, received);

        size_t newline;
        while ((newline = buffer.find('\n')) != std::string::npos) {
            std::string command = buffer.substr(0, newline);
            buffer.erase(0, newline + 1);

            if (!command.empty() && command.back() == '\r') {
                command.pop_back();
            }

            handleCommand(command, playerId);
        }
    }

    {
        std::lock_guard<std::mutex> lock(playersMutex);

        for (auto it = players.begin(); it != players.end(); ++it) {
            if (it->socket == clientSocket) {
                players.erase(it);
                break;
            }
        }
    }

    closesocket(clientSocket);

    std::cout << "Joueur " << playerId << " deconnecte.\n";
}

int main() {
    WSADATA wsaData;

    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
        std::cerr << "Erreur WSAStartup.\n";
        return 1;
    }

    SOCKET serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    if (serverSocket == INVALID_SOCKET) {
        std::cerr << "Impossible de creer le socket serveur.\n";
        WSACleanup();
        return 1;
    }

    sockaddr_in serverAddress{};
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(PORT);
    serverAddress.sin_addr.s_addr = htonl(INADDR_ANY);

    if (bind(serverSocket,
             reinterpret_cast<sockaddr*>(&serverAddress),
             sizeof(serverAddress)) == SOCKET_ERROR) {
        std::cerr << "Erreur bind. Le port " << PORT
                  << " est peut-etre deja utilise.\n";
        closesocket(serverSocket);
        WSACleanup();
        return 1;
    }

    if (listen(serverSocket, SOMAXCONN) == SOCKET_ERROR) {
        std::cerr << "Erreur listen.\n";
        closesocket(serverSocket);
        WSACleanup();
        return 1;
    }

    std::cout << "Serveur actif sur le port " << PORT << ".\n";
    std::cout << "Joueur local : Joueur 1.\n";
    std::cout << "Commandes : /roll, /chat MESSAGE, /quit\n";
    std::cout << "Les clients distants peuvent se connecter.\n";

    // Accepte les connexions dans un thread distinct.
    std::thread acceptThread([&]() {
        while (running) {
            sockaddr_in clientAddress{};
            int addressLength = sizeof(clientAddress);

            SOCKET clientSocket = accept(
                serverSocket,
                reinterpret_cast<sockaddr*>(&clientAddress),
                &addressLength
            );

            if (clientSocket == INVALID_SOCKET) {
                if (running) {
                    std::cerr << "Erreur accept.\n";
                }
                break;
            }

            int playerId = nextPlayerId++;

            {
                std::lock_guard<std::mutex> lock(playersMutex);
                players.push_back({clientSocket, playerId});
            }

            std::cout << "Joueur " << playerId
                      << " connecte.\n";

            std::string info =
                "INFO Joueur " + std::to_string(playerId) +
                " connecte\n";

            sendAll(clientSocket, info);

            std::thread(handlePlayer, clientSocket, playerId).detach();
        }
    });

    // Le serveur lui-même joue en tant que Joueur 1.
    std::string command;

    while (running && std::getline(std::cin, command)) {
        if (command == "/quit") {
            break;
        }

        handleCommand(command, 1);
    }

    running = false;
    closesocket(serverSocket);

    // Ferme les connexions distantes pour terminer proprement.
    {
        std::lock_guard<std::mutex> lock(playersMutex);

        for (const auto& player : players) {
            shutdown(player.socket, SD_BOTH);
            closesocket(player.socket);
        }

        players.clear();
    }

    if (acceptThread.joinable()) {
        acceptThread.join();
    }

    WSACleanup();

    std::cout << "Serveur arrete.\n";
    return 0;
}
