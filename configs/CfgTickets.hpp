/*
 * Author: r4vn
 *
 * Description:
 * Configuration of lair.tickets addon
 */

class CfgTickets {
    ticketCountPerCache = 30;
    ticketBleed = 2;
    ticketLossPlayerKilled = 2;
    ticketLossVehicleKilled = 5;
    ticketLossCivilianKilled = 15;
    ticketWinCacheKilled = 20;
};

class RscTitles {
    class TicketsHud {
        idd = 1000;
        movingEnable = 1;
        enableSimulation = 1;
        enableDisplay = 1;
        duration = 240 * 60;
        fadeIn = 0;
        fadeOut = 0;
        onLoad = "lair_ticketsHud = _this;";

        #define SIZE 0.05 * safezoneW
        #define MARGIN 0.01 * safezoneW
        #define POS_X(n) safeZoneX + safezoneW - MARGIN - n * SIZE * 0.75
        #define POS_Y safeZoneY + safezoneH - MARGIN - SIZE
        #define FONT "RobotoBold"

        class RscIndicator {
            idc = -1;
            type = 0;
            style = 2;
            x = 0;
            y = 0;
            w = 0;
            h = 0;
            font = FONT;
            sizeEx = 0.04;
            colorText[] = {255, 255, 255, 1};
            colorBackground[] = {0, 0, 0, 0};
            text = "-";
        };

        class controls {
            class BluforTicketsBackground: RscIndicator {
                idc = 1110;
                style = 2096;
                x = POS_X(1);
                y = POS_Y;
                w = SIZE;
                h = SIZE;
                colorText[] = {0, 0.29412, 0.59608, 0.75};
                text = "\a3\ui_f\data\gui\Rsc\RscDisplayMultiplayerSetup\flag_bluefor_ca.paa";
            };

            class BluforTicketsIndicator: RscIndicator {
                idc = 1100;
                x = POS_X(1);
                y = POS_Y;
                w = SIZE;
                h = SIZE;
            };

            class InsurgentCacheBackground: RscIndicator {
                idc = 1111;
                style = 2096;
                x = POS_X(2);
                y = POS_Y;
                w = SIZE;
                h = SIZE;
                colorText[] = {0.50196, 0, 0, 0.75};
                text = "\a3\ui_f\data\gui\Rsc\RscDisplayMultiplayerSetup\flag_opfor_ca.paa";
            };

            class InsurgentCacheIndicator: RscIndicator {
                idc = 1101;
                x = POS_X(0);
                y = POS_Y;
                w = SIZE;
                h = SIZE;
            };
        };
    };
};
