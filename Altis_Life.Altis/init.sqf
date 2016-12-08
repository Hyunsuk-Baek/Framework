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


//Cop & Medic Radio disable
enableRadio false;
enableSentences false;

//Custom Script
[] execVM "admintools\loop.sqf";
[] execVM "Custom\safezone.sqf";
[] execVM "Custom\statusbar_loop.sqf";

StartProgress = true;
