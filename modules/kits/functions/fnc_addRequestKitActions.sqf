/*
 * Author: r4vn
 *
 * Description:
 * Registers kit request actions.
 */

#include "..\script_component.hpp"

private [
    "_supply",
    "_respawnInventoryConfig"
];

_supply = _this select 0;

_respawnInventoryConfig = (missionConfigFile >> "CfgRespawnInventory");

for "_i" from 0 to (count _respawnInventoryConfig) - 1 do {
    _supply addAction [
        getText ((_respawnInventoryConfig select _i) >> "displayName"),
        {
            [player, _this select 3] call BIS_fnc_loadInventory;

            missionNamespace setvariable
                    ["BIS_fnc_respawnMenuInventory_selected",
                    _this select 3];
        },
        _respawnInventoryConfig select _i,
        1.5,
        false,
        true,
        "",
        '(_target distance _caller) < 5;'
    ];
};
