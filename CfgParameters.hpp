/*
 * Author: r4vn
 *
 * Description:
 * This configuration holds all mission parameters. An inner class of Params
 * is a single mission parameter.
 */

class Params {
    class NeededCaches {
        title = $STR_lair_neededCaches;
        values[] = {3, 4, 5};
        texts[] = {"3", "4", "5"};
        default = 5;
    };

    class MinCacheGroups {
        title = $STR_lair_minCacheGroups;
        values[] = {8, 12, 16};
        texts[] = {"8", "12", "16"};
        default = 8;
    };

    class MaxCacheGroups {
        title = $STR_lair_maxCacheGroups;
        values[] = {8, 12, 16};
        texts[] = {"8", "12", "16"};
        default = 16;
    };

    class Weather {
        title = $STR_A3_rscattributeovercast_title;
        values[] = {0, 25, 50, 75, 100};
        texts[] = {
            $STR_A3_rscattributeovercast_value000_tooltip,
            $STR_A3_rscattributeovercast_value025_tooltip,
            $STR_A3_rscattributeovercast_value050_tooltip,
            $STR_A3_rscattributeovercast_value075_tooltip,
            $STR_A3_rscattributeovercast_value100_tooltip
        };
        default = 25;
        function = "BIS_fnc_paramWeather";
    };

    class Daytime {
        title = $STR_A3_paramDaytimePeriod_title;
        values[] = {6,12,19,0};
        texts[] = {
            $STR_A3_paramDaytimePeriod_text1,
            $STR_A3_paramDaytimePeriod_text2,
            $STR_A3_paramDaytimePeriod_text3,
            $STR_A3_paramDaytimePeriod_text4
        };
        default = 12;
        function = "BIS_fnc_paramDaytime";
    };
};
