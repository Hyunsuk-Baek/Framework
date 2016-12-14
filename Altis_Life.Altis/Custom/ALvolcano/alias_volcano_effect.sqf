_volcano_object	= _this select 0;
_crater_radius 	= _this select 1;
_delay_erupt	= _this select 2;

//_volcano_object = "Land_HelipadEmpty_F" createVehicleLocal _v_pos;
//_crater 		= "Land_HelipadEmpty_F" createVehicleLocal getPosATL _volcano_object;

[_volcano_object] spawn {
	_volcano_voice = _this select 0;
	while {volcano} do { 
		_volcano_voice say3d "murmur_8";
		sleep 60;
	};
};

while {volcano} do {

if (((player distance _volcano_object)<2000) and (!isNull _volcano_object)) then {

fum_obj = "Land_HelipadEmpty_F" createVehicle [3600.13,1039.25,-0.055778];	//불꽃 및 바위 스폰 위치
foc_obj = "Land_HelipadEmpty_F" createVehicle [3600.13,1039.25,-0.055778];	//치솟는 불꽃

li_exp = "#lightpoint" createVehicle getPosATL _volcano_object;
li_exp lightAttachObject [_volcano_object, [0,0,50]];
li_exp setLightAttenuation [/*start*/ 0, /*constant*/0, /*linear*/ 0, /*quadratic*/ 0, /*hardlimitstart*/40,1000];  
li_exp setLightIntensity 1500;
li_exp setLightBrightness 30;
li_exp setLightDayLight true;	
li_exp setLightUseFlare true;
li_exp setLightFlareSize 500;
li_exp setLightFlareMaxDistance 2000;	
li_exp setLightAmbient[1,0.2,0.1];
li_exp setLightColor[1,0.2,0.1];

[li_exp] spawn {
	_luminafoc = _this select 0;
	while {volcano} do {
	_luminafoc setLightBrightness 59+ random 2;
	_luminafoc setLightAttenuation [/*start*/ 1.5+random 0.5, /*constant*/90+random 10, /*linear*/ 290+random 10, /*quadratic*/ 1, /*hardlimitstart*/59+random 3,/* hardlimitend*/1500]; 
	sleep 0.1;
	};
	deletevehicle _luminafoc;
};

// scantei
_sare = "#particlesource" createVehicleLocal getPosATL fum_obj;
_sare setParticleCircle [_crater_radius/2-20, [0, 0, 0]];
_sare setParticleRandom [0, [0.25, 0.25, 0], [0.175, 0.175, 13], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_sare setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 7, [0, 0, 30], [0, 0, 250], 0.3, 71, 7.9, 1, [5, 3, 1], [[1, 1, 1, 1], [1, 1, 1, 0], [1, 1, 1, 1]], [0.08], 1, 0, "", "", fum_obj,/*bounce*/0,true,0.01,[[0,0,0,0]]];
_sare setDropInterval 0.05;

// fum permanent
_fum_alb = "#particlesource" createVehicleLocal getPosATL fum_obj;
_fum_alb setParticleCircle [180,[0, 0, 0]];
_fum_alb setParticleRandom [0, [0, 0, 0], [0, 0, 0], 0, 0, [0, 0, 0, 0], 0, 0];
_fum_alb setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard", 1, 37, [0, 0, 0], [0, 0, 1], 15, 10, 7.9, 0.1, [65, 45, 35], [[0.5, 0.5, 0.5, 0], [0, 0, 0, 0.5], [0.5, 0.5, 0.5, 0]], [0.08], 1, 0, "", "", fum_obj];
_fum_alb setDropInterval 0.1;

// damage on player
_fum_alb setParticleFire [0.3,0,0.5];

_fum = "#particlesource" createVehicleLocal getPosATL fum_obj;
_fum setParticleCircle [150, [0, 0, 0]];
_fum setParticleRandom [30, [0.25, 0.25, 0], [0.175, 0.175, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
_fum setParticleParams [["\A3\data_f\cl_basic", 1, 0, 1], "", "Billboard", 1, 60, [0, 0, 0], [0, 0, 20], 30, 9, 7.9, 0.1, [70,80,100,110,200,300], [[0, 0, 0, 0], [0, 0, 0, 1], [0.2, 0.2, 0.2, 0.8], [0, 0, 0, 0.9], [0, 0, 0, 0.5], [0, 0, 0, 0]], [0.08], 1, 0, "", "", fum_obj];
_fum setDropInterval 0.05;


if (_delay_erupt>0) then {
while {(player distance _volcano_object)<2000} do {
	while {!alias_eruption} do {sleep 5};
	
	[_volcano_object] spawn {

		_volcano_lum = _this select 0;
		poz_sus = "Land_HelipadEmpty_F" createVehicleLocal [getPosATL _volcano_lum select 0,getPosATL _volcano_lum select 1,(getPosATL _volcano_lum select 2)+1000];
		lum_fulg = "#lightpoint" createVehicle getPosATL poz_sus;
		lum_fulg setLightAttenuation [/*start*/ 0, /*constant*/0, /*linear*/ 0, /*quadratic*/ 0, /*hardlimitstart*/40,2000];  
		lum_fulg setLightIntensity 0;
		lum_fulg setLightBrightness 0;
		lum_fulg setLightDayLight true;	
		lum_fulg setLightUseFlare true;
		lum_fulg setLightFlareSize 50;
		lum_fulg setLightFlareMaxDistance 2000;	
		lum_fulg setLightAmbient[1,0.2,0.1];
		lum_fulg setLightColor[1,0.2,0.1];			
			//lumina
			lum_fulg setLightIntensity 5000;
			lum_fulg setLightBrightness 10;
			sleep 0.3;

			lum_fulg setLightIntensity 5000;
			lum_fulg setLightBrightness 100;

			sleep 0.01;

			_intens_vf = 100;
			while {_intens_vf>0} do {
				_intens_vf = _intens_vf-1;
				lum_fulg setLightIntensity 0;
				lum_fulg setLightBrightness _intens_vf;
				sleep 0.1;
			};
		deleteVehicle lum_fulg;
		deleteVehicle poz_sus;
	};	
	
	enableCamShake true;
	if ((player distance _volcano_object)<400) then {addCamShake [0.2, 15, 45];};

if (shape_tip == "bolovani") then {
	// bolovani
	_bolovani = "#particlesource" createVehicleLocal getPosATL fum_obj;
	_bolovani setParticleCircle [_crater_radius-15, [100, 100, 100]];
	_bolovani setParticleRandom [3, [0.25, 0.25, 0], [100, 100, 100], 0, 1, [0, 0, 0, 1], 0, 0];
	_bolovani setParticleParams [["\A3\data_f\ParticleEffects\Universal\Mud.p3d", 1, 0, 1], "", "SpaceObject", 1, 20, [0, 0, 0], [15,15, 250], random 3, 300, 5, 3, [2, 1, 1], [[0, 0, 0, 1], [0, 0, 0, 0.5], [0.5, 0.5, 0.5, 0]], [0.125], 1, 0, "", "", fum_obj,0,true,0.1,[[0,0,0,0]]];
	_bolovani setDropInterval 0.01;	
	_sok = ["d","n"] call BIS_fnc_selectRandom;
	if (_sok=="d") then {addCamShake [0.5, 13+ random 15, 7+random 13];};	
	//fum_obj say3d sunet_eruptie;
	[foc_obj] spawn {_fum_obj_s = _this select 0; sleep 2; _fum_obj_s say3d sunet_eruptie};
	sleep durata_eruptie;
	deleteVehicle _bolovani;
};


if (shape_tip == "scantei") then {
	// secundar
	_sare_sec = "#particlesource" createVehicleLocal getPosATL foc_obj;
	_sare_sec setParticleCircle [0, [0, 0, 0]];
	_sare_sec setParticleRandom [0, [0.25, 0.25, 0], [0, 0, 0], 0, 0.25, [0, 0, 0, 0.1], 0, 0];
	_sare_sec setParticleParams [["\A3\data_f\cl_exp", 1, 0, 1], "", "Billboard", 1, 7, [0, 0, 0], [0, 0,60], 15, 300, 7.9, 0.075, [50, 65, 80], [[1, 1, 1, 0.5], [1, 1, 1, 1], [1, 1, 1, 0.5]], [0.08], 1, 0, "", "", foc_obj];
	_sare_sec setDropInterval 0.1;	
	_sok = ["d","n"] call BIS_fnc_selectRandom;
	if (_sok=="d") then {addCamShake [0.5, 13+ random 15, 7+random 13];};	
	[foc_obj] spawn {_fum_obj_s = _this select 0; sleep 3; _fum_obj_s say3d sunet_eruptie};
	sleep durata_eruptie/10;
	deleteVehicle _sare_sec;
};

if (shape_tip == "schije") then {addCamShake [0.1, 13+ random 15, 7+random 13]};
	
	alias_eruption = false;
	publicVariable "alias_eruption";
	enableCamShake false; 
};
}else{
	if (!isNull li_exp) then {deleteVehicle li_exp;};
	if (!isNull fum_obj) then {deletevehicle fum_obj;};
//	if (!isNull lava_obj) then {deletevehicle lava_obj;};
};
while {(player distance _volcano_object)<2000} do {sleep 5};
};
};