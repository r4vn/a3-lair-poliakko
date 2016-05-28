/*
 * Author: r4vn
 *
 * Description:
 * Initializes the mission hud.
 */

#include "script_component.hpp"

execVM FUNC_PATH("renderTicketsHud");

player addEventHandler ["Respawn", {
    execVM FUNC_PATH("renderTicketsHud");
}];

// Register update handlers
["LairTicketsUpdated", {
    if (isNil "lair_ticketsHud") exitWith {};

    (lair_ticketsHud select 0) displayCtrl 1100 ctrlSetText str (_this
            select 0);
}] call CBA_fnc_addEventHandler;

["LairCacheKilled", {
    if (isNil "lair_ticketsHud") exitWith {};

    (lair_ticketsHud select 0) displayCtrl 1101 ctrlSetText str ((_this
                select 2) - (_this select 1));
}] call CBA_fnc_addEventHandler;
