#pragma once

namespace wp::dice_sync {

bool initNetwork(const char* serverIP);
int getSyncedDiceValue();
bool isSyncEnabled();
void setWaitForSync(bool wait);
bool shouldWaitForSync();
void notifyRollRequest();
bool isSocketValid();

} // namespace wp::dice_sync