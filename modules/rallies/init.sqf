/*
 * Author: r4vn
 *
 * Description:
 * Initializes rallies on player side.
 */

#include "script_component.hpp"

player setVariable ["isRallyActionAvailable", true];

execVM FUNC_PATH("addDeployRallyAction");

player addEventHandler ["Respawn", {
    execVM FUNC_PATH("addDeployRallyAction");
}];
