private ["_chars", "_mode", "_display"];
_chars = _this select 0;
_mode = "";
_display = findDisplay 1000;
_Slot = 0;


switch (_this select 1) do 
{
	case 0: {_mode = "animateLetter.sqf";_Slot = 0;};
	case 1: {_mode = "animateLetter1.sqf";_Slot = 30;};
	case 2: {_mode = "animateLetter2.sqf";_Slot = 60;};
	case 3: {_mode = "animateLetter.sqf";_Slot = 90;};
	case 4: {_mode = "animateLetter1.sqf";_Slot = 120;};
	case 5: {_mode = "animateLetter2.sqf";_Slot = 150;};
	case 6: {_mode = "animateLetter1.sqf";_Slot = 180;};
	default {};
};

//Set up a pool of controls to use.
private ["_idcPool", "_sizePool"];
_idcPool = 5000;
_sizePool = 210;
controls = [];

for "_i" from _Slot to (_Slot + 30) do 
{
	_ctrl = _display displayCtrl (_idcPool + _i);
	controls = controls + [_ctrl];
	waituntil{ctrlCommitted _ctrl};
};

//Parse the array of characters.
for "_i" from 0 to 29 do 
{
	sleep 0.06;
	_ctrl = controls select 0;
	
	//Send character to the animation engine.
	if !(isNil "_ctrl") then 
	{
		[_ctrl, (_chars select _i), _i, _Slot] execVM _mode;
	};
	sleep 0.06;
};
i = i + 1;
true