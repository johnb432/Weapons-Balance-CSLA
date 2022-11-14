class US85_weaponBase: Rifle_Base_F {
    class WeaponSlotsInfo;
};

class US85_FAL_BASE: US85_weaponBase {
    ACE_barrelLength = 533;
    ACE_barrelTwist = 304.8;
    magazineWell[] += {"CBA_762x51_FAL","CBA_762x51_FAL_L"};
    modes[] = {"Single","fullAuto","closeAI","shortAI","closeAIoptics","shortAIoptics","mediumAIoptics","farAIoptics"};
    class WeaponSlotsInfo;
};
class US85_FAL: US85_FAL_BASE {
    displayName = "FN FAL 50.00";
    mass = 94;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 94;
    };
};
class US85_FALf: US85_FAL_BASE {
    ACE_barrelLength = 457.2;
    displayName = "FN FAL 50.62";
    mass = 95;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 95;
    };
};

class US85_M16_base: US85_weaponBase {
    ACE_barrelLength = 508;
    ACE_barrelTwist = 177.8;
    magazineWell[] += {"STANAG_556x45","CBA_556x45_STANAG","CBA_556x45_STANAG_L","CBA_556x45_STANAG_XL","CBA_556x45_STANAG_2D","CBA_556x45_STANAG_2D_XL"};
    class WeaponSlotsInfo;
};
class US85_M16A2: US85_M16_base {
    mass = 77;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};
class US85_M16A2GL: US85_M16A2 {
    displayName = "M16A2 (M203)";
    mass = 110;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 110;
    };
};
class US85_M16A2CAR: US85_M16A2 {
    ACE_barrelLength = 368.3;
    displayName = "Colt RO727 Commando";
    mass = 67.3;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 67.3;
    };
};
class US85_M16A2CARGL: US85_M16A2CAR {
    displayName = "Colt RO727 Commando (M203)";
    mass = 100.3;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 100.3;
    };
};

class US85_M14_M21_Base: US85_weaponBase {
    ACE_barrelLength = 558.8;
    ACE_barrelTwist = 304.8;
    magazineWell[] += {"M14_762x51","CBA_762x51_M14"};
    mass = 90.2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 90.2;
    };
};

class US85_MPV_BASE: US85_weaponBase {
    ACE_barrelLength = 228.6;
    ACE_barrelTwist = 254;
    magazineWell[] += {"CBA_9x19_MP5"};
    class WeaponSlotsInfo;
};
class US85_MPVN: US85_MPV_BASE {
    displayName = "HK MP5N";
    mass = 69.3;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 69.3;
    };
};
class US85_MPVSD: US85_MPV_BASE {
    displayName = "HK MP5SD6";
    mass = 75;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 75;
    };
};

class US85_MachinegunBase_5_56: US85_weaponBase {
    class WeaponSlotsInfo;
};
class US85_M249: US85_MachinegunBase_5_56 {
    ACE_barrelLength = 465;
    ACE_barrelTwist = 305;
    ACE_Overheating_allowSwapBarrel = 1;
    magazineReloadTime = 0;
    magazineWell[] += {"M249_556x45","CBA_556x45_MINIMI"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 165;
    };
};

class US85_MachinegunBase_7_62: US85_MachinegunBase_5_56 {
    class WeaponSlotsInfo;
};
class US85_M60: US85_MachinegunBase_7_62 {
    ACE_barrelLength = 558.8;
    ACE_barrelTwist = 304.8;
    ACE_Overheating_allowSwapBarrel = 1;
    magazineReloadTime = 0;
    magazineWell[] = {"M240_762x51","CBA_762x51_LINKS"};
    mass = 231;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 231;
    };
};


class US85_pistolBase: Pistol_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class US85_1911: US85_pistolBase {
    mass = 20.9;
    magazineWell[] += {"CBA_45ACP_1911"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 20.9;
    };
};
class US85_M9: US85_pistolBase {
    mass = 20.9;
    magazineWell[] += {"CBA_9x19_M9"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 20.9;
    };
};
