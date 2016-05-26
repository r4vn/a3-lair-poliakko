/*
 * Author: r4vn
 *
 * Description:
 * Common settings for the mission are defined in this configuration file.
 */

class Header {
    gameType = Coop;
    minPlayers = 2;
    maxPlayers = 8;
};

saving = 0;

respawn = 3;
respawnOnStart = -1;
respawnDelay = 30;
respawnDialog = 1;
respawnTemplates[] = {"Revive", "MenuInventory", "MenuPosition"};

reviveDelay = 30;
reviveForceRespawnDelay = 0;
reviveBleedOutDelay = 350;

corpseManagerMode = 1;
corpseLimit = 15;
corpseRemovalMinTime = 300;
corpseRemovalMaxTime = 300;

respawnVehicleDelay = 120;
wreckManagerMode = 1;
wreckLimit = 15;
wreckRemovalMinTime = 300;
wreckRemovalMaxTime = 300;

showHUD = 1;
disabledAI = 1;
