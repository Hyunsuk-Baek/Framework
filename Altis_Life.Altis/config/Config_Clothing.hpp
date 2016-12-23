/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Poloshirt_blue", "Super Man", 250, "" },
            { "U_C_Poloshirt_burgundy", "Barbie", 275, "" },
            { "U_C_Poloshirt_redwhite", "Kitty", 1150, "" },
            { "U_C_Poloshirt_stripped", "Gay1", 1125, "" },
            { "U_C_Poloshirt_salmon", "Gay2", 1750, "" },
            { "U_C_TeeSurfer_shorts_1", "Gay3", 1750, "" },
            { "U_C_TeeSurfer_shorts_2", "Gay4", 1750, "" },
            { "U_Competitor", "Press Suit", 2750, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 3500, "" },
            { "U_OrestesBody", "Surfing On Land", 1100, "" },
            { "U_C_HunterBody_grn", "The Hunters Look", 15000, "" },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 15000, "" },

            { "A3LCatShirt", "", 10000, "" },
            { "cg_awesome1", "", 10000, "" },
            { "cg_catvideos1", "", 10000, "" },
            { "cg_csgo1", "", 10000, "" },
            { "cg_ea1", "", 10000, "" },
            { "cg_jason1", "", 10000, "" },
            { "cg_lego1", "", 10000, "" },
            { "cg_mario1", "", 10000, "" },
            { "cg_pika1", "", 10000, "" },
            { "cg_stoned1", "", 10000, "" },
            { "cg_taylorswift1", "", 10000, "" },
            { "cg_woods1", "", 10000, "" },
            { "U_CivilianJerseyCasual_D", "", 15000, "" },
            { "U_CivilianJerseyCasual_C", "", 15000, "" },
            { "U_CivilianJerseyCasual_B", "", 15000, "" },
            { "U_CivilianJerseyCasual_F", "", 15000, "" },
            { "U_CivilianTShirt_F", "", 15000, "" },
            { "U_CivilianTShirt_G", "", 15000, "" },
            { "U_CivilianTShirt_D", "", 15000, "" },
            { "U_CivilianTShirtCasual_B", "", 15000, "" },
            { "U_CivilianTShirtCasual_E", "", 15000, "" },
            { "U_CivilianTShirtCasual_I", "", 15000, "" },
            { "U_CivilianTShirtCasual_C", "", 15000, "" },
            { "A3LCloudShirt", "", 2500, "" },
            { "fn_bendozlia2", "", 2500, "" },
            { "fn_bendozlia3", "", 2500, "" },
            { "fn_lahey2", "", 2500, "" },
            { "fn_mongo", "", 2500, "" }

        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "Camo Bandanna", 120, "" },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Bandanna_gry", "Grey Bandanna", 150, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "Straw Fedora", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", "Hat & Bandanna", 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Cap_press", "", 310, "" },
            { "H_Cap_marshal", "", 310, "" },
            { "H_RacingHelmet_1_red_F", "", 8150, "" },
            { "H_RacingHelmet_1_white_F", "", 8150, "" },
            { "H_RacingHelmet_2_F", "", 8150, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "tf_rt1523g_sage", "", 8000, "" }, //long range-  40KM // BLUEFOR
            { "tf_bussole", "", 13000, "" }, //long range-  40KM // BLUEFOR
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },

            { "B_Parachute", "낙하산", 37500, "" },

            { "A3L_BergenMurica", "", 17500, "" },
            { "B_Carryall_C", "", 17500, "" },
            { "B_Carryall_A", "", 17500, "" },
            { "B_GiantBag_A", "", 47500, "" },
            { "B_HikingBag_D", "", 36500, "" },
            { "B_HikingBag_E", "", 36500, "" },
            { "B_Kitbag_C", "", 36500, "" },
            { "B_Kitbag_B", "", 36500, "" },
            { "B_TacticalPack_A", "", 16500, "" },
            { "B_TacticalPack_B", "", 16500, "" },
            { "B_TacticalPack_C", "", 16500, "" },
            { "B_Kitbag_A", "", 36500, "" }

        };
    };

    class clothes_addon {
        title = "STR_Shops_C_Addon";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            //  { "A3L_Bikini_Girl", "", 5000, "" },
            { "A3L_Dude_Outfit", "", 5000, "" },
            { "A3L_Farmer_Outfit", "", 5000, "" },
            { "A3L_SECRET", "해골!", 50000, "call life_donorlevel >= 1" },
            { "A3L_SpookyMummy", "", 5000, "" },
			{ "A3L_Worker_Outfit", "", 5000, "" },
            // { "A3L_Zombie", "", 5000, "" },
//			{ "A3L_Prisoner_Outfit", "prisoner1", 5000, "" },탈옥범 구분위해 판매종료
//            { "mgsr_civ_01_uniform", "prisoner2", 5000, "" },
//            { "mgsr_robe_dirty", "prisoner3", 5000, "" },
//            { "mgsr_robe_muddy", "prisoner4", 5000, "" },
            { "xmas_santa_blufor_uniform", "santa blue", 5000, "call life_donorlevel >= 1" },
            { "xmas_santa_ind_uniform", "santa green", 5000, "call life_donorlevel >= 1" },
            { "xmas_santa_opfor_uniform", "santa red", 5000, "call life_donorlevel >= 1" },


            { "U_Office_A", "", 250, "" },
            { "U_Office_B", "", 250, "" },
            { "U_Office_C", "", 250, "" },
            { "U_CivilianSuit_A", "", 250, "" },
            { "U_CivilianSuit_B", "", 250, "" },
            { "U_CivilianSuit_C", "", 250, "" },
            { "U_DressTKLocalUni_D_D", "", 250, "" },
            { "U_AFAOfficerUni_A", "", 250, "" },
            { "Zannaza69", "", 250, "" },

            // 007
            { "U_007_BIS_Marshall", "", 250, "call life_donorlevel >= 2" },
            { "U_CivilianCoat_D", "", 250, "call life_donorlevel >= 1" },
            { "U_CivilianCoat_E", "", 250, "call life_donorlevel >= 1" },
            { "U_CivilianCoat_B", "", 250, "call life_donorlevel >= 1" },
            { "U_CivilianCoat_A", "", 250, "call life_donorlevel >= 1" }


        };
        headgear[] = {
            { "H_AntmanMask", "", 100000, "" },
            { "cg_dinomask", "", 150000, "call life_donorlevel >= 1" },
            { "cg_dinomask_p", "", 150000, "call life_donorlevel >= 1" },
            { "cg_dinomask_r", "", 150000, "call life_donorlevel >= 1" },
            { "H_AugustusMask", "", 100000, "" },
            { "H_BatmanMask", "", 150000, "" },
            { "H_BobaMask", "", 150000, "" },
            { "H_BushMask", "", 150000, "" },
            { "casco_pumas", "", 150000, "" },
            { "casco_moto", "", 150000, "call life_donorlevel >= 1" },
            { "Casque_Moto", "", 150000, "call life_donorlevel >= 2" },
            { "H_ClintonMask", "", 150000, "" },
            { "H_DeadpoolMask", "", 150000, "" },
            { "H_GingerbreadMask", "", 150000, "" },
            { "Payday_GeneralO", "", 150000, "" },
            { "H_FranklinMask", "", 150000, "call life_donorlevel >= 1" },
            { "H_RAAMMask", "", 150000, "" },
            { "H_GrantMask", "", 150000, "" },
            { "H_LincolnMask", "", 150000, "" },
            { "H_HulkMask", "", 150000, "" },
            { "H_JasonMask", "", 150000, "" },
            { "jokermask", "", 200000, "" },
            { "H_KermitMask", "", 200000, "" },
            { "Masque_Alien1", "", 150000, "call life_donorlevel >= 1" },
            { "Masque_Anonymous", "", 200000, "" },
            { "Masque_archNemesis", "", 200000, "" },
            { "Masque_Arnold", "", 200000, "" },
            { "Masque_Aubrey", "", 200000, "" },
            { "Masque_Bonnie", "", 200000, "" },
            { "Masque_Bush", "", 250000, "" },
            { "Masque_Chains", "", 250000, "" },
            { "Masque_Chuck", "", 250000, "" },
            { "Masque_Clinton", "", 250000, "" },
            { "Masque_Clover", "", 250000, "" },
            { "Masque_Dallas", "", 250000, "" },
            { "Masque_Gombo", "", 250000, "" },
            { "Masque_Fish", "", 250000, "call life_donorlevel >= 1" },
            { "Masque_GdG", "", 250000, "" },
            { "Masque_Hoxton", "", 300000, "" },
            { "Masque_Hockey", "", 300000, "" },
            { "Masque_Incendiaire", "", 300000, "" },
            { "Masque_Macrilleuse", "", 300000, "" },
            { "Masque_Wolfv2", "", 350000, "" },
            { "Masque_Lion", "", 350000, "" },
            { "Masque_Mark", "", 350000, "" },
            { "Masque_Metalhead", "", 350000, "" },
            { "Masque_Momie", "", 350000, "" },
            { "Masque_Optimiste", "", 350000, "" },
            { "Masque_Orc", "", 350000, "" },
            { "Masque_Religieuse", "", 350000, "" },
            { "Masque_Santa", "", 150000, "call life_donorlevel >= 1" },
            { "Masque_Smiley", "", 150000, "" },
            { "Masque_Mempo", "", 150000, "" },
            { "Masque_speedRunner", "", 150000, "" },
            { "Masque_Unic", "", 150000, "" },
            { "H_MickeyMask", "", 150000, "" },
            { "H_NixonMask", "", 150000, "" },
            { "Kio_No1_Hat", "", 150000, "" },
            { "H_ObamaMask", "", 150000, "call life_donorlevel >= 1" },
            { "H_PatriotMask", "", 150000, "call life_donorlevel >= 2" },
            { "H_ScarecrowMask", "", 150000, "" },
            { "H_ShrekMask", "", 150000, "" },
            { "H_SpidermanMask", "", 150000, "call life_donorlevel >= 1" },
            { "H_SpongebobMask", "", 150000, "call life_donorlevel >= 2" },
            { "kio_vfv_mask", "", 150000, "" },
            { "H_GuyFawkesMask", "", 150000, "" },
            { "kio_skl_msk_red", "", 150000, "" },
            { "kio_skl_msk_grn", "", 150000, "" },
            { "kio_skl_msk", "", 150000, "" },
            { "H_SquidwardMask", "", 150000, "" },
            { "H_StarFoxMask", "", 150000, "" },
            { "H_UltronMask", "", 150000, "" },
            { "H_VenomMask", "", 150000, "" },
            { "H_WashingtonMask", "", 150000, "" },
            { "A3L_gangster_hat", "", 150000, "" },
            { "A3L_SkateHelmet_green", "", 150000, "" },
            { "Kio_Afro_Hat", "", 150000, "" },
            { "Kio_Capital_Hat", "", 150000, "" },
            { "cowboyhat", "", 150000, "" },
            { "FP_Helmet_ElfHat", "", 150000, "" },
            { "pilot_black_helmet", "", 150000, "" },
            { "pilot_blue_helmet", "", 150000, "" },
            { "pilot_red_helmet", "", 150000, "" },
            { "police_pilot_Helmet", "", 150000, "" },
            { "Kio_Pirate_Hat", "", 150000, "" },
            { "Kio_Santa_Hat", "", 150000, "" },
            { "Kio_Spinning_Hat", "", 150000, "" },
			{ "H_Ajx_HorseMask", "", 150000, "" },
			{ "H_Ajx_HorseMask_2", "", 150000, "" },
			{ "H_Ajx_HorseMask_blk", "", 150000, "" },
			{ "H_Ajx_HorseMask_pnk", "", 150000, "" },
            { "BL_eimer_Hat", "", 150000, "call life_donorlevel >= 1" }, //양동이
            { "BL_medieval_hat", "", 150000, "call life_donorlevel >= 1" },  //중세투구
            { "BL_mask2_Hat", "", 150000, "call life_donorlevel >= 1" }, //미국 토끼 가면
            { "BL_trump_Hat", "", 150000, "call life_donorlevel >= 1" }, //트럼프 머리
            { "BL_us_Hat", "", 150000, "call life_donorlevel >= 1" },    //시골 보안관
            { "BL_party_Hat", "", 150000, "call life_donorlevel >= 1" } //생일 파티


        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "Payday_Cagoule", "", 5000, "" },
            { "Masque_Chirurgical", "", 5000, "" },
            { "Masque_Solitaire", "", 5000, "" },
            { "mgsr_eyepatch_goggles", "", 5000, "" },
            { "mgsr_headbag_goggles", "", 5000, "" },
            { "SFG_Tac_smallBeardB", "", 150000, "call life_donorlevel >= 1" },  //턱수염 기부자1 부터
            { "SFG_Tac_smallBeardD", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_smallBeardG", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_smallBeardO", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_BeardB", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_BeardD", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_BeardG", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_BeardO", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_chinlessbB", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_chinlessbD", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_chinlessbG", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_chinlessbO", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_moustacheB", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_moustacheD", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_moustacheG", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_moustacheO", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_ChopsB", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_ChopsD", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_ChopsG", "", 150000, "call life_donorlevel >= 1" },
            { "SFG_Tac_ChopsO", "", 150000, "call life_donorlevel >= 1" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "mgsr_poncho_wet", "", 150000, "call life_donorlevel >= 2" },
            { "mgsr_poncho_dry", "", 150000, "call life_donorlevel >= 3" }
        };
    };

    class characterShop {
        title = "STR_Shops_C_Character";
        conditions = "call life_donorlevel >= 1";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "vvv_traje_dallas", "", 999999, "call life_donorlevel >= 1" },
            { "vvv_traje_ejecutivo_1", "", 999999, "call life_donorlevel >= 1" },
            { "vvv_character_messi", "", 999999, "call life_donorlevel >= 2" },
            { "vvv_traje_robot_1", "", 999999, "call life_donorlevel >= 4" },
            { "vvv_character_sub_zero", "", 999999, "call life_donorlevel >= 3" },
            { "vvv_traje_romano", "", 999999, "call life_donorlevel >= 3" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class bobu {
        title = "STR_Shops_Bobu";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
                  //쿠키맨
            { "Gorb_AngryGingerbread1", "", 500000, "" },
            { "Gorb_AngryGingerbread2", "", 500000, "" },
            { "Gorb_AngryGingerbread3", "", 500000, "" },
            { "Gorb_AngryGingerbreadSwirl1", "", 500000, "" },
            { "Gorb_AngryGingerbreadSwirl2", "", 500000, "" },
            { "Gorb_Gingerbread1", "", 500000, "" },

                  //루돌프 머리띠
            { "Gorb_Antler", "", 300000, "" },

                  //크리스마스 비니
            { "Gorb_PuddingHat", "", 300000, "" },

                  //크리스마스 전체 동그란 가면
            { "Gorb_PuddingMask1", "", 800000, "" },
            { "Gorb_PuddingMask2", "", 800000, "" },

                  //엘프 모자
            { "Gorb_Elf", "", 500000, "" },

                  //패스티벌 모자
            { "Gorb_FestiveHat1", "", 500000, "" },
            { "Gorb_FestiveHat2", "", 500000, "" },
            { "Gorb_FestiveHat3", "", 500000, "" },
            { "Gorb_FestiveHat4", "", 500000, "" },
            { "Gorb_FestiveHat5", "", 500000, "" },
            { "Gorb_FestiveHat6", "", 500000, "" },
            { "Gorb_FestiveHat7", "", 500000, "" },
            { "Gorb_FestiveHat8", "", 500000, "" },

                  //홀리데이 모자(일반 모자랑 비슷)
            { "Gorb_HolidayBaseballHat1", "", 100000, "" },
            { "Gorb_HolidayBaseballHat2", "", 100000, "" },
            { "Gorb_HolidayBaseballHat3", "", 100000, "" },
            { "Gorb_HolidayBaseballHat4", "", 100000, "" },
            { "Gorb_HolidayBaseballHat5", "", 100000, "" },
            { "Gorb_HolidayBaseballHat6", "", 100000, "" },
            { "Gorb_HolidayBaseballHat7", "", 100000, "" },
            { "Gorb_HolidayBaseballHat8", "", 100000, "" },

                  //수면모자 짧은거
            { "Gorb_PlaidHat1", "", 500000, "" },
            { "Gorb_PlaidHat2", "", 500000, "" },
            { "Gorb_PlaidHat3", "", 500000, "" },
            { "Gorb_PlaidHat4", "", 500000, "" },

                  //수면모자 긴거
            { "Gorb_KnittedHat1", "", 500000, "" },
            { "Gorb_KnittedHat2", "", 500000, "" },
            { "Gorb_KnittedHat3", "", 500000, "" },
            { "Gorb_KnittedHat4", "", 500000, "" },

                  //산타모자 빨간
            { "Gorb_SantaHat", "", 500000, "" },

                  //산타모자 녹색
            { "Gorb_SantaHat_Green", "", 500000, "" },

                  //쿨 엘프 가면(선그라스 전체 머리)
            { "Gorb_CoolElfMask1", "", 800000, "" },
            { "Gorb_CoolElfMask2", "", 800000, "" },
            { "Gorb_CoolElfMask3", "", 800000, "" },

                  //엘프 마스크(선그라스 없는 전체 머리)
            { "Gorb_ElfMask1", "", 800000, "" },
            { "Gorb_ElfMask2", "", 800000, "" },
            { "Gorb_ElfMask3", "", 800000, "" },

                  //할머니 가면(얼굴 전체)
            { "Gorb_MrsClaus1", "", 800000, "" },
            { "Gorb_MrsClaus2", "", 800000, "" },
            { "Gorb_MrsClaus3", "", 800000, "" },

                  //펭귄 마스크(얼굴 전체)
            { "Gorb_Penguin", "", 800000, "" },

                  //루돌프 마스크(얼굴 전체)
            { "Gorb_Reindeer", "", 800000, "" },

                  //무서운 산타 마스크(얼굴 전체)
            { "Gorb_RoughSantaClaus1", "", 800000, "" },
            { "Gorb_RoughSantaClaus2", "", 800000, "" },
            { "Gorb_RoughSantaClaus3", "", 800000, "" },

                  //산타마자(얼굴 전체)
            { "Gorb_Santa_White", "", 800000, "" },
            { "Gorb_Santa_Tan", "", 800000, "" },
            { "Gorb_Santa_Black", "", 800000, "" },

                  //눈사람 모자(얼굴 전체)
            { "Gorb_Snowman", "", 800000, "" },

                  //트리 모자(얼굴 전체)
            { "Gorb_TreeMask1", "", 800000, "" },
            { "Gorb_TreeMask2", "", 800000, "" },
            { "Gorb_TreeMask3", "", 800000, "" },
            { "Gorb_TreeMask4", "", 800000, "" },
            { "Gorb_TreeMask5", "", 800000, "" },
            { "Gorb_TreeMask6", "", 800000, "" },

                  //칠면조 모자(얼굴 전체)
            { "Gorb_TurkeyMask1", "", 800000, "" },
            { "Gorb_TurkeyMask2", "", 800000, "" },
            { "Gorb_TurkeyMask3", "", 800000, "" },

                  //못생긴 할머니(얼굴 전체)
            { "Gorb_UglyMrsClaus1", "", 800000, "" },
            { "Gorb_UglyMrsClaus2", "", 800000, "" },
            { "Gorb_UglyMrsClaus3", "", 800000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };


    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_Rangemaster", "Cop Uniform", 250, "" },
            { "U_B_CombatUniform_mcam", "Traffic Officer", 250, "" },
            { "U_B_CombatUniform_mcam_worn", "Blue Uniform", 350, "call life_coplevel >= 2" },
            { "U_B_CTRG_1", "Black Uniform", 350, "call life_coplevel >= 2" },
            { "U_B_PilotCoveralls", "", 550, "call life_coplevel >= 1" },//
            { "U_B_HeliPilotCoveralls", "", 550, "call life_coplevel >= 2" },
            { "U_B_GhillieSuit", "", 150000, "call life_coplevel >= 2" },
            { "U_B_Wetsuit", "", 10550, "call life_coplevel >= 1" },
            { "U_Marshal", "Marshal", 5550, "call life_coplevel >= 5" },
            { "U_NikosAgedBody", "시민2", 10550, "call life_coplevel >= 4" },
            { "U_B_CTRG_Soldier_3_F", "", 990000, "call life_coplevel >= 3" },
            { "U_B_CTRG_Soldier_F", "", 990000, "call life_coplevel >= 3" },

            { "vvv_traje_policia_1", "", 990000, "call life_donorlevel >= 2" },
            { "vvv_traje_policia_2", "", 990000, "call life_donorlevel >= 1" },
            { "vvv_traje_policia_3", "", 990000, "call life_donorlevel >= 2" },
            { "vvv_mujer_policia", "", 990000, "call life_donorlevel >= 3" },
            { "vvv_character_swat_3", "", 990000, "call life_donorlevel >= 1" },
            { "vvv_character_swat", "", 990000, "call life_donorlevel >= 2" },
            { "vvv_character_swat_2", "", 990000, "call life_donorlevel >= 1" },

            { "U_GirlSet_PD_uniform", "", 600000, "call life_coplevel >= 4" },
            { "U_GirlSet_SWAT_uniform", "", 600000, "call life_coplevel >= 4" },
            { "A3L_DOCOfficer_Uniform", "", 12000, "call life_coplevel >= 3" },
            { "A3L_Police_Uniform", "", 15000, "call life_coplevel >= 3" },
            { "U_CDFOfficerUni_A", "", 15000, "call life_coplevel >= 5" },
            { "A3L_DOCLieutenant_Uniform", "", 15000, "call life_coplevel >= 3" },
            { "A3L_DOCSergeant_Uniform", "", 15000, "call life_coplevel >= 4" },
            { "A3L_FTOCaptain_Uniform", "", 15000, "call life_coplevel >= 5" },
            { "A3L_FTOSergeant_Uniform", "", 15000, "call life_coplevel >= 4" },
            { "A3L_SOSergeant_Uniform", "", 15000, "call life_coplevel >= 3" },
            { "A3LJumperCIDBlack", "", 15000, "call life_coplevel >= 3" },
            { "A3L_SOSheriff_Uniform", "", 15000, "call life_coplevel >= 5" },
            { "U_CombatUniShirtMercB_J", "", 15000, "call life_coplevel >= 4" },
            { "U_CombatUniSleeves_F", "", 15000, "call life_coplevel >= 4" },
            { "U_CombatUniShirtAlt_E", "", 15000, "call life_coplevel >= 4" },
            { "U_CombatUniShirtAlt_B", "", 15000, "call life_coplevel >= 4" }



        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_HelmetB_plain_mcamo", "", 75, "call life_coplevel >= 1" },
            { "H_MilCap_blue", "", 8100, "call life_coplevel >= 2" },
            { "H_Booniehat_mcamo", "", 8120, "call life_coplevel >= 1" },
            { "H_Beret_Colonel", "", 8120, "call life_coplevel >= 1" },
            { "H_Bandanna_khk", "", 8120, "call life_coplevel >= 1" },

            { "Marine_HelmetCII", "", 300000, "call life_donorlevel >= 2" },
            { "Atlas_HelmetM", "", 300000, "call life_donorlevel >= 2" },

            { "H_HelmetB_light", "", 8120, "call life_coplevel >= 2" },
            { "H_HelmetCrew_O", "", 8120, "call life_coplevel >= 2" },
            { "H_HelmetSpecO_blk", "", 8120, "call life_coplevel >= 2" },
            { "H_PilotHelmetHeli_O", "", 8120, "call life_coplevel >= 2" },
            { "H_HelmetB_light_black", "", 8120, "call life_coplevel >= 1" },
            { "H_HelmetB_black", "", 8120, "call life_coplevel >= 1" },
            { "H_RacingHelmet_4_F", "", 8120, "call life_coplevel >= 1" },
            { "H_ShemagOpen_khk", "", 8800, "" },
            { "H_ShemagOpen_tan", "", 8850, "" },
            { "H_Shemag_olive", "", 8850, "" },
            { "H_HelmetO_ViperSP_ghex_F", "", 990000, "" },
            { "H_CrewHelmetHeli_I", "GasMask", 50000, "call life_coplevel >= 1" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" },
            { "G_Diving", "", 500, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 800, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 1" },
            { "V_PlateCarrier2_rgr", "", 1500, "call life_coplevel >= 1" },
            { "V_PlateCarrier1_blk", "", 1500, "call life_coplevel >= 1" },
            { "V_Chestrig_blk", "", 8000, "" },
            { "V_RebreatherB", "", 8000, "" },
            { "V_RebreatherIA", "", 8000, "" },
            { "V_PlateCarrierIAGL_dgtl", "", 8000, "" },
            { "V_PlateCarrierSpec_blk", "", 80000, "call life_coplevel >= 5" },
            { "V_Press_F", "", 800, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "tf_rt1523g_sage", "", 8000, "" }, //long range-  40KM // BLUEFOR
            { "tf_bussole", "", 13000, "" }, //long range-  40KM // BLUEFOR
            { "B_FieldPack_cbr", "", 500, "" },
            { "B_AssaultPack_cbr", "", 700, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_TacticalPack_blk", "", 2000, "" },
            { "B_Kitbag_cbr", "", 800, "" },
            { "B_Bergen_blk", "", 1500, "" },
            { "B_Bergen_sgg", "", 1500, "" },
            { "B_Carryall_cbr", "", 3500, "" },
            { "B_Parachute", "낙하산", 37500, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_sgg", "JetPack", 500000, "" },
            { "COREV_O_CameraStatic_high", "과속카메라", 300000, "call life_coplevel >= 3" }

//	    { "tf_anprc155", "", 3000, "" },  //long range - 20KM(30 FOR inbuilt) // INDEPENDENT
//	    { "tf_anprc155_coyote", "", 3000, "" },//long range - 20KM(30 FOR inbuilt)// INDEPENDENT
//	    { "tf_mr3000", "", 3000, "" },//long range - 20KM(30 FOR inbuilt) // OPFOR
//	    { "tf_mr3000_bwmod", "", 3000, "" },//long range - 20KM(30 FOR inbuilt)// OPFOR
//          { "tf_mr3000_bwmod_tropen", "", 3000, "" },//long range - 20KM(30 FOR inbuilt)// OPFOR
//          { "tf_mr3000_multicam", "", 3000, "" },//long range - 20KM(30 FOR inbuilt)// OPFOR
//          { "tf_mr3000_rhs", "", 3000, "" },//long range - 20KM(30 FOR inbuilt)// OPFOR
//	    { "tf_rt1523g", "", 3000, "" }, // long range - 20km(30 for inbuilt)  //BLUEFOR
//	    { "tf_rt1523g_big", "", 3000, "" },// long range - 20km(30 for inbuilt)//BLUEFOR
//          { "tf_rt1523g_big_bwmod", "", 3000, "" },// long range - 20km(30 for inbuilt)//BLUEFOR
//          { "tf_rt1523g_big_bwmod_tropen", "", 3000, "" },// long range - 20km(30 for inbuilt)//BLUEFOR
//	    { "tf_rt1523g_big_rhs", "", 3000, "" },// long range - 20km(30 for inbuilt)//BLUEFOR
//	    { "tf_rt1523g_black", "", 3000, "" },// long range - 20km(30 for inbuilt)//BLUEFOR
//          { "tf_rt1523g_bwmod", "", 3000, "" },// long range - 20km(30 for inbuilt)//BLUEFOR
//          { "tf_rt1523g_fabric", "", 3000, "" },// long range - 20km(30 for inbuilt)//BLUEFOR
//	    { "tf_rt1523g_green", "", 3000, "" },// long range - 20km(30 for inbuilt)//BLUEFOR
//          { "tf_rt1523g_rhs", "", 3000, "" },// long range - 20km(30 for inbuilt)//BLUEFOR
//	    { "tf_bussole", "", 3000, "" },//??

        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_I_Wetsuit", "", 2000, "" },
            { "U_O_Wetsuit", "", 2000, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "tf_bussole", "", 13000, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, {"", "", -1} },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_C_WorkerCoveralls", "", 17500, "" },
            { "U_I_PilotCoveralls", "", 15610, "" },
            { "U_IG_leader", "Guerilla Leader", 15340, "" },
            { "U_I_GhillieSuit", "", 150000, "" },


            { "U_CivilianPolo_A", "", 7500, "" },
            { "U_CivilianPolo_B", "", 7500, "" },
            { "U_CivilianPolo_C", "", 7500, "" },
            { "U_CivilianPolo_D", "", 7500, "" },
            { "U_CivilianPolo_E", "", 7500, "" },
            { "U_Skater_B", "", 7500, "" },
            { "U_Skater_A", "", 7500, "" },
            { "U_AFAOfficerUni_A", "", 50000, "" },
            { "U_CDFSoldierUni_A", "", 50000, "" },
            { "U_TKSpecialUni_B", "", 50000, "" },
            { "U_TKSoldierUni_B", "", 50000, "" },
            { "U_CombatUniShirtMercB_G", "", 50000, "" },
            { "U_CombatUniShirtMercB_D", "", 50000, "" },
            { "U_CombatUniShirtMercB_F", "", 50000, "" },
            { "U_CombatUniShirtMercB_B", "", 50000, "" },
            { "U_CombatUniShirtMercB_A", "", 50000, "" },
            { "U_CombatUniShirtMercA_C", "", 50000, "" },
            { "U_CombatUniTShirt_F", "", 50000, "" }


        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_HelmetO_ocamo", "", 2500, "" },
            { "H_MilCap_oucamo", "", 1200, "" },
            { "H_Bandanna_camo", "", 650, "" },

            { "H_EWK_CigPack_Helmet2", "", 150000, "" }

        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Squares", "", 10, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            // BI
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "tf_rt1523g_sage", "", 8000, "" }, //long range-  40KM // BLUEFOR
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Parachute", "낙하산", 37500, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_Rangemaster", "EMS Uniform", 250, "" },
            { "U_B_CombatUniform_mcam", "EMS 형광", 500, "" },
            { "U_B_CombatUniform_mcam_worn", "EMS 녹색", 500, "" },
            { "U_Competitor", "EMS 주황", 500, "" },
            { "vvv_traje_bombero_2", "소방관", 500, "call life_donorlevel >= 1" },
            { "vvv_traje_bombero", "소방관 검정", 500, "call life_donorlevel >= 2" },
            { "vvv_traje_doctor", "의사", 500, "call life_donorlevel >= 1" },
            { "U_I_Wetsuit", "EMS wetsuit", 5000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_blu", "", 1000, "" },
            { "H_Cap_red", "", 1000, "" },
            { "H_Cap_surfer", "", 1000, "" },
            { "H_Cap_usblack", "", 1000, "" },
            { "H_Cap_press", "", 1000, "" },
            { "H_Cap_blk_ION", "", 1000, "" },
            { "H_Bandanna_surfer", "", 1000, "" },
            { "H_Bandanna_blu", "", 1000, "" },
            { "H_Cap_marshal", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 5000, "" },
            { "H_RacingHelmet_1_blue_F", "", 5000, "" },
            { "H_RacingHelmet_1_orange_F", "", 5000, "" },
            { "H_Cap_oli", "", 5000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Blue", "", 10, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Squares", "", 10, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Press_F", "", 800, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "tf_rt1523g_sage", "", 8000, "" }, //long range-  40KM // BLUEFOR
            { "tf_bussole", "", 13000, "" }, //long range-  20KM // BLUEFOR
            { "B_FieldPack_oli", "EMS Backpack", 3000, "" },
            { "B_Kitbag_cbr", "", 5800, "" },
            { "B_FieldPack_cbr", "", 6500, "" },
            { "B_AssaultPack_cbr", "", 6700, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Parachute", "낙하산", 37500, "" },
            { "B_AssaultPack_sgg", "JetPack", 400000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "Guerilla Leader", 15340, "" },
            { "U_I_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "SpecCamo", 2500, "" },
            { "U_I_GhillieSuit", "", 150000, "" },
          //  { "U_O_V_Soldier_Viper_hex_F", "특수목적hex", 990000, "" },
            //isis
            { "U_TKLocalUniLong_D", "", 150000, "call life_donorlevel >= 1" },
            { "U_TKLocalUniLong_C", "", 150000, "call life_donorlevel >= 1" },
            { "U_TKLocalUniLong_A", "", 150000, "call life_donorlevel >= 1" },
            { "U_DressTKLocalUni_E_C", "", 150000, "call life_donorlevel >= 1" },
            { "U_DressTKLocalUni_E_E", "", 150000, "call life_donorlevel >= 1" },
            { "U_DressTKLocalUni_D_B", "", 150000, "call life_donorlevel >= 1" },
            { "U_DressTKLocalUni_B_C", "", 150000, "call life_donorlevel >= 1" },
            { "U_DressTKLocalUni_E_D", "", 150000, "call life_donorlevel >= 1" },
            { "U_DressTKLocalUni_C_E", "", 150000, "call life_donorlevel >= 1" },
            { "U_DressTKLocalUni_A_C", "", 150000, "call life_donorlevel >= 1" },


            { "U_CombatUniLong_A", "", 50000, "" },
            { "U_CombatUniVest_A", "", 50000, "" },
            { "U_CombatUniLong_B", "", 50000, "" },
            { "A3LCivPoloGreenGrey", "", 50000, "" },
            { "A3LCivPoloGreenBlack", "", 50000, "" },
            { "U_CombatUniSleeves_E", "", 50000, "" },
            { "U_CombatUniTShirt_C", "", 50000, "" },
            { "U_CombatUniSleeves_B", "", 50000, "" },
            { "U_CombatUniSleevesShort_A", "", 50000, "" },
            { "U_CivilianMetro_A", "", 50000, "" },
            { "U_MilitaryCoat_A", "", 50000, "" },
            { "U_MilitaryCoat_C", "", 50000, "" },
            { "U_MilitiaSport_C", "", 50000, "" },
            { "U_MilitiaUniShirt_G", "", 50000, "" },
            { "U_MilitiaUniShirt_A", "", 50000, "" },
            { "U_CivilianOutdoor_D", "", 50000, "" },
            { "U_CivilianCroppedPants_E", "", 50000, "" },


            { "U_CombatUniFatigue_A", "", 50000, "call life_donorlevel >= 1" },
            { "U_CombatOutdoor_D", "", 50000, "call life_donorlevel >= 1" },
            { "U_CivilianHunter_A", "", 50000, "call life_donorlevel >= 1" },
            { "U_CivilianHunter_B", "", 50000, "call life_donorlevel >= 1" },
            { "U_MilitiaUniTShirt_G", "", 50000, "call life_donorlevel >= 1" },
            { "U_MilitiaUniTShirt_F", "", 50000, "call life_donorlevel >= 1" },
            { "U_InsUniShirt_Leader", "", 150000, "call life_donorlevel >= 1" },
            { "U_InsUniShirt_A", "", 50000, "call life_donorlevel >= 1" },
            { "U_CombatUniLeadMerc_B", "", 50000, "call life_donorlevel >= 1" },
            { "U_CombatUniShirtMercD_G", "", 50000, "call life_donorlevel >= 1" },

            //정장방탄
            { "U_Office_A", "", 50000, "call life_donorlevel >= 3" },
            { "U_Office_B", "", 50000, "call life_donorlevel >= 3" },
            { "U_Office_C", "", 50000, "call life_donorlevel >= 3" },
            { "U_CivilianSuit_A", "", 50000, "call life_donorlevel >= 2" },
            { "U_CivilianSuit_C", "", 50000, "call life_donorlevel >= 2" },
            { "U_CivilianSuit_B", "", 50000, "call life_donorlevel >= 2" },
            { "U_CivilianSuit_D", "", 50000, "call life_donorlevel >= 2" },

            //체육복방탄

            { "U_CivilianSport_A", "", 50000, "" },
            { "U_CivilianSport_C", "", 50000, "" },
            { "U_CivilianSport_D", "", 50000, "" }



        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "", 6500, "" },
            { "H_ShemagOpen_khk", "", 8000, "" },
            { "H_ShemagOpen_tan", "", 8500, "" },
            { "H_Shemag_olive", "", 48500, "" },
            { "H_MilCap_oucamo", "", 12000, "" },
            { "H_HelmetO_ocamo", "", 25000, "" },
            { "H_ALFR_Gasmask", "Gas Mask", 990000, "" }
            //{ "H_HelmetO_ViperSP_hex_F", "특수목적hex[1회]", 990000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Squares", "", 10, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVestCamo_khk", "", 12500, "" },
            { "V_PlateCarrierGL_mtp", "", 22500, "" },
            { "V_HarnessOGL_gry", "Suicide Vest", 444400, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "tf_rt1523g_sage", "", 8000, "" }, //long range-  40KM // BLUEFOR
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_OutdoorPack_blk", "", 7500, "" },
            { "B_ViperLightHarness_blk_F", "", 17500, "" },
            { "B_Parachute", "낙하산", 37500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    //Extreme Shop
    class extreme_shop {
        title = "Extreme Shop";
        conditions = "";
        side = "";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_3", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_4", "", 1500, "" },
            { "U_C_Driver_2", "", 1500, "" },
            { "U_C_Driver_1", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_1_black", "", 1500, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "Casque_Moto", "", 150000, "" },
            { "casco_moto", "", 150000, "" },
            { "H_RacingHelmet_1_green_F", "", 5000, "" },
            { "H_RacingHelmet_3_F", "", 5000, "" },
            { "H_RacingHelmet_1_white_F", "", 5000, "" },
            { "H_RacingHelmet_4_F", "", 5000, "" },
            { "H_RacingHelmet_2_F", "", 5000, "" },
            { "H_RacingHelmet_1_F", "", 5000, "" },
            { "H_RacingHelmet_1_red_F", "", 5000, "" },
            { "H_RacingHelmet_1_orange_F", "", 5000, "" },
            { "H_RacingHelmet_1_blue_F", "", 5000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 5000, "" },
            { "H_RacingHelmet_1_black_F", "", 5000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Parachute", "", 37500, "" },   //낙하산
            { "B_AssaultPack_sgg", "RocketPack", 500000, "" },  //기존 제트팩 로켓팩으로 이름 변경
            { "FLAY_HangGlider_Bag", "", 300000, "" }, // 행글라이더 블루
            { "FLAY_HangGliderBlack_Bag", "", 300000, "" }, //// 행글라이더 블랙
            { "sab_paraglider_bp", "Paraglider", 300000, "" }, //패러글라이더
            { "sab_paraglider_red_bp", "Paraglider Red", 300000, "" },
            { "sab_paraglider_green_bp", "Paraglider Green", 300000, "" },
            { "sab_paraglider_blue_bp", "Paraglider Blue", 300000, "" },
            { "sab_paraglider_swiss_bp", "Paraglider RedWhite", 300000, "" },
            { "sab_paraglider_rainbow_bp", "Paraglider Rainbow", 300000, "" },
            { "sab_paraglider_infilred_bp", "Paraglider Dark1", 300000, "" },
            { "sab_paraglider_infilblu_bp", "Paraglider Dark2", 300000, "" },
            { "riten_jetpack_bp", "Jet Pack", 3000000, "call life_donorlevel >= 3" } //기부3 제트팩
        };
    };
};
