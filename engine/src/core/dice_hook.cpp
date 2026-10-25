#include "wp/cpu.h"
#include "wp/modules.h"
#include "wp/dice_sync.h"
#include "wp/threads.h"
#include <iostream>
#include <winsock2.h>

namespace wp::dice_hook {

// Hook pour f_mr001_0106d110 - génération RNG dés Board Game Island
void f_mr001_0106d110_hook(wp::Cpu& c) {
    // Vérifier si sync LAN activé
    if (wp::dice_sync::isSyncEnabled() && wp::dice_sync::shouldWaitForSync()) {
        int syncedValue = wp::dice_sync::getSyncedDiceValue();

        if (syncedValue > 0) {
            // Valeur 1-6 reçue du serveur, la forcer dans le registre r3
            c.r[3] = syncedValue;

            // Marquer que le sync est terminé
            wp::dice_sync::setWaitForSync(false);

            // Retourner directement sans exécuter le RNG original
            return;
        }
    }

    // Sinon, exécuter le code original
    extern void f_mr001_0106d110_original(wp::Cpu& c);
    f_mr001_0106d110_original(c);
}

// Hook pour f_mr001_01006ae0 - point d'entrée principal Board Game Island
void f_mr001_01006ae0_hook(wp::Cpu& c) {
    // Détecter le lancement de dés - on utilise take_resume_address() pour savoir où on est
    uint32_t resume_addr = wp::take_resume_address();

    // Les adresses connues pour le RNG du dé
    if (resume_addr == 0x1006e50 || resume_addr == 0x1006d18 || resume_addr == 0x1006db0) {
        if (wp::dice_sync::isSyncEnabled()) {
            wp::dice_sync::setWaitForSync(true);
            // Notifier le serveur qu'on veut lancer
            wp::dice_sync::notifyRollRequest();
        }
    }

    // Appeler original
    extern void f_mr001_01006ae0_original(wp::Cpu& c);
    f_mr001_01006ae0_original(c);
}

} // namespace wp::dice_hook