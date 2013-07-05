private ["_control", "_dialog","_x","_delay","_mode","_OPT_basic_array", "_OPT_advanced_array","_OPT_all_array"];
private ["_transparency","_protected_idcs", "_action","_control_ref"];

_in_delay = 0.5;
_out_delay = 0.25;
_no_move = [0,0]; 
_hidden = 1;

_OPT_basic_array = [101,102,103,104,105,106,107,108,109,110,111,112,113,114,200,201,202,203,204,205,248,207,208,209,210,246,212,247,213,214,134,215,216,217,218,219,220,221,222,223,224,225,232,126,135,145,1220];
_OPT_advanced_array = [249,206,211,226,227,123,228,124,230,125,233,127,235,128,237,131,239,131,241,132,242,133,245,119,130];
  

//Checks if IDC exists and if it is active, then it will put it to an array 
//required to properly handle focusung ability of control when hiding/showing them

//Could cause assertions if game is closed with this dialog opened - solved by using string conversion 
//
generate_active_controls_list = {
	private ["_x"];
	CA_VO_active_controls = [];	
	
	for [{_x=0},{_x<=(350)},{_x=_x+1}] do 
	{
		_control = _x;
		_disp_ctrl = (_dialog displayCtrl _control); 

		if  (!isNull(_disp_ctrl)) then {
			if (ctrlEnabled _disp_ctrl) then { 
				//Using string insted of control to prevent assert due to not supported serialization of control variables
				CA_VO_active_controls = CA_VO_active_controls + [str(_disp_ctrl)];
			};
		};	  				
	};
	
};

//processIDCs is hiding, showing and moving controls
//array CA_VO_active_controls has to be present to ensure focus works properly
processIDCs = {
	private ["_processIDCs", "_ctrldelay"];
	
	_processIDCs = _this select 0;
	_fade =  _this select 1;
	_ctrl_delay =  _this select 2;
	_move_ctrl =  _this select 3;
	
	for [{_x=0},{_x<=(count _processIDCs)},{_x=_x+1}] do 
	{
		_control = _processIDCs select _x;
		_disp_ctrl = (_dialog displayCtrl _control); 

		switch _fade do 
		{
			case true: 
			{
				_disp_ctrl ctrlSetFade 1;
				//Disable controls to disallow focusing them
				_disp_ctrl ctrlEnable false;

			};
			case false: 
			{
				_disp_ctrl ctrlSetFade 0;
				//Restore focusability of the control 
				if (CA_VO_active_controls  find str(_disp_ctrl) != -1) then {
					_disp_ctrl ctrlEnable true; 
				};
			};
			
		};

		_posX = ((ctrlPosition _disp_ctrl) select 0)+ (_move_ctrl select 0); 
		_posY = ((ctrlPosition _disp_ctrl) select 1) +  (_move_ctrl select 1);
		_disp_ctrl ctrlSetPosition [_posX, _posY];  
				
		_disp_ctrl ctrlCommit _ctrl_delay;
	};
};

//Set text of switching button accordingly to dialog state
setTextOfButton_Advanced = {
	if (CA_VO_Advanced_visible) then {
		(_dialog displayCtrl 345) ctrlsettext (localize "STR_CA_ADV_HIDE");
	} else {
		(_dialog displayCtrl 345) ctrlsettext (localize "STR_CA_ADV_SHOW");
	};
};				

setTextOfButton_All = {
	if ( CA_VO_All_visible) then {
		(_dialog displayCtrl 344) ctrlsettext (localize "STR_CA_HIDE");
	} else {
		(_dialog displayCtrl 344) ctrlsettext (localize "STR_CA_SHOW");
	};
	(_dialog displayCtrl 345)  ctrlEnable (CA_VO_All_visible);
};				

//control reference initialization
//ensures that this script can be called by control and also by dialog
if ( typeName((_this select 0) select 0) == "DISPLAY" ) then {
	_control = 0;
	_dialog = ((_this select 0) select 0);
} else {
	_control = ((_this select 0) select 0);
	_dialog = ctrlParent _control;
};

//input parameter to perform certain action
_action = _this select 1;

//prevents from changes if controls are still animated
_disp_ctrl = (_dialog displayCtrl 249);
if !(ctrlCommitted _disp_ctrl) then {
	_action = "CA_VO_Wait";
}; 

//is launched for first time
if (isNil("CA_VO_Advanced_visible")) then {
	CA_VO_Advanced_visible = false;
	CA_VO_All_visible = true;
	call generate_active_controls_list; 
}; 

//show status
//debuglog ("CA_VO_Advanced_visible: " + str(CA_VO_Advanced_visible));
//debuglog ("CA_VO_All_visible: " + str(CA_VO_All_visible));

switch _action do 
{

	case "CA_VO_Init":
	{
		[_OPT_advanced_array, !(CA_VO_Advanced_visible AND CA_VO_All_visible), 0, _no_move] call processIDCs;		

		if (CA_VO_Advanced_visible) then {
			[_OPT_basic_array, false, 0, [0,-0.31]] call processIDCs;
		};

		[_OPT_basic_array, (!CA_VO_All_visible), 0, _no_move] call processIDCs;
		call setTextOfButton_Advanced;
		call setTextOfButton_All;
	};
	
	case "CA_VO_ToggleAdvanced": 
	{
		//CA_VO_All_visible
		CA_VO_Advanced_visible = !(CA_VO_Advanced_visible);	
		
		if CA_VO_Advanced_visible then {
				[_OPT_advanced_array, false, _in_delay, _no_move] call processIDCs;
				[_OPT_basic_array, false, _in_delay, [0,-0.31]] call processIDCs;
		} else {
				[_OPT_advanced_array, true, _in_delay, _no_move] call processIDCs;
				[_OPT_basic_array, false, _in_delay, [0,0.31]] call processIDCs;

		};
		
	

		/*	
		if ( (ctrlFade (_dialog displayCtrl 249)) == _hidden) then {
	
				CA_VO_Advanced_visible = true; 

		} else {
				CA_VO_Advanced_visible = false; 
		}; */
		call setTextOfButton_Advanced;						
	};
	case "CA_VO_ToggleAll":
	{
		[_OPT_basic_array, CA_VO_All_visible, _in_delay, _no_move] call processIDCs;
		
		CA_VO_All_visible =  !(CA_VO_All_visible);
		
		if CA_VO_Advanced_visible then {
			[_OPT_advanced_array, !(CA_VO_All_visible), _in_delay, _no_move] call processIDCs;
		};

		

		call setTextOfButton_All;		
	};

};
