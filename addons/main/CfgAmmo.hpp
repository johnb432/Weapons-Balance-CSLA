class CfgAmmo {
    class US85_BulletBase5_56;
    class US85_5_56M193: US85_BulletBase5_56 { //B_556x45_Ball, https://en.wikipedia.org/wiki/5.56%C3%9745mm_NATO, 177.8mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-27.2,-26.44,-23.76,-21,-17.54,-13.1,-7.95,-1.62,6.24,15.48,27.75};
        ACE_ballisticCoefficients[] = {0.151};
        ACE_barrelLengths[] = {210.82,238.76,269.24,299.72,330.2,360.68,391.16,419.1,449.58,480.06,508,609.6};
        ACE_bulletLength = 23.012;
        ACE_bulletMass = 4.0176;
        ACE_caliber = 5.69;
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {723,764,796,825,843,866,878,892,906,915,922,900};
        ACE_standardAtmosphere = "ASM";
        ACE_velocityBoundaries[] = {};
    };

    class CSLA_BulletBase7_62;
    class CSLA_7_65Pi27_Ammo: CSLA_BulletBase7_62 { //HLC_763x25_FMJ, potentially rhs_ammo_9x17
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.17};
        ACE_barrelLengths[] = {101.6,152.4,228.6};
        ACE_bulletLength = 13.856;
        ACE_bulletMass = 5.5728;
        ACE_caliber = 7.874;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {360,380,400};
        ACE_standardAtmosphere = "ASM";
        ACE_velocityBoundaries[] = {};
    };

    class CSLA_7_62vz59_Ammo: CSLA_BulletBase7_62 { //B_762x54_Ball, https://en.wikipedia.org/wiki/7.62%C3%9754mmR, 240mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.4};
        ACE_barrelLengths[] = {406.4,508,604.5,736.6};
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.8496;
        ACE_caliber = 7.925;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {760,795,835,865};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class US85_BulletBase7_62;
    class US85_7_62T65E3: US85_BulletBase7_62 { //B_762x51_Ball, https://en.wikipedia.org/wiki/7.62%C3%9751mm_NATO, 304.8mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
        ACE_ballisticCoefficients[] = {0.2};
        ACE_barrelLengths[] = {254,406.4,508,609.6,660.4};
        ACE_bulletLength = 28.956;
        ACE_bulletMass = 9.4608;
        ACE_caliber = 7.823;
        ACE_dragModel = 7;
        ACE_muzzleVelocities[] = {700,800,820,833,845};
        ACE_standardAtmosphere = "ICAO";
        ACE_velocityBoundaries[] = {};
    };

    class US85_BulletBase9;
    class US85_9x19: US85_BulletBase9 { //HLC_9x19_Ball, https://en.wikipedia.org/wiki/9%C3%9719mm_Parabellum, 250mm twist
        ACE_ammoTempMuzzleVelocityShifts[] = {-2.655,-2.547,-2.285,-2.012,-1.698,-1.28,-0.764,-0.153,0.596,1.517,2.619};
        ACE_ballisticCoefficients[] = {0.165};
        ACE_barrelLengths[] = {101.6,127,228.6};
        ACE_bulletLength = 15.494;
        ACE_bulletMass = 8.0352;
        ACE_caliber = 9.017;
        ACE_dragModel = 1;
        ACE_muzzleVelocities[] = {340,370,400};
        ACE_standardAtmosphere = "ASM";
        ACE_velocityBoundaries[] = {};
    };
};
