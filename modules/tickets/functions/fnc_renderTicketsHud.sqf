/*
 * Author: r4vn
 *
 * Description:
 * Renders ticket and cache count.
 */

#include "..\script_component.hpp"

private [
    "_cacheCount",
    "_ticketCount"
];

uiSleep 1;

// Show resource
"TicketsHud" cutRsc ["TicketsHud", "PLAIN", 1, false];

_cacheCount = "NeededCaches" call BIS_fnc_getParamValue;
_ticketCount = missionNamespace getVariable
        ["lair_tickets_ticketCount", 0];

(lair_ticketsHud select 0) displayCtrl 1100 ctrlSetText
        (str _ticketCount);
(lair_ticketsHud select 0) displayCtrl 1101 ctrlSetText
        (str _cacheCount);
