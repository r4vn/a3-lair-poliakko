/*
 * Author: r4vn
 *
 * Description:
 * AI configuration.
 */

class CfgAi {
    areaSize = 800;

    class Insurgents {
        #define PATH_PREFIX configFile >> "CfgGroups" >> "West" >> "Guerilla"

        minGroupCount = 3;
        guardCount = 3;
        // In this array all groups which can spawn at a cache are defined.
        // The first entry in a insurgent group array is the category of the
        // group and the second is the group name. The configuration path for
        // the represented group is build using these two values.
        groups[] = {
            PATH_PREFIX >> "Infantry" >> "IRG_InfAssault",
            PATH_PREFIX >> "Infantry" >> "IRG_InfSentry",
            PATH_PREFIX >> "Infantry" >> "IRG_InfTeam",
            PATH_PREFIX >> "Infantry" >> "IRG_InfTeam_AT",
            PATH_PREFIX >> "Infantry" >> "IRG_ReconSentry",
            PATH_PREFIX >> "Support" >> "IRG_Support_CLS",
            missionConfigFile >> "CfgGroups" >> "Technical"
        };
    };

    class Civilians {
        units[] = {
            "C_man_polo_1_F_afro",
            "C_man_polo_2_F_afro",
            "C_man_polo_3_F_afro",
            "C_man_polo_4_F_afro",
            "C_man_polo_5_F_afro",
            "C_man_polo_6_F_afro",
            "C_man_p_fugitive_F_afro",
            "C_man_p_beggar_F_afro",
            "C_man_p_shorts_1_F_afro",
            "C_man_shorts_1_F_afro",
            "C_man_shorts_2_F_afro",
            "C_man_shorts_3_F_afro",
            "C_man_shorts_4_F_afro"
        };
    };
};

class CfgGroups {
    class Technical {
        class Unit0 {
            position[] = {0, 0, 0};
            rank = "LIEUTENANT";
            side = 1;
            vehicle = "B_G_Offroad_01_armed_F";
        };
    };
};
