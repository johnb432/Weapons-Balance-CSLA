class Launcher;
class Launcher_Base_F: Launcher {
    class WeaponSlotsInfo {};
};
class US85_launcherBase: Launcher_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class US85_FIM92: US85_launcherBase {
    ace_reloadlaunchers_enabled = 1;
    magazineWell[] += {"CBA_FIM"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 114.4;
    };
};
class US85_LAW72: US85_launcherBase {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 77;
    };
};
class US85_M47: US85_launcherBase {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 253;
    };
};
class US85_M136: US85_launcherBase {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 147.4;
    };
};
class US85_MAAWS: US85_launcherBase {
    ace_reloadlaunchers_enabled = 1;
    magazineWell[] += {"CBA_Carl_Gustaf"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 187.4;
    };
};
class US85_SMAW: US85_launcherBase {
    ace_reloadlaunchers_enabled = 1;
    magazineWell[] += {"CBA_SMAW"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 165.44;
    };
};

class CSLA_LauncherBase: Launcher_Base_F {
    class WeaponSlotsInfo: WeaponSlotsInfo {};
};
class CSLA_RPG7: CSLA_LauncherBase {
    ace_reloadlaunchers_enabled = 1;
    magazineWell[] += {"CBA_RPG7"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 120;
    };
};
class CSLA_RPG75: CSLA_LauncherBase {
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 70.4;
    };
};
class CSLA_9K32: CSLA_LauncherBase {
    ace_reloadlaunchers_enabled = 1;
    magazineWell[] += {"CBA_STRELA"};
    class WeaponSlotsInfo: WeaponSlotsInfo {
        mass = 120;
    };
};
