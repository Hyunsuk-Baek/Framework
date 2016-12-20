class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Van_01_transport_F", "" },
            { "C_Offroad_01_repair_F", "" },
            { "C_Offroad_02_unarmed_green_F", "" },
            { "C_Offroad_02_unarmed_orange_F", "" },
            { "C_Offroad_02_unarmed_red_F", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Van_01_box_F", "" },
            { "I_Truck_02_transport_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "B_Truck_01_box_F", "" },
            { "O_Truck_03_device_F", "" },
            { "C_Van_01_fuel_F", "" },
            { "I_Truck_02_fuel_F", "" },
            { "Jonzie_Tanker_Truck", "" },
            { "shounka_a3_dafxf_euro6_f", "" },    //트레일러 없는 트럭
            { "Mrshounka_a3_iveco_f", "" },        //IVECO 특장트럭 ( 컨테이너 )  4인승
            { "shounka_a3_renaultmagnum_f", "" }   //REnault magnum 대형 트레일러
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "I_Heli_light_03_unarmed_F", "" },
            { "B_Heli_Transport_03_unarmed_F", "" },
            { "I_Heli_Transport_02_F", "" },
            { "B_Heli_Transport_01_F", "" },
            { "C_Plane_Civil_01_F", "" },
            { "B_T_VTOL_01_infantry_F", "" }, //black fish 36인용
            { "B_T_VTOL_01_vehicle_F", "" }, //black fish 36인용
            { "O_Heli_Attack_02_F", "" }, //카이만
            { "O_Plane_CAS_02_F", "" }, //네오프론
            { "C_Plane_Civil_01_racing_F", "" }, //Caesar BTT 타노아 경비행기
            { "sab_ultralight", "" },        //addon // 경비행기 1인승
            { "R_HotairBalloon", "" },        //addon // 열기구
			{ "ARMSCor_A109_Civ", "" },	//addon // 빨간 헬기
			{ "ej_S94", "" },	//addon	//UH-60 흰색 프로팰러 미래형 노 어드밴스
			{ "ej_UH60M_UT", "" }	//addon	//UH-60 일반 갈색 노 어드밴스
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Scooter_Transport_01_F", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
            { "I_C_Boat_Transport_02_F", "" },

            { "B_CBS_WaterShadow730_F", "" },    //addon
            { "BirdKTM_BambooRaft", ""},    //대나무
            { "COREV_O_SmallBoat", ""}, //소형모터보트
            { "Lexx_Jetboat_H", ""},    //소형 스피드보트
            { "COREV_O_FishingBoat", "" },  //낚시배
            { "POP_Speed_yatch", "" },  //요트
            { "Mattaust_Fisher", "" },  //중형배
            { "mr_max_freighter", "" }  //거대배
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "O_MRAP_02_F", "" },
            { "B_Heli_Light_01_stripped_F", "" },
            { "B_G_Offroad_01_armed_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "I_Heli_Transport_02_F",  "" },
            { "O_MRAP_02_hmg_F", "" },
            { "O_Heli_Light_02_F",  "" },
            { "O_Heli_Transport_04_covered_F",  "" },
            { "O_Heli_Transport_04_bench_F",  "" },
            { "O_T_LSV_02_unarmed_F",  "" },
            { "O_T_LSV_02_armed_F",  "" },
            { "Boeing_CH_47_F_T", "" },  //addon //치누크갈색
			{ "kyo_CH47_HC3",  "" }	//반군 치누크(국방색) 노 어드밴스
            //addon
//            { "max_CG_heli",  "call life_donorlevel >= 2" } //uFO
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_F", "" },
          //  { "C_Hatchback_01_sport_F", "" },
            { "C_Van_01_box_F", "" },
            { "I_Truck_02_medical_F", "" },
            { "B_Truck_01_medical_F", "" },
            { "I_MRAP_03_F", "" },
            { "B_MRAP_01_F", "" },
            { "O_Truck_03_medical_F", "" },
            ///// addon
            { "bv_e60_m5_cop_emt", "" },    //Patrol EMT
            { "shounka_nemo_pompier", "" }, // 귀여운 사각2인
            { "shounka_a3_pompier_sprinter", "" }, // 벤츠 스프린터 기부자용
            { "bv_the_crowner_cop_emt", "" },    //경찰차 비슷한 빨간차
            { "ivory_suburban_ems", "" },       //Suburban SUV(Medic)
            { "Jonzie_Forklift", "" },   //ForkLift
            { "Jonzie_Tow_Truck", "" },       //Tow Truck

            { "A3L_HospitalBed2015", "" },//스트렛쳐침대
            { "mr_stretcher", "" }       //병원침대


//            { "max_ambulance", "" }, //옛날 엠뷸런스 4인용
//            { "max_firetruck", "" }, // 소방차 5인용

//            { "max_towtruck", "" } //토우트럭
        };
    };

    //Original Med heli list(Script spawn)
    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "B_Heli_Transport_03_unarmed_F", "" },
            { "I_Heli_Transport_02_F",  "" },
            { "O_Heli_Transport_04_F",  "" },
            { "O_Heli_Transport_04_medevac_F",  "" },
            { "I_Heli_light_03_unarmed_F",  "" }
            //addon
//            { "max_HEMS_heli",  "" }
        };
    };

    //Additional Med air vehicle spawn point(AOS Custom)
    class med_air_AOS {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "B_Heli_Transport_03_unarmed_F", "" },
            { "I_Heli_Transport_02_F",  "" },
            { "O_Heli_Transport_04_F",  "" },
            { "O_Heli_Transport_04_medevac_F",  "" },
            { "I_Heli_light_03_unarmed_F",  "" },
			{ "ej_UH60M_MEV",  "" },
			{ "ej_UH92_MEV",  "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
         //   { "C_Hatchback_01_sport_F", "" },
            { "O_MRAP_02_F", "" },
            { "B_MRAP_01_F", "" },
            { "B_Truck_01_Repair_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "B_Truck_01_ammo_F", "" },
            { "I_MRAP_03_F", "call life_coplevel >= 3" },
            { "B_MRAP_01_hmg_F", "call life_coplevel >= 4" },
            { "O_MRAP_02_hmg_F", "call life_coplevel >= 4" },
            { "I_MRAP_03_hmg_F", "call life_coplevel >= 5" },
            { "B_T_LSV_01_armed_F", "call life_coplevel >= 4" },
        ////////addon
//            { "max_bike_police", "" },//  경찰 오토바이
//            { "max_impala_security", "" },// 경찰 임팔라 세단 5인
            { "Mrshounka_bmw_gend", "" },// BMW 1 시리즈 M 세단(2인승)
            { "Mrshounka_rs4_gend_p_blanc", "" },// 아우디 RS4 // 기부자
            { "shounka_a3_audiq7_v2_gendarmerie", "" },//아우디 Q7// 기부자
            { "Mrshounka_rs_2015_g", "" }, // renault megane RS 2015  4인승 해치백 3도어
            { "shounka_a3_508banalise", "" },// 푸조 508 세단 검정
            { "shounka_a3_508gend", "" },// 푸조 508 세단 파랑
            { "shounka_a3_508pol", "" },// 푸조 508 세단 흰
            { "shounka_a3_brinks_grise", "" },// 장갑호송차량

            { "Mrshounka_a3_308_gend", "" },//골프 308 GTI 푸조 파랑
            { "Mrshounka_308pol", "" },//골프 308 GTI 푸조 흰색
//            { "max_BP_charger", "" },//닷지 차저 경찰 (흰색)
//            { "max_Charger_undercover", "" },
//            { "max_FBI_charger_undercover", "" },
//            { "max_Charger_Lapd", "" },//  닷지 차저 경찰 검흰
            //{ "Mrshounka_evox_gend", "" },// 경찰 EvoX 파랑 4인 이상있음.
//            { "max_BP_tahoe", "" }, // 닷지 SUV 경찰 ( 흰색)
//            { "max_FBI_tahoe_undercover", "" },// 경찰 fbi 밴
//            { "max_bus_pris", "call life_coplevel >= 4" },// 경찰 죄수 운송 버스
//            { "max_van_sheriff", "call life_coplevel >= 4" },// 경찰 밴 흰색 죄수 운송
//            { "max_FBI_tahoe", "" },// 경찰 FBI van  TAhoe
//            { "max_swatvan", "call life_coplevel >= 4" },// 경찰 swat van  TAhoe
            { "Mrshounka_Volkswagen_Touareg_police_police", "" },//폭스바겐 투아렉 4인승 suv
            { "Mrshounka_ducati_police_p", "call life_donorlevel >= 1" },//  경찰듀카티 오토바이  // 기부자
//            { "max_CrownVic_lapd", "call life_donorlevel >= 1" },// 크라운빅 Crownvic 옛날 경찰 차 검흰// 기부자
            { "77FuryShr", "call life_donorlevel >= 1" },// 77년대 플리마우스 퓨리 크루져 (경찰 SHERIFF ) 흰색// 기부자
            { "77FuryCop", "call life_coplevel >= 4" },// " 검정
            { "shounka_a3_gendsprinter", "call life_donorlevel >= 2" },// 벤츠 스프린터 경찰// 기부자
//            { "max_FBI_van", "call life_donorlevel >= 2" },  // 경찰 FBI 장갑 밴// 기부자
            { "Mrshounka_agera_gend_p", "call life_donorlevel >= 2" },// 아제라 스포츠카 // 기부자
            { "bv_gtr_spec_v_cop_patrol", "call life_donorlevel >= 1" }, //Patrol Bissan GTR Spec V
            { "bv_caressa_gt_cop_patrol", "call life_donorlevel >= 1" }, //Patrol Borsche Caressa GT Cop
            { "bv_458_cop_patrol", "call life_donorlevel >= 2" }, //Patrol Perrari 458 Cop
            { "bv_shelly_cop_patrol", "call life_donorlevel >= 1" }, //Patrol Shelly Cop
            { "bv_the_crowner_cop_patrol", "" }, //Patrol The Crowner
            { "bv_the_crowner_uc", "" }, //Patrol The Black Crowner
            { "bv_the_crowner_cop_patrol_interceptor", "" }, // 인터셉터 경찰차
            { "bv_the_crowner_cop_sher", "" },    //Patrol the Black Sheriff
            { "bv_e60_m5_cop_patrol", "" },    //Patrol
            { "bv_e60_m5_cop_interceptor", "" },          //BMW 교통경찰
            { "ivory_m3_marked", "" },          //BMW M3 E92
            { "ivory_m3_slicktop", "" },
            { "ivory_m3_unmarked", "" },
            { "ivory_suburban_marked", "" },          //Suburban SUV
            { "ivory_suburban_slicktop", "" },
            { "ivory_suburban_unmarked", "" },
            { "ivory_isf_marked", "" },         //Lexus IS-F
            { "ivory_isf_unmarked", "" },
            { "ivory_isf_slicktop", "" },
            { "ivory_evox_marked", "" },        //Mitsubishi Lancer Evolution X
            { "ivory_evox_unmarked", "" },
            { "ivory_evox_slicktop", "" },
            { "Jonzie_Forklift", "" },   //ForkLift
            { "Jonzie_Tow_Truck", "" }       //Tow Truck
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 1";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },    //허밍버드
            { "B_Heli_Transport_03_unarmed_F", "" },    //휴론 비무장
            { "B_Heli_Transport_01_F", "" },    //휴론
            { "O_Heli_Light_02_unarmed_F", "" },    //오르카 비무장
            { "I_Heli_Transport_02_F", "" },    //모호크
            { "B_T_VTOL_01_vehicle_F", "" }, //black fish 36인용 차량수송용
            { "I_Heli_light_03_F", "call life_coplevel >= 4" }, //헬켓
            { "O_Heli_Light_02_v2_F", "call life_coplevel >= 4" },  //오르카 무장
            { "B_Heli_Light_01_armed_F", "call life_coplevel >= 5" },   //포니
            { "B_Heli_Attack_01_F", "call life_coplevel >= 5" },    //블랙풋
            { "O_Heli_Attack_02_black_F", "call life_coplevel >= 5" },  //카이만
            { "B_Plane_CAS_01_F", "call life_coplevel >= 5" },  //와이프아웃
			{ "kyo_MH47E_HC", "" }   //치누크 노어드밴스
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Scooter_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 4" },
            { "B_SDV_01_F", "" }
        };
    };

	class med_ship {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Scooter_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            //{ "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 4" },
            { "B_SDV_01_F", "" }
        };
    };

    //Custom
    class civ_car_addon {
        side = "civ";
        conditions = "";
        vehicles[] = {
             { "Tal_Wrangler_Red", "" },                          //랭글러 지프
             { "Tal_Wrangler_Pink", "call life_donorlevel >= 1" },     //랭글러 지프
             { "Tal_Wrangler_White", "" },                        //랭글러 지프
//             { "max_AJ", "" },                                    // 오픈 지프
//             { "max_bike", "" },                                  //해골 갱 Bike
//             { "max_bike1", "" },                                 //해골 갱 Bike
//             { "max_bike2", "" },                                 //해골 갱 Bike
             { "Mrshounka_Bowler_c", "" },                        //BOWLER SUV 2인승
             { "Mrshounka_Bowler_c_noir", "" },                   //BOWLER SUV 2인승
             { "Mrshounka_Bowler_c_bleufonce", "" },              //BOWLER SUV 2인승
             { "shounka_buggy", "" },                             //버기카
             { "shounka_buggy_noir", "" },                        //버기카
             { "shounka_buggy_bleufonce", "" },                   //버기카
             { "shounka_buggy_orange", "" },                      //버기카
//             { "max_bus", "" },                                   //낡은 버스
             { "Mrshounka_a3_dodge15_civ", "" },                //닷지 차져 2015년 버전
             { "Mrshounka_a3_dodge15_civ_noir", "" },            //닷지 차져 2015년 버전
             { "Mrshounka_a3_dodge15_civ_bleufonce", "" },        //닷지 차져 2015년 버전
             { "shounka_avalanche", "" },                        //시보렛 Avalanche
             { "shounka_avalanche_noir", "" },                    //시보렛 Avalanche
             { "shounka_avalanche_bleufonce", "" },                //시보렛 Avalanche
             { "Mrshounka_c4_p_civ", "" },                        //citroen c4  4인승 해치백
             { "Mrshounka_c4_p_bleufonce", "" },                //citroen c4  4인승 해치백
             { "Mrshounka_c4_p_violet", "" },                    //citroen c4  4인승 해치백
             { "Mrshounka_a3_ds3_civ", "" },                    //citroen ds3 4인승  해치백
             { "Mrshounka_a3_ds3_civ_noir", "" },                //citroen ds3 4인승  해치백
             { "Mrshounka_a3_ds3_civ_civ_orange", "" },            //citroen ds3 4인승  해치백
             { "shounka_a3_ds4_civ", "" },                        //citroen ds4  4인승  해치백
             { "shounka_a3_ds4_noir", "" },                        //citroen ds4  4인승  해치백
             { "shounka_a3_ds4_orange", "" },                    //citroen ds4  4인승  해치백
             { "shounka_nemo", "" },                            //citroen Nemo 귀여운 사각 ㅋ 2인승
             { "shounka_nemo_noir", "" },                        //citroen Nemo 귀여운 사각 ㅋ 2인승
             { "shounka_nemo_orange", "" },                        //citroen Nemo 귀여운 사각 ㅋ 2인승
             { "shounka_a3_cliors_civ", "" },                    //Clio RS  4인승 해치백
             { "shounka_a3_cliors_civ_noir", "" },                //Clio RS  4인승 해치백
             { "shounka_a3_cliors_civ_bleufonce", "" },            //Clio RS  4인승 해치백
//             { "max_CrownVic_blue", "" },                        //crwonVic 옛날 세단 4인승
//             { "max_CrownVic_red", "" },                        //crwonVic 옛날 세단 4인승
//             { "max_CrownVic_white", "" },                        //crwonVic 옛날 세단 4인승
//             { "max_CrownVic_taxi", "" },                        //crwonVic 옛날 세단 4인승 택시
             { "Mrshounka_ducati_p", "" },                        //ducati 오토바이 1인승
             { "Mrshounka_ducati_p_noir", "" },                    //ducati 오토바이 1인승
             { "Mrshounka_ducati_p_o", "" },                    //ducati 오토바이 1인승
             { "Mrshounka_Vandura_civ", "" },                    //GMC Vandura 봉고
             { "Mrshounka_Vandura_civ_noir", "" },                //GMC Vandura 봉고
             { "Mrshounka_Vandura_civ_orange", "" },            //GMC Vandura 봉고
             { "Mrshounka_golfvi_civ", "" },                    //폭스바겐 골프
             { "Mrshounka_golfvi_noir", "" },                    //폭스바겐 골프
             { "Mrshounka_golfvi_orange", "" },                    //폭스바겐 골프
//             { "max_H3_red", "call life_donorlevel >= 1" },                                //험머 H3  6인
//             { "max_H3_black", "call life_donorlevel >= 1" },                            //험머 H3  6인
//             { "max_H3_urbancamo", "call life_donorlevel >= 1" },                        //험머 H3  6인
//             { "max_impala_black", "" },                        //임팔라 세단 5인
//             { "max_impala_white", "" },                        //임팔라 세단 5인
             { "Mrshounka_jeep_blinde_noir", "" },                //JEEP Blinde 4인승
             { "Mrshounka_jeep_blinde_bleu", "" },                //JEEP Blinde 4인승
             { "Mrshounka_jeep_blinde_rouge", "" },                //JEEP Blinde 4인승
             { "Mrshounka_cherokee_noir", "" },                    //jeep 그랜드 체로키 4인승
             { "Mrshounka_cherokee_noir_bleu", "" },            //jeep 그랜드 체로키 4인승
             { "Mrshounka_cherokee_noir_violet", "" },            //jeep 그랜드 체로키 4인승
//             { "max_jeep_green", "" },                            //jeep 오픈 2인승
//             { "max_jeep_red", "" },                            //jeep 오픈 2인승
//             { "max_jeep_black", "" },                            //jeep 오픈 2인승
             { "Mrshounka_mercedes_190_p_civ", "" },            //벤츠 구형 스포츠카
             { "shounka_a3_spr_civ", "" },                        //벤츠 스프린터 빨강
             { "Mrshounka_207_civ", "" },                        //푸조 207 RC
             { "Mrshounka_a3_308_civ", "" },                    //골프 308 GTI 푸조
             { "Mrshounka_cayenne_p_civ", "" },                    //포르쉐 카이엔
             { "Mrshounka_r5_noir", "" },                        //RENAULT 소형 해치백 2인승
             { "Mrshounka_r5_rose", "" },                        //RENAULT 소형 해치백 2인승
             { "Mrshounka_megane_rs_2015_civ", "" },            // renault megane RS 2015  4인승 해치백 3도어
             { "Mrshounka_twingo_p", "" },                        //renault twingo 해치백 4인승 소형
             { "Mrshounka_a3_smart_civ", "" },                    //벤츠 스마트 2인승
             { "Mrshounka_a3_smart_civ_noir", "" },                //벤츠 스마트 2인승
             { "Mrshounka_a3_smart_civ_bleu", "" },                //벤츠 스마트 2인승
//             { "max_suv_black", "" },                            //SUV 5인승 맥스 - 파노라마선루프 SUV
//             { "max_suv_UC", "" },                                //SUV 5인승 맥스 - 파노라마선루프 SUV
//             { "max_van_white", "" },                            //옛날 van 6인승
//             { "max_van_cola", "" },                            //옛날 van 6인승
//             { "max_van_Grey", "" },                            //옛날 van 6인승
//             { "max_van_red", "" },                                //옛날 van 6인승
//             { "max_van_blue", "" },                            //옛날 van 6인승
//             { "max_van_green", "" },                            //옛날 van 6인승
             { "Mrshounka_Volkswagen_Touareg_bleufonce", "" },    //폭스바겐 투아렉 4인승 suv
             { "Mrshounka_yamaha_p", "" },    //야마하 오토바이
             { "Mrshounka_yamaha_p_noir", "" },    //야마하 오토바이
             { "dbo_crosser", "" },    //공격형 오토바이
             { "sfp_wheelchair", "" },    //휠체어
             { "ivory_190e", "" },       //Mercedes-Benz 190E
             { "ivory_190e_taxi", "" }      //Mercedes-Benz 190E(Taxi)
        };
    };

    class civ_car_donation {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "jean_sleigh", "call life_donorlevel >= 1" },                    //산터썰매
            { "shounka_f430_spider", "call life_donorlevel >= 1" },                //페라리 f430 스파이더
            { "shounka_f430_spider_noir", "call life_donorlevel >= 1" },            //페라리 f430 스파이더
            { "shounka_f430_spider_bleufonce", "call life_donorlevel >= 1" },    //페라리 f430 스파이더
            { "shounka_f430_spider_rouge", "call life_donorlevel >= 1" },        //페라리 f430 스파이더
            { "shounka_f430_spider_jaune", "call life_donorlevel >= 1" },        //페라리 f430 스파이더
            { "shounka_f430_spider_rose", "call life_donorlevel >= 1" },            //페라리 f430 스파이더
            { "shounka_f430_spider_grise", "call life_donorlevel >= 1" },        //페라리 f430 스파이더
            { "shounka_f430_spider_violet", "call life_donorlevel >= 1" },        //페라리 f430 스파이더
            { "shounka_f430_spider_orange", "call life_donorlevel >= 1" },        //페라리 f430 스파이더
            { "shounka_mp4", "call life_donorlevel >= 2" },                        //맥라렌 mp4-12c
            { "A3L_MonsterTruck", "call life_donorlevel >= 1" },            //몬스터트럭
            { "Mrshounka_c63_2015_civ", "call life_donorlevel >= 1" }, //벤츠 c63 AMG 2015
            { "Mrshounka_agera_p", "call life_donorlevel >= 3" },            //아제라 스포츠
            { "Mrshounka_agera_p_bleu", "call life_donorlevel >= 3" },        //아제라 스포츠
            { "Mrshounka_agera_p_jaune", "call life_donorlevel >= 3" },        //아제라 스포츠
            { "dbo_LT_01", "call life_donorlevel >= 1" },                    //LT sport
            { "Mrshounka_lykan_c", "call life_donorlevel >= 2" },            //라이칸 하이퍼스포트
            { "A3L_Flipcar", "call life_donorlevel >= 1" },                   //Flipcar
            { "sga_shopping_cart", "call life_donorlevel >= 1" },                   //쇼핑카트
            { "sga_shopping_cart_monster", "call life_donorlevel >= 2" },                   //쇼핑카트몬스터
            { "sga_hover_board", "call life_donorlevel >= 2" },                   //호버보드
            { "shounka_harley_a3", "call life_donorlevel >= 1" },         //할리데이비슨 오토바이
            { "ivory_veyron", "call life_donorlevel >= 3" },           //Bugatti Veyron (Donation)
            { "ivory_gt500", "call life_donorlevel >= 2" },            //Shelby GT500 (Donation)
            { "ivory_lfa", "call life_donorlevel >= 1" },        //Lexus LFA (Donation)
            { "ivory_elise", "call life_donorlevel >= 1" },            //Lotus Elise 11R (Donation)
            { "ivory_f1", "call life_donorlevel >= 3" },         //McLaren F1 (Donation)
            { "ivory_mp4", "call life_donorlevel >= 1" },        //McLaren MP4-12C (Donation)
            { "ivory_c", "call life_donorlevel >= 2" },      //벤틀리 스포츠
            { "ivory_supra", "call life_donorlevel >= 1" },      //Toyota Supra
            { "ivory_supra_topsecret", "call life_donorlevel >= 1" },        //Toyota Supra(Top Secret) Donation
            { "Skyline_Bus_01_F", "call life_donorlevel >= 3" }   //버스
             //             { "max_charger_black", "call life_donorlevel >= 1" },            //닷지 차져
             //             { "max_charger_blue", "call life_donorlevel >= 1" },            //닷지 차져
             //             { "max_charger_red", "call life_donorlevel >= 1" },                //닷지 차져
             //             { "max_charger_yellow", "call life_donorlevel >= 1" },            //닷지 차져
             //             { "max_vipcar", "call life_donorlevel >= 2" }                    //롤스로이스 팬텀 검정 ( 대통령차)
             //{ "", "" },    //Sample
        };
    };

    class civ_car_luxury {
        side = "civ";
        conditions = "";
        vehicles[] ={
            { "SIG_SuperBeeB", "" },                    //1969 Dodge 슈퍼 비(블랙)
            { "SIG_SuperBee", "" },                        //1969 Dodge 슈퍼 비(레드)
            { "SIG_SuperBeeY", "" },                    //1969 Dodge 슈퍼 비(옐로)
            { "Mrshounka_rs4_civ", "" },                //아우디 RS4
            { "Mrshounka_rs4_civ_bleufonce", "" },        //아우디 RS4
            { "Mrshounka_rs4_civ_orange", "" },            //아우디 RS4
            { "shounka_a3_rs5_civ", "" },                //아우디 RS5
            { "shounka_a3_rs5_civ_bleufonce", "" },        //아우디 RS5
            { "shounka_a3_rs5_civ_orange", "" },        //아우디 RS5
            { "shounka_rs6", "" },                        //아우디 RS6
            { "shounka_rs6_bleufonce", "" },            //아우디 RS6
            { "shounka_rs6_orange", "" },                //아우디 RS6
            { "Mrshounka_bmwm1_civ", "" },                //BMW 1 시리즈 M세단
            { "Mrshounka_bmwm1_civ_noir", "" },            //BMW 1 시리즈 M세단
            { "Mrshounka_bmwm1_civ_bleufonce", "" },    //BMW 1 시리즈 M세단
            { "Mrshounka_bmwm1_civ_orange", "" },        //BMW 1 시리즈 M세단
//            { "max_BMW", "" },                            //BMW 세단 2인승  검정
//            { "max_BMW1", "" },                            //BMW 세단 2인승  검정
//            { "max_BMW2", "" },                            //BMW 세단 2인승  검정
//            { "max_BMW_M3_GTR", "" },                    //BMW  GTR3레이싱
//            { "max_BMW_M3_GTR1", "" },                    //BMW  GTR3레이싱
//            { "max_BMW_M3_GTR2", "" },                    //BMW  GTR3레이싱
            { "Mrshounka_bmwm6_civ", "" },                //BMW M 6
            { "Mrshounka_bmwm6_noir", "" },                //BMW M 6
            { "Mrshounka_bmwm6_orange", "" },            //BMW M 6
            { "shounka_monsteur", "" },                    //시보레 몬스터 트럭
            { "shounka_monsteur_noir", "" },            //시보레 몬스터 트럭
            { "shounka_monsteur_orange", "" },            //시보레 몬스터 트럭
            { "shounka_gt", "" },                        //Ford gt 스포츠카
            { "shounka_gt_noir", "" },                    //Ford gt 스포츠카
            { "shounka_gt_bleufonce", "" },                //Ford gt 스포츠카
            { "shounka_gt_rouge", "" },                    //Ford gt 스포츠카
            { "shounka_gt_jaune", "" },                    //Ford gt 스포츠카
            { "shounka_gt_rose", "" },                    //Ford gt 스포츠카
            { "shounka_gt_grise", "" },                    //Ford gt 스포츠카
            { "shounka_gt_violet", "" },                //Ford gt 스포츠카
            { "shounka_gt_orange", "" },                //Ford gt 스포츠카
            { "Mrshounka_mustang_civ", "" },            //ford 머스탱
            { "Mrshounka_mustang_mat", "" },            //ford 머스탱
            { "Mrshounka_mustang_noir", "" },            //ford 머스탱
            { "Mrshounka_mustang_mat_n", "" },            //ford 머스탱
            { "Mrshounka_mustang_bleufonce", "" },        //ford 머스탱
            { "Mrshounka_mustang_mat_b", "" },            //ford 머스탱
            { "Mrshounka_mustang_rouge", "" },            //ford 머스탱
            { "Mrshounka_mustang_jaune", "" },            //ford 머스탱
            { "Mrshounka_mustang_rose", "" },            //ford 머스탱
            { "Mrshounka_mustang_grise", "" },            //ford 머스탱
            { "Mrshounka_mustang_violet", "" },            //ford 머스탱
            { "Mrshounka_mustang_orange", "" },            //ford 머스탱
            { "Mrshounka_hummer_civ", "" },                //험머 H1  //4인
            { "Mrshounka_hummer_civ_noir", "" },        //험머 H1  //4인
            { "Mrshounka_hummer_civ_orange", "" },        //험머 H1  //4인
            { "shounka_h2", "" },                        //험머     H2 //4인
            { "shounka_h2_noir", "" },                    //험머     H2 //4인
            { "shounka_h2_orange", "" },                //험머     H2 //4인
//            { "max_lambo", "" },                        //람보르기니 가야르도
//            { "max_lambo1", "" },                        //람보르기니 가야르도
//            { "max_lambo2", "" },                        //람보르기니 가야르도
            { "mrshounka_huracan_c", "" },                //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_noir", "" },            //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_bleufonce", "" },    //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_rouge", "" },        //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_jaune", "" },        //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_rose", "" },            //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_grise", "" },        //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_violet", "" },        //람보르기니 우라칸 // huracan
            { "mrshounka_huracan_c_orange", "" },        //람보르기니 우라칸 // huracan
            { "Mrshounka_veneno_c", "" },                //람보르기니 베네노 veneno
            { "Mrshounka_veneno_c_noir", "" },            //람보르기니 베네노 veneno
            { "Mrshounka_veneno_c_bleu", "" },            //람보르기니 베네노 veneno
            { "Mrshounka_veneno_c_jaune", "" },            //람보르기니 베네노 veneno
//            { "max_vipcar1", "call life_donorlevel >= 2" },     //롤스로이스 팬텀 ( vip )  크롬색
            { "shounka_limo_civ", "" },                    //아우디 리무진
            { "shounka_limo_civ_noir", "" },            //아우디 리무진
            { "shounka_limo_civ_bleufonce", "" },        //아우디 리무진
            { "shounka_limo_civ_orange", "" },            //아우디 리무진
            { "Mrshounka_lincoln_civ", "" },            //링컨 1969
            { "Mrshounka_lincoln_noir", "" },            //링컨 1969
            { "Mrshounka_lincoln_grise", "" },            //링컨 1969
            { "shounka_clk", "" },                        //벤츠 CLK
            { "Mrshounka_a3_gtr_civ", "" },                //닛산 GTR 2012
            { "Mrshounka_a3_gtr_civ_noir", "" },        //닛산 GTR 2012
            { "Mrshounka_a3_gtr_civ_bleu", "" },        //닛산 GTR 2012
            { "Mrshounka_pagani_c", "" },                //파가니 huayra
            { "Mrshounka_pagani_c_noir", "" },            //파가니 huayra
            { "Mrshounka_pagani_c_bleufonce", "" },        //파가니 huayra
            { "Mrshounka_pagani_c_jaune", "" },            //파가니 huayra
            { "Mrshounka_a3_308_rcz", "" },                //푸조 308 오픈카 2인승
            { "Mrshounka_a3_308_rcz_noir", "" },        //푸조 308 오픈카 2인승
            { "Mrshounka_a3_308_rcz_bleufonce", "" },    //푸조 308 오픈카 2인승
            { "shounka_a3_peugeot508_civ_noir", "" },    //푸조 508 세단
            { "shounka_a3_peugeot508_civ_bleufonce", "" },    //푸조 508 세단
            { "shounka_a3_peugeot508_civ_rouge", "" },    //푸조 508 세단
            { "shounka_porsche911", "" },                //포르쉐 911
            { "mrshounka_92_civ", "" },                    //포르쉐 911 92년식
            { "shounka_transam", "" },                    //옛날 머슬카 Transam 2인승
            { "ivory_rs4", "" },        //Audi RS4
            { "ivory_e36", "" },        //BMW M3 E36
            { "ivory_m3", "" },     //BMW M3 E92
            { "ivory_suburban", "" },       //Suburban SUV
            { "ivory_isf", "" },        //Lexus IS-F
            { "ivory_evox", "" },       //Mitsubishi Lancer Evolution X
            { "ivory_r34", "" },        //Nissan Skyline GT-R
            { "ivory_gti", "" }       //Volkswagen Golf GTI
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = 10;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 75000;
        textures[] = {
            { "Heto EMS", "med", {"textures\ems\HETO_Zamac_Front.paa","textures\ems\HETO_Zamac_Back.paa"}, "" }
        };
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 850000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 90000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 125;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 25000;
        textures[] = { };
    };

    // Apex DLC
    class C_Scooter_Transport_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 75000;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            } },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            } },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            } },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            } },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            } },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            } },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            } }
        };
    };

    class B_Heli_Transport_01_F { //ghost hawk
        vItemSpace = 200;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 850000;
        textures[] = {
            { "Cop", "cop", {"textures\cop\ghosthawk_0.paa","textures\cop\ghosthawk_1.paa"}, "" },
            { "KoreanAir", "civ", {"textures\civ\Ghosthawk_CIV_Koreanair1.paa","textures\civ\Ghosthawk_CIV_Koreanair2.paa"}, "" }
        };
    };

    class I_Heli_light_03_F { //hellcat
        vItemSpace = 200;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 650000;
        textures[] = {
            { "Cop", "cop", {"textures\cop\cop_hellcat.paa"}, "" },
            { "EMS", "med", {"textures\ems\Hellcat_EMS_White.paa"}, "" }
        };
    };

    class O_Heli_Light_02_v2_F { //ORCA
        vItemSpace = 200;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 750000;
        textures[] = {};
    };

    class O_Heli_Light_02_F { // ORCA ARMED
        vItemSpace = 200;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 13000000;
        textures[] = {
            { "Desert Digi", "reb", {"\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"}, "" }
        };
    };

    class O_Heli_Attack_02_black_F {
         vItemSpace = 200;
         conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
         price = 2000000;
         textures[] = {};
    };

    class B_Plane_CAS_01_F {
         vItemSpace = 200;
         conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
         price = 5000000;
         textures[] = {};
    };

    class O_Heli_Attack_02_F {
         vItemSpace = 200;
         conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
         price = 41000000;
         textures[] = {};
    };

    class B_MRAP_01_F { //hunter
        vItemSpace = 65;
        conditions = "";
        price = 500000;
        textures[] = {
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)","#(argb,8,8,3)color(0.05,0.05,0.05,1)"}, "" },
            { "Police", "cop", {"textures\cop\hunter_front.paa","textures\cop\hunter_back.paa"}, "" },
            { "SWAT Police", "cop", {"textures\cop\swat_hunter_1.paa","textures\cop\swat_hunter_2.paa"}, "" },
            { "Scott police", "cop", {"textures\cop\scotpol_Hunter_Cab.paa","textures\cop\scotpol_Hunter_Back.paa"}, "" },
            { "EMS RED", "med", {"textures\ems\med_hunter_front.paa","textures\ems\med_hunter_back.paa"}, "" }
        };
    };

    class B_MRAP_01_hmg_F { //hunter hmg
        vItemSpace = 65;
        conditions = "";
        price = 3000000;
        textures[] = {
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)","#(argb,8,8,3)color(0.05,0.05,0.05,1)"}, "" },
            { "Police", "cop", {"textures\cop\hunter_front.paa","textures\cop\hunter_back.paa"}, "" },
            { "SWAT Police", "cop", {"textures\cop\swat_hunter_1.paa","textures\cop\swat_hunter_2.paa"}, "" },
            { "Scott police", "cop", {"textures\cop\scotpol_Hunter_Cab.paa","textures\cop\scotpol_Hunter_Back.paa"}, "" },
            { "EMS RED", "med", {"textures\ems\med_hunter_front.paa","textures\ems\med_hunter_back.paa"}, "" }
        };
    };

    class I_MRAP_03_F { //STRIDER
        vItemSpace = 200;
        conditions = "";
        price = 650000;
        textures[] = {
            { "EMS white", "med", {"#(argb,8,8,3)color(1,1,1,0.8)"}, "" },
            { "Blue", "cop", {"#(argb,8,8,3)color(0.01,0.01,1.53,1)"}, "" },
            { "Police", "cop", {"textures\cop\policeStrider.paa"}, "" }
        };
    };

    class I_MRAP_03_hmg_F { //strider hmg
        vItemSpace = 200;
        conditions = "";
        price = 650000;
        textures[] = {
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)"}, "" },
            { "Police", "cop", {"textures\cop\policeStrider.paa"}, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {call life_mediclevel >=1}";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg";
        price = 3000;
        textures[] = { };
    };

    class I_Truck_02_covered_F { //zamak truck covered
        vItemSpace = 330;
        conditions = "license_civ_trucking || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 350000;
        textures[] = {
            { "Cola", "civ", {"textures\civ\cola_zamak_front.paa","textures\civ\cola_zamak_back.paa"}, "" },
            { "RedBull", "civ", {"textures\civ\truckcabredbull.paa","textures\civ\truckbackredbull.paa"}, "" },
            { "COP", "cop", {"textures\cop\cop_zamak_front.paa","textures\cop\cop_zamak_back.paa"}, "" }
        };
    };

    class I_Truck_02_transport_F { //zamark transport
        vItemSpace = 300;
        conditions = "license_civ_trucking || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 550000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_device_F { //tempest device
        vItemSpace = 350;
        conditions = "license_civ_trucking || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 8000000;
        textures[] = { };
    };

    class B_Truck_01_transport_F { //hemett
        vItemSpace = 385;
        conditions = "license_civ_trucking || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 660000;
        textures[] = {
            { "yellow", "civ", {"#(argb,8,8,3)color(0.6,0.3,0.01,1)"}, ""},
            { "Orange", "civ", {"\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"}, "" },
            { "CopBlue", "cop", {"#(argb,8,8,3)color(0.01,0.01,1.53,1)"}, ""}
        };
    };

    class B_Truck_01_box_F { //hemtt box
        vItemSpace = 450;
        conditions = "license_civ_trucking || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 800000;
        textures[] = { };
    };

    class O_MRAP_02_F { //ifrit
        vItemSpace = 60;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 700000;
        textures[] = {
            { "Black Skull", "reb", {"textures\rebel\reb_black_ifrit_front.paa", "textures\rebel\reb_black_ifrit_back.paa"}, "" },
            { "Camo", "reb", {"textures\rebel\reblbirdcamo1.paa"}, "" },
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)"}, "" },
            { "BLUE", "cop", {"#(argb,8,8,3)color(0.01,0.01,1.53,1)"}, "" },
            { "Snake", "civ", {"textures\rebel\reb_black_ifrit_front.paa", "textures\rebel\reb_black_ifrit_back.paa"}, "" }
        };
    };

    class O_MRAP_02_hmg_F { //ifrit hmg
        vItemSpace = 60;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 3500000;
        textures[] = {
            { "Black Skull", "reb", {"textures\rebel\reb_black_ifrit_front.paa", "textures\rebel\reb_black_ifrit_back.paa"}, "" },
            { "Camo", "reb", {"textures\rebel\reblbirdcamo1.paa"}, "" },
            { "Black", "cop", {"#(argb,8,8,3)color(0.05,0.05,0.05,1)"}, "" },
            { "BLUE", "cop", {"#(argb,8,8,3)color(0.01,0.01,1.53,1)"}, "" },
            { "Snake", "civ", {"textures\rebel\reb_black_ifrit_front.paa", "textures\rebel\reb_black_ifrit_back.paa"}, "" }
        };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel";
        price = 750000;
        textures[] = { };
    };

    class O_T_LSV_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel";
        price = 350000;
        textures[] = { };
    };

    class O_T_LSV_02_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel";
        price = 9000000;
        textures[] = { };
    };

    class B_T_LSV_01_armed_F {
        vItemSpace = 65;
        conditions = "";
        price = 2300000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 150;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 122000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 185;
        conditions = "license_cop_cg || {call life_mediclevel >=1}";
        price = 200000;
        textures[] = { };
    };


    class I_C_Boat_Transport_02_F {
        vItemSpace = 220;
        conditions = "license_civ_boat || {license_cop_cg}";
        price = 1050000;
        textures[] = {};
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 102500;
        textures[] = {
            { "US Police", "cop", {"textures\cop\police_offroad.paa"}, "" },
            { "London Police", "cop", {"textures\cop\police_uk_offroad.paa"}, "" },
            { "SWAT", "cop", {"textures\cop\swat_offroad.paa"}, "" },
            { "EMS", "med", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Met cop", "cop", {"textures\cop\met_police_offroader.paa"}, "" },
            { "London 911", "cop", {"textures\cop\lincpol_offroader.paa"}, "" },
            { "EMS Red", "med", {"textures\ems\med_offroad.paa"}, "" },
            { "Hello kitty", "civ", {"textures\civ\kitty_offroad.paa"}, "" },
            { "Traffic police", "cop", {"textures\cop\heto_offroader.paa"}, "" }
        };
    };

    class C_Offroad_01_repair_F : C_Offroad_01_F{};

    class C_Offroad_02_unarmed_green_F {
        vItemSpace = 75;
        conditions = "";
        price = 210000;
        textures[] = { };
    };

    class C_Offroad_02_unarmed_orange_F : C_Offroad_02_unarmed_green_F{};
    class C_Offroad_02_unarmed_red_F : C_Offroad_02_unarmed_green_F{};

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 50000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F  : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Ferrari", "civ", {"textures\civ\ferrari_hatchback.paa"}, "" },
            { "Security", "civ", {"textures\civ\secure_hatchback.paa"}, "" },
            { "Police", "cop", {"textures\cop\cop_hatchback.paa"}, "" },
            { "UK Police", "cop", {"textures\cop\UK_police_hatchback_co.paa"}, "" },

            { "EMS Red", "med", {"textures\ems\EMS_hatchback.paa"}, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, ""},
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, ""},
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Subaru", "civ", {"textures\civ\civ_subaru.paa"}, "" },
            { "EMS London", "med", {"textures\ems\paramedic_hb.paa"}, "" },
            { "LAPD", "cop", {"textures\cop\lapd_hatchback.paa"}, "" }
        };
    };

//    class C_Hatchback_01_sport_F {
//        vItemSpace = 45;
//        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
//        price = 140000;
//        textures[] = {
//            { "Police", "cop", {"textures\cop\cop_hatchback.paa"}, "" },
//            { "UK Police", "cop", {"textures\cop\UK_police_hatchback_co.paa"}, "" },
//            { "Security", "civ", {"textures\civ\secure_hatchback.paa"}, "" },
//            { "Subaru", "civ", {"textures\civ\civ_subaru.paa"}, "" },
//            { "EMS Red", "med", {"textures\ems\EMS_hatchback.paa"}, "" },
//
//            { "Red", "civ", {
//                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
//            }, "" },
//            { "Dark Blue", "civ", {
//                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
//            }, "" },
//            { "Orange", "civ", {
//                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
//            }, "" },
//            { "Black / White", "civ", {
//                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
//            }, "" },
//            { "Beige", "civ", {
//                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
//            }, "" },
//            { "monster_WRC", "civ", {"textures\civ\civ_hatchback_monster.paa"}, "" },
//            { "LAPD", "cop", {"textures\cop\lapd_hatchback.paa"}, "" },
//            { "EMS London", "med", {"textures\ems\paramedic_hb.paa"}, "" },
//            { "Ferrari", "civ", {"textures\civ\ferrari_hatchback.paa"}, "" },
//            { "porsche", "civ", {"textures\civ\porsche_hatchback.paa"}, "" },
//            { "잠복용시민monster", "cop", {"textures\civ\civ_hatchback_monster.paa"}, "" }
//        };
//    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "";
        price = 25000;
        textures[] = {
            { "Police", "cop", {"textures\cop\quad_police.paa"}, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "EMS", "med", {"textures\ems\quad_med.paa"}, "" },
            { "LADY", "civ", {"textures\civ\quad_lady.paa"}, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 70;
        conditions = "";
        price = 120000;
        textures[] = {
            { "Sticker", "civ", {"textures\civ\sticker.paa"}, "" },
            { "Hello kitty", "civ", {"textures\civ\kitty.paa"}, "" },
            { "Cube", "civ", {"textures\civ\cube_suv.paa"}, "" },
            { "Hunters", "civ", {"textures\civ\hunter_suv.paa"}, "" },
            { "Dark Red", "civ", {"\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"}, "" },
            { "한국경찰", "cop", {"textures\cop\ASOULPOLICE.paa"}, "" },
            { "영국경찰", "cop", {"textures\cop\police_uk_suv.paa"}, "" },
            { "EMS red", "med", {"textures\ems\EMS_SUV.paa"}, "" },
            { "EMS white", "med", {"textures\ems\EMS_SUV_1.paa"}, "" },
            { "EMS 119", "med", {"textures\ems\EMS_SUV_2.paa"}, "" },
            { "Channel8 News", "civ", {"textures\civ\channel8newscar.paa"}, "" },
            { "VIP Security", "civ", {"textures\civ\suv_vip.paa"}, "" },
            { "미국 경찰", "cop", {"textures\cop\lapd_suv.paa"}, "" },
            { "Ferrari", "civ", {"textures\civ\ferrari_SUV.paa"}, "" },
            { "blueflames", "civ", {"textures\civ\flames.paa"}, "" },
            { "tiger", "civ", {"textures\civ\pimp.paa"}, "" },
            { "ghostRider", "civ", {"textures\civ\suv_ghostrider.paa"}, "" },
            { "택시", "civ", {"textures\civ\suvtaxi.paa"}, "" },
            { "잠복용시민Cube", "cop", {"textures\civ\cube_suv.paa"}, "" },
            { "vips", "civ", {"textures\civ\civ_suvvip.paa"}, "" },
            { "5taku", "civ", {"textures\civ\civ_suvotaku.paa"}, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 130;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 135000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 120;
        conditions = "license_civ_trucking || {license_med_mAir}";
        price = 200000;
        textures[] = {
            { "White", "civ", { "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"}, "" },
            { "Red", "civ", {"\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"}, "" },
            { "EMS London", "med", {"textures\ems\Ambulance_Boxer_Front.paa",
                "textures\ems\Ambulance_Boxer_Back.paa"}, "" },
            { "EMS Red", "med", {"textures\ems\med_ambulance_front.paa","textures\ems\med_ambulance_back.paa"}, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 100;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 555000;
        textures[] = {
            { "Police Black/White", "cop", {"textures\cop\police_heli.paa", "textures\cop\police_heli2.paa"}, "" },
            { "Police security", "cop", {"textures\cop\sec_hummingbird.paa"}, "" },
            { "EMS Yellow/Blue", "med", {"textures\ems\humming_ems.paa", "textures\ems\humming_ems.paa"}, "" },
            { "EMS Red", "med", {"textures\ems\EMS_LTB.paa", "textures\ems\EMS_LTB.paa"}, "" },
            { "Sheriff", "civ", {"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"}, "" },
            { "Civ Blue", "civ", {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"}, "" },
            { "Civ Red", "civ", {"\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"}, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "EMS hems", "med", {"textures\ems\paramedic_hems.paa"}, "" },
            { "시바견", "civ", {"textures\civ\shibainu.paa"}, "" },
            { "monster", "civ", {"textures\civ\civ_hummingbird_Monster.paa"}, "" }
        };
    };

    class C_Heli_Light_01_civil_F { //m900
        vItemSpace = 100;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 655000;
        textures[] = {};
    };

    class C_Heli_light_01_sunset_F : C_Heli_Light_01_civil_F{};
    class C_Heli_light_01_graywatcher_F : C_Heli_Light_01_civil_F{};
    class C_Heli_light_01_wasp_F : C_Heli_Light_01_civil_F{};
    class C_Heli_light_01_blueLine_F : C_Heli_Light_01_civil_F{};
    class C_Heli_light_01_luxe_F : C_Heli_Light_01_civil_F{};


    class B_Heli_Light_01_armed_F : B_Heli_Light_01_F{};

    class B_Heli_Attack_01_F { // BLACKFOOT
        vItemSpace = 150;
        conditions = "";
        price = 4155000;
        textures[] = {};
    };

    class B_Heli_Light_01_stripped_F { // humming stripped
        vItemSpace = 90;
        conditions = "";
        price = 455000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class O_Heli_Light_02_unarmed_F { //orca
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Orca Green", "civ", {
                "textures\civ\civ_orca_green.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS orange", "med", {
                "textures\ems\EMSorca.paa"
            }, "" }
        };
    };

    class I_Heli_Transport_02_F { //mohawk
        vItemSpace = 275;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 1255000;
        textures[] = {
            { "EMS Red", "med", {
                "textures\ems\med_mohawk.paa",
                "textures\ems\med_mohawk2.paa",
                "textures\ems\med_mohawk3.paa"
            }, "" },
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            }, "" },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            }, "" },
            { "Black", "cop", {
                "a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "Rebel CAMO", "reb", {
                "textures\rebel\reblbirdcamo1.paa"
            }, "" }
        };
    };

    class I_Heli_light_03_unarmed_F : O_Heli_Light_02_unarmed_F{}; // hellcat : orca

    class B_Heli_Transport_03_unarmed_F { //HURON
        vItemSpace = 350;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 1800000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "trooper", "civ", {
                "textures\civ\don_stormtrooper_huron_front.paa", "textures\civ\don_stormtrooper_huron_back.paa"
            }, "" },
            { "Dragon", "civ", {
                "textures\civ\civ_huron_dragon1.paa", "textures\civ\civ_huron_dragon2.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "textures\rebel\reblbirdcamo1.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class O_Heli_Transport_04_F { //TARU
        vItemSpace = 250;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 2355000;
        textures[] = {
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Heli_Transport_04_medevac_F : O_Heli_Transport_04_F{};

    class O_Heli_Transport_04_covered_F {
        vItemSpace = 150;
        conditions = "";
        price = 1250000;
        textures[] = {};
    };

    class O_Heli_Transport_04_bench_F {
       vItemSpace = 150;
       conditions = "";
       price = 1250000;
       textures[] = {};
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 250000;
        textures[] = {};
    };

    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 17500;
        conditions = "license_civ_trucking || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 620000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 40000;
        conditions = "license_civ_trucking || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 800000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class Jonzie_Tanker_Truck { //탱크로리 거대
        vItemSpace = 70;
        vFuelSpace = 52000;
        conditions = "license_civ_trucking || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 2500000;
        textures[] = {};
    };

    class B_Truck_01_Repair_F {
        vItemSpace = 60;
        vFuelSpace = 250000;
        conditions = "";
        price = 295000;
        textures[] = {};
    };

    class B_Truck_01_ammo_F {
        vItemSpace = 60;
        vFuelSpace = 250000;
        conditions = "";
        price = 55000;
        textures[] = {};
    };

    class O_MBT_02_cannon_F {
        vItemSpace = 60;
        vFuelSpace = 250000;
        conditions = "";
        price = 255000;
    };

    class O_Plane_CAS_02_F {
        vItemSpace = 60;
        vFuelSpace = 250000;
        conditions = "";
        price = 65000000;
    };

    class B_UAV_01_F {
        vItemSpace = 10;
        vFuelSpace = 50000;
        conditions = "";
        price = 300000;
    };
    ////////////////////////////// ADDON
    class max_bike_police {
        vItemSpace = 20;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_ducati_police_p {
        vItemSpace = 20;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 700000;
        textures[] = {};
    };

    class max_impala_security {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_bmw_gend {
        vItemSpace = 40;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 300000;
        textures[] = {};
    };

    class Mrshounka_rs4_gend_p_blanc {
        vItemSpace = 40;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1500000;
        textures[] = {};
    };

    class shounka_a3_audiq7_v2_gendarmerie {
        vItemSpace = 80;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1800000;
        textures[] = {};
    };

    class Mrshounka_agera_gend_p {
        vItemSpace = 30;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 2300000;
        textures[] = {};
    };

    class 77FuryShr {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 200000;
        textures[] = {};
    };

    class 77FuryCop {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 200000;
        textures[] = {};
    };

    class Mrshounka_rs_2015_g {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 500000;
        textures[] = {};
    };

    class shounka_a3_508banalise {
        vItemSpace = 70;
        conditions = "";
        price = 230000;
        textures[] = {};
    };

    class shounka_a3_508gend : shounka_a3_508banalise{};
    class shounka_a3_508pol : shounka_a3_508banalise{};

    class shounka_a3_brinks_grise {
        vItemSpace = 80;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 800000;
        textures[] = {};
    };

    class Mrshounka_a3_308_gend {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 150000;
        textures[] = {};
    };

    class Mrshounka_308pol : Mrshounka_a3_308_gend{};

    class max_BP_charger {
        vItemSpace = 70;
        conditions = "";
        price = 190000;
        textures[] = {};
    };

    class max_Charger_undercover : max_BP_charger{};
    class max_FBI_charger_undercover : max_BP_charger{};
    class max_Charger_Lapd : max_BP_charger{};
    class max_CrownVic_lapd : max_BP_charger{};

    class max_BP_tahoe {
        vItemSpace = 60;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 230000;
        textures[] = {};
    };

    class Mrshounka_Volkswagen_Touareg_police_police {
        vItemSpace = 60;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 210000;
        textures[] = {};
    };

    class max_FBI_tahoe_undercover {
         vItemSpace = 120;
         conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
         price = 300000;
         textures[] = {};
    };

    class max_bus_pris {
         vItemSpace = 220;
         conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
         price = 400000;
         textures[] = {};
    };

    class shounka_a3_gendsprinter {
         vItemSpace = 160;
         conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
         price = 800000;
         textures[] = {};
    };

    class max_van_sheriff {
         vItemSpace = 120;
         conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
         price = 340000;
         textures[] = {};
    };

    class max_FBI_van {
         vItemSpace = 120;
         conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
         price = 500000;
         textures[] = {};
    };

    class max_FBI_tahoe {
         vItemSpace = 120;
         conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
         price = 400000;
         textures[] = {};
    };

    class police_heavy_heli {  //orca police
         vItemSpace = 130;
         conditions = "license_cop_cAir";
         price = 700000;
         textures[] = {};
    };

    class shounka_nemo_pompier {
        vItemSpace = 30;
        conditions = "";
        price = 100000;
        textures[] = {};
    };

    class max_ambulance {
        vItemSpace = 130;
        conditions = "";
        price = 350000;
        textures[] = {};
    };

    class max_firetruck {
        vItemSpace = 130;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class max_towtruck {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 700000;
        textures[] = {};
    };

    class max_HEMS_heli {
        vItemSpace = 120;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    //Civilian Addon
    //Civ Truck

    class shounka_a3_dafxf_euro6_f {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1900000;
        textures[] = {};
    };

    class Mrshounka_a3_iveco_f {
        vItemSpace = 480;
        conditions = "license_civ_trucking || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 2550000;
        textures[] = {};
    };

    class shounka_a3_renaultmagnum_f {
        vItemSpace = 560;
        conditions = "license_civ_trucking || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 3500000;
        textures[] = {};
    };

    class sab_RobinDR400_5 {
        vItemSpace = 100;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 2000000;
        textures[] = {};
    };

    // Apex DLC
    class C_Plane_Civil_01_F {
        vItemSpace = 100;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 1500000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"}
            }
        };
    };

    class C_Plane_Civil_01_racing_F {
        vItemSpace = 200;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 2200000;
        textures[] = {};
    };


    class sab_cuav_trojan {
        vItemSpace = 30;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 700000;
        textures[] = {};
    };

    class sab_cuav_piper {
        vItemSpace = 50;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 1250000;
        textures[] = {};
    };

    class sab_FAAllegro {
        vItemSpace = 60;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 1400000;
        textures[] = {};
    };

    class sab_ultralight {
        vItemSpace = 60;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 1000000;
        textures[] = {};
    };

    class R_HotairBalloon {
        vItemSpace = 500;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 3000000;
        textures[] = {};
    };

    //Civ Boat
    class B_CBS_WaterShadow730_F {
        vItemSpace = 120;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 1500000;
        textures[] = {};
    };

    class BirdKTM_BambooRaft {
        vItemSpace = 100;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 50000;
        textures[] = {};
    };

    class COREV_O_SmallBoat {
        vItemSpace = 180;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 500000;
        textures[] = {};
    };

    class Lexx_Jetboat_H {
        vItemSpace = 150;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 2500000;
        textures[] = {};
    };

    class COREV_O_FishingBoat {
        vItemSpace = 260;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 3000000;
        textures[] = {};
    };

    class POP_Speed_yatch {
        vItemSpace = 210;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 4300000;
        textures[] = {};
    };

    class Mattaust_Fisher {
        vItemSpace = 600;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 10000000;
        textures[] = {};
    };

    class mr_max_freighter {
        vItemSpace = 500;
        conditions = "license_civ_boat || {license_cop_cg} || {call life_mediclevel >=1}";
        price = 5600000;
        textures[] = {};
    };

    //Civ Vehicle
    //class 적용값 : 기본값{};

    //랭글러 지프
    class Tal_Wrangler_Red {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1200000;
        textures[] = {};
    };

    class Tal_Wrangler_Pink : Tal_Wrangler_Red{};
    class Tal_Wrangler_White : Tal_Wrangler_Red{};

    //오픈 지프
    class max_AJ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 470000;
        textures[] = {};
    };

    //해골 갱 Bike
    class max_bike {
        vItemSpace = 20;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 250000;
        textures[] = {};
    };
    class max_bike1 : max_bike{};
    class max_bike2 : max_bike{};

    //Bowler Suv 2인승
    class Mrshounka_Bowler_c {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 400000;
        textures[] = {};
    };
    class Mrshounka_Bowler_c_noir : Mrshounka_Bowler_c{};
    class Mrshounka_Bowler_c_bleufonce : Mrshounka_Bowler_c{};

    //버기카
    class shounka_buggy {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 600000;
        textures[] = {};
    };
    class shounka_buggy_noir : shounka_buggy{};
    class shounka_buggy_bleufonce : shounka_buggy{};
    class shounka_buggy_orange : shounka_buggy{};

    //낡은 버스
    class max_bus {
        vItemSpace = 150;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1500000;
        textures[] = {};
    };

    //닷지 차져 2015년 버전
    class Mrshounka_a3_dodge15_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 260000;
        textures[] = {};
    };
    class Mrshounka_a3_dodge15_civ_noir : Mrshounka_a3_dodge15_civ{};
    class Mrshounka_a3_dodge15_civ_bleufonce : Mrshounka_a3_dodge15_civ{};

    //시보렛 Avalanche
    class shounka_avalanche {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 150000;
        textures[] = {};
    };
    class shounka_avalanche_noir : shounka_avalanche{};
    class shounka_avalanche_bleufonce : shounka_avalanche{};

    //citroen c4  4인승 해치백
    class Mrshounka_c4_p_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 200000;
        textures[] = {};
    };
    class Mrshounka_c4_p_bleufonce : Mrshounka_c4_p_civ{};
    class Mrshounka_c4_p_violet : Mrshounka_c4_p_civ{};

    //citroen ds3 4인승  해치백
    class Mrshounka_a3_ds3_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 160000;
        textures[] = {};
    };
    class Mrshounka_a3_ds3_civ_noir : Mrshounka_a3_ds3_civ{};
    class Mrshounka_a3_ds3_civ_civ_orange : Mrshounka_a3_ds3_civ{};

    //citroen ds4  4인승  해치백
    class shounka_a3_ds4_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 150000;
        textures[] = {};
    };
    class shounka_a3_ds4_noir : shounka_a3_ds4_civ{};
    class shounka_a3_ds4_orange : shounka_a3_ds4_civ{};

    //citroen Nemo 귀여운 사각 ㅋ 2인승
    class shounka_nemo {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 170000;
        textures[] = {};
    };
    class shounka_nemo_noir : shounka_nemo{};
    class shounka_nemo_orange : shounka_nemo{};

    //Clio RS  4인승 해치백
    class shounka_a3_cliors_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 130000;
        textures[] = {};
    };
    class shounka_a3_cliors_civ_noir : shounka_a3_cliors_civ{};
    class shounka_a3_cliors_civ_bleufonce : shounka_a3_cliors_civ{};

    //crwonVic 옛날 세단 4인승
    class max_CrownVic_blue {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 170000;
        textures[] = {};
    };
    class max_CrownVic_red : max_CrownVic_blue{};
    class max_CrownVic_white : max_CrownVic_blue{};
    class max_CrownVic_taxi : max_CrownVic_blue{};

    //ducati 오토바이 1인승
    class Mrshounka_ducati_p {
        vItemSpace = 20;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1400000;
        textures[] = {};
    };
    class Mrshounka_ducati_p_noir : Mrshounka_ducati_p{};
    class Mrshounka_ducati_p_o : Mrshounka_ducati_p{};

    //GMC Vandura 봉고
    class Mrshounka_Vandura_civ {
        vItemSpace = 100;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 260000;
        textures[] = {};
    };
    class Mrshounka_Vandura_civ_noir : Mrshounka_Vandura_civ{};
    class Mrshounka_Vandura_civ_orange : Mrshounka_Vandura_civ{};

    //폭스바겐 골프
    class Mrshounka_golfvi_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 400000;
        textures[] = {};
    };
    class Mrshounka_golfvi_noir : Mrshounka_golfvi_civ{};
    class Mrshounka_golfvi_orange : Mrshounka_golfvi_civ{};

    //험머 H3  6인
    class max_H3_red {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 900000;
        textures[] = {};
    };
    class max_H3_black : max_H3_red{};

    //임팔라 세단 5인
    class max_impala_black {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 210000;
        textures[] = {};
    };
    class max_impala_white : max_impala_black{};

    //JEEP Blinde 4인승
    class Mrshounka_jeep_blinde_noir {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 450000;
        textures[] = {};
    };
    class Mrshounka_jeep_blinde_bleu : Mrshounka_jeep_blinde_noir{};
    class Mrshounka_jeep_blinde_rouge : Mrshounka_jeep_blinde_noir{};

    //jeep 그랜드 체로키 4인승
    class Mrshounka_cherokee_noir {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 500000;
        textures[] = {};
    };
    class Mrshounka_cherokee_noir_bleu : Mrshounka_cherokee_noir{};
    class Mrshounka_cherokee_noir_violet : Mrshounka_cherokee_noir{};

    //jeep 오픈 2인승
    class max_jeep_green {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 400000;
        textures[] = {};
    };
    class max_jeep_red : max_jeep_green{};
    class max_jeep_black : max_jeep_green{};

    //벤츠 구형 스포츠카
    class Mrshounka_mercedes_190_p_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 900000;
        textures[] = {};
    };

    //벤츠 c63 AMG 2015
    class Mrshounka_c63_2015_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 3200000;
        textures[] = {};
    };

    //벤츠 스프린터
    class shounka_a3_pompier_sprinter {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1000000;
        textures[] = {};
    };
    class shounka_a3_spr_civ : shounka_a3_pompier_sprinter{};

    //푸조 207 RC
    class Mrshounka_207_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 290000;
        textures[] = {};
    };

    //골프 308 GTI 푸조
    class Mrshounka_a3_308_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 370000;
        textures[] = {};
    };

    //포르쉐 카이엔
    class Mrshounka_cayenne_p_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1200000;
        textures[] = {};
    };

    //RENAULT 소형 해치백 2인승
    class Mrshounka_r5_noir {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 450000;
        textures[] = {};
    };
    class Mrshounka_r5_rose : Mrshounka_r5_noir{};

    // renault megane RS 2015  4인승 해치백 3도어
    class Mrshounka_megane_rs_2015_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 400000;
        textures[] = {};
    };

    //renault twingo 해치백 4인승 소형
    class Mrshounka_twingo_p {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 250000;
        textures[] = {};
    };

    //벤츠 스마트 2인승
    class Mrshounka_a3_smart_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 200000;
        textures[] = {};
    };
    class Mrshounka_a3_smart_civ_noir : Mrshounka_a3_smart_civ{};
    class Mrshounka_a3_smart_civ_bleu : Mrshounka_a3_smart_civ{};

    //SUV 5인승 맥스 - 파노라마선루프 SUV
    class max_suv_black {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 500000;
        textures[] = {};
    };
    class max_suv_UC : max_suv_black{};

    //옛날 van 6인승
    class max_van_white {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 300000;
        textures[] = {};
    };
    class max_van_cola : max_van_white{};
    class max_van_Grey : max_van_white{};
    class max_van_red : max_van_white{};
    class max_van_blue : max_van_white{};
    class max_van_green : max_van_white{};

    //폭스바겐 투아렉 4인승 suv
    class Mrshounka_Volkswagen_Touareg_bleufonce {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 300000;
        textures[] = {};
    };

    //야마하 오토바이
    class Mrshounka_yamaha_p {
        vItemSpace = 20;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 240000;
        textures[] = {};
    };
    class Mrshounka_yamaha_p_noir : Mrshounka_yamaha_p{};

    //Donator Civ Vehicle
    //썰매
    class jean_sleigh {
        vItemSpace = 20;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 3300000;
        textures[] = {};
    };

    //몬스터트럭
    class A3L_MonsterTruck {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 2700000;
        textures[] = {};
    };

    //아제라 스포츠
    class Mrshounka_agera_p {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 5700000;
        textures[] = {};
    };
    class Mrshounka_agera_p_bleu : Mrshounka_agera_p{};
    class Mrshounka_agera_p_jaune : Mrshounka_agera_p{};

    //닷지 차져
    class max_charger_black {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 360000;
        textures[] = {};
    };
    class max_charger_blue : max_charger_black{};
    class max_charger_red : max_charger_black{};
    class max_charger_yellow : max_charger_black{};

    //LT sport
    class dbo_LT_01 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 600000;
        textures[] = {};
    };

    //라이칸 하이퍼스포트
    class Mrshounka_lykan_c {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 6700000;
        textures[] = {};
    };

    //Flipcar
    class A3L_Flipcar {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1700000;
        textures[] = {};
    };

    //롤스로이스 팬텀 검정 ( 대통령차)
    class max_vipcar {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 5100000;
        textures[] = {};
    };

    //쇼핑카
    class sga_shopping_cart {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 500000;
        textures[] = {};
    };

    //쇼핑카 몬스터
    class sga_shopping_cart_monster {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 800000;
        textures[] = {};
    };

    //호버 보드
    class sga_hover_board {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1000000;
        textures[] = {};
    };

    //Luxury Vehicle

    //1969 Dodge 슈퍼 비
    class SIG_SuperBeeB {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 400000;
        textures[] = {};
    };
    class SIG_SuperBee : SIG_SuperBeeB{};
    class SIG_SuperBeeY : SIG_SuperBeeB{};

    //아우디 RS4
    class Mrshounka_rs4_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 750000;
        textures[] = {};
    };
    class Mrshounka_rs4_civ_bleufonce : Mrshounka_rs4_civ{};
    class Mrshounka_rs4_civ_orange : Mrshounka_rs4_civ{};

    //아우디 RS5
    class shounka_a3_rs5_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 900000;
        textures[] = {};
    };
    class shounka_a3_rs5_civ_bleufonce : shounka_a3_rs5_civ{};
    class shounka_a3_rs5_civ_orange : shounka_a3_rs5_civ{};

    //아우디 RS6
    class shounka_rs6 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1000000;
        textures[] = {};
    };
    class shounka_rs6_bleufonce : shounka_rs6{};
    class shounka_rs6_orange : shounka_rs6{};

    //BMW 1 시리즈 M세단
    class Mrshounka_bmwm1_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 400000;
        textures[] = {};
    };
    class Mrshounka_bmwm1_civ_noir : Mrshounka_bmwm1_civ{};
    class Mrshounka_bmwm1_civ_bleufonce : Mrshounka_bmwm1_civ{};
    class Mrshounka_bmwm1_civ_orange : Mrshounka_bmwm1_civ{};

    //BMW 세단 2인승  검정
    class max_BMW {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 500000;
        textures[] = {};
    };
    class max_BMW1 : max_BMW{};
    class max_BMW2 : max_BMW{};

    //BMW  GTR3레이싱
    class max_BMW_M3_GTR {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 2100000;
        textures[] = {};
    };
    class max_BMW_M3_GTR1 : max_BMW_M3_GTR{};
    class max_BMW_M3_GTR2 : max_BMW_M3_GTR{};

    //BMW M 6
    class Mrshounka_bmwm6_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1200000;
        textures[] = {};
    };
    class Mrshounka_bmwm6_noir : Mrshounka_bmwm6_civ{};
    class Mrshounka_bmwm6_orange : Mrshounka_bmwm6_civ{};

    //시보레 몬스터 트럭
    class shounka_monsteur {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 3700000;
        textures[] = {};
    };
    class shounka_monsteur_noir : shounka_monsteur{};
    class shounka_monsteur_orange : shounka_monsteur{};

    //페라리 f430 스파이더
    class shounka_f430_spider {
        vItemSpace = 50;
        conditions = "";
        price = 7700000;
        textures[] = {};
    };
    class shounka_f430_spider_noir : shounka_f430_spider{};
    class shounka_f430_spider_bleufonce : shounka_f430_spider{};
    class shounka_f430_spider_rouge : shounka_f430_spider{};
    class shounka_f430_spider_jaune : shounka_f430_spider{};
    class shounka_f430_spider_rose : shounka_f430_spider{};
    class shounka_f430_spider_grise : shounka_f430_spider{};
    class shounka_f430_spider_violet : shounka_f430_spider{};
    class shounka_f430_spider_orange : shounka_f430_spider{};

    //Ford gt 스포츠카
    class shounka_gt {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 700000;
        textures[] = {};
    };
    class shounka_gt_noir : shounka_gt{};
    class shounka_gt_bleufonce : shounka_gt{};
    class shounka_gt_rouge : shounka_gt{};
    class shounka_gt_jaune : shounka_gt{};
    class shounka_gt_rose : shounka_gt{};
    class shounka_gt_grise : shounka_gt{};
    class shounka_gt_violet : shounka_gt{};
    class shounka_gt_orange : shounka_gt{};

    //ford 머스탱
    class Mrshounka_mustang_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 540000;
        textures[] = {};
    };
    class Mrshounka_mustang_mat : Mrshounka_mustang_civ{};
    class Mrshounka_mustang_noir : Mrshounka_mustang_civ{};
    class Mrshounka_mustang_mat_n : Mrshounka_mustang_civ{};
    class Mrshounka_mustang_bleufonce : Mrshounka_mustang_civ{};
    class Mrshounka_mustang_mat_b : Mrshounka_mustang_civ{};
    class Mrshounka_mustang_rouge : Mrshounka_mustang_civ{};
    class Mrshounka_mustang_jaune : Mrshounka_mustang_civ{};
    class Mrshounka_mustang_rose : Mrshounka_mustang_civ{};
    class Mrshounka_mustang_grise : Mrshounka_mustang_civ{};
    class Mrshounka_mustang_violet : Mrshounka_mustang_civ{};
    class Mrshounka_mustang_orange : Mrshounka_mustang_civ{};

    //험머 H1  //4인
    class Mrshounka_hummer_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1200000;
        textures[] = {};
    };
    class Mrshounka_hummer_civ_noir : Mrshounka_hummer_civ{};
    class Mrshounka_hummer_civ_orange : Mrshounka_hummer_civ{};

    //험머     H2 //4인
    class shounka_h2 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1100000;
        textures[] = {};
    };
    class shounka_h2_noir : shounka_h2{};
    class shounka_h2_orange : shounka_h2{};

    //람보르기니 가야르도
    class max_lambo {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 6700000;
        textures[] = {};
    };
    class max_lambo1 : max_lambo{};
    class max_lambo2 : max_lambo{};

    //람보르기니 우라칸 // huracan
    class mrshounka_huracan_c {
        vItemSpace = 50;
        conditions = "";
        price = 8700000;
        textures[] = {};
    };
    class mrshounka_huracan_c_noir : mrshounka_huracan_c{};
    class mrshounka_huracan_c_bleufonce : mrshounka_huracan_c{};
    class mrshounka_huracan_c_rouge : mrshounka_huracan_c{};
    class mrshounka_huracan_c_jaune : mrshounka_huracan_c{};
    class mrshounka_huracan_c_rose : mrshounka_huracan_c{};
    class mrshounka_huracan_c_grise : mrshounka_huracan_c{};
    class mrshounka_huracan_c_violet : mrshounka_huracan_c{};
    class mrshounka_huracan_c_orange : mrshounka_huracan_c{};

    //람보르기니 베네노 veneno
    class Mrshounka_veneno_c {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 9000000;
        textures[] = {};
    };
    class Mrshounka_veneno_c_noir : Mrshounka_veneno_c{};
    class Mrshounka_veneno_c_bleu : Mrshounka_veneno_c{};
    class Mrshounka_veneno_c_jaune : Mrshounka_veneno_c{};

    //롤스로이스 팬텀 ( vip )  크롬색
    class max_vipcar1 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 4700000;
        textures[] = {};
    };

    //아우디 리무진
    class shounka_limo_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 6700000;
        textures[] = {};
    };
    class shounka_limo_civ_noir : shounka_limo_civ{};
    class shounka_limo_civ_bleufonce : shounka_limo_civ{};
    class shounka_limo_civ_orange : shounka_limo_civ{};

    //링컨 1969
    class Mrshounka_lincoln_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 1000000;
        textures[] = {};
    };
    class Mrshounka_lincoln_noir : Mrshounka_lincoln_civ{};
    class Mrshounka_lincoln_grise : Mrshounka_lincoln_civ{};

    //맥라렌 mp4-12c
    class shounka_mp4 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 7700000;
        textures[] = {};
    };

    //벤츠 CLK
    class shounka_clk {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 2700000;
        textures[] = {};
    };

    //닛산 GTR 2012
    class Mrshounka_a3_gtr_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 2000000;
        textures[] = {};
    };
    class Mrshounka_a3_gtr_civ_noir : Mrshounka_a3_gtr_civ{};
    class Mrshounka_a3_gtr_civ_bleu : Mrshounka_a3_gtr_civ{};

    //파가니 huayra
    class Mrshounka_pagani_c {
        vItemSpace = 50;
        conditions = "";
        price = 5700000;
        textures[] = {};
    };
    class Mrshounka_pagani_c_noir : Mrshounka_pagani_c{};
    class Mrshounka_pagani_c_bleufonce : Mrshounka_pagani_c{};
    class Mrshounka_pagani_c_jaune : Mrshounka_pagani_c{};

    //푸조 308 오픈카 2인승
    class Mrshounka_a3_308_rcz {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 800000;
        textures[] = {};
    };
    class Mrshounka_a3_308_rcz_noir : Mrshounka_a3_308_rcz{};
    class Mrshounka_a3_308_rcz_bleufonce : Mrshounka_a3_308_rcz{};

    //푸조 508 세단
    class shounka_a3_peugeot508_civ_noir {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 500000;
        textures[] = {};
    };
    class shounka_a3_peugeot508_civ_bleufonce : shounka_a3_peugeot508_civ_noir{};
    class shounka_a3_peugeot508_civ_rouge : shounka_a3_peugeot508_civ_noir{};

    //포르쉐 911
    class shounka_porsche911 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 2700000;
        textures[] = {};
    };

    //포르쉐 911 92년식
    class mrshounka_92_civ {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 2100000;
        textures[] = {};
    };

    //옛날 머슬카 Transam 2인승
    class shounka_transam {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 600000;
        textures[] = {};
    };

    //UFO
    class max_CG_heli {
        vItemSpace = 50;
        conditions = "";
        price = 10000000;
        textures[] = {};
    };

    //SWATVAN
    class max_swatvan {
        vItemSpace = 50;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };

    class B_T_VTOL_01_infantry_F {
         vItemSpace = 550;
         conditions = "";
         price = 35000000;
         textures[] = {};
    };
    class B_T_VTOL_01_vehicle_F {
         vItemSpace = 550;
         conditions = "";
         price = 37000000;
         textures[] = {};
    };

    class bv_gtr_spec_v_cop_patrol {
        vItemSpace = 50;
        conditions = "";
        price = 500000;
        textures[] = {};
    };
    class bv_caressa_gt_cop_patrol : bv_gtr_spec_v_cop_patrol{};
    class bv_458_cop_patrol : bv_gtr_spec_v_cop_patrol{};
    class bv_shelly_cop_patrol : bv_gtr_spec_v_cop_patrol{};
    class bv_the_crowner_cop_patrol : bv_gtr_spec_v_cop_patrol{};
    class bv_the_crowner_uc : bv_gtr_spec_v_cop_patrol{};
    class bv_the_crowner_cop_patrol_interceptor : bv_gtr_spec_v_cop_patrol{};
    class bv_the_crowner_cop_emt : bv_gtr_spec_v_cop_patrol{};
    class bv_the_crowner_cop_sher : bv_gtr_spec_v_cop_patrol{};
    class bv_e60_m5_cop_emt : bv_gtr_spec_v_cop_patrol{};
    class bv_e60_m5_cop_patrol : bv_gtr_spec_v_cop_patrol{};
    class bv_e60_m5_cop_interceptor : bv_gtr_spec_v_cop_patrol{};

    class shounka_harley_a3 {
         vItemSpace = 100;
         conditions = "";
         price = 30000000;
         textures[] = {};
    };

    class dbo_crosser {
        vItemSpace = 20;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 300000;
        textures[] = {};
    };

    class sfp_wheelchair {
        vItemSpace = 100;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 50000;
        textures[] = {};
    };
    class Skyline_Bus_01_F {
        vItemSpace = 300;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 2500000;
        textures[] = {};
    };

    class ivory_rs4 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 750000;
        textures[] = {};
    };

    class ivory_e36 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 700000;
        textures[] = {};
    };

    class ivory_m3 {
        vItemSpace = 50;
        conditions = "";
        price = 800000;
        textures[] = {};
    };
    class ivory_m3_marked : ivory_m3{};
    class ivory_m3_slicktop : ivory_m3{};
    class ivory_m3_unmarked : ivory_m3{};


    class ivory_suburban {
        vItemSpace = 75;
        conditions = "";
        price = 800000;
        textures[] = {};
    };
    class ivory_suburban_marked : ivory_suburban{};
    class ivory_suburban_slicktop : ivory_suburban{};
    class ivory_suburban_unmarked : ivory_suburban{};
    class ivory_suburban_ems : ivory_suburban{};

    class ivory_isf {
        vItemSpace = 50;
        conditions = "";
        price = 800000;
        textures[] = {};
    };
    class ivory_isf_marked : ivory_isf{};
    class ivory_isf_unmarked : ivory_isf{};
    class ivory_isf_slicktop : ivory_isf{};

    class ivory_190e {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 600000;
        textures[] = {};
    };
    class ivory_190e_taxi : ivory_190e{};

    class ivory_evox {
        vItemSpace = 50;
        conditions = "";
        price = 700000;
        textures[] = {};
    };
    class ivory_evox_marked : ivory_evox{};
    class ivory_evox_unmarked : ivory_evox{};
    class ivory_evox_slicktop : ivory_evox{};

    class ivory_r34 {
        vItemSpace = 50;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 850000;
        textures[] = {};
    };

    class ivory_gti {
        vItemSpace = 40;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 600000;
        textures[] = {};
    };

    class ivory_veyron {
        vItemSpace = 80;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 7000000;
        textures[] = {};
    };

    class ivory_gt500 {
        vItemSpace = 80;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 7000000;
        textures[] = {};
    };

    class ivory_supra_topsecret {
        vItemSpace = 80;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 7000000;
        textures[] = {};
    };

    class ivory_lfa {
        vItemSpace = 80;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 7000000;
        textures[] = {};
    };

    class ivory_elise {
        vItemSpace = 80;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 7000000;
        textures[] = {};
    };

    class ivory_f1 {
        vItemSpace = 80;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 7000000;
        textures[] = {};
    };

    class ivory_mp4 {
        vItemSpace = 80;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 7000000;
        textures[] = {};
    };

    class ivory_c {
        vItemSpace = 80;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 7000000;
        textures[] = {};
    };

    class ivory_supra {
        vItemSpace = 80;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 7000000;
        textures[] = {};
    };

    class Jonzie_Forklift {
        vItemSpace = 30;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 200000;
        textures[] = {};
    };

    class Jonzie_Tow_Truck {
        vItemSpace = 150;
        conditions = "license_civ_driver || {call life_coplevel >=1} || {call life_mediclevel >=1}";
        price = 2000000;
        textures[] = {};
    };

    class mr_stretcher {
        vItemSpace = 20;
        conditions = "";
        price = 700000;
        textures[] = {};
    };

    class A3L_HospitalBed2015 {
        vItemSpace = 20;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };

	class ARMSCor_A109_Civ { //빨간 헬기
        vItemSpace = 220;
        conditions = "license_civ_pilot || {license_med_mAir}";
        price = 800000;
        textures[] = {};
    };

	class Boeing_CH_47_F_T { //치누크 갈색
        vItemSpace = 350;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 1800000;
        textures[] = {};
    };

	class ej_S94 { //UH-60 시리즈 노 어드밴스(미래형,시민,메딕)
        vItemSpace = 400;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 85000000;
        textures[] = {};
    };
	class ej_UH60M_UT : ej_S94{};
	class ej_UH60M_MEV : ej_S94{};
	class ej_UH92_MEV : ej_S94{};

	class kyo_CH47_HC3 { //치누크 갈색 노 어드밴스(경찰&반군)
        vItemSpace = 350;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 90000000;
        textures[] = {};
    };

	class kyo_MH47E_HC : kyo_CH47_HC3{};


	/// 경매 특별 // 카샵에는 안팔고 디비로만 넣어줄차
	class bv_458_skin_camo { // 카모 페라리
         vItemSpace = 60;
         conditions = "";
         price = 5000000;
         textures[] = {};
    };

    class bv_458_skin_camo_urban { //카모 얼반 페라리
         vItemSpace = 60;
         conditions = "";
         price = 5000000;
         textures[] = {};
    };

    class bv_monster_skin_camo { // 카모 몬스터 트럭
         vItemSpace = 60;
         conditions = "";
         price = 5000000;
         textures[] = {};
    };

    class bv_caressa_gt_burgundy { // 포르쉐 카레라 GT 레드와인
         vItemSpace = 60;
         conditions = "";
         price = 5000000;
         textures[] = {};
    };
};
