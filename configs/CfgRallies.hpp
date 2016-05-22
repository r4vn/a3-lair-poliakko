/*
 * Author: r4vn
 *
 * Description:
 * This is the configuration for rallies.
 */

class CfgRallies {
    vehicle = "Land_DataTerminal_01_F";
    animation = "[_this select 0, 3] call BIS_fnc_dataTerminalAnimate;";
};

class CfgNotifications {
    class Rally {
        title = $STR_lair_rallyNote;
        iconPicture = "\a3\ui_f\data\gui\cfg\Hints\waypoint_ca.paa";
        description = "%1";
        duration = 3;
        priority = 0;
    };
};
