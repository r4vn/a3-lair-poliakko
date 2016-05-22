/*
 * Author: r4vn
 *
 * Description:
 * AI configuration.
 */

class CfgAi {
    areaSize = 800;

    class Insurgents {
        minGroupCount = 3;
        guardCount = 3;
        side = "Indep";
        faction = "IND_F";
        // In this array all groups which can spawn at a cache are defined.
        // The first entry in a insurgent group array is the category of the
        // group and the second is the group name. The configuration path for
        // the represented group is build using these two values.
        groups[] = {
            {"Infantry", "HAF_InfSquad"},
            {"Infantry", "HAF_InfTeam"},
            {"Infantry", "HAF_InfSentry"},
            {"Support", "HAF_Support_CLS"},
            {"Support", "HAF_Support_GMG"},
            {"Support", "HAF_Support_MG"},
            {"Motorized", "HAF_MotInf_MGTeam"},
            {"Motorized", "HAF_MotInf_AA"}
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
