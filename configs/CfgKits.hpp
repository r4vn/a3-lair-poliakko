/*
 * Author: r4vn
 *
 * Description:
 * Configuration of lair.kits addon
 */

// All kits used in the mission are defined in the class below.
// Each inner class represents a single kit. Locales should be used for
// the kit's display name.
//
// IMPORTANT: The first linkedItem always has to be the vest and must be the
// same for an alternative kit variant!
class CfgRespawnInventory {
    class Rifleman {
        displayName = $STR_lair_kitRifleman;
        icon = "\a3\ui_f\data\gui\cfg\Ranks\private_gs.paa";
        weapons[] = {
            "arifle_MX_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell"
        };
        items[] = {
            "FirstAidKit",
            "FirstAidKit"
        };
        linkedItems[] = {
            "V_PlateCarrier1_rgr",
            "H_HelmetB",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "acc_flashlight",
            "optic_Holosight"

        };
        uniformClass = "U_B_CombatUniform_mcam";
        backpack = "";
    };

    class SquadLeader: Rifleman {
        displayName = $STR_lair_kitOfficer;
        icon = "\a3\ui_f\data\gui\cfg\Ranks\captain_gs.paa";
        weapons[] = {
            "arifle_MX_F",
            "hgun_ACPC2_F",
            "Throw",
            "Put",
            "Laserdesignator"
        };
        magazines[] = {
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "9Rnd_45ACP_Mag",
            "9Rnd_45ACP_Mag",
            "9Rnd_45ACP_Mag",
            "HandGrenade",
            "HandGrenade",
            "SmokeShell",
            "SmokeShell",
            "SmokeShellPurple",
            "SmokeShellPurple",
            "Laserbatteries"
        };
        items[] = {
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit"
        };
        linkedItems[] = {
            "V_PlateCarrierSpec_rgr",
            "H_HelmetB_black",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "acc_flashlight",
            "optic_MRCO"
        };
        uniformClass = "U_B_CombatUniform_mcam_vest";
    };

    class AutomaticRifleman: Rifleman {
        displayName = $STR_lair_kitAutomaticRifleman;
        icon = "\a3\ui_f\data\gui\cfg\Ranks\corporal_gs.paa";
        weapons[] = {
            "arifle_MX_SW_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "100Rnd_65x39_caseless_mag",
            "100Rnd_65x39_caseless_mag",
            "100Rnd_65x39_caseless_mag",
            "SmokeShell"
        };
        items[] = {
            "FirstAidKit",
            "FirstAidKit"
        };
        linkedItems[] = {
            "V_PlateCarrier1_rgr",
            "H_HelmetB",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "acc_flashlight",
            "optic_MRCO"
        };
    };

    class Medic: Rifleman {
        displayName = $STR_lair_kitMedic;
        icon = "\a3\characters_f\data\ui\icon_medic_ca.paa";
        magazines[] = {
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell",
            "SmokeShell"
        };
        items[] = {
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "FirstAidKit",
            "Medikit"
        };
        linkedItems[] = {
            "V_PlateCarrier1_rgr",
            "H_HelmetB_light_black",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "acc_flashlight"
        };
        uniformClass = "U_B_CombatUniform_mcam_tshirt";
        backpack = "B_AssaultPack_mcamo";
    };

    class Engineer: Rifleman {
        displayName = $STR_lair_kitEngineer;
        icon = "\a3\characters_f\data\ui\icon_repair_ca.paa";
        magazines[] = {
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "SmokeShell",
            "DemoCharge_Remote_Mag",
            "DemoCharge_Remote_Mag",
            "DemoCharge_Remote_Mag",
            "HandGrenade",
            "HandGrenade"
        };
        linkedItems[] = {
            "V_PlateCarrierGL_rgr",
            "H_HelmetB",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "acc_flashlight",
            "optic_MRD",
            "optic_Holosight"
        };
        backpack = "B_AssaultPack_mcamo";
    };

    class RiflemanAntiTank: Rifleman {
        displayName = $STR_lair_kitRiflemanAntiTank;
        icon = "\a3\characters_f\data\ui\icon_expl_specialist_ca.paa";
        weapons[] = {
            "arifle_MX_F",
            "launch_NLAW_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "30Rnd_65x39_caseless_mag",
            "SmokeShell",
            "NLAW_F"
        };
        linkedItems[] = {
            "V_PlateCarrierGL_rgr",
            "H_HelmetB",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "acc_flashlight"
        };
        backpack = "B_AssaultPack_mcamo";
    };

    class Pilot {
        displayName = $STR_lair_kitPilot;
        icon = "\a3\ui_f\data\IGUI\Cfg\Actions\getinpilot_ca.paa";
        weapons[] = {
            "hgun_ACPC2_F",
            "Throw",
            "Put"
        };
        magazines[] = {
            "9Rnd_45ACP_Mag",
            "9Rnd_45ACP_Mag",
            "9Rnd_45ACP_Mag",
            "SmokeShellRed"
        };
        items[] = {
          "FirstAidKit",
          "FirstAidKit"
        };
        linkedItems[] = {
            "V_TacVest_blk",
            "H_PilotHelmetHeli_B",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "NVGoggles"
        };
        uniformClass = "U_B_HeliPilotCoveralls";
    };
};
