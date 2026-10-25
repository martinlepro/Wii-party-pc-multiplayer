#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/dice_sync.h"
#include <iostream>

namespace wp::dice_hook {

// Hook pour f_mr001_0106d110 - génération RNG dés Board Game Island
void f_mr001_0106d110_hook(wp::Cpu& c) {
    // Vérifier si sync LAN activé
    if (wp::dice_sync::isSyncEnabled() && wp::dice_sync::shouldWaitForSync()) {
        int syncedValue = wp::dice_sync::getSyncedDiceValue();

        if (syncedValue > 0) {
            // Valeur 1-6 reçue du serveur, la forcer dans le registre r3
            // Le code original attend un résultat dans r3 après l'appel
            c.r[3] = syncedValue;

            // Marquer que le sync est terminé
            wp::dice_sync::setWaitForSync(false);

            // Sauter le code RNG original
            c.pc = 0x1006d180; // Adresse après RNG
            return;
        }
    }

    // Sinon, exécuter le code original
    // On appelle la fonction originale via trampoline
    extern void f_mr001_0106d110_original(wp::Cpu& c);
    f_mr001_0106d110_original(c);
}

// Hook pour f_mr001_01006ae0 - point d'entrée principal Board Game Island
void f_mr001_01006ae0_hook(wp::Cpu& c) {
    // Détecter le lancement de dés via pattern d'exécution
    // Quand on est sur le point de générer le RNG, on attend le sync
    uint32_t pc = c.pc;

    // Les adresses connues pour le RNG du dé
    if (pc == 0x1006e50 || pc == 0x1006d18 || pc == 0x1006db0) {
        if (wp::dice_sync::isSyncEnabled()) {
            wp::dice_sync::setWaitForSync(true);
            // Notifier le serveur qu'on veut lancer
            if (wp::dice_sync::g_socket != INVALID_SOCKET) {
                const char* msg = "/roll_server\n";
                send(wp::dice_sync::g_socket, msg, strlen(msg), 0);
            }
        }
    }

    // Appeler original
    extern void f_mr001_01006ae0_original(wp::Cpu& c);
    f_mr001_01006ae0_original(c);
}

} // namespace wp::dice_hook
