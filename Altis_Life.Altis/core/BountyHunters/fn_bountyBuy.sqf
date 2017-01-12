#include "..\..\script_macros.hpp"
/*
	File: fn_bountyBuy.sqf
	Author: !TS JORDAN
	Originally Made for: Underbelly ArmA 
	
	Description: Creates a GUI message when someone wants to buy the bounty hunting license.
*/

private ["_aciton","_unit","_atm"];

_unit = player;

if(playerSide != civilian) exitWith {hint "오직 시민만이 현상금 사냥꾼 라이센스를 구매할 수 있습니다"};
if(life_cash < 100000) exitWith {hint "썩 10만원을 꺼내오지 못해? "};
if(license_civ_bountyH) exitWith {hint "이미 현상금 사냥꾼 라이센스가 있습니다. 정신똑바로차리세요"};

_action = [
    format [localize "STR_GNOTF_BountyMSG"],
    localize "STR_Bounty_License",
    localize "STR_Global_Yes",
    localize "STR_Global_No"
] call BIS_fnc_guiMessage;

if (_action) then {
	hint parseText format["<t color='#FA4F4F'><t size='1.5'>현상금 사냥꾼이 된 것을 환영합니다! </t></t><br/><br/><t size='1.2'>현상금 사냥꾼은 이곳의 [나쁜놈]들을 제거하여 AOSOUL LIFE를 더 살기 쾌적한 곳으로 만들고 싶어하는 일종의 자경단입니다. 그러나 현상금을 빌미로 NONRP KILL(RDM) 은 절대 허용되지 않습니다. </t>"];
	life_cash = life_cash - 100000;
	[100] remoteExecCall ["life_fnc_removeLicenses",_unit];
} else {
	hint "당장 이곳에서 떠나게!!";
};
