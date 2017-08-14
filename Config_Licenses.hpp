/*
*    class:
*        variable = Variable Name
*        displayName = License Name
*        price = License Price
*        illegal = Illegal License
*        side = side indicator
*/
class Licenses {
    //Civilian Licenses
    class driver {
        variable = "driver";
        displayName = "STR_License_Driver";
        price = 5000;
        illegal = false;
        side = "civ";
    };

    class boat {
        variable = "boat";
        displayName = "STR_License_Boat";
        price = 10000;
        illegal = false;
        side = "civ";
    };

    class pilot {
        variable = "pilot";
        displayName = "STR_License_Pilot";
        price = 100000;
        illegal = false;
        side = "civ";
    };

    class trucking {
        variable = "trucking";
        displayName = "STR_License_Truck";
        price = 25000;
        illegal = false;
        side = "civ";
    };

    class gun {
        variable = "gun";
        displayName = "STR_License_Firearm";
        price = 40000;
        illegal = false;
        side = "civ";
    };

    class dive {
        variable = "dive";
        displayName = "STR_License_Diving";
        price = 20000;
        illegal = false;
        side = "civ";
    };

    class home {
        variable = "home";
        displayName = "STR_License_Home";
        price = 150000;
        illegal = false;
        side = "civ";
    };

    //Processing Licenses
    class oil {
        variable = "oil";
        displayName = "STR_License_Oil";
        price = 50000;
        illegal = false;
        side = "civ";
    };

    class diamond {
        variable = "diamond";
        displayName = "STR_License_Diamond";
        price = 55000;
        illegal = false;
        side = "civ";
    };

    class salt {
        variable = "salt";
        displayName = "STR_License_Salt";
        price = 22000;
        illegal = false;
        side = "civ";
    };

    class sand {
        variable = "sand";
        displayName = "STR_License_Sand";
        price = 24500;
        illegal = false;
        side = "civ";
    };

    class iron {
        variable = "iron";
        displayName = "STR_License_Iron";
        price = 9500;
        illegal = false;
        side = "civ";
    };

    class copper {
        variable = "copper";
        displayName = "STR_License_Copper";
        price = 8000;
        illegal = false;
        side = "civ";
    };

    class cement {
        variable = "cement";
        displayName = "STR_License_Cement";
        price = 8500;
        illegal = false;
        side = "civ";
    };

    class medmarijuana {
        variable = "medmarijuana";
        displayName = "STR_License_Medmarijuana";
        price = 15000;
        illegal = false;
        side = "civ";
    };

    //Illegal Licenses
    class cocaine {
        variable = "cocaine";
        displayName = "STR_License_Cocaine";
        price = 75000;
        illegal = true;
        side = "civ";
    };

    class tobacco {
        variable = "tobacco";
        displayName = "STR_License_Tobacco";
        price = 15000;
        illegal = true;
        side = "civ";
    };	
	
    class heroin {
        variable = "heroin";
        displayName = "STR_License_Heroin";
        price = 65000;
        illegal = true;
        side = "civ";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_License_Marijuana";
        price = 59500;
        illegal = true;
        side = "civ";
    };

    /* class rebel {
        variable = "rebel";
        displayName = "";
        price = 450000;
        illegal = true;
        side = "";
    }; */
	
	class outlaw {
        variable = "outlaw";
        displayName = "STR_License_Outlaw";
        price = 250000;
        illegal = true;
        side = "civ";
    };

    //Cop Licenses
    class cAir {
        variable = "cAir";
        displayName = "STR_License_Pilot";
        price = 15000;
        illegal = false;
        side = "cop";
    };

    class cg {
        variable = "cg";
        displayName = "STR_License_CG";
        price = 8000;
        illegal = false;
        side = "cop";
    };

    //Medic Licenses
    class mAir {
        variable = "mAir";
        displayName = "STR_License_Pilot";
        price = 15000;
        illegal = false;
        side = "med";
    };
	
	//Towing Licenses
    class towing {
        variable = "towing";
        displayName = "STR_License_Towing";
        price = 0;
        illegal = false;
        side = "med";
    };

   	
	class uranium {
        variable = "uranium";
        displayName = "STR_License_Uranium";
        price = 50000;
        illegal = true;
        side = "civ";
    };	
 
    class ruby {
        variable = "ruby";
        displayName = "STR_License_Ruby";
        price = 55000;
        illegal = false;
        side = "civ";
    };
	class ecstasy {
        variable = "ecstasy";
        displayName = "STR_License_Ecstasy";
        price = 65000; // Price to buy the license.
        illegal = true; // Illegal = true ; Legal = false.
        side = "civ";
    };
 
    /* End of Bounty Hunter Section */ 
};