class RscDisplayMain: RscStandardDisplay
{

//US
	__EXEC( _Player = [7,4]; );

	__EXEC( _Play = [25,82]; );
		__EXEC( _Campaign = [25,46]; );
		__EXEC( _Missions = [7,64]; );
		__EXEC( _Tutorial = [25,64]; );
		__EXEC( _Library = [43,64]; );
		
	__EXEC( _Multiplayer = [43,82]; );

	__EXEC( _Editor = [61,82]; );
	
	__EXEC( _Options = [79,82]; );	
		__EXEC( _Audio = [79,46]; );
		__EXEC( _Video = [61,64]; );
		__EXEC( _Controls = [79,64]; );
		__EXEC( _Difficulty = [97,64]; );
	
	__EXEC( _Exit = [97,82]; );
	__EXEC( _Version = [5,82]; );
	__EXEC( _Logo = [95,5]; );
	//__EXEC( _Logo = [86,1]; );	
	__EXEC( _buttonSize = [12,12]; );


//EU
/*	__EXEC( _Player = [25,4]; );

	__EXEC( _Play = [61,82]; );
		__EXEC( _Campaign = [61,64]; );
		__EXEC( _Missions = [43,64]; );
		__EXEC( _Tutorial = [25,46]; );
		__EXEC( _Library = [43,64]; );
		__EXEC( _Multiplayer = [79,64]; );
		__EXEC( _Editor = [61,46]; );
	
	__EXEC( _Options = [79,82]; );	
		__EXEC( _Audio = [79,46]; );
		__EXEC( _Video = [61,64]; );
		__EXEC( _Controls = [79,64]; );
		__EXEC( _Difficulty = [97,64]; );
	
	__EXEC( _Exit = [97,82]; );
	__EXEC( _Version = [5,82]; );
	__EXEC( _Logo = [95,5]; );
	//__EXEC( _Logo = [86,1]; );	
	__EXEC( _buttonSize = [12,12]; );
*/	
	onLoad = "[_this select 0] call compile preprocessfile ""\ca\ui\scripts\MainMenu.sqf""; [_this, 1220] call compile preprocessfile ""\ca\ui\scripts\logo.sqf"";";
	
	class controlsBackground
	{
		class UpBackground: RscPicture
		{
			x = -1.5; y = -0.1;
			w = 4; h = 0.2;
			text = "\ca\ui\data\ui_mainmenu_up_gr.paa";
			colorText[] = {1, 1, 1, 1};
		};
		
		class DownBackground: UpBackground
		{
			y = 0.9;
			text = "\ca\ui\data\ui_mainmenu_down_gr.paa";
		};
		
		class MainLogo: RscPicture
		{
			idc = 1220;
			x = __EVAL((_Logo select 0) * _xSpacing); 
			y = __EVAL((_Logo select 1) * _ySpacing);
			w = __EVAL(38 * _xSpacing);
			h = __EVAL(9 * _ySpacing);
			colorText[] = {1, 1, 1, 1};
			text = "\ca\ui\textures\logo_white.paa";
		}; 
	};

	class controls
	{
		delete B_Player;
		delete B_SingleMission;
		delete B_MultiPlayer;
		delete B_MissionEditor;
		delete B_Campaign;
		delete B_Credits;
		delete B_Quit;	 
		delete B_Options;

	    class Player: RscTextMainMenu
	    {
			idc = IDC_MAIN_PLAYER;
			x = __EVAL( ( (_Player select 0) - ( (_buttonSize select 0)) * 1.5 ) * _xSpacing); 
			y = __EVAL( ( (_Player select 1) - (4) ) * _ySpacing);

			w = __EVAL((_buttonSize select 0) * _xSpacing * 4);
			h = __EVAL((_buttonSize select 1) * _ySpacing / 2.5);		
	    };
	
		class Player_button: RscButtonTextOnly
		{
			idc = 1000;
			x = __EVAL((_Player select 0) * _xSpacing); 
			y = __EVAL((_Player select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
			style = ST_PICTURE;
			default = false;
			colortext[] = {1, 1, 1, 0};
			colorBackground[] = {0.7, 0.7, 0.7, 0.0};
			onButtonClick = "_display = ctrlParent (_this select 0); _ctrl109 =_display displayCtrl 109; ctrlActivate _ctrl109;";
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [1000,1001,1002,1003]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [1000,1001,1002,1003]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [1000,1001,1002,1003]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [1000,1001,1002,1003]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [1000,1001,1002,1003]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [1000,1001,1002,1003]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [1000,1001,1002,1003]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [1000,1001,1002,1003]]   execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [1000,1001,1002,1003]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";				
		};
	
	
		class Player_main: RscPicture
		{
			idc = 1001;
			x = __EVAL((_Player select 0) * _xSpacing); 
			y = __EVAL((_Player select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\data\menu_player_ca.paa";
		};
		
		class Player_over: RscPicture
		{
			idc = 1002;
			x = __EVAL((_Player select 0) * _xSpacing); 
			y = __EVAL((_Player select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
			colortext[] = {0, 0, 0, 0};
			text = "\ca\ui\data\menu_player_ON_ca.paa";
		};
		class Player_focus: RscPicture
		{
			idc = 1003;
			x = __EVAL((_Player select 0) * _xSpacing); 
			y = __EVAL((_Player select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
			colortext[] = {1, 1, 1, 0};
			text = "\ca\ui\data\menu_focus_ca.paa";
		};		
		class LineBreak1 
		{
			idc = -1;
			type = CT_LINEBREAK;
		};
		class Campaign: RscButtonTextOnly
		{
			idc = IDC_MAIN_CAMPAIGN_PROFILES;
			x = __EVAL((_Campaign select 0) * _xSpacing); 
			y = __EVAL((_Campaign select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
			style = ST_PICTURE;
			default = false;
			color[] = {0, 0, 0, 0};
			colorActive[] = {0, 0, 0, 0};
			action = "";
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [120,1021,1022,1023,1024]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [120,1021,1022,1023,1024]]  execVM    ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [120,1021,1022,1023,1024]]   execVM    ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [120,1021,1022,1023,1024]]   execVM    ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [120,1021,1022,1023,1024]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [120,1021,1022,1023,1024]] execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [120,1021,1022,1023,1024]]   execVM    ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [120,1021,1022,1023,1024]]    execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [120,1021,1022,1023,1024]]   execVM    ""ca\ui\scripts\MainMenuButtons.sqf"";";				
		};
		class Campaign_main: RscPicture
		{
			idc = 1021;
			x = __EVAL((_Campaign select 0) * _xSpacing); 
			y = __EVAL((_Campaign select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);			
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\data\menu_campaign_ca.paa";
		};
		class Campaign_over: RscPicture
		{
			idc = 1022;
			x = __EVAL((_Campaign select 0) * _xSpacing); 
			y = __EVAL((_Campaign select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);			
			colortext[] = {1, 1, 1, 0};			
			text = "\ca\ui\data\menu_campaign_ON_ca.paa";
		}; 
		class Campaign_focus: RscPicture
		{
			idc = 1023;
			x = __EVAL((_Campaign select 0) * _xSpacing); 
			y = __EVAL((_Campaign select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);			
			colortext[] = {1, 1, 1, 0};			
			text = "\ca\ui\data\menu_focus_ca.paa";
		}; 		
		class Campaign_text: RscTextMainMenu
		{
			idc = 1024;
			x = __EVAL( ( (_Campaign select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Campaign select 1) + (_buttonSize select 1) ) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing * 1.5);
			h = __EVAL((_buttonSize select 1) * _ySpacing / 4);			
			colortext[] = {0.9, 0.9, 0.9, 1};			
			text = $STR_CA_MAIN_GAME;
		};
		class Audio_options: Campaign
	    {
			idc = IDC_OPTIONS_AUDIO;
			default = false;
			x = __EVAL((_Audio select 0) * _xSpacing); 
			y = __EVAL((_Audio select 1) * _ySpacing);
			action = "";
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [302,1081,1082,1083,1084]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [302,1081,1082,1083,1084]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [302,1081,1082,1083,1084]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [302,1081,1082,1083,1084]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [302,1081,1082,1083,1084]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [302,1081,1082,1083,1084]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [302,1081,1082,1083,1084]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [302,1081,1082,1083,1084]]   execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [302,1081,1082,1083,1084]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";				
	    };
		class Audio_options_main: Campaign_main
		{
			idc = 1081;
			x = __EVAL((_Audio select 0) * _xSpacing); 
			y = __EVAL((_Audio select 1) * _ySpacing);
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\data\menu_audio_ca.paa";
		};
		class Audio_options_over: Campaign_over
		{
			idc = 1082;
			x = __EVAL((_Audio select 0) * _xSpacing); 
			y = __EVAL((_Audio select 1) * _ySpacing);
			text = "\ca\ui\data\menu_audio_ON_ca.paa";
		};
		class Audio_options_focus: Campaign_focus
		{
			idc = 1083;
			x = __EVAL((_Audio select 0) * _xSpacing); 
			y = __EVAL((_Audio select 1) * _ySpacing);
		};
		
		class Audio_options_text: Campaign_text
		{
			idc = 1084;
			x = __EVAL( ( (_Audio select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Audio select 1) + (_buttonSize select 1) ) * _ySpacing);
			text = $STR_DISP_OPTIONS_AUDIO;
		};
		class LineBreak2
		{
			idc = -1;
			type = CT_LINEBREAK;
		};
	//Single missions
		class Missions: Campaign
	    {
			idc = IDC_MAIN_SINGLE;
			default = false;
			x = __EVAL((_Missions select 0) * _xSpacing); 
			y = __EVAL((_Missions select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
			style = ST_PICTURE;
			color[] = {0, 0, 0, 0};
			colorActive[] = {0, 0, 0, 0};
			action = "";
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [117,1011,1012,1013,1014]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [117,1011,1012,1013,1014]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [117,1011,1012,1013,1014]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [117,1011,1012,1013,1014]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [117,1011,1012,1013,1014]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [117,1011,1012,1013,1014]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [117,1011,1012,1013,1014]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [117,1011,1012,1013,1014]]  execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [117,1011,1012,1013,1014]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";				
	    };
		class Missions_main: Campaign_main
		{
			idc = 1011;
			x = __EVAL((_Missions select 0) * _xSpacing); 
			y = __EVAL((_Missions select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
			text = "\ca\ui\data\menu_missions_ca.paa";
		};
		class Missions_over: Campaign_over
		{
			idc = 1012;
			x = __EVAL((_Missions select 0) * _xSpacing); 
			y = __EVAL((_Missions select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
			text = "\ca\ui\data\menu_missions_on_ca.paa";
		};
		class Missions_focus: Campaign_focus
		{
			idc = 1013;
			x = __EVAL((_Missions select 0) * _xSpacing); 
			y = __EVAL((_Missions select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
		};		
		class Missions_text: Campaign_text
		{
			idc = 1014;
	
			x = __EVAL( ( (_Missions select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Missions select 1) + (_buttonSize select 1) ) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing * 1.5);
			h = __EVAL((_buttonSize select 1) * _ySpacing / 4);
			
			
			colortext[] = {0.9, 0.9, 0.9, 1};
			text = $STR_CA_MAIN_SINGLE;
		};

	    class Tutorials: Campaign
	    {
			idc = 1110;
			x = __EVAL((_Tutorial select 0) * _xSpacing); 
			y = __EVAL((_Tutorial select 1) * _ySpacing);
			action = "_displayParent = findDisplay 0; _displayMission = _displayParent createMissionDisplay ""Tutorial""; ";
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [1110,1111,1112,1113,1114]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [1110,1111,1112,1113,1114]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [1110,1111,1112,1113,1114]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [1110,1111,1112,1113,1114]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [1110,1111,1112,1113,1114]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [1110,1111,1112,1113,1114]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [1110,1111,1112,1113,1114]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [1110,1111,1112,1113,1114]]   execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [1110,1111,1112,1113,1114]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";				
	    };
		class Tutorials_main: Campaign_main
		{
			idc = 1111;
			x = __EVAL((_Tutorial select 0) * _xSpacing); 
			y = __EVAL((_Tutorial select 1) * _ySpacing);
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\data\menu_tutorial_ca.paa";
		}; 
		class Tutorials_over: Campaign_over
		{
			idc = 1112;
			x = __EVAL((_Tutorial select 0) * _xSpacing); 
			y = __EVAL((_Tutorial select 1) * _ySpacing);
			text = "\ca\ui\data\menu_tutorial_ON_ca.paa";
		}; 
		class Tutorials_focus: Campaign_focus
		{
			idc = 1113;
			x = __EVAL((_Tutorial select 0) * _xSpacing); 
			y = __EVAL((_Tutorial select 1) * _ySpacing);
		}; 		
		class Tutorials_text: Campaign_text
		{
			idc = 1114;
			x = __EVAL( ( (_Tutorial select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Tutorial select 1) + (_buttonSize select 1) ) * _ySpacing);
			text = $STR_CA_MAIN_TUTORIAL;
		};		
		class Library: Campaign
		{
			idc = 1130;
			x = __EVAL((_Library select 0) * _xSpacing); 
			y = __EVAL((_Library select 1) * _ySpacing);
			action = "playMission ["""", configFile >> ""CfgMissions"" >> ""Missions"" >> ""Armory1""]";
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [1130,1131,1132,1133,1134]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [1130,1131,1132,1133,1134]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [1130,1131,1132,1133,1134]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [1130,1131,1132,1133,1134]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [1130,1131,1132,1133,1134]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [1130,1131,1132,1133,1134]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [1130,1131,1132,1133,1134]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [1130,1131,1132,1133,1134]]   execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [1130,1131,1132,1133,1134]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";				
		};
		class Library_main: Campaign_main
		{
			idc = 1131;
			x = __EVAL((_Library select 0) * _xSpacing); 
			y = __EVAL((_Library select 1) * _ySpacing);
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\data\menu_library_ca.paa";
		};
		class Library_over: Campaign_over
		{
			idc = 1132;
			x = __EVAL((_Library select 0) * _xSpacing); 
			y = __EVAL((_Library select 1) * _ySpacing);
			text = "\ca\ui\data\menu_library_ON_ca.paa";
		}; 
		class Library_focus: Campaign_focus
		{
			idc = 1133;
			x = __EVAL((_Library select 0) * _xSpacing); 
			y = __EVAL((_Library select 1) * _ySpacing);
		}; 
		class Library_text: Campaign_text
		{
			idc = 1134;
			x = __EVAL( ( (_Library select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Library select 1) + (_buttonSize select 1) ) * _ySpacing);
			text = $STR_CA_MAIN_LIBRARY;
		}; 
	    class Video_options: Campaign
	    {
			idc = IDC_OPTIONS_VIDEO;
			default = false;
			x = __EVAL((_Video select 0) * _xSpacing); 
			y = __EVAL((_Video select 1) * _ySpacing);
			action = "";
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [301,1071,1072,1073,1074]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [301,1071,1072,1073,1074]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [301,1071,1072,1073,1074]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [301,1071,1072,1073,1074]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [301,1071,1072,1073,1074]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [301,1071,1072,1073,1074]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [301,1071,1072,1073,1074]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [301,1071,1072,1073,1074]]   execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [301,1071,1072,1073,1074]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";				
		};
		class Video_options_main: Campaign_main
		{
			idc = 1071;
			x = __EVAL((_Video select 0) * _xSpacing); 
			y = __EVAL((_Video select 1) * _ySpacing);
			text = "\ca\ui\data\menu_video_ca.paa";
		};
		class Video_options_over: Campaign_over
		{
			idc = 1072;
			x = __EVAL((_Video select 0) * _xSpacing); 
			y = __EVAL((_Video select 1) * _ySpacing);
			text = "\ca\ui\data\menu_video_on_ca.paa";
		};
		class Video_options_focus: Campaign_focus
		{
			idc = 1073;
			x = __EVAL((_Video select 0) * _xSpacing); 
			y = __EVAL((_Video select 1) * _ySpacing);
		};		
		class Video_options_text: Campaign_text
		{
			idc = 1074;
			x = __EVAL( ( (_Video select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Video select 1) + (_buttonSize select 1) ) * _ySpacing);
			text = $STR_DISP_OPTIONS_VIDEO;
		};

	    class Controls_options: Campaign
	    {
			idc = IDC_OPTIONS_CONFIGURE;
			x = __EVAL((_Controls select 0) * _xSpacing); 
			y = __EVAL((_Controls select 1) * _ySpacing);
			action = "";
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [303,1091,1092,1093,1094]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [303,1091,1092,1093,1094]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [303,1091,1092,1093,1094]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [303,1091,1092,1093,1094]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [303,1091,1092,1093,1094]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [303,1091,1092,1093,1094]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [303,1091,1092,1093,1094]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [303,1091,1092,1093,1094]]   execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [303,1091,1092,1093,1094]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";				
	    };
		class Controls_options_main: Campaign_main
		{
			idc = 1091;
			x = __EVAL((_Controls select 0) * _xSpacing); 
			y = __EVAL((_Controls select 1) * _ySpacing);
			text = "\ca\ui\data\menu_control_ca.paa";
		};
		class Controls_options_over: Campaign_over
		{
			idc = 1092;
			x = __EVAL((_Controls select 0) * _xSpacing); 
			y = __EVAL((_Controls select 1) * _ySpacing);
			text = "\ca\ui\data\menu_control_ON_ca.paa";
		};
		class Controls_options_focus: Campaign_focus
		{
			idc = 1093;
			x = __EVAL((_Controls select 0) * _xSpacing); 
			y = __EVAL((_Controls select 1) * _ySpacing);
		};
		class Controls_options_text: Campaign_text
		{
			idc = 1094;
			x = __EVAL( ( (_Controls select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Controls select 1) + (_buttonSize select 1) ) * _ySpacing);
			text = $STR_DISP_OPTIONS_CONFIGURE;
		};
	    class Difficulty_options: Campaign
	    {
			idc = IDC_OPTIONS_DIFFICULTY;
			x = __EVAL((_Difficulty select 0) * _xSpacing); 
			y = __EVAL((_Difficulty select 1) * _ySpacing);
			action = "";
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [304,1101,1102,1103,1104]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [304,1101,1102,1103,1104]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [304,1101,1102,1103,1104]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [304,1101,1102,1103,1104]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [304,1101,1102,1103,1104]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [304,1101,1102,1103,1104]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [304,1101,1102,1103,1104]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [304,1101,1102,1103,1104]]   execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [304,1101,1102,1103,1104]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";				
	    };
		class Difficulty_options_main: Campaign_main
		{
			idc = 1101;
			x = __EVAL((_Difficulty select 0) * _xSpacing); 
			y = __EVAL((_Difficulty select 1) * _ySpacing);
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\data\menu_diff_ca.paa";
		}; 
		class Difficulty_options_over: Campaign_over
		{
			idc = 1102;
			x = __EVAL((_Difficulty select 0) * _xSpacing); 
			y = __EVAL((_Difficulty select 1) * _ySpacing);
			text = "\ca\ui\data\menu_diff_ON_ca.paa";
		}; 
		class Difficulty_options_focus: Campaign_focus
		{
			idc = 1103;
			x = __EVAL((_Difficulty select 0) * _xSpacing); 
			y = __EVAL((_Difficulty select 1) * _ySpacing);
		}; 
		class Difficulty_options_text: Campaign_text
		{
			idc = 1104;
			x = __EVAL( ( (_Difficulty select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Difficulty select 1) + (_buttonSize select 1) ) * _ySpacing);
			text = $STR_DISP_OPTIONS_DIFFICULTY; 
		};	    
		class LineBreak3		
		{
			idc = -1;
			type = CT_LINEBREAK;
		};
		// Play Button
		class Play: Campaign
	    {
			idc = 1050;
			default = true;
			x = __EVAL((_Play select 0) * _xSpacing); 
			y = __EVAL((_Play select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
			style = ST_PICTURE;
			color[] = {0, 0, 0, 0};
			colorActive[] = {0, 0, 0, 0};
			action = "";	
			onButtonClick = "[_this select 0]  call compile preprocessfile  ""\ca\ui\scripts\MainMenu.sqf""";						
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [1050,1051,1052,1053,1054]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [1050,1051,1052,1053,1054]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [1050,1051,1052,1053,1054]]  execVM ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [1050,1051,1052,1053,1054]]  execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [1050,1051,1052,1053,1054]]  execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [1050,1051,1052,1053,1054]] execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [1050,1051,1052,1053,1054]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  " _dummy = [_this, ""SetFocus"", [1050,1051,1052,1053,1054]]  call compile preprocessFile ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [1050,1051,1052,1053,1054]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";				
	    };
		class Play_main: Campaign_main
		{
			idc = 1051;
			style = ST_PICTURE;
			x = __EVAL((_Play select 0) * _xSpacing); 
			y = __EVAL((_Play select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\data\menu_play_ca.paa";
		};
		class Play_over: Campaign_over
		{
			idc = 1052;
			x = __EVAL((_Play select 0) * _xSpacing); 
			y = __EVAL((_Play select 1) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing);
			h = __EVAL((_buttonSize select 1) * _ySpacing);
			text = "\ca\ui\data\menu_play_ON_ca.paa";
		};
		class Play_focus: Campaign_focus
		{
			idc = 1053;
			x = __EVAL((_Play select 0) * _xSpacing); 
			y = __EVAL((_Play select 1) * _ySpacing);
		};
		class Play_text: Campaign_text
		{
			idc = 1054;
			x = __EVAL( ( (_Play select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Play select 1) + (_buttonSize select 1) ) * _ySpacing);
			text = $STR_CA_MAIN_PLAY;			
		};	    

	//Multiplayer
	    class MP: Campaign
	    {
			idc = IDC_MAIN_MULTIPLAYER;
			x = __EVAL((_Multiplayer select 0) * _xSpacing); 
			y = __EVAL((_Multiplayer select 1) * _ySpacing);
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [105,1031,1032,1033,1034]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [105,1031,1032,1033,1034]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [105,1031,1032,1033,1034]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [105,1031,1032,1033,1034]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [105,1031,1032,1033,1034]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [105,1031,1032,1033,1034]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [105,1031,1032,1033,1034]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [105,1031,1032,1033,1034]]  execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [105,1031,1032,1033,1034]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";				
	    };
		class MP_main: Campaign_main
		{
			idc = 1031;
			x = __EVAL((_Multiplayer select 0) * _xSpacing); 
			y = __EVAL((_Multiplayer select 1) * _ySpacing);
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\data\menu_multiplayer_ca.paa";
		};
		class MP_over: Campaign_over
		{
			idc = 1032;
			x = __EVAL((_Multiplayer select 0) * _xSpacing); 
			y = __EVAL((_Multiplayer select 1) * _ySpacing);
			text = "\ca\ui\data\menu_multiplayer_ON_ca.paa";
		};
		class MP_focus: Campaign_focus
		{
			idc = 1033;
			x = __EVAL((_Multiplayer select 0) * _xSpacing); 
			y = __EVAL((_Multiplayer select 1) * _ySpacing);
		};
		class MP_text: Campaign_text
		{
			idc = 1034;
			x = __EVAL( ( (_Multiplayer select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Multiplayer select 1) + (_buttonSize select 1) ) * _ySpacing);
			text = $STR_CA_MAIN_MULTI;
		};
	//Editor
	    class Editor: Campaign
	    {
			idc = IDC_MAIN_EDITOR;
			x = __EVAL((_Editor select 0) * _xSpacing); 
			y = __EVAL((_Editor select 1) * _ySpacing);
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"",  [115,1041,1042,1043,1044]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"",  [115,1041,1042,1043,1044]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"",  [115,1041,1042,1043,1044]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [115,1041,1042,1043,1044]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"",  [115,1041,1042,1043,1044]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"",  [115,1041,1042,1043,1044]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"",  [115,1041,1042,1043,1044]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"",  [115,1041,1042,1043,1044]]  execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"",  [115,1041,1042,1043,1044]]  execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";				
	    };
		class Editor_main: Campaign_main
		{
			idc = 1041;
			x = __EVAL((_Editor select 0) * _xSpacing); 
			y = __EVAL((_Editor select 1) * _ySpacing);
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\data\menu_editor_ca.paa";
		}; 
		class Editor_over: Campaign_over
		{
			idc = 1042;
			x = __EVAL((_Editor select 0) * _xSpacing); 
			y = __EVAL((_Editor select 1) * _ySpacing);
			text = "\ca\ui\data\menu_editor_ON_ca.paa";
		}; 
		class Editor_focus: Campaign_focus
		{
			idc = 1043;
			x = __EVAL((_Editor select 0) * _xSpacing); 
			y = __EVAL((_Editor select 1) * _ySpacing);
		}; 
		class Editor_text: Campaign_text
		{
			idc = 1044;
			x = __EVAL( ( (_Editor select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Editor select 1) + (_buttonSize select 1) ) * _ySpacing);
			text = $STR_CA_MAIN_CUSTOM;
		};
		
	//Options
	    class Options: Play
	    {
			idc = 1060;
			default = false;
			x = __EVAL((_Options select 0) * _xSpacing); 
			y = __EVAL((_Options select 1) * _ySpacing);
			action = "";
			onButtonClick = "[_this select 0]  call compile preprocessfile  ""\ca\ui\scripts\MainMenu.sqf""";
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [1060,1061,1062,1063,1064]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [1060,1061,1062,1063,1064]]  execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [1060,1061,1062,1063,1064]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [1060,1061,1062,1063,1064]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [1060,1061,1062,1063,1064]]  execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [1060,1061,1062,1063,1064]]  execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [1060,1061,1062,1063,1064]]  execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [1060,1061,1062,1063,1064]]  execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [1060,1061,1062,1063,1064]]  execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";				
	    };
		class Options_main: Campaign_main
		{
			idc = 1061;
			x = __EVAL((_Options select 0) * _xSpacing); 
			y = __EVAL((_Options select 1) * _ySpacing);
			text = "\ca\ui\data\menu_options_ca.paa";
		};
		class Options_over: Campaign_over
		{
			idc = 1062;
			x = __EVAL((_Options select 0) * _xSpacing); 
			y = __EVAL((_Options select 1) * _ySpacing);
			text = "\ca\ui\data\menu_options_ON_ca.paa";
		};
		class Options_focus: Campaign_focus
		{
			idc = 1063;
			x = __EVAL((_Options select 0) * _xSpacing); 
			y = __EVAL((_Options select 1) * _ySpacing);
		};
		class Options_text: Campaign_text
		{
			idc = 1064;
			x = __EVAL( ( (_Options select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Options select 1) + (_buttonSize select 1) ) * _ySpacing);
			text = $STR_CA_MAIN_OPTIONS;
		};
		class Exit: Campaign
		{
			idc = IDC_MAIN_QUIT;
			default = false;
			x = __EVAL((_Exit select 0) * _xSpacing); 
			y = __EVAL((_Exit select 1) * _ySpacing);

			onButtonClick = "";
			onMouseButtonDown = "_dummy = [_this, ""MouseButtonDown"", [106,1121,1122,1123,1124]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonUp =  "_dummy = [_this, ""MouseButtonUp"", [106,1121,1122,1123,1124]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseButtonDblClick = "_dummy = [_this, ""MouseButtonDown"", [106,1121,1122,1123,1124]]  execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";;";			
			onKeyUp =  "_dummy = [_this, ""MouseButtonUp"", [106,1121,1122,1123,1124]] execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";						
			onKeyDown =  "_dummy = [_this, ""MouseButtonDown"", [106,1121,1122,1123,1124]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";			
			onMouseEnter =  "_dummy = [_this, ""MouseEnter"", [106,1121,1122,1123,1124]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onMouseExit =  "_dummy = [_this, ""MouseExit"", [106,1121,1122,1123,1124]]  execVM ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onSetFocus =  "_dummy = [_this, ""SetFocus"", [106,1121,1122,1123,1124]] execVM  ""ca\ui\scripts\MainMenuButtons.sqf"";";
			onKillFocus =  "_dummy = [_this, ""KillFocus"", [106,1121,1122,1123,1124]] execVM   ""ca\ui\scripts\MainMenuButtons.sqf"";";				
		};
		class Exit_main: Campaign_main
		{
			idc = 1121;
			x = __EVAL((_Exit select 0) * _xSpacing); 
			y = __EVAL((_Exit select 1) * _ySpacing);
			text = "\ca\ui\data\menu_exit_ca.paa";
		};
		class Exit_over: Campaign_over
		{
			idc = 1122;
			x = __EVAL((_Exit select 0) * _xSpacing); 
			y = __EVAL((_Exit select 1) * _ySpacing);
			text = "\ca\ui\data\menu_exit_ON_ca.paa";
		};
		class Exit_focus: Campaign_focus
		{
			idc = 1123;
			x = __EVAL((_Exit select 0) * _xSpacing); 
			y = __EVAL((_Exit select 1) * _ySpacing);
		};
		class Exit_text: Campaign_text
		{
			idc = 1124;
			x = __EVAL( ( (_Exit select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Exit select 1) + (_buttonSize select 1) ) * _ySpacing);
			text = $STR_CA_MAIN_QUIT;
		};

		class Copyright: RscText
		{
			x = 0.3; 
			y = __EVAL( ( (_Player select 1) - (4) ) * _ySpacing);			
			w = 0.7; 
			h = __EVAL((_buttonSize select 1) * _ySpacing / 2.5);
			text = $STR_CA_MAIN_COPYRIGHT;
			style = ST_RIGHT;
			font = BitStream;
			sizeEx = TextSize_small;
			colortext[] = {0, 0, 0, 0.8};
		};

		
	 	class Version: RscText
		{
			x = __EVAL( ( (_Version select 0) - ( (_buttonSize select 0)/4) ) * _xSpacing); 
			y = __EVAL( ( (_Version select 1) + (_buttonSize select 1) ) * _ySpacing);
			w = __EVAL((_buttonSize select 0) * _xSpacing * 3);
			h = __EVAL((_buttonSize select 1) * _ySpacing / 4);			
			sizeEx = TextSize_small;			
			colortext[] = {0, 0, 0, 0.8};
			style = ST_LEFT;
		};

		class Date: Version
		{
			x = -0.80; y = 0.05;
		};

	  	class AllMissions: RscActiveText
	  	{
	  		idc = IDC_MAIN_CUSTOM;
	  		x = 0.36; y = 0.11;
	  		//x = 0.245;//y = 0.965;
	  		w = 0.28;	h = 0.03;
	  		style = ST_CENTER;
	  		sizeEx = TextSize_small;
	  		colorText[] = {1, 1, 1, 0.25};
	  		text = $STR_CA_MAIN_DESIGN;
	  	};
	};
};
