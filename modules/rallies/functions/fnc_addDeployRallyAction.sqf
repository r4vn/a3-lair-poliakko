/*
 * Author: r4vn
 *
 * Description:
 * Adds the action to deploy a rally point.
 */

#include "..\script_component.hpp"

player addAction [
    "<t color='#ffc107'>" + (localize STRING_NAME("deployRally")) + "</t>",
    {
        ["LairRallyRequested", [player]] call CBA_fnc_globalEvent;
        player setVariable ["isRallyActionAvailable", false];

        [] spawn {
            uiSleep 180;
            player setVariable ["isRallyActionAvailable", true];
        }
    },
    nil,
    1.5,
    false,
    true,
    "",
    '
        _target == _this &&
                typeof (vehicle _this) == typeOf _this &&
                leader (group _this) == _this &&
                _this getVariable ["isRallyActionAvailable", true];
    '
];
