/*
 * Author: r4vn
 *
 * Description:
 * Initializes common player side stuff.
 */

#include "..\script_component.hpp"

["InitializePlayer", [player]] call BIS_fnc_dynamicGroups;

player setVariable [GVAR_NAME("isInitialRespawn"), true];

player addEventHandler ["Killed", {
    if (player getVariable [GVAR_NAME("isInitialRespawn"), false]) then {
        player setVariable [GVAR_NAME("isInitialRespawn"), false];
    } else {
        ["LairPlayerKilled", [player]] call CBA_fnc_globalEvent;
    };
}];

player addEventHandler ["Respawn", {
    ["LairPlayerRespawned", [player]] call CBA_fnc_globalEvent;
}];
