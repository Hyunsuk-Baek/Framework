_alias_delay	= _this select 0;
_alias_radius	= 200;
_alias_volcano = "Land_HelipadEmpty_F" createVehicle [3600.13,1039.25,-0.055778];	//조명
poz_vul = [3600.13,1039.25,-0.055778];	//연기

[[[_alias_volcano, _alias_radius,_alias_delay],"Custom\ALvolcano\alias_volcano_effect.sqf"],"BIS_fnc_execVM",true,true] spawn BIS_fnc_MP;

alias_eruption = false;
publicVariable "alias_eruption";

volcano=true;
publicVariable "volcano";

if (_alias_delay>0) then {

	// curata vulcan

	[_alias_delay,_alias_volcano] spawn {
		_alias_delay_temp = _this select 0;
		_alias_volcano_su = _this select 1;
		while {volcano} do {
		// _change_intervaL minim 15
		shape_change_interval = _alias_delay_temp-3;
		publicVariable "shape_change_interval";
		// change forma
		shape_tip = ["bolovani","scantei","schije"] call BIS_fnc_selectRandom;
		publicVariable "shape_tip";
		// sunet eruptie
		sunet_eruptie = ["eruptie_1","eruptie_2","eruptie_3"] call BIS_fnc_selectRandom;
		publicVariable "sunet_eruptie";
		if (sunet_eruptie=="eruptie_1") then {
		durata_eruptie = 10};
		if (sunet_eruptie=="eruptie_2") then {
		durata_eruptie = 4};		
		if (sunet_eruptie=="eruptie_3") then {
		durata_eruptie = 19};
		if (shape_tip == "schije") then {
			[poz_vul] spawn {
				_loc_bomb = _this select 0;
				_nr_bat = floor (6+random 20);

				while {_nr_bat>0} do {
					private ["_vit_z","_vit_x","_vit_y","_schije","_li_exp"];
						
					_vit_z = 200+random 50;
					_vit_x = ([1,-1] call BIS_fnc_selectRandom)* floor (50+random 30);
					_vit_y = ([1,-1] call BIS_fnc_selectRandom)* floor (50+random 30);
					_schije = createVehicle ["Land_Battery_F", _loc_bomb, [], 20, "CAN_COLLIDE"];
					//ataseaza smoke la baterii
					[[[_schije],"Custom\ALvolcano\alias_schije.sqf"],"BIS_fnc_execVM",true,true] spawn BIS_fnc_MP;
					_schije setVelocity [_vit_x,_vit_y,_vit_z];
					[_schije] spawn {_de_delete = _this select 0; sleep floor (3+random 6);	deleteVehicle _de_delete;};
					_nr_bat = _nr_bat-1;
				};
			};
			sleep 0.7;
			[[_alias_volcano_su, sunet_eruptie], "say3d"] call BIS_fnc_MP;
			};
		publicVariable "durata_eruptie";		
		sleep _alias_delay_temp;
		};
	};

	while {volcano} do {
		sleep _alias_delay;
		alias_eruption = true;
		publicVariable "alias_eruption";
	};
};

while {volcano} do {sleep 5};
deleteVehicle _alias_volcano;