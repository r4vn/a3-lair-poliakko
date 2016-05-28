/*
 * Author: r4vn
 *
 * Description:
 * Initializes player markers.
 */

#include "script_component.hpp"

setGroupIconsVisible [true, true];

execVM FUNC_PATH("showPlayers");

player addEventHandler ["Respawn", {
    execVM FUNC_PATH("showPlayers");
}];
