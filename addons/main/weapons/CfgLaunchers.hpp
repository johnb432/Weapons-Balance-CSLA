class US85_launcherBase;
class US85_Launcher_AA: US85_launcherBase {
    class WeaponSlotsInfo;
};
class US85_FIM92: US85_Launcher_AA {
    magazineWell[] += {"CBA_FIM"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 114.4;
    };
};

class US85_Launcher_AT: US85_launcherBase {
    class WeaponSlotsInfo;
};
class US85_LAW72: US85_Launcher_AT {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};
class US85_M47: US85_Launcher_AT {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 253;
    };
};
class US85_M136: US85_Launcher_AT {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 147.4;
    };
};
class US85_MAAWS: US85_Launcher_AT {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 187.4;
    };
};
class US85_SMAW: US85_Launcher_AT {
    magazineWell[] += {"CBA_SMAW"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 165.44;
    };
};

class CSLA_LauncherBase;
class CSLA_Launcher_AA: CSLA_LauncherBase {
    class WeaponSlotsInfo;
};
class CSLA_9K32: CSLA_Launcher_AA {
    magazineWell[] += {"CBA_STRELA"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 120;
    };
};

class CSLA_Launcher_AT: CSLA_LauncherBase {
    class WeaponSlotsInfo;
};
class CSLA_RPG7: CSLA_Launcher_AT {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 120;
    };
};
class CSLA_RPG75: CSLA_Launcher_AT {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.4;
    };
};
