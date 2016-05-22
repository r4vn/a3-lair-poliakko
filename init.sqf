/*
 * Author: r4vn
 *
 * Description:
 * Initializes modules for the mission.
 */

if (isServer) then {
    call lair_fnc_init;
};

if (!isDedicated) then {
    call lair_fnc_initPlayerModules;
}
