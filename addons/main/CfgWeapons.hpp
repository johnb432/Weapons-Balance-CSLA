class asdg_OpticRail1913_long;
class asdg_OpticSideRail_AK;
class asdg_MuzzleSlot_762;
class MuzzleSlot_545R;
class MuzzleSlot_762R;

class CfgWeapons {
    class arifle_MX_GL_Black_F;
    class arifle_MX_Black_F;
    class arifle_MX_SW_Black_F;
    class arifle_MXC_Black_F;
    class arifle_MXM_Black_F;
    class Pistol;
    class Launcher;

    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };
    class Rifle_Long_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class DMR_06_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class LMG_03_base_F: Rifle_Long_Base_F {
        magazineReloadTime = 0;
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class LMG_03_F: LMG_03_base_F {
        ACE_Overheating_allowSwapBarrel = 1;
        displayName = "FN Minimi Mk3";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 176.3;
        };
    };

    class LMG_Mk200_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };

    class LMG_Zafir_F: Rifle_Long_Base_F {
        displayName = "Negev NG-7R";
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class LMG_Zafir_B_F: LMG_Zafir_F {
        _generalMacro = "LMG_Zafir_B_F";
        ACE_barrelLength = 508;
        baseWeapon = "LMG_Zafir_B_F";
        descriptionShort = "Light Machine Gun<br />Caliber: 7.62x51 mm";
        displayName = "Negev NG-7";
        magazines[] = {"150Rnd_762x51_Box"};
        magazineWell[] = {"M240_762x51","CBA_762x51_LINKS"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class MuzzleSlot: asdg_MuzzleSlot_762 {};
        };
    };

    class EBR_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class srifle_EBR_F: EBR_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };

    class GM6_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class srifle_GM6_F: GM6_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };

    class arifle_MX_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class arifle_MXM_F: arifle_MX_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            class CowsSlot: asdg_OpticRail1913_long {};
        };
    };

    class arifle_AK12_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77;
        };
    };

    class arifle_AK12_GL_base_F: arifle_AK12_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };

    class arifle_AK12U_base_F: arifle_AK12_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 71.6;
        };
    };

    class arifle_RPK12_base_F: arifle_AK12_base_F {
        UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };
    class arifle_RPK12_F: arifle_RPK12_base_F {
        displayName = "RPKM";
    };
    class arifle_RPK12_arid_F: arifle_RPK12_base_F {
        displayName = "RPKM (Arid)";
    };
    class arifle_RPK12_lush_F: arifle_RPK12_base_F {
        displayName = "RPKM (Lush)";
    };

    class arifle_MSBS65_base_F: Rifle_Base_F {
        class WeaponSlotsInfo {
            mass = 80;
        };
    };

    class arifle_MSBS65_GL_base_F: arifle_MSBS65_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 105.5;
        };
    };

    class arifle_MSBS65_Mark_base_F: arifle_MSBS65_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 91;
        };
    };

    class arifle_MSBS65_UBS_base_F: arifle_MSBS65_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };

    class DMR_06_hunter_base_F: DMR_06_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 92;
        };
    };

    class DMR_07_base_F: Rifle_Long_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 90;
        };
    };

    class arifle_AKM_base_F: Rifle_Base_F {
        rhs_1p29_type = "rhs_acc_1p29";
        rhs_pgo7v_type = "rhs_acc_pgo7v_ak";
        rhs_pgo7v2_type = "rhs_acc_pgo7v2_ak";
        rhs_pgo7v3_type = "rhs_acc_pgo7v3_ak";
        rhs_pkas_type = "rhs_acc_pkas";
        rhs_pso1m2_type = "rhs_acc_pso1m2_ak";
        rhs_pso1m21_type = "rhs_acc_pso1m21_ak";

        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 70.1;
            class CowsSlot: asdg_OpticSideRail_AK {};
            class MuzzleSlot: MuzzleSlot_762R {};
        };
    };
    class arifle_AKM_F: arifle_AKM_base_F {
        displayName = "AKMN";
    };

    class arifle_AKS_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 59.6;
            class MuzzleSlot: MuzzleSlot_545R {};
        };
    };

    class arifle_SPAR_01_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 68.8;
        };
    };
    class arifle_SPAR_01_GL_base_F: arifle_SPAR_01_base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 101.8;
        };
    };
    class arifle_SPAR_02_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 77;
        };
    };
    class arifle_SPAR_03_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 104.5;
        };
    };

    class arifle_CTAR_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 72;
        };
    };
    class arifle_CTARS_base_F: Rifle_Base_F {
        UiPicture = "\a3\weapons_f\data\ui\icon_mg_ca.paa";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 86;
        };
    };

    class arifle_ARX_base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 110;
        };
    };

    class sgun_HunterShotgun_01_base_F: Rifle_Long_Base_F {
        magazineWell[] += {"CBA_12g_1rnd","CBA_12g_2rnds"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 80;
        };
    };

    class Rifle_Short_Base_F: Rifle_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class SMG_05_base_F: Rifle_Short_Base_F {
        class WeaponSlotsInfo: WeaponSlotsInfo {};
    };
    class SMG_05_F: SMG_05_base_F {
        displayName = "HK MP5K-PDW";
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 56;
        };
    };

    class SMG_03_TR_BASE: Rifle_Base_F {
        class WeaponSlotsInfo {
            mass = 62.8;
        };
    };
    class SMG_03C_BASE: SMG_03_TR_BASE {
        class WeaponSlotsInfo {
            mass = 57.3;
        };
    };
    class SMG_03C_black: SMG_03C_BASE {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57.3;
        };
    };
    class SMG_03C_camo: SMG_03C_black {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57.3;
        };
    };
    class SMG_03C_hex: SMG_03C_black {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57.3;
        };
    };
    class SMG_03C_khaki: SMG_03C_black {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57.3;
        };
    };

    class SMG_03C_TR_black: SMG_03C_BASE {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57.3;
        };
    };
    class SMG_03C_TR_camo: SMG_03C_TR_black {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57.3;
        };
    };
    class SMG_03C_TR_hex: SMG_03C_TR_black {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57.3;
        };
    };
    class SMG_03C_TR_khaki: SMG_03C_TR_black {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 57.3;
        };
    };

    class SMG_03_black: SMG_03_TR_BASE {
        class WeaponSlotsInfo {
            mass = 62.8;
        };
    };
    class SMG_03_camo: SMG_03_black {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 62.8;
        };
    };
    class SMG_03_hex: SMG_03_black {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 62.8;
        };
    };
    class SMG_03_khaki: SMG_03_black {
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 62.8;
        };
    };

    class Pistol_Base_F: Pistol {
        magazineReloadTime = 0;
        class WeaponSlotsInfo {};
    };
    class hgun_Rook40_F: Pistol_Base_F {
        magazineWell[] += {"CBA_9x19_MP443"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 18.9;
        };
    };
    class hgun_Pistol_01_F: Pistol_Base_F {
        magazineWell[] += {"CBA_9x18_PM"};
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 16.7;
        };
    };

    class DMR_01_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
    };

    class arifle_MX_GL_khk_F: arifle_MX_GL_Black_F {
        displayName = "MX 3GL (Khaki)";
    };

    class arifle_MX_khk_F: arifle_MX_Black_F {
        displayName = "MX (Khaki)";
    };

    class arifle_MX_SW_khk_F: arifle_MX_SW_Black_F {
        displayName = "MX LSW (Khaki)";
    };

    class arifle_MXC_khk_F: arifle_MXC_Black_F {
        displayName = "MXC (Khaki)";
    };

    class arifle_MXM_khk_F: arifle_MXM_Black_F {
        displayName = "MXM (Khaki)";
    };

    class Launcher_Base_F: Launcher {
        magazineReloadTime = 0;
        class WeaponSlotsInfo {};
    };
    class launch_RPG7_F: Launcher_Base_F {
        ace_reloadlaunchers_enabled = 1;
        class WeaponSlotsInfo: WeaponSlotsInfo {
            mass = 120;
        };
    };
    class launch_MRAWS_base_F: Launcher_Base_F {
        ace_reloadlaunchers_enabled = 1;
    };
    class launch_Vorona_base_F: Launcher_Base_F {
        ace_reloadlaunchers_enabled = 1;
    };
};
