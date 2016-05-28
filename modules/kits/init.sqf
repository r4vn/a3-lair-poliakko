/*
 * Author: r4vn
 *
 * Description:
 * Initializes client side of kits.
 */

#include "script_component.hpp"

player addEventHandler ["Respawn", {
    private [
        "_unit",
        "_corpse",
        "_selectedKit",
        "_defaultKit",
        "_kitVarName"
    ];

    _unit = _this select 0;
    _corpse = _this select 1;

    _kitVarName = getText (missionConfigFile >> "CfgKits" >> "kitVarName");
    _defaultKit = getText (missionConfigFile >> "CfgKits" >> "defaultKit");

    _selectedKit = missionNamespace getVariable [
            "BIS_fnc_respawnMenuInventory_selected", _defaultKit];
    _unit setVariable [_kitVarName, _selectedKit];
}];
