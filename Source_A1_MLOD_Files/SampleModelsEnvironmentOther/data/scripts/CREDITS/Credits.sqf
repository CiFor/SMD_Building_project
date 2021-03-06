//Create static camera.
/*private ["_camera"];
_camera = "camera" camCreate [(position player select 0), (position player select 1) + 1, 1.5];
_camera camSetTarget [(position player select 0), (position player select 1) + 200, 1.5];
_camera camSetFov 0.7;
_camera cameraEffect ["INTERNAL", "Back"];
_camera camCommit 0;
*/
sleep 1.5;
i = 0;
showCinemaBorder false;

//Dialog on which to display the animated letters. Defines 60 controls as a pool to use.
private ["_dlg"];
_dlg = createDialog "RscAnimatedLetters";
_line = 0;

_display = findDisplay 1000;

_ctrlBohemia = _display displayCtrl 900;
_ctrlBohemia ctrlSetFade 1;
_ctrlBohemia ctrlCommit 0;
_ctrlCopyrightBoh = _display displayCtrl 901;
_ctrlCopyrightBoh ctrlSetFade 1;
_ctrlCopyrightBoh ctrlCommit 0;
_ctrlCopyrightVorb = _display displayCtrl 902;
_ctrlCopyrightAL = _display displayCtrl 903;
_ctrlCopyrightAL ctrlSetFade 1;
_ctrlCopyrightAL ctrlCommit 0;
_ctrlCopyrightSpeex = _display displayCtrl 904;
_ctrlCopyrightSpeex ctrlSetFade 1;
_ctrlCopyrightSpeex ctrlCommit 0;
_ctrlCopyrightSpy = _display displayCtrl 905;
_ctrlCopyrightSpy ctrlSetFade 1;
_ctrlCopyrightSpy ctrlCommit 0;


_ctrlCopyrightVorb ctrlSetFade 1;
_ctrlCopyrightVorb ctrlCommit 0;
_ctrlTeam = _display displayCtrl 666;
_ctrlTeam ctrlSetFade 1;
_ctrlTeam ctrlCommit 0;



_ctrlBohemia ctrlSetFade 0;
_ctrlBohemia ctrlCommit 1;
sleep 2;
_ctrlBohemia ctrlSetFade 1;
_ctrlBohemia ctrlCommit 1;
sleep 2;

_ctrlTeam = _display displayCtrl 666;
//_ctrlTeam ctrlSetText "Team";


_ctrlTeam ctrlSetFade 1;
_ctrlTeam ctrlCommit 0;
sleep 1;
_ctrlTeam ctrlSetFade 0;
_ctrlTeam ctrlCommit 1;
sleep 1;
_ctrlTeam ctrlSetFade 1;
_ctrlTeam ctrlCommit 5;
//Credits director, controls the flow of what is shown.
//Pass: array of strings with single characters, animation mode.

//		Team
[["A", "d", "a", "m", " ", "B", "í", "l", "e", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["M", "a", "t", "t", "h", "e", "w", " ", "B", "l", "o", "o", "d", "-", "S", "m", "y", "t", "h", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["V", "i", "k", "t", "o", "r", " ", "B", "o", "c", "a", "n", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["A", "n", "d", "r", "e", "j", " ", "B", "o", "l", "e", "s", "l", "a", "v", "s", "k", "ý", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["D", "a", "n", "i", "e", "l", " ", "B", "r", "o", "w", "n", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["V", "o", "j", "t", "ě", "c", "h", " ", "B", "u", "d", "a", "y", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["N", "a", "t", "a", "s", "k", "a", " ", "B", "u", "g", "a", "y", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = 0; i = -1; waitUntil {i == _line};
[["I", "v", "a", "n", " ", "B", "u", "c", "h", "t", "a", " ", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["B", "r", "i", "a", "n", " ", "C", "a", "s", "p", "e", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["K", "a", "m", "i", "l", "a", " ", "C", "l", "a", "r", "o", "v", "á", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["D", "a", "v", "i", "d", " ", "C", "u", "p", "a", "n", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["P", "a", "v", "e", "l", " ", "D", "r", "o", "z", "h", "z", "h", "i", "n", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["S", "t", "e", "f", "a", "n", " ", "D", "u", "r", "m", "e", "k", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["R", "u", "s", "s", "e", "l", " ", "E", "s", "t", "m", "a", "n", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = 0; i = -1; waitUntil {i == _line};
[["D", "u", "š", "a", "n", " ", "F", "ä", "g", "e", "r", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["P", "e", "t", "e", "r", " ", "F", "e", "h", "e", "r", " ", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["F", "a", "n", "a", "t", "i", "c", " ", "G", "a", "m", "e", "s", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["P", "a", "v", "e", "l", " ", "G", "u", "g", "l", "a", "v", "a", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "a", "n", " ", "H", "l", "a", "v", "a", "t", "ý", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "a", "n", " ", "H", "o", "v", "o", "r", "a", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["A", "m", "y", " ", "H", "u", "c", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = 0; i = -1; waitUntil {i == _line};
[["J", "i", "ř", "í", " ", "J", "a", "k", "u", "b", "e", "c", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "o", "r", "i", "s", " ", "J", "a", "n", " ", "v", "a", "n", " ", "'", "t", " ", "L", "a", "n","d", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "a", "n", " ", "K", "l", "í", "m", "a", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["M", "a", "r", "t", "i", "n", " ", "K", "l", "í", "m", "a", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["Š", "t", "ě", "p", "á", "n", " ", "K", "m", "e", "n", "t", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["Š", "t", "ě", "p", "á", "n", " ", "K", "o", "n", "č", "e", "l", "í", "k", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "a", "n", " ", "K", "o", "n", "o", "p", "á", "s", "e", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = 0; i = -1; waitUntil {i == _line};
[["M", "a", "r", "i", "o", " ", "K", "u", "r", "t", "y", " ", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["M", "a", "r", "k", "u", "s", " ", "K", "u", "r", "z", "a", "w", "a", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["E", "a", "r", "l", " ", "L", "a", "a", "m", "a", "n", "e", "n", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["A", "l", "e", "x", "a", "n", "d", "r", "a", " ", "L", "á", "n", "s", "k", "á", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["H", "o", "w", "a", "r", "d", " ", "L", "o", "t", "k", "e", "r", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["M", "a", "r", "i", "a", "n", " ", "M", "a", "a", "r", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "i", "ř", "í", " ", "M", "a", "r", "t", "i", "n", "e", "k", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = 0; i = -1; waitUntil {i == _line};
[["O", "n", "d", "ř", "e", "j", " ", "M", "a", "t", "ě", "j", "k", "a", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["V", "á", "c", "l", "a", "v", " ", "M", "a", "z", "a", "n", "ý", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["P", "a", "v", "e", "l", " ", "M", "á", "z", "l", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["V", "l", "a", "d", "i", "m", "í", "r", " ", "N", "e", "j", "e", "d", "l", "ý", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["O", "n", "d", "ř", "e", "j", " ", "N", "o", "v", "á", "k", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["V", "o", "j", "t", "ě", "c", "h", " ", "N", "o", "v", "á", "k", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["R", "o", "b", "e", "r", "t", " ", "O", "r", "r", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = 0; i = -1; waitUntil {i == _line};
[["S", "l", "a", "v", "o", "m", "í", "r", " ", "P", "a", "v", "l", "í", "č", "e", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["T", "o", "m", "á", "š", " ", "P", "a", "v", "l", "i", "s", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["P", "e", "t", "r", " ", "P", "e", "c", "h", "a", "r", " ", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["G", "o", "t", "t", "f", "r", "i", "e", "d", " ", "P", "o", "h", "r", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["R", "o", "b", "e", "r", "t", " ", "P", "o", "l", "o", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "a", "n", " ", "P", "r", "a", "ž", "á", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["M", "i", "c", "h", "a", "e", "l", "a", " ", "P", "r", "o", "k", "o", "p", "o", "v", "á", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = 0; i = -1; waitUntil {i == _line};
[["K", "r", "i", "s", "t", "ý", "n", "a", " ", "P", "r", "ů", "c", "h", "o", "v", "á", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["T", "o", "m", "á", "š", " ", "P", "u", "l", "k", "r", "á", "b", "e", "k", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["P", "e", "t", "r", " ", "R", "a", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["W", "i", "l", "l", "i", "a", "m", " ", "R", "i", "c", "h", "a", "r", "d", "s", "o", "n", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "a", "m", "e", "s", " ", "R", "y", "a", "n", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "i", "ř", "í", " ", "R", "ý", "d", "l", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["E", "d", "u", "a", "r", "d", "o", " ", "S", "i", "m", "i", "o", "n", "i", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = 0; i = -1; waitUntil {i == _line};
[["J", "e", "f", "f", "r", "e", "y", " ", "S", "m", "i", "t", "h", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["L", "u", "k", "á", "š", " ", "S", "o", "u", "k", "e", "n", "k", "a", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["P", "a", "u", "l", " ", "R", ".", " ", "S", "t", "a", "t", "h", "a", "m", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "a", "n", " ", "S", "v", "o", "b", "o", "d", "a", " ", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "a", "k", "u", "b", " ", "Š", "i", "m", "e", "k", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["M", "a", "r", "e", "k", " ", "Š", "p", "a", "n", "ě", "l", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["O", "n", "d", "ř", "e", "j", " ", "Š", "p", "a", "n", "ě", "l", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = 0; i = -1; waitUntil {i == _line};
[["R", "o", "b", "e", "r", "t", " ", "Š", "t", "í", "p", "e", "k", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["E", "n", "r", "i", "c", "o", " ", "T", "u", "r", "r", "i", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["B", "a", "r", "t", " ", "v", "a", "n", " ", "P", "a", "a", "s", "s", "e", "n", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["M", "i", "c", "h", "a", "l", " ", "V", "o", "n", "d", "r", "á", "č", "e", "k", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["P", "e", "t", "r", " ", "V", "í", "š", "e", "k", " ", " ", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["T", "o", "m", "á", "š", " ", "W", "a", "l", "d", "a", "u", "f", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["J", "a", "n", " ", "Z", "a", "m", "e", "č", "n", "í", "k", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = 0; i = -1; waitUntil {i == _line};
[["R", "o", "m", "a", "n", " ", "Z", "a", "w", "a", "d", "a", " ", " ", " ", " ", " ", " ", " "," ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
[["M", "a", "r", "i", "u", "s", "z", " ", "A", "d", "a", "m", " ", "Z", "e", "l", "m", "a", "ñ", "s","k", "i", " ", " ", " ", " ", " ", " ", " ", " "], _line] execVM "animateLetters.sqf"; _line = _line + 1; waitUntil {i == _line};
sleep 28;

_ctrlCopyrightBoh ctrlSetFade 0;
_ctrlCopyrightBoh ctrlCommit 1;
sleep 2;
_ctrlCopyrightBoh ctrlSetFade 1;
_ctrlCopyrightBoh ctrlCommit 1;
sleep 2;

_ctrlCopyrightVorb ctrlSetFade 0;
_ctrlCopyrightVorb ctrlCommit 1;
sleep 2;
_ctrlCopyrightVorb ctrlSetFade 1;
_ctrlCopyrightVorb ctrlCommit 1;
sleep 2;

_ctrlCopyrightAL ctrlSetFade 0;
_ctrlCopyrightAL ctrlCommit 1;
sleep 2;
_ctrlCopyrightAL ctrlSetFade 1;
_ctrlCopyrightAL ctrlCommit 1;
sleep 2;

_ctrlCopyrightSpeex ctrlSetFade 0;
_ctrlCopyrightSpeex ctrlCommit 1;
sleep 2;
_ctrlCopyrightSpeex ctrlSetFade 1;
_ctrlCopyrightSpeex ctrlCommit 1;
sleep 2;

_ctrlCopyrightSpy ctrlSetFade 0;
_ctrlCopyrightSpy ctrlCommit 1;
sleep 2;
_ctrlCopyrightSpy ctrlSetFade 1;
_ctrlCopyrightSpy ctrlCommit 1;
sleep 2;




truee