/*
 * Author: r4vn
 *
 * Description:
 * Initializes client modules. This function should only be called where player
 * is local.
 */


#include "script_component.hpp"

call INIT_MODULE("help");
call INIT_MODULE("kits");
call INIT_MODULE("main");
call INIT_MODULE("rallies");
call INIT_MODULE("tickets");
call INIT_MODULE("map");
