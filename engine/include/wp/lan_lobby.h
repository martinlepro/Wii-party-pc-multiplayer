#pragma once
#include <string>
#include <vector>
#include <functional>

namespace wp::lan_lobby {

struct Party {
    std::string name;
    std::string hostIP;
    int players;
    int maxPlayers;
    int pingMs;
    std::string gameMode;
};

class Lobby {
public:
    Lobby();
    ~Lobby();

    // Démarrer en mode host
    bool startHost(const std::string& partyName, int maxPlayers = 4);

    // Rechercher des parties
    std::vector<Party> discoverParties(int timeoutMs = 3000);

    // Rejoindre une partie
    bool joinParty(const Party& party);

    // Vérifier si on est host
    bool isHost() const;

    // Vérifier si on est connecté
    bool isConnected() const;

    // Obtenir l'IP du serveur
    std::string getServerIP() const;

    // Mettre à jour la liste des parties
    void refreshParties();

private:
    class Impl;
    std::unique_ptr<Impl> impl;
};

} // namespace wp::lan_lobby
