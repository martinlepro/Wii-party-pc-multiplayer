#include "wp/dice_sync.h"
#include <iostream>

extern "C" void dice_sync_init() {
    // Lire la variable d'environnement pour le serveur LAN
    const char* serverIP = std::getenv("WP_LAN_SERVER");

    if (serverIP) {
        std::cout << "[DICE SYNC] Initialisation connexion LAN vers " << serverIP << "\n";
        if (wp::dice_sync::initNetwork(serverIP)) {
            std::cout << "[DICE SYNC] Connecté avec succès ! Dés synchronisés.\n";
        } else {
            std::cout << "[DICE SYNC] Échec connexion, mode solo.\n";
        }
    } else {
        std::cout << "[DICE SYNC] Mode solo (WP_LAN_SERVER non défini)\n";
    }
}
