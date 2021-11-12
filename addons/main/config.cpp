#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "CSLA_CIV"
        };
        author = "johnb43";
        url = "https://github.com/johnb432/Weapons-Balance-CSLA";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        name = "Weapons Balance - CSLA";
        author = "johnb43";
        tooltipOwned = "Weapons Balance - CSLA";
        hideName = 0;
        hidePicture = 0;
        actionName = "Github";
        action = "https://github.com/johnb432/Weapons-Balance-CSLA";
        description = "A collection of balancing mods made by johnb43.";
        overview = "A collection of balancing mods made by johnb43.";
        picture = "\z\wb_csla\addons\main\ui\logo_weapons_balance.paa"; // http://getdrawings.com/get-drawing#gun-drawing-in-pencil-27.jpg, http://getdrawings.com/get-drawing#gun-drawing-in-pencil-17.png
        logo = "\z\wb_csla\addons\main\ui\logo_weapons_balance.paa";
        overviewPicture = "\z\wb_csla\addons\main\ui\logo_weapons_balance.paa";
    };
};

#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo {};
    };

    class Pistol;
    class Pistol_Base_F: Pistol {
        class WeaponSlotsInfo {};
    };

    #include "weapons\CfgWeapCSLA.hpp"
    #include "weapons\CfgWeapUS.hpp"
    #include "weapons\CfgLaunchers.hpp"
};
