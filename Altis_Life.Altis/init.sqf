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
[] execVM "Custom\randomWeather2.sqf";
[] execVM "Custom\statusbar_loop.sqf";  //Status Bar Loop
[] execVM "Custom\safezone.sqf";
[] execVM "Custom\CL.sqf";
[] execVM "admintools\loop.sqf";	//Admin Helper
[] execVM "Custom\teargas.sqf"; //TearGas

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
{_x setMarkerAlphaLocal 0} forEach
[
  "del_obj_1","del_obj_2","del_obj_3","del_obj_4","del_obj_5","del_obj_6","del_obj_7","del_obj_8","del_obj_9","del_obj_10","del_obj_11","del_obj_12","del_obj_13","del_obj_14","del_obj_15","del_obj_16","del_obj_17","del_obj_18", "del_obj_westsea"
];