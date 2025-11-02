class CfgMagazines {
    class US85_Magazine;
    class US85_MPV_30Rnd_9Luger: US85_Magazine {
        mass = 10;
    };

    class US85_30Rnd_556x45: US85_Magazine {
        mass = 9.35;
    };
    class US85_200Rnd_556x45: US85_30Rnd_556x45 {
        mass = 51.65;
    };

    class US85_20Rnd_762x51: US85_Magazine {
        mass = 16.24;
    };

    class US85_100Rnd_762x51: US85_20Rnd_762x51 {
        mass = 32.3;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
    };

    class US85_50Rnd_762x51: US85_Magazine {
        mass = 25.4;
        picture = "\csla_afmc_weapons\Icons\m_100rnd_762x51_ca.paa";
        scope = 2;
        scopeArsenal = 2;
    };
    class US85_200Rnd_762x51: US85_50Rnd_762x51 {
        mass = 62;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        scopeMagazine = 2;
    };
    class US85_220Rnd_762x51: US85_50Rnd_762x51 {
        mass = 66;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        scopeMagazine = 2;
    };
    class US85_440Rnd_762x51: US85_50Rnd_762x51 {
        mass = 120;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        scopeMagazine = 2;
    };

    class US85_12GaugeSlug: US85_Magazine {
        mass = 1.1;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
    };
    class US85_8Rnd_12GaugeSlug: US85_12GaugeSlug {
        mass = 8.8;
    };

    class US85_M9_15Rnd_9Luger: US85_Magazine {
        mass = 6;
    };

    class CSLA_Magazine;
    class CSLA_OP63_10rnd_7_62Odst59: CSLA_Magazine {
        mass = 5.1;
    };

    class CSLA_Sa58_30rnd_7_62vz43: CSLA_Magazine {
        mass = 13.5;
        modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_762x39_akm_30rnd.p3d";
        modelSpecialIsProxy = 1;
    };

    class CSLA_Sa61_20rnd_7_65Pi27: CSLA_Magazine {
        mass = 5.1;
    };

    class CSLA_UK59_50rnd_7_62vz59: CSLA_Magazine {
        mass = 23;
    };

    class CSLA_26_5vz70: CSLA_Magazine {
        mass = 4;
    };

    class CSLA_26_5sigB1a: CSLA_Magazine {
        mass = 4;
    };
};
