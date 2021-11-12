class CfgMagazines {
    class CA_Magazine;
    class US85_Magazine: CA_Magazine {};
    class US85_MPV_30Rnd_9Luger: US85_Magazine {
        displayName = "30Rnd 9x19mm MP5 Mag";
        mass = 10;
    };

    class US85_30Rnd_556x45: US85_Magazine {
        displayName = "30Rnd 5.56x45mm M193 STANAG Mag";
        modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_556x45_stanag_30rnd.p3d";
        modelSpecialIsProxy = 1;
        mass = 9.35;
    };
    class US85_200Rnd_556x45: US85_30Rnd_556x45 {
        displayName = "200Rnd 5.56x45mm M193 Belt";
        mass = 51.65;
    };

    class US85_20Rnd_762x51: US85_Magazine {
        displayName = "20Rnd 7.62x51mm Mag";
        mass = 16.24;
        modelSpecial = "a3\Weapons_F_Mark\MagazineProxies\mag_762x51_mk14_20rnd";
        modelSpecialIsProxy = 1;
    };
    class US85_10Rnd_762x51: US85_20Rnd_762x51 {
        displayName = "10Rnd 7.62x51mm Mag";
        modelSpecial = "a3\Weapons_F_Enoch\MagazineProxies\mag_762x51_mk14_10rnd";
        mass = 8.9;
    };
    class US85_100Rnd_762x51: US85_20Rnd_762x51 {
        displayName = "100Rnd 7.62x51mm M60 Belt";
        mass = 32.3;
        modelSpecial = "";
        modelSpecialIsProxy = 0;
    };

    class US85_50Rnd_762x51: US85_Magazine {
        displayName = "50Rnd 7.62x51mm M60 Belt";
        mass = 25.4;
        picture = "\csla_afmc_weapons\Icons\m_100rnd_762x51_ca.paa";
        scope = 2;
        scopeArsenal = 2;
    };
    class US85_200Rnd_762x51: US85_50Rnd_762x51 {
        displayName = "200Rnd 7.62x51mm M60 Belt";
        mass = 62;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        scopeMagazine = 2;
    };
    class US85_220Rnd_762x51: US85_50Rnd_762x51 {
        displayName = "220Rnd 7.62x51mm M60 Belt";
        mass = 66;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        scopeMagazine = 2;
    };
    class US85_440Rnd_762x51: US85_50Rnd_762x51 {
        displayName = "440Rnd 7.62x51mm M60 Belt";
        mass = 120;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        scopeMagazine = 2;
    };

    class US85_12GaugeSlug: US85_Magazine {
        displayName = "1Rnd 12 Gauge Slug";
        mass = 1.1;
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
    };
    class US85_8Rnd_12GaugeSlug: US85_12GaugeSlug {
        displayName = "8Rnd 12 Gauge Slug";
        mass = 8.8;
    };

    class US85_1911_7Rnd_045ACP: US85_Magazine {
        displayName = "8Rnd .45 ACP M1911 Mag";
    };

    class US85_M9_15Rnd_9Luger: US85_Magazine {
        displayName = "15Rnd 9x19 M9 Mag";
        mass = 6;
    };

    class CSLA_Magazine: CA_Magazine {};
    class CSLA_OP63_10rnd_7_62Odst59: CSLA_Magazine {
        displayName = "10Rnd 7.62x54mmR SVD Mag";
        mass = 5.1;
    };
    class CSLA_OP63_10rnd_7_62Cv59: CSLA_OP63_10rnd_7_62Odst59 {
        displayName = "10Rnd 7.62x54mmR Blank SVD Mag";
    };
    class CSLA_OP63_10rnd_7_62PZ59: CSLA_OP63_10rnd_7_62Odst59 {
        displayName = "10Rnd 7.62x54mmR API SVD Mag";
    };
    class CSLA_10Rnd_762hunt: CSLA_OP63_10rnd_7_62Odst59 {
        displayName = "10Rnd 7.62x54mmR Hunting Rifle Mag";
    };

    class CSLA_Sa58_30rnd_7_62vz43: CSLA_Magazine {
        displayName = "30Rnd 7.62x39mm Sa vz. 58 Mag";
        modelSpecial = "\a3\Weapons_F_Exp\MagazineProxies\mag_762x39_akm_30rnd.p3d";
        modelSpecialIsProxy = 1;
        mass = 13.5;
    };
    class CSLA_Sa58_30rnd_7_62Sv43: CSLA_Sa58_30rnd_7_62vz43 {
        displayName = "30Rnd 7.62x39mm Sa vz. 58 Mag (Tracer)";
    };
    class CSLA_Sa58_30rnd_7_62Cv43: CSLA_Sa58_30rnd_7_62vz43 {
        displayName = "30Rnd 7.62x39mm Blank Sa vz. 58 Mag";
    };

    class CSLA_Sa61_20rnd_7_65Pi27: CSLA_Magazine {
        displayName = "20Rnd 7.65x17mm Sa vz. 61 Mag";
        mass = 5.1;
    };
    class CSLA_Sa61_20rnd_7_65PiCv27: CSLA_Sa61_20rnd_7_65Pi27 {
        displayName = "20Rnd 7.65x17mm Blank Sa vz. 61 Mag";
    };

    class CSLA_UK59_50rnd_7_62vz59: CSLA_Magazine {
        displayName = "50Rnd 7.62x54mmR UK vz. 59 Belt";
        mass = 23;
    };
    class CSLA_UK59_50rnd_7_62PZ59: CSLA_UK59_50rnd_7_62vz59 {
        displayName = "50Rnd 7.62x54mmR API UK vz. 59 Belt";
    };
    class CSLA_UK59_50rnd_7_62Sv59: CSLA_UK59_50rnd_7_62vz59 {
        displayName = "50Rnd 7.62x54mmR UK vz. 59 Belt (Tracer)";
    };
    class CSLA_UK59_50rnd_7_62Cv59: CSLA_UK59_50rnd_7_62vz59 {
        displayName = "50Rnd 7.62x54mmR Blank UK vz. 59 Belt";
    };
    class CSLA_UK59_50rnd_7_62Tz59: CSLA_UK59_50rnd_7_62vz59 {
        displayName = "50Rnd 7.62x54mmR Heavy UK vz. 59 Belt";
    };
    class CSLA_UK59_50rnd_7_62TzSv59: CSLA_UK59_50rnd_7_62Tz59 {
        displayName = "50Rnd 7.62x54mmR Heavy UK vz. 59 Belt (Tracer)";
    };

    class CSLA_26_5vz70: CSLA_Magazine {
        displayName = "1Rnd 26.5mm VG-70";
        mass = 4;
    };
    class CSLA_26_5sigCrD: CSLA_26_5vz70 {
        displayName = "1Rnd 26.5mm Smoke (Black)";
    };
    class CSLA_26_5sigMD: CSLA_26_5sigCrD {
        displayName = "1Rnd 26.5mm Smoke (Blue)";
    };
    class CSLA_26_5sigOrD: CSLA_26_5sigCrD {
        displayName = "1Rnd 26.5mm Smoke (Orange)";
    };

    class CSLA_26_5sigB1a: CSLA_Magazine {
        displayName = "1Rnd 26.5mm Flare (White)";
        mass = 4;
    };
    class CSLA_26_5sigZl1a: CSLA_26_5sigB1a {
        displayName = "1Rnd 26.5mm Flare (Green)";
    };
    class CSLA_26_5sigCv1a: CSLA_26_5sigB1a {
        displayName = "1Rnd 26.5mm Flare (Red)";
    };

    class CSLA_Pi52_8rnd_7_62Pi52: CSLA_Magazine {
        displayName = "8Rnd 7.62x25mm vz. 52 Mag";
    };
    class CSLA_Pi52_8rnd_7_62PiCv52: CSLA_Pi52_8rnd_7_62Pi52 {
        displayName = "8Rnd 7.62x25mm Blank vz. 52 Mag";
    };

    class CSLA_Pi82_12rnd_9Pi82: CSLA_Magazine {
        displayName = "12Rnd 9x18mm vz. 82 Mag";
    };
    class CSLA_Pi82_12rnd_9PiCv82: CSLA_Pi82_12rnd_9Pi82 {
        displayName = "12Rnd 9x18mm Blank vz. 82 Mag";
    };
};
