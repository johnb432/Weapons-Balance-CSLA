class CSLA_baseWeapon: Rifle_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class CSLA_OP63_Base: CSLA_baseWeapon {
    ACE_barrelLength = 619.76;
    ACE_barrelTwist = 238.76;
    magazineWell[] += {"SVD_762x54R","CBA_762x54R_SVD"};
    mass = 86;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 86;
    };
};

class CSLA_Sa58_Base: CSLA_baseWeapon {
    ACE_barrelLength = 390;
    ACE_barrelTwist = 240;
    magazineWell[] += {"CBA_762x39_VZ58"};
    mass = 68.2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 68.2;
    };
};
class CSLA_Sa58P: CSLA_Sa58_Base {
    displayName = "Sa vz. 58 P";
};
class CSLA_Sa58V: CSLA_Sa58_Base {
    displayName = "Sa vz. 58 V";
};
class CSLA_VG70_base: CSLA_Sa58_Base {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class CSLA_VG70: CSLA_VG70_base {
    displayName = "Sa vz. 58 P (VG-70)";
    mass = 101.2;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 101.2;
    };
};

class UGL_F;
class CSLA_Base_GL_weapon: UGL_F {
    magazineWell[] = {"CBA_FLARE_265"};
};

class CSLA_rSa61: CSLA_baseWeapon {
    ACE_barrelLength = 139.7;
    ACE_barrelTwist = 406.4;
    displayName = "Sa vz. 61";
    magazineWell[] += {"CBA_32ACP_Vz61"};
    mass = 28.2;
    rhs_fold = "CSLA_Sa61";
    rhs_pistol_conversion = 1;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 28.2;
    };
};

class CSLA_MachinegunBase_5_56: CSLA_baseWeapon {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class CSLA_MachinegunBase_7_62: CSLA_MachinegunBase_5_56 {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class CSLA_UK59L: CSLA_MachinegunBase_7_62 {
    ACE_barrelLength = 650;
    ACE_barrelTwist = 240;
    ACE_Overheating_allowSwapBarrel = 1;
    displayName = "UK vz. 59 L";
    magazineWell[] = {"CBA_762x54R_Vz59_LINKS"};
    mass = 205;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 205;
    };
};

class CSLA_PistolBase: Pistol_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class CSLA_Pi52: CSLA_PistolBase {
    displayName = "vz. 52";
    mass = 20.9;
    magazineWell[] += {"CBA_762x25_CZ52"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 20.9;
    };
};
class CSLA_Pi82: CSLA_Pi52 {
    displayName = "vz. 82";
    magazineWell[] = {"CBA_9x18_CZ82"};
};
class CSLA_Sa61: CSLA_Pi52 {
    ACE_barrelLength = 139.7;
    ACE_barrelTwist = 406.4;
    displayName = "Sa vz. 61 (Folded)";
    magazineWell[] = {"CBA_32ACP_Vz61"};
    mass = 28.2;
    rhs_fold = "CSLA_rSa61";
    rhs_pistol_conversion = 1;
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 28.2;
    };
};
