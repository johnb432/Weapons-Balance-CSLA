#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_realisticnames",
            "A3_Data_F_AoW_Loadorder"
        };
        author = "johnb43";
        authors[] = {
            "johnb43",
            "Blutze"
        };
    };
};

#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgFaces.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
