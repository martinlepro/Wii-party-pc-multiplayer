#pragma once

namespace wp::dice_sync {

bool initNetwork(const char* serverIP);
int getSyncedDiceValue();
bool isSyncEnabled();
void setWaitForSync(bool wait);
bool shouldWaitForSync();

} // namespace wp::dice_sync
