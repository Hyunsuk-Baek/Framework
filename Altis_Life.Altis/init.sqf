/*
    File: init.sqf
    Author:

    Description:

*/
StartProgress = false;

if (hasInterface) then {
    [] execVM "briefing.sqf"; //Load Briefing
};
[] execVM "KRON_Strings.sqf";

//Custom Script
[] execVM "Custom\statusbar_loop.sqf";  //Status Bar Loop
[] execVM "Custom\safezone.sqf";
[] execVM "Custom\CL.sqf";
[] execVM "admintools\loop.sqf";	//Admin Helper
[] execVM "Custom\teargas.sqf"; //TearGas
[] execVM "Custom\DynWeather.sqf
//null = [20] execVM "Custom\ALvolcano\alias_volcano.sqf"; //Volcano

//Cop & Medic Radio disable
enableRadio false;
enableSentences false;
StartProgress = true;


//--- Disable remote sensors (raycasting)
disableRemoteSensors true;

//--- Group cleanup
[] spawn {
  while {true} do {
    uiSleep 30;

    //--- Group cleanup
    {
      private _group = _x;

      //--- If group is local and empty
      if (local _group && {count units _group <= 0}) then {
        deleteGroup _x;
      };
    } forEach allGroups;
  };
};

//Maker Delete
////del_obj_1 ~ del_obj_18 에드온 수정으로 집 정상적으로 나와서 삭제함
{_x setMarkerAlphaLocal 0} forEach
[
  "del_obj_19","del_obj_20","del_obj_21","del_obj_westsea"
];