/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
<<<<<<< HEAD
            { "hgun_Rook40_F", "", 12500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 55000, 500, "" },
            { "hgun_ACPC2_F", "", 35000, 500, "" },
            { "hgun_PDW2000_F", "", 100000, 500, "" },

            { "Pstl9x19_CZSP01", "", 50000, 500, "" },
            { "Pstl9x19_NP22", "", 50000, 500, "" },
            { "Pstl9x19_NP42", "", 50000, 500, "" },

            { "Bolt792x57_CZ550", "", 200000, 500, "" }, // 사냥용
            { "Bolt792x57_Kar98K_RIS", "", 200000, 500, "" },// 사냥용
            { "Bolt762x54_M9130_RIS", "", 200000, 500, "" },// 사냥용
            { "Bolt77x56_SMLE_RIS", "", 200000, 500, "" },// 사냥용

            { "optic_ACO_grn_smg", "", 3000, -1, "" }
=======
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
>>>>>>> refs/remotes/origin/master
        };
        mags[] = {
<<<<<<< HEAD
            { "16Rnd_9x21_Mag", "", 10000, -1, "" },
            { "6Rnd_45ACP_Cylinder", "", 10000, -1, "" },
            { "9Rnd_45ACP_Mag", "", 10000, -1, "" },
            { "30Rnd_9x21_Mag", "", 30000, -1, "" },
            { "5Rnd_792x57_Kar98", "", 30000, -1, "" },
            { "5Rnd_762x54_M91", "", 30000, -1, "" },
            { "10Rnd_77x56_SMLE", "", 30000, -1, "" }
=======
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
>>>>>>> refs/remotes/origin/master
        };
        accs[] = {
<<<<<<< HEAD
=======
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
>>>>>>> refs/remotes/origin/master
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
<<<<<<< HEAD
            { "AOS_FlashLight_Blue", "", 5000, 10, "" },
            { "AOS_FlashLight_Green", "", 5000, 10, "" },
            { "AOS_FlashLight_Red", "", 5000, 10, "" },
            { "AOS_FlashLight_White", "", 5000, 10, "" },
            { "AOS_FlashLight_Yellow", "", 5000, 10, "" },
            { "arifle_SDAR_F", "", 130000, 2000, "" },
            { "arifle_TRG20_F", "", 250000, 2000, "" },
            { "arifle_Katiba_F", "", 320000, 2000, "" },
            { "arifle_MXC_F", "", 350000, 2000, "" },
            { "arifle_MX_SW_F", "", 400000, 2000, "" },
            { "srifle_DMR_01_F", "", 550000, 2000, "" }, //RAHIM
            { "srifle_EBR_F", "", 600000, 2000, "" }, //MK18
            { "LMG_Mk200_F", "", 850000, 2000, "" },
            { "srifle_DMR_05_hex_F", "cyrus(DLC)", 830000, 2000, "" },//cyrus
            { "arifle_CTAR_hex_F", "", 530000, 2000, "" },//CAR
            { "launch_RPG32_F", "", 990000, 2000, "" },
            { "launch_RPG7_F", "RPG7(tanoa)", 990000, 2000, "" },

            { "Smg762x25_PPSh41_B", "", 350000, 2000, "" },
            { "Smg762x25_PPS43", "", 350000, 2000, "" },
            { "hlc_rifle_Colt727", "", 400000, 2000, "" },
            { "Auto762x51_G3A3", "", 450000, 2000, "" },

            { "optic_ACO_grn", "", 35000, -1, "" },
            { "optic_Holosight", "", 36000, -1, "" },
            { "optic_Hamr", "", 7500, -1, "" },
            { "acc_flashlight", "", 1000, -1, "" },
            { "optic_DMS", "", 87500, -1, "" },
            { "optic_Nightstalker", "", 350000, -1, ""},
            { "optic_SOS", "SOS_DLC", 100000, -1, "" },
            { "muzzle_snds_58_blk_F", "", 500000, -1, "" }
=======
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" } //Apex DLC
>>>>>>> refs/remotes/origin/master
        };
        mags[] = {
<<<<<<< HEAD
            { "20Rnd_556x45_UW_mag", "UNDER WATER 20EA", 50000, -1, "" }, //SDAR, TRG20
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 100000, -1, "" }, //SDAR, TRG20
            { "30Rnd_556x45_Stanag", "", 100000, -1, "" }, // SDAR, TRG20
            { "30Rnd_65x39_caseless_mag", "", 100000, -1, "" },//KATIBA , MXC, MX_SW
            { "30Rnd_65x39_caseless_green", "", 100000, -1, "" }, //KATIBA , MXC, MX_SW
            { "30Rnd_65x39_caseless_mag_Tracer", "", 100000, -1, "" }, //KATIBA, MXC, MX_SW
            { "100Rnd_65x39_caseless_mag_Tracer", "", 200000, -1, "" }, //MX_SW
            { "10Rnd_762x54_Mag", "", 100000, -1, "" }, // RAHIM
            { "20Rnd_762x51_Mag", "", 100000, -1, "" }, // MK 18
            { "200Rnd_65x39_cased_Box_Tracer", "", 300000, -1, "" }, // MK200
            { "10Rnd_93x64_DMR_05_Mag", "", 100000, -1, "" }, // CYRUS
            { "30Rnd_580x42_Mag_F", "", 100000, -1, "" },//CAR
            { "30Rnd_580x42_Mag_Tracer_F", "", 100000, -1, "" },//CAR
            { "RPG32_F", "", 100000, -1, "" },
            { "RPG32_HE_F", "", 100000, -1, "" },
            { "RPG7_F", "", 100000, -1, "" },

            { "35Rnd_762x25_PPS", "", 50000, -1, "" },
            { "35Rnd_762x25_PPSh", "", 50000, -1, "" },
            { "71Rnd_762x25_PPSh", "", 100000,-1,  "" },
            { "hlc_30rnd_556x45_S", "", 50000, -1, "" },
            { "hlc_50rnd_556x45_EPR", "", 50000, -1, "" },
            { "hlc_30rnd_556x45_TDim", "", 50000, -1, "" },
            { "hlc_30rnd_556x45_MDim", "", 50000, -1, "" },
            { "hlc_30rnd_556x45_SPR", "", 50000, -1, "" },
            { "hlc_30rnd_556x45_SOST", "", 50000, -1, "" },
            { "30Rnd_556x45_Stanag", "", 30000, -1, "" },
            { "hlc_30rnd_556x45_EPR", "", 50000, -1, "" },
            { "20Rnd_762x51_HKG3", "", 50000, -1, "" },
            { "20Rnd_762x51_Mag", "", 50000, -1, "" },
            { "5Rnd_762x51_M24SWS", "", 30000, -1, "" }
=======
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" } //Apex DLC
>>>>>>> refs/remotes/origin/master
        };
        accs[] = {
<<<<<<< HEAD

        };
    };

    class rebeldonator {
        name = "Rebel Donator Shop";
        side = "civ";
        conditions = "license_civ_rebel || {call life_donorlevel >= 1}";
        items[] = {
            { "hgun_007_SW_M10_gold", "", 110000, 2000, "call life_donorlevel >= 1" },
            { "hgun_007_SW_M10_special", "", 110000, 2000, "call life_donorlevel >= 1" },

            { "srifle_DMR_07_hex_F", "", 130000, 2000, "call life_donorlevel >= 1" },
            { "arifle_ARX_hex_F", "", 180000, 2000, "call life_donorlevel >= 1" },

            { "hlc_rifle_M4", "", 250000, 2000, "call life_donorlevel >= 1" }, // M4 카빈
            { "hlc_rifle_Bushmaster300", "", 250000, 2000, "call life_donorlevel >= 2" },
            { "hlc_rifle_psg1A1", "", 880000, 2000, "call life_donorlevel >= 2" }, //저격

            { "optic_ACO_grn", "", 35000, -1, "call life_donorlevel >= 1" },
            { "optic_Holosight", "", 36000, -1, "call life_donorlevel >= 1" },
            { "optic_Hamr", "", 7500, -1, "call life_donorlevel >= 1" },
            { "acc_flashlight", "", 1000, -1, "call life_donorlevel >= 1" },
            { "optic_DMS", "", 87500, -1, "call life_donorlevel >= 1" },
            { "optic_SOS", "SOS_DLC", 100000, -1, "call life_donorlevel >= 1" },
            { "muzzle_snds_58_blk_F", "", 200000, -1, "call life_donorlevel >= 1" },
            { "hlc_optic_PVS4G3", "", 550000, -1, "call life_donorlevel >= 2"},
            { "hlc_optic_accupoint_g3", "", 500000, -1, "call life_donorlevel >= 2" },
            { "HLC_Optic_ZFSG1", "", 500000, -1, "call life_donorlevel >= 1" }


        };
        mags[] = {
            { "6Rnd_45ACP_Cylinder", "", 10000, -1, "" },

            { "20Rnd_650x39_Cased_Mag_F", "", 50000, -1, "" },
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 100000, -1, "" },
			{ "10Rnd_50BW_Mag_F", "", 900000, -1, "" },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 50000, -1, "" },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 50000, -1, "" },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", 50000, -1, "" },

			{ "hlc_30rnd_556x45_S", "", 50000, -1, "" },
			{ "hlc_50rnd_556x45_EPR", "", 50000, -1, "" },
			{ "hlc_30rnd_556x45_TDim", "", 50000, -1, "" },
			{ "hlc_30rnd_556x45_MDim", "", 50000, -1, "" },
			{ "hlc_30rnd_556x45_SPR", "", 50000, -1, "" },
			{ "hlc_30rnd_556x45_SOST", "", 50000, -1, "" },
			{ "30Rnd_556x45_Stanag", "", 30000, -1, "" },
			{ "hlc_30rnd_556x45_EPR", "", 50000, -1, "" },

			{ "29rnd_300BLK_STANAG", "", 30000, -1, "" },
			{ "29rnd_300BLK_STANAG_T", "", 30000, -1, "" },
			{ "29rnd_300BLK_STANAG_S", "", 30000, -1, "" },

            { "hlc_20rnd_762x51_b_G3", "", 30000, -1, "" },
            { "hlc_20rnd_762x51_Mk316_G3", "", 30000, -1, "" },
            { "hlc_20rnd_762x51_barrier_G3", "", 30000, -1, "" },
            { "hlc_20rnd_762x51_T_G3", "", 30000, -1, "" },
            { "hlc_20rnd_762x51_IRDim_G3", "", 30000, -1, "" },

            { "hlc_20rnd_762x51_MDim_G3", "", 30000, -1, "" },
            { "hlc_50rnd_762x51_M_G3", "", 30000, -1, "" },
            { "hlc_50rnd_762x51_MDIM_G3", "", 30000, -1, "" },
            { "hlc_20rnd_762x51_S_G3", "", 30000, -1, "" }
        };
        accs[] = {
=======
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
>>>>>>> refs/remotes/origin/master
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
<<<<<<< HEAD
            { "FirstAidKit", "", 3000, 65, "" },
            { "hgun_PDW2000_F", "", 105000, 20000, "" },
            { "hgun_Rook40_F", "", 50000, 3100, "" },
            { "hgun_Pistol_heavy_02_F", "", 65000, 2200, "" },// zubr
            { "hgun_ACPC2_F", "", 85000, 3000, "" },
            { "SMG_02_F", "", 300000, 20000, "" },//sting 9mm
            { "arifle_Katiba_F", "", 380000, 20000, "" },
            { "arifle_MXC_F", "", 350000, 20000, "" },
            { "srifle_DMR_01_F", "", 550000, 20000, "" },
            { "arifle_AKM_F", "AK12 APEX", 440000, 20000, "" },//AKM
            { "arifle_AKS_F", "AK12 APEX", 400000, 20000, "" },//AKS

            { "optic_ACO_grn_smg", "",  10950, -1, "" },
            { "optic_ACO_grn", "",  12000, -1, "" },
            { "optic_Arco", "",  12000, -1, "" },
            { "optic_SOS", "SOS_DLC", 150000, -1, "" },
            { "optic_Hamr", "", 150000, -1, "" },
            { "optic_DMS", "", 87500, -1, "" }
=======
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
>>>>>>> refs/remotes/origin/master
        };

        mags[] = {
<<<<<<< HEAD
            { "16Rnd_9x21_Mag", "", 20000, -1, "" }, // Rook40, PDW2000
            { "30Rnd_9x21_Mag", "", 50000, -1, "" }, // Rook40, PDW2000
            { "6Rnd_45ACP_Cylinder", "", 10000, -1, "" }, // zubr
            { "9Rnd_45ACP_Mag", "", 10000, -1, "" }, // hgun_ACPC2_F
            { "30Rnd_556x45_Stanag", "", 100000, -1, "" }, // sting9
            { "30Rnd_65x39_caseless_mag", "", 100000, -1, "" },//KATIBA , MXC, MX_SW
            { "30Rnd_65x39_caseless_mag_Tracer", "", 100000, -1, "" }, //KATIBA, MXC, MX_SW
            { "30Rnd_65x39_caseless_green", "", 100000, -1, "" },//MXC, MX_SW
            { "10Rnd_762x54_Mag", "", 100000, -1, "" },
            { "30Rnd_762x39_Mag_F", "", 100000, -1, "" },
            { "30Rnd_762x39_Mag_Green_F", "", 100000, -1, "" },
            { "30Rnd_762x39_Mag_Tracer_F", "", 100000, -1, "" },
            { "30Rnd_762x39_Mag_Tracer_Green_F", "", 100000, -1, "" },
			{ "30Rnd_545x39_Mag_Green_F", "", 100000, -1, "" },
			{ "30Rnd_545x39_Mag_Tracer_F", "", 100000, -1, "" }
=======
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
>>>>>>> refs/remotes/origin/master
        };
        accs[] = {
<<<<<<< HEAD
        };
    };

    class DivingGun {
        name = "Water Gay's Weapon Shop";
        side = "";
        conditions = "license_civ_gun";
        items[] = {
            { "Sasimi_Water", "", 100000, 500, "" }
        };
        mags[] = {
            { "Sasimi_Mag", "", 50000, -1, "" }
        };
        accs[] = {
=======
            { "optic_ACO_grn_smg", "", 950, 475, "" }
>>>>>>> refs/remotes/origin/master
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "";
        conditions = "";
        items[] = {
<<<<<<< HEAD
            { "tf_anprc152", "", 4000, 980, "" }, //Bluefor personal - 5km ( 30-512Mhz)
            { "tf_anprc148jem", "", 4000, 980, "" }, //Independent - personal - 5km ( 30-512Mhz)
            { "Binocular", "", 150, 10, "" },

            { "AOS_FlashLight_Blue", "", 5000, 10, "" },
            { "AOS_FlashLight_Green", "", 5000, 10, "" },
            { "AOS_FlashLight_Red", "", 5000, 10, "" },
            { "AOS_FlashLight_White", "", 5000, 10, "" },
            { "AOS_FlashLight_Yellow", "", 5000, 10, "" },

            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
=======
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
>>>>>>> refs/remotes/origin/master
            { "ItemCompass", "", 50, 25, "" },
<<<<<<< HEAD
            { "ItemWatch", "", 50, 10, "" },
            { "ItemRadio", "", 2500, 25, "" },
            { "ItemWatch", "", 50, -1, "" },
            { "FirstAidKit", "", 3000, 65, "" },
//            { "NVGoggles", "", 2000, 980, "" },
            { "Chemlight_red", "", 300, 50, "" },
            { "Chemlight_yellow", "", 300, 50, "" },
            { "Chemlight_green", "", 300, 50, "" },
            { "Chemlight_blue", "", 300, 50, "" }
=======
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
>>>>>>> refs/remotes/origin/master
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
<<<<<<< HEAD
            { "tf_anprc152", "", 4000, 980, "" }, //Bluefor personal - 5km ( 30-512Mhz)
            { "tf_anprc148jem", "", 4000, 980, "" }, //Independent - personal - 5km ( 30-512Mhz)
            { "Binocular", "", 750, 100, "" },
            { "AOS_FlashLight_Blue", "", 5000, 10, "" },
            { "AOS_FlashLight_Green", "", 5000, 10, "" },
            { "AOS_FlashLight_Red", "", 5000, 10, "" },
            { "AOS_FlashLight_White", "", 5000, 10, "" },
            { "AOS_FlashLight_Yellow", "", 5000, 10, "" },
            { "ItemGPS", "", 500, 45, "" },
            { "ItemMap", "", 250, 35, "" },
=======
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
>>>>>>> refs/remotes/origin/master
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
<<<<<<< HEAD
            { "ItemRadio", "", 2500, 25, "" },
            { "FirstAidKit", "", 3000, 65, "" },
            //{ "NVGoggles", "", 10000, 980, "" },
            { "Chemlight_red", "", 1500, 50, "" },
            { "Chemlight_yellow", "", 1500, 50, "" },
            { "Chemlight_green", "", 1500, 50, "" },
            { "Chemlight_blue", "", 1500, 50, "" }
=======
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
>>>>>>> refs/remotes/origin/master
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "call life_coplevel >= 1";
        items[] = {
<<<<<<< HEAD
            { "tf_anprc152", "", 4000, 980, "" }, //Bluefor personal - 5km ( 30-512Mhz)
            { "tf_anprc148jem", "", 4000, 980, "" }, //Independent - personal - 5km ( 30-512Mhz)
            { "Binocular", "", 150, 10, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
            { "ItemRadio", "", 3000, 980, "" },
            { "FirstAidKit", "", 3000, 65, "" },
            { "AOS_FlashLight_Blue", "", 5000, 10, "" },
            { "AOS_FlashLight_Green", "", 5000, 10, "" },
            { "AOS_FlashLight_Red", "", 5000, 10, "" },
            { "AOS_FlashLight_White", "", 5000, 10, "" },
            { "AOS_FlashLight_Yellow", "", 5000, 10, "" },
            { "NVGoggles", "", 20000, 980, "" },
            { "arifle_sdar_F", "Taser Rifle", 130000, 20000, "" },
            { "hgun_P07_F", "Stun Pistol", 35000, 650, "" },
            { "hgun_Rook40_F", "", 50000, 500, "" },
            { "hgun_ACPC2_F", "Handgun acpc2", 85000, 650, "" },
            { "hgun_Pistol_heavy_02_F", "", 65000, 500, "" },
            { "hgun_007_SW_M10", "", 250000, 25000, "" },

            { "HandGrenade_Stone", "Flashbang", 37000, 1000, "" },
            { "SmokeShellRed", "TearGas", 40000, 1000, "" },
            { "Laserdesignator", "", 130000, 980, "" },
            { "SMG_01_F", "FlareGun", 200000, 2000, "" },

            { "muzzle_snds_L", "", 650, -1, "" },
            { "optic_MRD", "", 1000, -1, "" },
            { "optic_Yorris", "", 2000, -1, ""}
=======
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 850, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 20000, 10000, "" },
            { "hgun_P07_F", "", 7500, 3750, "" },
            { "hgun_P07_khk_F", "", 7500, 3750, "" }, //Apex DLC
            { "hgun_Pistol_heavy_01_F", "", 9500, 4750, "call life_coplevel >= 1" },
            { "SMG_02_ACO_F", "", 30000, 15000, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 35000, 17500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, 8750, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 30000, 15000, "call life_coplevel >= 3" },
            { "srifle_DMR_07_blk_F", "", 32000, 16000, "call life_coplevel >= 3" } //Apex DLC Sniper
>>>>>>> refs/remotes/origin/master
        };
        mags[] = {
<<<<<<< HEAD
            { "20Rnd_556x45_UW_mag", "Taser/Water Magazine", 10000, -1, "" },
            { "30Rnd_556x45_Stanag", "Weight Rifle Magazine", 10000, -1, "" },
            { "30Rnd_556x45_Stanag_Tracer_Red", "RED Rifle Magazine", 10000, -1, "" },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "YELLOW Rifle Magazine", 10000, -1, "" },
            { "16Rnd_9x21_Mag", "", 20000, -1, "" },
            { "30Rnd_9x21_Mag", "", 50000, -1, "" },
            { "9Rnd_45ACP_Mag", "", 10000, -1, "" }, //ACPC
            { "6Rnd_45ACP_Cylinder", "", 10000, -1, "" }, // zubr // S&W

            { "Laserbatteries", "", 10000, -1, "" },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "FlareBullet", 10000, -1, "" }
=======
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "11Rnd_45ACP_Mag", "", 130, 65, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 130, 65, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 250, 125, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 200, 100, "call life_coplevel >= 3" } //Apex DLC
>>>>>>> refs/remotes/origin/master
        };
        accs[] = {
<<<<<<< HEAD
=======
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
>>>>>>> refs/remotes/origin/master
        };
    };

    class cop_patrol {
        name = "Altis Patrol Officer Shop";
        side = "cop";
        conditions = "call life_coplevel >= 2";
        items[] = {
            { "arifle_MX_F", "", 150000, 10000, "" },
            { "SMG_02_F", "", 100000, 10000, "" },
            { "arifle_Mk20C_F", "", 200000, 10000, "" },
            { "arifle_MX_SW_F", "", 240000, 10000, "" },
            { "arifle_AK12_F", "", 240000, 10000, "" },


            { "acc_flashlight", "", 750, 100, "" },
            { "optic_ACO_grn_smg", "", 2500, -1, "" },
            { "optic_Holosight", "", 2200,-1, "" },
            { "optic_Arco", "", 30500, -1,"" },
            { "optic_MRCO", "", 20500, -1,"" },
            { "optic_ERCO_snd_F", "", 80000, -1, "" },
            { "muzzle_snds_H", "", 102750, -1, "" },
            { "muzzle_snds_L", "", 102750, -1, "" },
            { "muzzle_snds_M", "", 102750, -1, "" },
            { "muzzle_snds_B", "", 102750, -1, "" },
            { "muzzle_snds_B_khk_F", "", 202750, -1, "" },
            { "Rangefinder", "", 52750, -1, "" }

        };
        mags[] = {
            { "30Rnd_65x39_caseless_mag", "", 10000, -1, "" }, //MX
            { "30Rnd_65x39_caseless_mag_Tracer", "", 10000, -1, "" },
            { "30Rnd_9x21_Mag", "", 10000, -1, "" },
            { "30Rnd_556x45_Stanag", "", 10000, -1}, // MX20
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 10000, -1, "" }, //MX20
            { "100Rnd_65x39_caseless_mag_Tracer", "", 50000, -1, "" },
            { "30Rnd_762x39_Mag_F", "", 10000, -1, "" },
            { "30Rnd_762x39_Mag_Green_F", "", 10000, -1, "" },
            { "30Rnd_762x39_Mag_Tracer_F", "", 10000, -1, "" },
            { "30Rnd_762x39_Mag_Tracer_Green_F", "", 10000, -1, "" }
        };
        accs[] = {
        };
    };

    class cop_sergeant {
        name = "Altis Sergeant Officer Shop";
        side = "cop";
        conditions = "call life_coplevel >= 4";
        items[] = {
            { "Pstl9x19_CZ75B", "", 150000, 25000, "" }, // CZ-75B
            { "hgun_007_Colt1911", "", 150000, 25000, "" },
            { "Pstl11x23_M1911", "", 150000, 25000, "" },
            { "Pstl9x19_FNGP35", "", 150000, 25000, "" },
            { "Pstl9x19_92FS", "", 150000, 25000, "" },
            { "Pstl11x23_SAARevolver", "", 250000, 25000, "" },
            { "Pstl11x23_Revolver", "", 250000, 25000, "" },

            { "srifle_EBR_F", "", 300000, 25000, "" },//mk18
            { "srifle_DMR_01_F", "", 220000, 25000, "" },//rahim
            { "srifle_DMR_05_hex_F", "cyrus(DLC)", 330000, 25000, "" },//cyrus
            { "LMG_Mk200_F", "", 850000, 25000, "" },//mk200
            { "srifle_LRR_F", "", 450000, 25000, "" },
			{ "arifle_ARX_blk_F", "Type115 Apex", 450000, 25000, "" },

            { "optic_SOS", "", 25000, -1, "" },
            { "optic_DMS", "", 30000, -1, "" },
            { "optic_Hamr", "", 25000, -1, "" },
            { "optic_NVS", "", 80000, -1, "" },
            { "optic_KHS_blk", "", 45000, -1, "" },
            { "acc_pointer_IR", "", 20000, -1, "" }
        };
        mags[] = {
            { "15Rnd_9x19_CZ75B", "", 10000, -1, "" },
            { "9Rnd_45ACP_Mag", "", 10000, -1, "" },
            { "13Rnd_9x19_FNGP35", "", 10000, -1, "" },
            { "15Rnd_9x19_92FS", "", 10000, -1, "" },
            { "6Rnd_45ACP_Cylinder", "", 10000, -1, "" },

            { "20Rnd_762x51_Mag", "", 10000, -1, "" },
            { "10Rnd_762x54_Mag", "", 10000, -1, "" },
            { "10Rnd_93x64_DMR_05_Mag", "", 10000, -1, "" },
            { "200Rnd_65x39_cased_Box", "", 100000, -1, "" },
            { "200Rnd_65x39_cased_Box_Tracer", "", 100000, -1, "" },
            { "7Rnd_408_Mag", "", 50000, -1, "" },
			{ "30Rnd_65x39_caseless_green", "", 50000, -1, "" },
			{ "30Rnd_65x39_caseless_green_mag_Tracer", "", 50000, -1, "" },
			{ "10Rnd_50BW_Mag_F", "", 50000, -1, "" }
        };
        accs[] = {
        };
    };

    class cop_mastershop {
        name = "Altis police master Shop";
        side = "cop";
        conditions = "call life_coplevel >= 5";
        items[] = {
            { "srifle_GM6_F", "", 450000, 25000, "" },//lynx
            { "LMG_Zafir_F", "", 550000, 25000, "" },//zafir
            { "MMG_01_hex_F", "", 700000, 25000, "" }, //NAVID
            { "launch_Titan_F", "", 1500000, 25000, "" },
            { "launch_B_Titan_short_F", "", 1500000, 25000, "" },

            { "optic_LRPS", "", 100000, -1, "" },
            { "optic_Hamr", "", 100000, -1, "" },
            { "optic_tws", "", 250000, -1, "" },
            { "optic_Nightstalker", "", 250000, -1, "" },
            { "acc_pointer_IR", "", 30000, -1, "" }
        };
        mags[] = {
            { "5Rnd_127x108_Mag", "", 50000, -1, "" },
            { "5Rnd_127x108_APDS_Mag", "", 50000, -1, "" },
            { "150Rnd_762x54_Box", "", 100000, -1, "" },
            { "150Rnd_762x54_Box_Tracer", "", 100000, -1, "" },
            { "150Rnd_93x64_Mag", "", 100000, -1, "" },
            { "Titan_AA", "", 100000, -1, "" },
            { "Titan_AT", "", 100000, -1, "" },
            { "Titan_AP", "", 100000, -1, "" }
        };
        accs[] = {
        };
    };

    class cop_donatorshop {
		name = "Altis police donator Shop";
		side = "cop";
		conditions = "call life_donorlevel >=1";
		items[] = {
            { "hgun_007_SW_M10_gold", "", 110000, 2000, "" },
            { "hgun_007_SW_M10_special", "", 110000, 2000, "" },
            { "hgun_007_W_PPK", "", 110000, 2000, "" },

            { "Pstl762x25_CZ52", "", 110000, 2000, "call life_donorlevel >=2" },
            { "Pstl762x25_TT33", "", 110000, 2000, "call life_donorlevel >=2" },
            { "arifle_SPAR_01_blk_F", "", 450000, 25000, "call life_donorlevel >=2" },
			{ "arifle_SPAR_02_blk_F", "", 450000, 25000, "call life_donorlevel >=2" },
			{ "arifle_SPAR_03_blk_F", "", 450000, 25000, "call life_donorlevel >=2" },
			{ "LMG_03_F", "", 850000, 25000, "" },


            { "optic_AMS", "", 100000, -1, "" },
            { "optic_KHS_hex", "", 100000, -1, "" },
            { "optic_KHS_tan", "", 150000, -1, "" },
            { "optic_AMS_khk", "", 130000, -1, "" }

		};
		mags[] = {
            { "6Rnd_45ACP_Cylinder", "", 10000, -1, "" },
            { "8Rnd_762x25_TT33", "", 10000, -1, "" },
            { "8Rnd_765x17_Mag", "", 10000, -1, "" },

			{ "30Rnd_556x45_Stanag", "", 50000, -1, "" },
			{ "30Rnd_556x45_Stanag_green", "", 50000, -1, "" },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 50000, -1, "" },
			{ "150Rnd_556x45_Drum_Mag_F", "", 100000, -1, "" },
			{ "150Rnd_556x45_Drum_Mag_Tracer_F", "", 100000, -1, "" },
			{ "20Rnd_762x51_Mag", "", 100000, -1, "" },
			{ "200Rnd_556x45_Box_F", "", 200000, -1, "" },
			{ "200Rnd_556x45_Box_Red_F", "", 200000, -1, "" },
			{ "200Rnd_556x45_Box_Tracer_Red_F", "", 200000, -1, "" }
		};
		accs[] = {
		};
	};

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "call life_mediclevel >= 1";
        items[] = {
<<<<<<< HEAD
            { "tf_anprc152", "", 4000, 980, "" }, //Bluefor personal - 5km ( 30-512Mhz)
            { "tf_anprc148jem", "", 4000, 980, "" }, //Independent - personal - 5km ( 30-512Mhz)
            { "FirstAidKit", "", 1000, 65, "" },
            { "AOS_FlashLight_Blue", "", 5000, 10, "" },
            { "AOS_FlashLight_Green", "", 5000, 10, "" },
            { "AOS_FlashLight_Red", "", 5000, 10, "" },
            { "AOS_FlashLight_White", "", 5000, 10, "" },
            { "AOS_FlashLight_Yellow", "", 5000, 10, "" },
            { "NVGoggles", "", 20000, 980, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "Binocular", "", 150, 50, "" },
            { "Pstl9x19_NP22", "", 50000, 500, "" },
            { "Pstl9x19_NP42", "", 50000, 500, "" },
            { "hgun_P07_F", "Pistol", 35000, 2000, "" },
            { "hgun_PDW2000_Holo_snds_F", "", 65000, 2000, "" },
            { "ItemMap", "", 250, 35, "" },
            { "ItemRadio", "", 2500, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 10, "" },
            { "SMG_01_F", "FlareGun", 200000, 2000, "" }
=======
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
>>>>>>> refs/remotes/origin/master
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 20000, -1, "" },
            { "30Rnd_45ACP_Mag_SMG_01_tracer_green", "FlareBullet", 50000, -1, "" }
        };
        accs[] = {};
    };
};
