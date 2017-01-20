#include "..\..\script_macros.hpp"
/*
    File: fn_restrainAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Restrains the target.
*/
private ["_unit"];
_unit = cursorObject;
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (_unit getVariable "restrained") exitWith {};
if (side _unit isEqualTo west) exitWith {};
if (player isEqualTo _unit) exitWith {};

if (side player isEqualTo civilian) then {
    if(life_inv_zipties < 1) exitWith { hintSilent "ziptie를 가지고 있지 않습니다"; };
    life_inv_zipties = life_inv_zipties - 1;
    hintSilent "시민을 ziptie로 불법체포하였습니다. 범죄항목 자동 추가됩니다.";
    [getPlayerUID player,profileName,"207"] remoteExecCall ["life_fnc_wantedAdd",RSERV]; //시민불법체포 범죄추가 
};

if (!isPlayer _unit) exitWith {};
//Broadcast!

_unit setVariable ["restrained",true,true];
[player] remoteExec ["life_fnc_restrain",_unit];

if (side player isEqualTo civilian) then {
    [0,"STR_NOTF_Restrained_civ",true,[_unit getVariable ["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
} else {
    [0,"STR_NOTF_Restrained",true,[_unit getVariable ["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
};

