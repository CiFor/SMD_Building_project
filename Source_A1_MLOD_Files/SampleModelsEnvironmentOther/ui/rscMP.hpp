class RscDisplayESRBOnline: RscStandardDisplay
{
	__EXEC( _windowWidth = 80; _windowHeight = 20;)
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.5 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowBorder = 1;)

	movingEnable = true;
	class ControlsBackground
	{
		class Mainback: CA_Mainback
		{
			moving = true;
			x = __EVAL(_xInit + (0 * _xSpacing)); 
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
			text = ProcTextBlack;
			colorText[] = {0,0,0,0.8};
		};
		class TextBack: CA_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowBorder*2 + 4  ) * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL((_windowHeight - 4 * _windowBorder - 8) * _ySpacing);
			text = ProcTextWhite;
			colorText[] = Color_White;			
		};
		class ESRBTitleBack: CA_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			text = ProcTextWhite;			
			colorText[] = Color_White;
		};
	};
	
	class Controls
	{
		delete Title;
		delete Text;
		delete B_OK;
		delete B_Cancel;
		
	    class ESRB_Title: CA_Title
	    {
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
			SizeEx = TextSize_big;
			text = "ESRB Notice:";
	    };
	    
	    class CA_ESRB_Text: RscText
	    {
			style = ST_CENTER;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowBorder*2 + 4  ) * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL((_windowHeight - 4 * _windowBorder - 8) * _ySpacing);
			SizeEx	 = TextSize_medium;			
			text = "Game experience may change during online play.";
	    };
		class CA_B_OK: RscButton
		{
			idc = IDC_OK;
			default = 1;
			SizeEx	 = TextSize_medium;				
			text = $STR_DISP_OK;
			x = __EVAL(_xInit + ((_windowWidth/2) - 16 ) * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 4 ) * _ySpacing));
			h = __EVAL(4 * _ySpacing);
			w = __EVAL(12 * _ySpacing);
		};
	
		class CA_B_Cancel: CA_B_OK
		{
			idc = IDC_CANCEL;
			x = __EVAL(_xInit + ((_windowWidth/2) + 4) * _xSpacing));
			text = $STR_DISP_CANCEL; 
		};
	};	
};

class RscDisplayMultiplayer: RscStandardDisplay
{
	sortUp = "\ca\ui\textures\arrow_up.paa";
	sortDown = "\ca\ui\textures\arrow_down.paa";

	showPassworded = "#(argb,8,8,3)color(0,0,0,0)";
	hidePassworded = "ca\ui\data\ui_server_connect_ca.paa";
	
	showFull = "#(argb,8,8,3)color(0,0,0,0)";
	hideFull = "#(argb,8,8,3)color(0,0,0,0)";
  
  colorPingUnknown[] = CA_UI_grey;
  colorPingGood[] = {0,1,0,1};
  colorPingPoor[] = {1,0.6,0,1};
  colorPingBad[] = {1,0,0,1};

  colorVersionGood[] = Color_Black;
  colorVersionBad[] = {1,0,0,1};
  	
	__EXEC( _xInit = 7 * _xSpacing; _yInit = 5 * _ySpacing;)
	__EXEC( _windowWidth = 107; _windowHeight = 90;)
	__EXEC( _windowBorder = 2;)
	__EXEC( _listHeight = 0.438;)	
	__EXEC( _separateDetails = 0.1;)
	
	class controlsbackground
	{
		class MainBack: CA_Mainback
		{
			x = 0.05; y = 0.01;
			w = 0.8; h = 0.96;
			colorbackground[] = CA_UI_background;
		};

		class Uplegenda: CA_Back2
		{
			x = 0.06; y = 0.085;
			w = 0.78; h = 0.03;
		};

		class BackPassword: CA_Back2
		{
			x = 0.06; y = 0.932;
			w = 0.25; h = 0.03;
			colorBackground[] = Color_DarkRed ;
		};

		class BackRefresh: BackPassword
		{
			x = 0.33;
			w = 0.15;
		};
		class BackRemote: BackRefresh
		{
			x = 0.5;
		};

		class ListBack: CA_Back
		{
			x = 0.06; y = 0.115;
			w = 0.78; 
			h =	__EVAL( _listHeight + _separateDetails);
			colorText[] = {0.9, 0.9, 0.9, 1};
		};

		class ListHostBack: ListBack
		{
			x = 0.094;
			w = 0.246;
			colorText[] = {1, 1, 1, 1};
		};
		
		class ListMissionBack: ListBack
		{
			x = 0.415;
			w = 0.186;
			colorText[] = {1, 1, 1, 1};
		};

		class ListPlayersBack: ListBack
		{
			x = 0.682;
			w = 0.074;
			colorText[] = {1, 1, 1, 1};
		};


		class SessionDetailsBack: CA_Back
		{
			x = 0.06; y = __EVAL( 0.593 + _separateDetails);
			w = 0.78; h = __EVAL( 0.321 - _separateDetails);			
			colorBackground[] = {1, 1, 1, 0.5};
		};


		class ActiveFiltersback: CA_Back
		{
			x = 0.06; y = __EVAL( 0.558 + _separateDetails);
			w = 0.78; h = 0.03;
			colorBackground[] = {1, 1, 1, 0.5};
		};

		class CA_MP_Logo: CA_Logo_Small
		{
			x = 0.44; y = 0.02;
			w = 0.15;
		};
		class CA_MP_Gamespy_Logo: CA_Gamespy_Logo
		{
			x = 0.64; y = 0.02;
		};
	};
	
	class controls
	{
		delete Title;

		delete ValueSessions;
		
		delete ColumnPlayers;
		delete ColumnPing;	
		delete ColumnType;
		delete ColumnMission;
		delete ColumnState;
		delete ColumnServer;

		delete FilterPlayers;
		delete FilterPing;
		delete FilterMission;
		delete FilterType;
		delete FilterServer;
		
		delete ServerDetailType;
		delete ServerDetailMission;
		delete ServerDetailState;
		delete ServerDetailSlots;
		delete ServerDetailPing;
		delete ServerDetailLanguage;
		delete ServerDetailCountry;
		delete ServerDetailVersion;
		delete ServerDetailVersionRequired;
		delete ServerDetailMods;
		delete ServerDetailIsland;
		delete ServerDetailDifficulty;
		delete ServerDetailTimeLeft;
		delete ServerDetailPlatform;
		delete ServerDetailPlayers;
		delete ServerDetailPassword;
		delete ServerDetailHost;
			
		delete FilterPasswordedServers;
		delete FilterFullServers;

		delete IconPlayers;
		delete IconPing;
		delete IconType; 
		delete IconState;
		delete IconMission;
		delete IconServer;
				
		delete B_DPlay;
		delete B_Internet;
		delete B_Remote;
		delete B_Password;
		delete B_Refresh;
		delete B_Filter;
		delete B_Port;
		delete Progress;
		delete B_Join;
		delete B_New;
		delete B_Cancel;


		//Sort using the server name column.

		//class Mainback: CA_Mainback{};
		//class Logo: CA_Logo{};

		//sipka
		class CA_ServerIcon: RscPictureKeepAspect 
		{
			idc = IDC_MULTI_SERVER_ICON;
			x = 0.083; y = 0.085;
			// x = 0.083; y = 0.1;
			w = 0.035; h = 0.035;
			colorText[] =  Color_Black;
		};

		class CA_ServerColumn: RscButtonTextOnly
		{
			idc = IDC_MULTI_SERVER_COLUMN;
			text = $STR_MP_SERVER;
			//Test
			//colorBackground[] = {0, 0, 0, 0.3};
			
			x = 0.104; y = 0.085;
			w = 0.084;
		};
		
		class CA_FilterPasswordedServers: RscPicturekeepAspect
		{
			idc = IDC_MULTI_PASSWORDED_FILTER;
			x = 0.060; y = __EVAL( 0.559 + _separateDetails);
			w = 0.025; h = 0.025;
		};		
			
		//Active server name filter.
		class CA_ServerFilter: RscText
		{
			idc = IDC_MULTI_SERVER_FILTER;
			x = 0.104; y = __EVAL( 0.558 + _separateDetails);
			w = 0.075; h = 0.03;
		};
		
		class CA_TypeIcon: CA_ServerIcon
		{
			idc = IDC_MULTI_GAMETYPE_ICON;
			x = 0.33;
		};

		class CA_TypeColumn: CA_ServerColumn
		{
			idc = IDC_MULTI_GAMETYPE_COLUMN;
			text = $STR_DISP_ARCSENS_TYPE;
			x = 0.35;
		};
		
		class CA_TypeFilter: CA_ServerFilter
		{
			idc = IDC_MULTI_TYPE_FILTER;
			x = 0.335;
			w = 0.08;
		};
		class CA_MissionIcon: CA_ServerIcon
		{
			idc = IDC_MULTI_MISSION_ICON;
			x = 0.404;
		};

		class CA_MissionColumn: CA_ServerColumn
		{
			idc = IDC_MULTI_MISSION_COLUMN;
			text = $STR_SECTION_MISSION;
			x = 0.425;
		};
		
				//Active ping filter.
		class CA_MissionFilter: CA_ServerFilter
		{
			idc = IDC_MULTI_MISSION_FILTER;
			x = 0.425; 
		};
		//Sort using the mission column.
		class CA_StateIcon: CA_ServerIcon
		{
			idc = IDC_MULTI_STATE_ICON;
			x = 0.581;
		};

		class CA_StateColumn: CA_ServerColumn
		{
			idc = IDC_MULTI_STATE_COLUMN;
			text = $STR_MENU_STATUS;
			x = 0.600;
		};

		//ToDo: somehow not working filters - test later with servers
		class CA_PlayersColumn: CA_ServerColumn
		{
			idc = IDC_MULTI_PLAYERS_COLUMN;
			text = $STR_MP_PLAYERS;
			//style = ST_LEFT + ST_SHADOW;
			x = 0.681;
		//	w = 0.08;
		};
		class CA_PlayersIcon: CA_ServerIcon
		{
			idc = IDC_MULTI_PLAYERS_ICON;
			x = 0.66;
		};

		//Active player filter.
		class CA_PlayersFilter: CA_ServerFilter
		{
			idc = IDC_MULTI_PLAYERS_FILTER;
			style = ST_CENTER;
			x = 0.681; 
			w = 0.075; h = 0.03;
		};

		//Sort using the ping column.
		class CA_PingIcon: CA_ServerIcon
		{
			idc = IDC_MULTI_PING_ICON;
			x = 0.756;
		};

		class CA_PingColumn: CA_ServerColumn
		{
			idc = IDC_MULTI_PING_COLUMN;
			text = $STR_DISP_MULTI_PING;
			x = 0.777;
		//	w = 0.075;
		};

		//Active ping filter.
		class CA_PingFilter: CA_ServerFilter
		{
			idc = IDC_MULTI_PING_FILTER;
			x = 0.777; 
			w = 0.065; h = 0.03;
		};

		//List of found servers and properties.
		class CA_ValueSessions: RscListBox
		{
			idc = IDC_MULTI_SESSIONS;
			x = 0.07; 
			y = 0.12;
			w = 0.77; 			
			h =	__EVAL( _listHeight + _separateDetails - 0.015);
			//test
			colorSelect[] = {0.9, 0.9, 0.9, 1};
			colorPingUnknown[] = CA_UI_grey;
			colorPingGood[] = {0,1,0,1};
			colorPingPoor[] = {1,0.6,0,1};
			colorPingBad[] = {1,0,0,1};
			rowHeight = 0.025;			
			SizeEx = TextSize_small;
			columns[] =
			{
				0.345, // session name
				0.10, // game type
				0.260, // mission name
				0.102, // status
				0.125, // players
				0.068  // ping
			};

			//ToDo: icons
			password = "ca\ui\data\ui_server_password_ca.paa";
			version = "ca\ui\data\ui_wrong_version_ca.paa";
			none = "ca\ui\data\ui_server_connect_ca.paa";
			star = "ca\ui\textures\mission_done.paa";
		};

//--Session details
		class CA_ServerDetailHost: RscText
		{
			idc = IDC_MP_HOST;
			x = 0.085; y = __EVAL( 0.593 + _separateDetails);
			w = 0.5;  h = 0.03;
			sizeEx = TextSize_small;
		};


		class CA_TextServerDetailType: CA_ServerDetailHost
		{
			x = 0.085;
			y = __EVAL( 0.623 + _separateDetails);
			w = 0.161;			
			text = $STR_DISP_ARCGRP_TYPE;
		};	

		class CA_ServerDetailType: CA_ServerDetailHost
		{
			idc = IDC_MP_TYPE;
			x = 0.085;
			y = __EVAL( 0.653 + _separateDetails);
			w = 0.161;		
			colorBackground[] = {1,1,1,0.2};							 
		};	
		class CA_TextServerDetailMission: CA_TextServerDetailType
		{
			x = 0.246;
			y = __EVAL( 0.623 + _separateDetails);
			text = $STR_DISP_FILTER_MISSION; 
		};		
		class CA_ServerDetailMission: CA_ServerDetailType
		{
			idc = IDC_MP_MISSION;
			x = 0.246;
			y = __EVAL( 0.653 + _separateDetails);
			w = 0.251;
		};		

		class CA_TextDetailState: CA_TextServerDetailMission
		{
			x = 0.498;
			y = __EVAL( 0.623 + _separateDetails);		
			text = $STR_MENU_STATUS;			
		};		
		class CA_ServerDetailState: CA_ServerDetailType
		{
			idc = IDC_MP_STATE;
			x = 0.498;
			y = __EVAL( 0.653 + _separateDetails);		
		};		
		class CA_TextServerDetailSlots: CA_TextServerDetailMission
		{
			text = $STR_DISP_XBOX_MULTI_SLOTS;
			x = 0.498;  y = __EVAL( 0.683 + _separateDetails);
		};	
		class CA_ServerDetailSlots: CA_ServerDetailType
		{
			idc = IDC_MP_SLOTS_PUBLIC;
			x = 0.498;
			y = __EVAL( 0.713 + _separateDetails);
		};		

		class CA_TextServerDetailPing: CA_TextServerDetailMission
		{
			text = $STR_CA_MULTI_PING;
			x = 0.085; 
			y = __EVAL( 0.683 + _separateDetails);
			w = 0.161;
		};		

		class CA_ServerDetailPing: CA_ServerDetailType
		{
			idc = IDC_MP_PING;
			x = 0.085; 
			y = __EVAL( 0.713 + _separateDetails);
			w = 0.161;			
		};	
		class CA_TextServerDetailLanguage: CA_TextServerDetailMission
		{
			text = $STR_DISP_OPT_LANGUAGE;			
			x = 0.659; 
			y = __EVAL( 0.683 + _separateDetails);			
		};				
		class CA_ServerDetailLanguage: CA_ServerDetailType
		{
			idc = IDC_MP_LANGUAGE;
			x = 0.659;
			y = __EVAL( 0.713 + _separateDetails);
		};		
		
		class CA_ServerDetailVersion: CA_ServerDetailType
		{
			idc = IDC_MP_VERSION;
			x = 0.085; 	y = __EVAL( 0.743 + _separateDetails);
			colorText[] =  Color_Black;
			colorBackground[] = {1,1,1,0};
		};

		class CA_ServerDetailCountry: CA_ServerDetailType
		{
			idc = IDC_MP_COUNTRY;			
			x = 0.085; 	y = __EVAL( 0.773 + _separateDetails);
		};

				
/*		
		class CA_TextServerDetailVersionRequired: CA_ServerDetailHost
		{
			idc = IDC_MP_VERSION_REQUIRED;
			text = "Required:";
			x = 0.25; y = 0.653;
		};	

		class CA_ServerDetailVersionRequired: CA_ServerDetailHost
		{
			idc = IDC_MP_VERSION_REQUIRED;
			x = 0.25; y = 0.653;
		}; */	
/*		
		class CA_TextServerDetailMods: CA_ServerDetailHost
		{
//		String not yet placed to stringtables
			text = "Mods:";	
			x = 0.5; y = 0.653;
		};					
		class CA_ServerDetailMods: CA_ServerDetailHost
		{
			idc = IDC_MP_MODS;
			x = 0.5; y = 0.653;
		};		
*/
		class CA_TextServerDetailIsland: CA_TextServerDetailMission
		{	
			x = 0.246; y = __EVAL( 0.683 + _separateDetails);
			w = 0.252;
			text = $STR_DISP_XBOX_MULTI_ISLAND;			
		};		

		class CA_ServerDetailIsland: CA_ServerDetailType
		{
			idc = IDC_MP_ISLAND;
			x = 0.246; y = __EVAL( 0.713 + _separateDetails);
			w = 0.251;
		}; 
		
		class CA_TextServerDetailDifficulty: CA_TextServerDetailMission
		{
			text = $STR_CA_DIFFICULTY;
			x = 0.659;  y = __EVAL( 0.623 + _separateDetails);
		};					
		class CA_ServerDetailDifficulty: CA_ServerDetailType
		{
			idc = IDC_MP_DIFFICULTY;
			x = 0.659; y = __EVAL( 0.653 + _separateDetails);
		};
/*
		class CA_TextServerDetailTimeLeft: CA_ServerDetailHost
		{
//		String not yet placed to stringtables
			x = 0.25; y = 0.703;
		};					
		class CA_ServerDetailTimeLeft: CA_ServerDetailHost
		{
//			idc = IDC_MP_TIMELEFT;
			text = "IDC_MP_TIMELEFT";
			x = 0.25; y = 0.703;
		};	*/	
/*		class CA_TextServerDetailPlatform: CA_ServerDetailHost
		{
//		String not yet placed to stringtables
			x = 0.5; y = 0.703;
		};	
		class CA_ServerDetailPlatform: CA_ServerDetailHost
		{
//			idc = IDC_MP_PLATFORM;
			text = "IDC_MP_PLATFORM";
			x = 0.5; y = 0.703;
		};	*/
		class CA_TextServerDetailPlayers: CA_TextServerDetailMission
		{
			text = $STR_DISP_MP_PLAYERS;			
			x = 0.246; y = __EVAL( 0.743 + _separateDetails);
		};					
		class CA_ServerDetailPlayers: CA_ServerDetailType
		{
			idc = IDC_MP_PLAYERS_ROW;
			x = 0.246; y = __EVAL( 0.773 + _separateDetails);
			w = 0.574;
		};	
		class CA_ServerDetailPassword: RscPictureKeepAspect
		{
			idc = IDC_MP_PASSWORD;
			x = 0.06; y = __EVAL( 0.593 + _separateDetails);
			w = 0.025; h = 0.025;
		};		
		//End of session details	
			
		class CA_FilterFullServers: RscPicture
		{
			idc = IDC_MULTI_FULL_FILTER;
			x = 0.0; y = 0.0;
			w = 0.05; h = 0.05;
		};			


		//Connect to a remote server using an IP address.
		class CA_BRemote: RscButton
		{
			idc = IDC_MULTI_REMOTE;
			x = 0.50; y = 0.932;
			w = 0.15; h = 0.03;
			// style = ST_CENTER;
			text = $STR_CA_MULTI_REMOTE;
		};


		//ADDRESS:
		class CA_Internet_Lan: CA_BRemote
		{
			idc = IDC_MULTI_INTERNET;
			x = 0.06; w = 0.25;  
		};

		//Apply filters to the server list.
		class CA_BFilter: CA_BRemote
		{
			idc = IDC_MULTI_FILTER;
			text = $STR_DISP_MULTI_FILTER;
			//style = ST_CENTER;
			x = 0.33; 
		};
		//Server search progress bar.
		class CA_Progress2: RscProgress
		{
			idc = IDC_MULTI_PROGRESS;			
			x = 0.06; y = 0.075;
			w = 0.780; h = 0.01;
			colorBar[] = CA_UI_title_background;
			colorFrame[] =  CA_UI_transparent;
		};

		class CA_Title2: RscTitle
		{
			idc = IDC_MULTI_TITLE;
			x = 0.06; y = 0.05;
			style = ST_LEFT;
			SizeEx= TextSize_medium;
		};
		
				//Refresh the server list.
		class CA_Refresh: CA_RscButton
		{
			idc = IDC_MULTI_REFRESH;
			text = $STR_DISP_MULTI_REFRESH;
			y = 0.75;	
		};


		class CA_New: CA_RscButton
		{
			idc = IDC_MULTI_NEW;
 			text = $STR_CA_MULTI_NEW;
 			default = 0;
		};

		class CA_Join: CA_RscButton
		{
			idc = IDC_MULTI_JOIN;
			y = 0.85;
			default = 1;
 			text = $STR_CA_MULTI_JOIN;
		};

		class CA_Cancel: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.9;
			default = 0;
  			text = $STR_CA_CANCEL;
		};

		//Switch between Internet and LAN servers.
		/*class CA_Adress: CA_OK
		{
			idc = -1;
			x = 0.05; y = 0.2;
			w = 0.15; h = 0.06;
      onMouseEnter = "_display = ctrlParent (_this select 0); _ctrl035 = _display displayCtrl 035; _ctrl036 = _display displayCtrl 036; _ctrl035 ctrlSetTextColor [1, 1, 1, 0.9]; _ctrl036 ctrlSetTextColor [0, 0, 0, 1]";
      onMouseExit = "_display = ctrlParent (_this select 0); _ctrl035 = _display displayCtrl 035; _ctrl036 = _display displayCtrl 036; _ctrl035 ctrlSetTextColor [1,1,1,0.9]; _ctrl036 ctrlSetTextColor [0, 0, 0, 0.9]";
      onSetFocus = "_display = ctrlParent (_this select 0); _ctrl035 = _display displayCtrl 035; _ctrl036 = _display displayCtrl 036; _ctrl035 ctrlSetTextColor [1, 1, 1, 0.9]; _ctrl036 ctrlSetTextColor [0, 0, 0, 1]";
      onKillFocus = "_display = ctrlParent (_this select 0); _ctrl035 = _display displayCtrl 035; _ctrl036 = _display displayCtrl 036; _ctrl035 ctrlSetTextColor [1,1,1,0.9]; _ctrl036 ctrlSetTextColor [0, 0, 0, 0.9]";
		};
		class CA_Adress_image: CA_OK_image
		{
			idc = 035;
			x= 0.05; y = 0.20;
			w= 0.15;
			text = "\ca\ui\textures\title_up.paa";
		};
		class CA_Adress_text: CA_OK_text
		{
			idc = 036;
			x= 0.05; y = 0.2;
			w= 0.15;
		};*/
	};
};

class RscDisplayFilter: RscStandardDisplay
{
	__EXEC( _windowWidth = 51; _windowHeight = 64;)
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.5 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowBorder = 1;)
	
	class controlsBackground
	{

		class Mainback: CA_Mainback
		{
			moving = true;
			x = __EVAL(_xInit + (0 * _xSpacing)); 
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
		};
		class Elementsback: CA_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowBorder*2 + 4  ) * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL((_windowHeight - 3 * _windowBorder - 4 - 16) * _ySpacing);
		};
		class FilterTitleBack: CA_Title_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};
		class Logo: CA_Logo_small
		{
			x = __EVAL(_xInit + ((_windowWidth - 25)  * _xSpacing)); 
			y = __EVAL(_yInit + (-3.9 * _ySpacing));
		};		
	};
	
	class controls
	{
		delete Title;
		delete FilterTitle;
		delete TextMaxPing;
		delete TextMinPlayers;
		delete TextMaxPlayers;
		delete ValueMaxPlayers;
		delete ValueMinPlayers; 
		delete ValueMaxPing;
		delete ValueServer;
		delete PasswordedServers;
		delete FilterType;
		delete FullServers;		
		delete TextServer;		
		delete B_OK;
		delete B_Cancel;
		delete B_Default;

  		class CA_FilterTitle: CA_Title 
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
			text = $STR_DISP_FILTER_TITLE;
			colorText[] = Color_White;	
		};

		class CA_TextServer: RscText
		{
			x = __EVAL(_xInit + (2 * _xSpacing));
			y = __EVAL(_yInit + (7 * _ySpacing)); 
			w = __EVAL(16 * _xSpacing);
			text = $STR_DISP_FILTER_SERVER;
		};
		//Server name filter field.
		class CA_ValueServerBack: RscPicture
		{
			x = __EVAL(_xInit + (18 * _xSpacing)); 
			y = __EVAL(_yInit + (7 * _ySpacing));
			w = __EVAL((_windowWidth -  (18 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			text = "\ca\ui\textures\white_basic.paa";
		}; 
		
		class CA_ValueServer: RscEdit
		{
			idc = IDC_FILTER_SERVER;
			x = __EVAL(_xInit + (18 * _xSpacing)); 
			y = __EVAL(_yInit + (7 * _ySpacing));
			w = __EVAL((_windowWidth -  (18 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};

		class CA_TextMaxPing: CA_TextServer
		{
			y = __EVAL(_yInit + (12 * _ySpacing)); 
			text = $STR_DISP_FILTER_MAXPING;
		};
		//Maximum ping filter field.
		
		class CA_ValueMaxPingBack: CA_ValueServerBack
		{
			y = __EVAL(_yInit + (12 * _ySpacing));
		}; 
		class CA_ValueMaxPing: CA_ValueServer
		{
			idc = IDC_FILTER_MAXPING;
			y = __EVAL(_yInit + (12 * _ySpacing));
		};
		
		class CA_TextMinPlayers: CA_TextServer
		{
			y = __EVAL(_yInit + (17 * _ySpacing)); 
			text = $STR_DISP_FILTER_MINPLAYERS;
		};
		
		class CA_MinPlayersBack: CA_ValueServerBack
		{
			y = __EVAL(_yInit + (17 * _ySpacing));
		}; 
		//Minimum amount of players filter field.
		class CA_ValueMinPlayers: CA_ValueServer
		{
			idc = IDC_FILTER_MINPLAYERS;
			y = __EVAL(_yInit + (17 * _ySpacing));
		};		

		class CA_TextMaxPlayers: CA_TextServer
		{
			y = __EVAL(_yInit + (22 * _ySpacing)); 
			text = $STR_DISP_FILTER_MAXPLAYERS;
		};
		//Maximum amount of players filter field.
		class CA_MaxPlayersBack: CA_ValueServerBack
		{
			y = __EVAL(_yInit + (22 * _ySpacing));
		}; 		
		
		class CA_ValueMaxPlayers: CA_ValueServer
		{
			idc = IDC_FILTER_MAXPLAYERS;
			y = __EVAL(_yInit + (22 * _ySpacing));
		};		

		//Todo: re-enable.
		class CA_TextMission: CA_TextServer
		{
			y = __EVAL(_yInit + (27 * _ySpacing)); 
			text = $STR_DISP_FILTER_MISSION;
		};
		class CA_MissionBack: CA_ValueServerBack
		{
			y = __EVAL(_yInit + (27 * _ySpacing));
		}; 		
		
		//Mission name filter field.
		class ValueMission: CA_ValueServer
		{
			idc = IDC_FILTER_MISSION;
			y = __EVAL(_yInit + (27 * _ySpacing));
		};
		class CA_TextFilterType: CA_TextServer
		{
			y = __EVAL(_yInit + (32 * _ySpacing)); 
			text = $STR_DISP_ARCGRP_TYPE;
		};	
		class CA_ValueTypeBack: RscPicture
		{
			x = __EVAL(_xInit + (18 * _xSpacing)); 
			y = __EVAL(_yInit + (32 * _ySpacing));
			w = __EVAL((_windowWidth -  (18 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			text = "\ca\ui\textures\white_basic.paa";
		}; 
		
		class CA_FilterType: RscCombo
		{
			idc = IDC_FILTER_TYPE;
			x = __EVAL(_xInit + (18 * _xSpacing)); 
			y = __EVAL(_yInit + (32 * _ySpacing));
			w = __EVAL((_windowWidth -  (18 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);			
		}; 
		class CA_TextHideFull: CA_TextServer
		{
			y = __EVAL(_yInit + (37 * _ySpacing)); 
			text = $STR_FILTER_FULL_TEXT;
		};
		//Show or hide full servers.
		class CA_FullServers: RscButton
		{
			idc = IDC_FILTER_FULL;
			x = __EVAL(_xInit + (18 * _xSpacing)); 
			y = __EVAL(_yInit + (37 * _ySpacing));
		};
		class CA_TextPassworded: CA_TextServer
		{
			y = __EVAL(_yInit + (42 * _ySpacing)); 
			text = $STR_FILTER_PASSWORDED_TEXT;
		};
		//Show or hide passworded servers.
		class CA_PasswordedServers: CA_FullServers
		{
			idc = IDC_FILTER_PASSWORDED;
			y = __EVAL(_yInit + (42 * _ySpacing));
		};

  	//Restore all filters to the default setting.
  	class CA_Filter_Default: CA_RscButton_dialog
  	{
  		idc = IDC_FILTER_DEFAULT;
		x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 20 ) * _xSpacing)); 
		y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 15 ) * _ySpacing));
		h = __EVAL(4 * _ySpacing);
  		text = $STR_DISP_DEFAULT;		  		
  	};

	class CA_Filter_Ok: CA_Filter_Default
	{
		idc = IDC_OK;
		y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 10 ) * _ySpacing));
		default = 1;
   		text = $STR_DISP_OK;
	};
	
	class CA_Filter_Cancel: CA_Filter_Default
	{
		idc = IDC_CANCEL;
		default = 0;
		y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 5 ) * _ySpacing));
		text = $STR_CA_CANCEL;
	};
  };
};


//Create a new server screen.
class RscDisplayServer: RscStandardDisplay
{
	
	colorEditor[] = {0, 0.2, 0, 1};
	colorWizard[] = {0, 0, 0.2, 1};
	colorMission[] = {0, 0, 0, 1};
	colorMissionEditor[]  = {0, 0.2, 0, 1};
	colorMissionWizard[] = {0, 0, 0.2, 1};
	
	class controlsBackground
	{
		//class Mainback: CA_Mainback{};
		//class Logo: CA_Logo{};

		class MainBack: CA_Mainback
			{
			x = 0.05; y = 0.31;
			w = 0.8; h = 0.65;
		};

		class CA_Logo: CA_Logo
		{
			x = 0.64; y = 0.315;
			w = 0.2; h = 0.03;
		};

		class Uplegenda: CA_Title_back
		{
			x = 0.06; y = 0.36;
			w = 0.38; h = 0.03;
		};

		class Uplegenda2: CA_Title_back
		{
			x = 0.455; y = 0.36;
			w = 0.38; h = 0.03;
		};

		class Missionback: CA_Back
		{
			x = 0.06; y = 0.39;
			w = 0.38; h = 0.55;
		};

		class Islandback: Missionback
		{
			x = 0.455;
		};
		/*
		class BackRegular: CA_Back2
		{
			x = 0.06; y = 0.92;
			w = 0.3; h = 0.03;
			colorBackground[] = Color_DarkRed;
		};

		class BackEdit: BackRegular
		{
			x = 0.455;
		};

		/*class B_Edit: RscText
		{
			x = 0.505; y = 0.92;
			w = 0.2; h = 0.03;
			//colortext[] = {0.6, 0.6, 0.6, 1};
			//colorActive[] = {0.5, 0.5, 0.5, 1};
			text = $STR_DISP_EDIT;
		};*/
	};

	class controls
	{
		delete B_OK;
		delete B_Cancel;
		delete B_Editor;
		delete B_Difficulty;
		delete ValueMissions;
		delete ValueIslands;
		
		class Title: RscTitle
		{
			x = 0.06; y = 0.31;
			style = ST_LEFT;
			SizeEx = TextSize_medium;
		};

		class TextIslands: RscText
		{
			x = 0.06; y = 0.36;
			h = 0.03;
			colortext[] = Color_White;
		};
		//List of the available maps.
		class CA_ValueIslands: RscListBox
		{
			idc = IDC_SERVER_ISLAND;
			x = 0.065; y = 0.4;
			w = 0.36; h = 0.5;
		};

		class TextMissions: RscText
		{
			x = 0.455;  y = 0.36;
			h = 0.03;
			colortext[] = Color_White;
		};
		//List of 	the available missions.
		class CA_ValueMissions: RscListBox
		{
			
			idc = IDC_SERVER_MISSION;
			x = 0.465; y = 0.4;
			w = 0.36; h = 0.5;
			
			
		};

		class CA_B_Difficulty: CA_RscButton
		{
			idc = IDC_SERVER_DIFF;
			y = 0.7;
			text = $STR_DISP_OPTIONS_DIFFICULTY;			
		};


		//Edit the mission in the editor.
		class CA_B_Editor: CA_RscButton
		{
			idc = IDC_SERVER_EDITOR;
			y = 0.75;
			text = $STR_DISP_EDIT;			
		};

		CA_OK_AND_CANCEL_BUTTONS( $STR_DISP_OK, $STR_CA_CANCEL,1)
	};
};


//Multiplayer session setup screen.
class RscDisplayMultiplayerSetup: RscStandardDisplay
{
	west= flag_west;
	east = flag_east;
	guer = flag_guer;
	civl = flag_civl;

	none = flag_civl;
	westUnlocked = flag_west;
	westLocked = flag_civl;
	eastUnlocked = flag_east;
	eastLocked = flag_civl;
	guerUnlocked = flag_guer;
	guerLocked = flag_civl;
	civlUnlocked = flag_civl;
	civlLocked = flag_civl;
	
	disabledAllAI = "\ca\ui\textures\ai2_off.paa";
	enabledAllAI = "\ca\ui\textures\ai2_on.paa";
	hostLocked = "\ca\ui\data\lock_on_ca.paa";
	hostUnlocked = "\ca\ui\data\lock_off_ca.paa";
	
	colorNotAssigned[] = CA_UI_grey;
	colorAssigned[] = {0.78, 0.39, 0, 1};
	colorConfirmed[] = CA_UI_title_background; 
	
	class controlsBackground
	{
		class Mainback: CA_Mainback
		{
			x = 0.03; y = 0.05;
			w = 0.82; h = 0.9;
		};
		
		class Back1: CA_Back //Roles
		{
			x = 0.04; y = 0.21;
			w = 0.49; h = 0.49;
		};
		class Back2: CA_Back //Sides
		{
			x = 0.04; y = 0.21;
			w = 0.49; h = 0.08;
		};
		class Back3: Back1 //Parametrs
		{
			y = 0.74;
			h = 0.2;
		}; 
		class Back4: Back1 //Players
		{
			x = 0.54; y = 0.16;
			w = 0.3;  h = 0.542;
		};
		class Back5: Back1 //Lock
		{
			x = 0.54; y = 0.74;
			w = 0.3; h = 0.2;
		};
		
		class Black1: CA_Title_Back //Type atd.
		{
			x = 0.04; y = 0.13;
			w = 0.49; h = 0.08;
		};
		class Black2: Black1 //Parametrs
		{
			y = 0.71;
			h = 0.03;
			colorText[] = CA_UI_title_background_blue;
		};
		class Black3: Black2 //Players pool
		{
			y = 0.13;
			x = 0.54;
			w = 0.3;
		};
		class Black4: Black2 //Lock
		{
			x = 0.54; 			
			y = 0.71;
			w = 0.3;
			colorText[] = CA_UI_title_background_red;			
		};
		
		class Logo: CA_Logo
		{
			x = 0.62; y = 0.06;
			h = 0.05;
		};
	
	};
	
	class controls
	{
		//	delete B_Side; //No IDC found in core
		delete B_OK;
		delete B_Cancel;
		delete B_Kick;		
		delete TextMessage;
		delete ValueRoles;
		delete Title;
		
		class CA_Title: CA_Title
		{
			x = 0.04; y = 0.06;
			h = 0.06;
			text = $STR_DISP_MPSETUP_TITLE;
		};
		class TextMission: RscText
		{
			x = 0.045; y = 0.13;
			w = 0.12; h = 0.025;
			sizeEx = TextSize_normal;
			colorText[] = Color_White;
			text = $STR_DISP_SRVSETUP_NAME;
		};
		
		//Mission name.
		class ValueMission: RscText
		{
			idc = IDC_MPSETUP_NAME;
			x = 0.18; y = 0.13;
			w = 0.28; h = 0.025;
			sizeEx = TextSize_small;
			colorText[] = Color_White;
		};
		
		class TextIsland: RscText
		{
			x = 0.045; y = 0.155;
			h = 0.025;
			sizeEx = TextSize_small;
			colorText[] = Color_White;
			text = $STR_DISP_SRVSETUP_ISLAND;
		};
		
		//Island name.
		class ValueIsland: RscText
		{
			idc = IDC_MPSETUP_ISLAND;
			x = 0.18; y = 0.155;
			w = 0.28; h = 0.025;
			colorText[] = Color_White;			
			sizeEx = TextSize_small;
		};
		
		class TextDescription: RscText
		{
			x = 0.045; y = 0.18;
			w = 0.12; h = 0.025;
			sizeEx = TextSize_small;
			colorText[] = Color_White;			
			text = $STR_DISP_SRVSETUP_DESC;
		};
		
		//Mission description.
		class ValueDescription: RscText
		{
			idc = IDC_MPSETUP_DESC;
			x = 0.18; y = 0.18;
			w = 0.28;	h = 0.025;
			sizeEx = TextSize_small;
			colorText[] = Color_White;
		};
		
		class TextSide: RscText
		{
			x = 0.045; y = 0.21;
			w = 0.2; h = 0.02;
			text = $STR_DISP_MPSETUP_SIDE;
			sizeEx = TextSize_small;
		};
		
		class B_Side: RscActivetext
		{
			x = 0.05; y = 0.22;
			w = 0.1; h = 0.055;
			style = ST_CENTER;
			type = CT_ACTIVETEXT;
			color[] = {1, 1, 1, 0.8};
			colorActive[] = {1, 1, 1, 1};
			colorDisabled[] = {0.5, 0.5, 0.5, 1};
			colorShade[] = {0.8, 0.8, 0.8, 1};
			colorText[] = {0, 0, 0, 1};
			pictureWidth = 1;
			pictureHeight = 1;
			textHeight = 0.45;
		};	
		
		class CA_ValueRoles: RscListBox
		{
			idc = IDC_MPSETUP_ROLES;
			x = 0.045; y = 0.31;
			w = 0.48; h = 0.39;
			style = SL_VERT + ST_CENTER + LB_TEXTURES;
			rowHeight = 0.05;
			sizeEx = TextSize_small;

			colorText[] = {0, 0, 0, 0.9};
			colorSelectBackground[] = CA_UI_element_background;  			
			colorPlayer[] = CA_UI_title_background;
			colorAI[] = Color_Black;
			colorNobody[] = CA_UI_grey; 
						
			enabledAI = "ca\ui\textures\ai2_on.paa";
			disabledAI = "ca\ui\textures\ai2_off.paa";
		};		
		//Select BLUFOR side.
		class B_West: B_Side
		{
			x = 0.055; y = 0.23;
			picture = "\ca\ui\data\flag_bluefor_co.paa";
		};
		
		//Select OPFOR side.
		class B_East: B_Side
		{
			x = 0.175; y = 0.23;
			picture = "\ca\ui\data\flag_opfor_co.paa";
		};
		
		//Select Resistance side.
		class B_Guerrila: B_Side
		{
			x = 0.295; y = 0.23;
			picture = "\ca\ui\data\flag_indep_co.paa";
		};
		
		//Select Noncombatant side.
		class B_Civilian: B_Side
		{
			x = 0.405; y = 0.23;
			picture = "\ca\ui\data\flag_civil_co.paa";
		};
		
		//Enable and disable all AI units in the server.
		class B_EnableAll: RscActivetext
		{
			x = 0.584; y = 0.802;
			w = 0.062; h = 0.062;
			color[] = {1, 1, 1, 0.6};
			colorActive[] = {1, 1, 1, 1};
			colorDisabled[] = {1, 1, 1, 0.3};
			colorShade[] = {1, 1, 1, 0.3};
		};
		
		//Lock and unlock the server for other clients.
		class B_Lock: RscActivetext
		{
			x = 0.731; y = 0.802;
			w = 0.062; h = 0.062;
			color[] = {1, 1, 1, 0.6};
			colorActive[] = {1, 1, 1, 1};
			colorDisabled[] = {1, 1, 1, 0.3};
			colorShade[] = {1, 1, 1, 0.3};
		};
		
		class TextRoles: RscText
		{
			x = 0.045; y = 0.29;
			h = 0.02;
			style = ST_LEFT;
			colortext[] = {0, 0, 0, 1};
			sizeEx = TextSize_small;
		};
		
		//Custom mission parameter 1.
		class TextParam1: RscText
		{
			x = 0.05; y = 0.715;
			w = 0.235; h = 0.03;
			colorText[] = Color_White;
			sizeEx = TextSize_small;
		};
		
		//Values for custom mission parameter 1.
		class ValueParam1: RscListBox
		{
			x = 0.05; y = 0.75;
			w = 0.23; h = 0.19;
			sizeEx = TextSize_small;
			rows = 8;
		};
		
		//Custom mission parameter 2.
		class TextParam2: RscText
		{
			x = 0.295; y = 0.715;
			w = 0.235; h = 0.03;
			colorText[] = Color_White;			
			sizeEx = TextSize_small;
		};
		
		//Values for custom mission parameter 1.
		class ValueParam2: RscListBox
		{
			x = 0.29; y = 0.75;
			w = 0.23; h = 0.19;
			rows = 8;
		};
		
		class TextSettings: RscText
		{
			x = 0.55; y = 0.714;
			w = 0.28; h = 0.03;
			style = ST_LEFT;
			sizeEx = TextSize_small;
			colorText[] = Color_White;
			text = $STR_CA_MULTI_SERVSET;
		};
		
		class TextPool: RscText
		{
			x = 0.55; y = 0.134;
			w = 0.28; h = 0.03;
			style = ST_LEFT;
			sizeEx = TextSize_small;
			colorText[] = Color_White;
		};
		
		//Server clients pool.
		class ValuePool: RscListBox
		{
			x = 0.545; y = 0.175;
			w = 0.29; h = 0.532;
			rows = 25;
			colorSelectBackground[] = CA_UI_element_background;  
		};
		class CA_TextVotingTimeLeft: RscText
		{
			idc = IDC_MPSETUP_TIMEOUT;
			x = 0.04; y = 0.06;
			h = 0.06; w = 0.6;
			style = ST_RIGHT;
		};
		//Kick client from the server.
		class CA_B_Kick: Rscbutton
		{
			idc = IDC_MPSETUP_KICK;
			text = $STR_DISP_MP_KICKOFF;
			x = 0.86; y = 0.7;
			w = 0.14; h = 0.04;			
		};
		
		CA_OK_AND_CANCEL_BUTTONS( $STR_DISP_OK, $STR_CA_CANCEL,1)
	
	};
};

//Enter a server password screen.
class RscDisplayPassword: RscStandardDisplay
{

	__EXEC( _windowWidth = 55; _windowHeight = 21;)
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.5 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowBorder = 1;)
	
	class controlsBackground
	{

		class Mainback: CA_Mainback
		{
			moving = true;
			x = __EVAL(_xInit + (0 * _xSpacing)); 
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
			colorbackground[] = CA_UI_background;
		};
		class PasswordTitleBack: CA_Title_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};
		class Logo: CA_Logo_small
		{
			x = __EVAL(_xInit + ((_windowWidth - 25)  * _xSpacing)); 
			y = __EVAL(_yInit + (-3.9 * _ySpacing));
		};		
		
		class BB_Back: RscPicture
		{
			x = __EVAL(_xInit + (14 * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));
			w = __EVAL((_windowWidth -  (13 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			text = "\ca\ui\textures\white_basic.paa";
		};
	};

	class controls
	{
		delete B_OK;
		delete B_Cancel;
		delete Title;
		
		class SetPasswordTitle: CA_Title
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
			text = $STR_DISP_PASSWORD_TITLE;
			colorText[] = Color_White;	
		};

		class TextPassword: RscText
		{
			x = __EVAL(_xInit + (2 * _xSpacing));
			y = __EVAL(_yInit + (6 * _ySpacing)); 
			w = __EVAL(12 * _xSpacing);
			text = $STR_DISP_PASSWORD;
		};

		//Enter password field.
		class ValuePassword: RscEdit
		{		
			x = __EVAL(_xInit + (14 * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));
			w = __EVAL((_windowWidth -  (13 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);

			colorBackground[] = {0, 0, 0, 0.5};
		};

		class Ok: CA_RscButton_dialog
		{
			idc = IDC_OK;

			x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 20 ) * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 9 ) * _ySpacing));
			w = __EVAL(20 * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			default = 1;

      		text = $STR_DISP_OK;
		};
		
		class Cancel: Ok
		{
			idc = IDC_CANCEL;
			default = 0;
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 4 ) * _ySpacing));
			text = $STR_CA_CANCEL;
		};
		
	};
};

//Change port screen.
class RscDisplayPort: RscStandardDisplay
{

	__EXEC( _windowWidth = 55; _windowHeight = 21;)
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.5 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowBorder = 1;)
	
	class controlsBackground
	{

		class Mainback: CA_Mainback
		{
			moving = true;
			x = __EVAL(_xInit + (0 * _xSpacing)); 
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
			colorbackground[] = CA_UI_background;
		};
		class PortTitleBack: CA_Title_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};
		class Logo: CA_Logo_small
		{
			x = __EVAL(_xInit + ((_windowWidth - 25)  * _xSpacing)); 
			y = __EVAL(_yInit + (-3.9 * _ySpacing));
		};		
		class BB_Back: RscPicture
		{
			x = __EVAL(_xInit + (14 * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));
			w = __EVAL((_windowWidth -  (13 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			text = "\ca\ui\textures\white_basic.paa";
		};
	};

	class controls
	{
		delete Title;
		delete B_OK;
		delete B_Cancel;		
		delete TextPort;
		delete ValuePort;
		 
		class SetPortTitle: CA_Title
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
			text = $STR_DISP_PORT_TITLE;
			colorText[] = Color_White;	
		};
		
		class CA_TextPort: RscText
		{
			x = __EVAL(_xInit + (2 * _xSpacing));
			y = __EVAL(_yInit + (6 * _ySpacing)); 
			w = __EVAL(12 * _xSpacing);
			text = $STR_DISP_IP_PORT;
		};

		//Enter password field.
		class CA_Valueport: RscEdit
		{		
			idc = IDC_PORT_PORT;		
			x = __EVAL(_xInit + (14 * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));
			w = __EVAL((_windowWidth -  (13 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			colorBackground[] = {0, 0, 0, 0.5};
		};	

		class Ok: CA_RscButton_dialog
		{
			idc = IDC_OK;

			x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 20 ) * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 9 ) * _ySpacing));
			w = __EVAL(20 * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			default = 1;
      		text = $STR_DISP_OK;
		};
		
		class Cancel: Ok
		{
			idc = IDC_CANCEL;
			default = 0;
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 4 ) * _ySpacing));
			text = $STR_CA_CANCEL;
		};
		
	};
};

//Connect to a remote server screen.
class RscDisplayIPAddress: RscStandardDisplay
{

	__EXEC( _windowWidth = 45; _windowHeight = 28;)
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.5 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowBorder = 1;)
	
	class controlsBackground
	{

		class Mainback: CA_Mainback
		{
			moving = true;
			x = __EVAL(_xInit + (0 * _xSpacing)); 
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
		};

		class Elementsback: CA_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowBorder*2 + 4  ) * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL((_windowHeight - 3 * _windowBorder - 4 - 10) * _ySpacing);
		};

		class PausedTitleBack: CA_Title_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};
		class Address_Back: RscPicture
		{
			x = __EVAL(_xInit + (14 * _xSpacing)); 
			y = __EVAL(_yInit + (7 * _ySpacing));
			w = __EVAL((_windowWidth -  (14 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			text = "\ca\ui\textures\white_basic.paa";
		};
		class Port_Back: RscPicture
		{
			x = __EVAL(_xInit + (14 * _xSpacing)); 
			y = __EVAL(_yInit + (12 * _ySpacing));
			w = __EVAL((_windowWidth -  (14 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			text = "\ca\ui\textures\white_basic.paa";
		};
		class Logo: CA_Logo_small
		{
			x = __EVAL(_xInit + ((_windowWidth - 25)  * _xSpacing)); 
			y = __EVAL(_yInit + (-4.9 * _ySpacing));
		};		
		
	};

	class controls
	{
		delete B_OK;
		delete B_Cancel;
		delete Title;
		delete TextPort; 
		delete ValuePort; 
		delete TextAddress; 
		delete ValueAddress; 

		class CA_IPTitle: CA_Title
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
			colorText[] = Color_White;	
			text = $STR_DISP_IP_TITLE;			
		};
	  	class CA_TextAddress: RscText
		{
			x = __EVAL(_xInit + (2 * _xSpacing));
			y = __EVAL(_yInit + (7 * _ySpacing)); 
			w = __EVAL(12 * _xSpacing);
			text = $STR_DISP_IP_ADDRESS;
		};

		//Enter IP address field.
		class CA_ValueAddress: RscEdit
		{
			idc = IDC_IP_ADDRESS;
			x = __EVAL(_xInit + (14 * _xSpacing)); 
			y = __EVAL(_yInit + (7 * _ySpacing));
			w = __EVAL((_windowWidth -  (14 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};

		class CA_TextPort: RscText
		{
			x = __EVAL(_xInit + (2 * _xSpacing));
			y = __EVAL(_yInit + (12 * _ySpacing)); 
			w = __EVAL(12 * _xSpacing);
			text = $STR_DISP_IP_PORT;
		};

		//Enter port number field.
		class CA_ValuePort: RscEdit
		{
			idc = IDC_IP_PORT;
			x = __EVAL(_xInit + (14 * _xSpacing)); 
			y = __EVAL(_yInit + (12 * _ySpacing));
			w = __EVAL((_windowWidth -  (14 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};


		class Ok: CA_RscButton_dialog
		{
			idc = IDC_OK;
			x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 20 ) * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 9 ) * _ySpacing));
			h = __EVAL(4 * _ySpacing);
			default = 1;
      		text = $STR_DISP_OK;
		};
		
		class Cancel: Ok
		{
			idc = IDC_CANCEL;
			default = 0;
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 4 ) * _ySpacing));
			text = $STR_CA_CANCEL;
		};	
	};
};

//Server host waiting screen.
class RscDisplayServerGetReady: RscDisplayGetReady
{
	color0[] = CA_UI_grey;
	color1[] = {1,0.6,0,1};
	color2[] = CA_UI_title_background; 
	
	class controls
	{
		delete B_Cancel;
		delete B_Continue;
		delete PlayersTitle;
		delete Players;

		class Mainback: CA_Mainback
		{
			x = 0.729;
			y = 0.19;
			w = 0.237;
			h = 0.492;	
		};
		class CA_PlayersTitleBack: CA_Title_Back
		{
			x = 0.737;
			y = 0.20;
			w = 0.219;
			h = __EVAL(4 * _ySpacing);
		};
		class CA_PlayersTitle: CA_Title
		{
			x = 0.737;
			y = 0.20;
			w = 0.219;
			h = __EVAL(4 * _ySpacing);
			colorText[] = Color_White;	
			text = $STR_DISP_SRVSETUP_PLAYERS;
		};
		//List of players in the server. 
		class CA_Players: RscListBox
		{
			idc = IDC_SERVER_READY_PLAYERS; 
			x = 0.737;
			y = 0.25;
			w = 0.219;
			h = 0.423;
			colorSelectBackground2[] = CA_UI_transparent;
			colorSelectBackground[] = CA_UI_transparent;			
		};
		
		class BX_Continue: CA_RscButton_dialog
		{
			default = 1;
			y = 0.8;
			idc = IDC_OK;
			text = $STR_CA_MAIN_CONTINUE;
		};

		class BX_Cancel: CA_RscButton_dialog
		{
			default = 0;
			y = 0.85;		
			idc = IDC_CANCEL;
			text = $STR_CA_CANCEL;
		};		
	};
};

//Client waiting screen.
class RscDisplayClientGetReady: RscDisplayGetReady
{

	color0[] = CA_UI_grey;
	color1[] = {1,0.6,0,1};
	color2[] = CA_UI_title_background; 
	
	class controls
	{
		delete B_Cancel;
		delete B_Continue;
		delete PlayersTitle;
		delete Players;

		class Mainback: CA_Mainback
		{
			x = 0.729;
			y = 0.19;
			w = 0.237;
			h = 0.492;	
		};
		class CA_PlayersTitleBack: CA_Title_Back
		{
			x = 0.737;
			y = 0.20;
			w = 0.219;
			h = __EVAL(4 * _ySpacing);
		};
		class CA_PlayersTitle: CA_Title
		{
			x = 0.737;
			y = 0.20;
			w = 0.219;
			h = __EVAL(4 * _ySpacing);
			colorText[] = Color_White;	
			text = $STR_DISP_SRVSETUP_PLAYERS;
		};
		//List of players in the server.
		class CA_Players: RscListBox
		{
			idc = IDC_SERVER_READY_PLAYERS; 
			x = 0.737;
			y = 0.25;
			w = 0.219;
			h = 0.423;
		};
		
		class BX_Continue: CA_RscButton_dialog
		{
			default = 1;
			y = 0.8;
			idc = IDC_OK;
			text = $STR_CA_MAIN_CONTINUE;
		};

		class BX_Cancel: CA_RscButton_dialog
		{
			default = 0;
			y = 0.85;		
			idc = IDC_CANCEL;
			text = $STR_CA_CANCEL;
		};		
	};
};

//Player information and statistics screen.
class RscDisplayMPPlayers: RscStandardDisplay
{
	__EXEC( _windowWidth = 130; _windowHeight = 90;)
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.5 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowBorder = 1;)
	
	class controlsBackground
	{

		class Mainback: CA_Mainback
		{
			moving = true;
			x = __EVAL(_xInit + (0 * _xSpacing)); 
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
			colorbackground[] = CA_UI_background;
		};
		class Missionback: CA_Back
		{
			x = 0.025; y = 0.11;
			w = 0.95; h = 0.035;
		};
		class Playersback: CA_Back
		{
			x = 0.025; y = 0.15;
			w = 0.25; h = 0.72;
		};
		class Squadback: CA_Back
		{
			x = 0.28; y = 0.15;
			w = 0.7; h = 0.72;
		};
		class FilterTitleBack: CA_Title_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};
		class Logo: CA_Logo_small
		{
			x = __EVAL(_xInit + ((_windowWidth - 25)  * _xSpacing)); 
			y = __EVAL(_yInit + (-3.9 * _ySpacing));
		};		
	};

	class controls
	{
		delete Title;
		delete TextMission;
		delete ValueMission;
		delete TextIsland;
		delete ValueIsland;
		delete TextTime;
		delete ValueTime;
		delete ValueRest;
		delete TextPlayers;
		delete ValuePlayers;
		delete TextPlayer;
		delete ValuePlayer;
		delete TextPlayerName;
		delete ValuePlayerName;
		delete TextPlayerMail;
		delete ValuePlayerMail;
		delete TextPlayerICQ;
		delete ValuePlayerICQ;
		delete TextPlayerRemark;
		delete ValuePlayerRemark;
		delete PingTitle;
		delete PingMinValue;
		delete PingAvgValue;
		delete PingMaxValue;
		delete BandwidthTitle;
		delete BandwidthMinValue;
		delete BandwidthAvgValue;
		delete BandwidthMaxValue;
		delete DesyncTitle;
		delete DesyncValue;
		delete TextSquad;
		delete ValueSquad;
		delete TextSquadName;
		delete ValueSquadName;
		delete TextSquadId;
		delete ValueSquadId;
		delete TextSquadMail;
		delete ValueSquadMail;
		delete TextSquadWeb;
		delete ValueSquadWeb;
		delete TextSquadPicture;
		delete ValueSquadPicture;
		delete TextSquadTitle;
		delete ValueSquadTitle;
		delete B_Cancel;
		delete B_Ban;
		delete B_KickOff;
				
		class CA_PlayersTitle: CA_Title 
		{
			text = $STR_DISP_MP_PLAYERS_TITLE;
			x = 0.025; y = 0.055;
			w = 0.12;
			colortext[] = Color_White;
		};

		class CA_TextMission: RscText
		{
			x = 0.025; y = 0.11;
			w = 0.12;
			text = $STR_DISP_SRVSETUP_NAME;
		};

		//Mission being played.
		class CA_ValueMission: RscText
		{
			idc = IDC_MP_PL_MISSION;
			x = 0.145; y = 0.11;
			w = 0.23;
		};

		class CA_TextIsland: RscText
		{
			x = 0.40; y = 0.11;
			w = 0.1;
			text = $STR_DISP_SRVSETUP_ISLAND;
		};

		//Map being played on.
		class CA_ValueIsland: RscText
		{
			idc = IDC_MP_PL_ISLAND;
			x = 0.50; y = 0.11;
			w = 0.2;
		};

		class CA_TextTime: RscText
		{
			x = 0.625; y = 0.11;
			w = 0.1;
			text = $STR_DISP_MP_PL_TIME;
		};

		//Current playing time.
		class CA_ValueTime: RscText
		{
			idc = IDC_MP_PL_TIME;
			x = 0.725; y = 0.11;
			w = 0.10;
		};

		//Estimated remaining playing time.
		class CA_ValueRest: RscText
		{
			idc = IDC_MP_PL_REST;
			x = 0.825; y = 0.11;
			w = 0.15;
		};

		class CA_TextPlayers: RscText
		{
			x = 0.025; y = 0.15;
			w = 0.25;
			text = $STR_DISP_MP_PLAYERS;
		};

		//Available players on the server.
		class CA_ValuePlayers: RscListBox
		{
			idc = IDC_MP_PLAYERS;
			onLBSelChanged = "_this call compile preprocessfile ""\ca\ui\scripts\lbColor.sqf"";";
			
			x = 0.025; y = 0.2;
			w = 0.25; h = 0.65;
			rows = 18.5;
		};

		class CA_TextPlayer: RscText
		{
			x = 0.3; y = 0.15;
			w = 0.15;
			text = $STR_DISP_MP_PL;
		};

		//Selected player.
		class CA_ValuePlayer: RscText
		{
			idc = IDC_MP_PL;
			x = 0.45; y = 0.15;
			w = 0.525;
		};

		class CA_TextPlayerName: RscText
		{
			x = 0.325; y = 0.18;
			w = 0.125;
			text = $STR_DISP_MP_PL_NAME;
		};

		//Player's real name.
		class CA_ValuePlayerName: RscText
		{
			idc = IDC_MP_PL_NAME;
			x = 0.45; y = 0.18;
			w = 0.525;
		};

		class CA_TextPlayerMail: RscText
		{
			x = 0.325; y = 0.21;
			w = 0.125;
			text = $STR_DISP_MP_PL_MAIL;
		};

		//Player's e-mail address.
		class CA_ValuePlayerMail: RscText
		{
			idc = IDC_MP_PL_MAIL;
			x = 0.45; y = 0.21;
			w = 0.525;
		};

		class CA_TextPlayerICQ: RscText
		{
			x = 0.325; y = 0.24;
			w = 0.125;
			text = $STR_DISP_MP_PL_ICQ;
		};

		//Player's ICQ number.
		class CA_ValuePlayerICQ: RscText
		{
			idc = IDC_MP_PL_ICQ;
			x = 0.45; y = 0.24;
			w = 0.525;
		};

		class CA_TextPlayerRemark: RscText
		{
			x = 0.325; y = 0.27;
			w = 0.125;
			text = $STR_DISP_MP_PL_REMARK;
		};

		//Player's custom remark.
		class CA_ValuePlayerRemark: RscText
		{
			idc = IDC_MP_PL_REMARK;
			x = 0.45; y = 0.27;
			w = 0.525; h = 0.145;
			style = ST_MULTI;
			lines = 3;
			lineSpacing = 0.01;
		};

		class CA_PingTitle: RscText
		{
			x = 0.325; y = 0.42;
			w = 0.150;
			text = $STR_DISP_MP_PING;
		};

		//Player's minimum ping.
		class CA_PingMinValue: RscText
		{
			idc = IDC_MP_PL_MINPING;
			x = 0.48; y = 0.42;
			w = 0.07;
		};

		//Player's average ping.
		class CA_PingAvgValue: RscText
		{
			idc = IDC_MP_PL_AVGPING;
			x = 0.58; y = 0.42;
			w = 0.07;
		};

		//Player's maximum ping.
		class CA_PingMaxValue: RscText
		{
			idc = IDC_MP_PL_MAXPING;
			x = 0.68; y = 0.42;
			w = 0.07;
		};

		class CA_BandwidthTitle: RscText
		{
			x = 0.325; y = 0.45;
			w = 0.15;
			text = $STR_DISP_MP_BANDWIDTH;
		};

		//Player's minimum bandwidth.
		class CA_BandwidthMinValue: RscText
		{
			idc = IDC_MP_PL_MINBAND;
			x = 0.48; y = 0.45;
			w = 0.07;
		};

		//Player's average bandwidth.
		class CA_BandwidthAvgValue: RscText
		{
			idc = IDC_MP_PL_AVGBAND;
			x = 0.58; y = 0.45;
			w = 0.07;
		};

		//Player's maximum bandwidth.
		class CA_BandwidthMaxValue: RscText
		{
			idc = IDC_MP_PL_MAXBAND;
			x = 0.68; y = 0.45;
			w = 0.07;
		};

		class CA_DesyncTitle: RscText
		{
			x = 0.325; y = 0.48;
			w = 0.15;
			text = $STR_DISP_MP_DESYNC;
		};

		//Player's desynchronization.
		class CA_DesyncValue: RscText
		{
			idc = IDC_MP_PL_DESYNC;
			x = 0.48; y = 0.48;
			w = 0.07;
		};

		class CA_TextSquad: RscText
		{
			x = 0.3; y = 0.54;
			w = 0.15;
			text = $STR_DISP_MP_SQ;
		};

		//Player's squad XML information page.
		class CA_ValueSquad: RscText
		{
			idc = IDC_MP_SQ;
			x = 0.45; y = 0.54;
			w = 0.525;
		};

		class CA_TextSquadName: RscText
		{
			x = 0.325; y = 0.57;
			w = 0.125;
			text = $STR_DISP_MP_SQ_NAME;
		};

		//Player's squad name.
		class CA_ValueSquadName: RscText
		{
			idc = IDC_MP_SQ_NAME;
			x = 0.45; y = 0.57;
			w = 0.525;
		};

		class CA_TextSquadId: RscText
		{
			x = 0.325; y = 0.6;
			w = 0.125;
			text = $STR_DISP_MP_SQ_ID;
		};

		//Player's squad ID number.
		class CA_ValueSquadId: RscText
		{
			idc = IDC_MP_SQ_ID;
			x = 0.45; y = 0.6;
			w = 0.525;
		};

		class CA_TextSquadMail: RscText
		{
			x = 0.325; y = 0.63;
			w = 0.125;
			text = $STR_DISP_MP_SQ_MAIL;
		};

		//Player's squad e-mail address.
		class CA_ValueSquadMail: RscText
		{
			idc = IDC_MP_SQ_MAIL;
			x = 0.45; y = 0.63;
			w = 0.525;
		};

		class CA_TextSquadWeb: RscText
		{
			x = 0.325; y = 0.66;
			w = 0.125;
			text = $STR_DISP_MP_SQ_WEB;
		};

		//Player's squad website.
		class CA_ValueSquadWeb: RscText
		{
			idc = IDC_MP_SQ_WEB;
			x = 0.45; y = 0.66;
			w = 0.525;
		};

		class CA_TextSquadPicture: RscText
		{
			x = 0.325; y = 0.69;
			w = 0.125;
			text = $STR_DISP_MP_SQ_PICTURE;
		};

		//Player's squad logo.
		class CA_ValueSquadPicture: RscPicture
		{
			idc = IDC_MP_SQ_PICTURE;
			style = ST_PICTURE;
			x = 0.45; y = 0.69;
			w = 0.093; h = 0.124;
		};

		class CA_TextSquadTitle: RscText
		{
			x = 0.325; y = 0.82;
			w = 0.125;
			text = $STR_DISP_MP_SQ_TITLE;
		};

		//Player's title in the squad.
		class CA_ValueSquadTitle: RscText
		{
			idc = IDC_MP_SQ_TITLE;
			x = 0.45; y = 0.82;
			w = 0.525;
		};

		//Kick the selected player from the server.
		class CA_B_KickOff: CA_RscButton_dialog
		{
			idc = IDC_MP_KICKOFF;
			x = 0.28; 
			y = 0.9;			
			borderSize = 0.00;
			text = $STR_DISP_MP_KICKOFF;					
		};

		//Kick and ban the selected player from the server.
		class CA_B_Ban: CA_B_KickOff
		{
			idc = IDC_MP_BAN;
			x = 0.438;
			borderSize = 0.00;
			text = $STR_DISP_MP_BAN;			
		};

		//Cancel back to the game.
		class CA_B_Cancel: CA_RscButton_dialog
		{
			idc = IDC_CANCEL;
			x = 0.828;
			y = 0.9;
			default = 1;
			text = $STR_DISP_CLOSE;
		};
	};
};

//Waiting screen for clients.
class RscDisplayClientWait: RscDisplayMPPlayers
{
	class LoadingPic: RscPicture
	{
		x = 0; y = 0;
		w = 1; h = 1;
		text = "\ca\ui\textures\loading.paa";
		colortext[] = {1, 1, 1, 1};
	};

	class Cancel: CA_OK
	{
		default = 1;
  	idc = IDC_CANCEL;
		y = 0.85;
    onMouseEnter = "_display = ctrlParent (_this select 0); _ctrl031 = _display displayCtrl 031; _ctrl032 = _display displayCtrl 032; _ctrl031 ctrlSetTextColor [0.84,1,0.55,1]; _ctrl032 ctrlSetTextColor [0, 0, 0, 1]";
    onMouseExit = "_display = ctrlParent (_this select 0); _ctrl031 = _display displayCtrl 031; _ctrl032 = _display displayCtrl 032; _ctrl031 ctrlSetTextColor [1,1,1,0.9]; _ctrl032 ctrlSetTextColor [0, 0, 0, 0.9]";
    onSetFocus = "_display = ctrlParent (_this select 0); _ctrl031 = _display displayCtrl 031; _ctrl032 = _display displayCtrl 032; _ctrl031 ctrlSetTextColor [0.84,1,0.55,1]; _ctrl032 ctrlSetTextColor [0, 0, 0, 1]";
    onKillFocus = "_display = ctrlParent (_this select 0); _ctrl031 = _display displayCtrl 031; _ctrl032 = _display displayCtrl 032; _ctrl031 ctrlSetTextColor [1,1,1,0.9]; _ctrl032 ctrlSetTextColor [0, 0, 0, 0.9]";
	};
	class Cancel_image: CA_OK_image
	{
		idc = 031;
		y = 0.85;
	};
	class Cancel_image2: CA_OK_image2
	{
		y = 0.85;
	};
	class Cancel_text: CA_OK_text
	{
		idc = 032;
		y = 0.85;
		text = $STR_CA_CANCEL;
	};
};

//Client logging on screen.
class RscDisplayClient: RscStandardDisplay
{
	class controlsBackground
	{
		class CA_Black_Back3: CA_Black_Back
		{	

		};

		class LoadingPic: RscPicture
		{
			x = 0; y = 0;
			w = 1;  h = 1;
			text = "\ca\ui\textures\loading.paa";
			colorText[] = {1, 1, 1, 1};
		};
	};

	class controls
	{
		class Background: RscText
		{
			x = 0.25; y = 0.45;
			w = 0.5;
			colorText[] = {1, 1, 1, 1};
		};

		class PlayersTitle: RscText
		{
			x = 0.75; y = 0.1;
			style = ST_LEFT;
			colorText[] = {1, 1, 1, 1};
		};

		//List of players in the server.
		class Players: RscListBox
		{
			x = 0.75; y = 0.15;
			colorText[] = {1, 1, 1, 1};
		};
	};
};


//In-game pause screen multiplayer.
class RscDisplayMPInterrupt: RscStandardDisplay
{

	__EXEC( _windowWidth = 22; _windowHeight = 26;)
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.618 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowBorder = 1;)
	
	
	
	class controlsBackground
	{

		class Mainback: CA_Mainback
		{
			moving = true;
			x = __EVAL(_xInit + (0 * _xSpacing)); 
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
			colorbackground[] = CA_UI_background;
		};

		class PausedTitleBack: CA_Title_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};
		
/*		class Logo: CA_Logo_small
		{
			x = __EVAL(_xInit + ((_windowWidth - 18)  * _xSpacing)); 
			y = __EVAL(_yInit + (-0.5 * _ySpacing));
			w = 0.15; h = 0.05;
		}; */		
		
	};
	
  class controls
	{
		delete Title;
		delete B_Players;
		delete B_Options;
		delete B_Abort;
		delete B_Continue;

 
	//	Mission name does not fit
		class Paused_Title: CA_Title
		{
		//	idc = IDC_INT_MISSION;
			text = $STR_DISP_MAIN_MULTI;
			colorText[] = Color_White;	
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
		}; 

		class CA_B_Continue: CA_RscButton_dialog
		{
			idc = IDC_CANCEL;
			x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 20 ) * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));
			text = $STR_DISP_INT_CONTINUE;
			default = 1;
		};

		class CA_B_Options: CA_B_Continue
		{
			idc = IDC_INT_OPTIONS;
			y = __EVAL(_yInit + (11  * _ySpacing));
			text = $STR_DISP_INT_OPTIONS;
			default = 0;
		};

		class CA_B_Abort: CA_B_Continue
		{
			idc = IDC_INT_ABORT;
			y = __EVAL(_yInit + (16 * _ySpacing));
			text = $STR_DISP_INT_ABORT;
			default = 0;
		};

		class CA_B_Respawn: CA_B_Continue
		{
			idc = IDC_CANCEL;
			onButtonClick = "if (alive player) then { player SetDamage 1;};";
			y = __EVAL(_yInit + ( 21 * _ySpacing));
			text = $STR_DISP_INT_RESPAWN;
			default = 0;
		};
		
	};
};


//Mission and map selection on a server.
class RscDisplayRemoteMissions: RscStandardDisplay
{
	
	class controlsBackground
	{

		class MainBack: CA_Mainback
			{
			x = 0.05; y = 0.31;
			w = 0.8; h = 0.65;
		};

		class CA_Logo: CA_Logo_small
		{
			x = 0.64; y = 0.315;
		};

		class Uplegenda: CA_Title_Back
		{
			x = 0.06; y = 0.36;
			w = 0.38; h = 0.03;
		};

		class Uplegenda2: CA_Title_Back
		{
			x = 0.455; y = 0.36;
			w = 0.38; h = 0.03;
		};

		class Missionback: CA_Back
		{
			x = 0.06; y = 0.39;
			w = 0.38; h = 0.55;
			colorBackground[] = {1, 1, 1, 0.5};
		};

		class Islandback: Missionback
		{
			x = 0.455;
		};


	};

	class controls
	{
		delete B_OK;
		delete B_Cancel;
		delete B_Editor;
		delete B_Difficulty;

		delete ValueMissions;
		delete TextMissions;

		delete ValueMaps;
		delete TextMaps;

		delete Title;		

		class CA_Title: RscTitle
		{
			x = 0.06; y = 0.31;
			style = ST_LEFT;
			SizeEx = TextSize_medium;

			text = $STR_DISP_SERVER_TITLE;
		};

		class CA_TextMaps: RscText
		{
			x = 0.06; y = 0.36;
			h = 0.03;
			colortext[] = Color_White;
			text = $STR_DISP_SERVER_ISLAND;
		};
		//List of the available maps.
		class CA_Valuemaps: RscListBox
		{
			idc = IDC_SERVER_ISLAND;
			x = 0.065; y = 0.4;
			w = 0.36; h = 0.5;
		};

		class CA_TextMissions: RscText
		{
			x = 0.455;  y = 0.36;
			h = 0.03;
			colortext[] = Color_White;
			text = $STR_DISP_SERVER_MISSION;
		};
		//List of 	the available missions.
		class CA_ValueMissions: RscListBox
		{
			
			idc = IDC_SERVER_MISSION;
			x = 0.465; y = 0.4;
			w = 0.36; h = 0.5;
			
			
		};

		class CA_B_Difficulty: CA_RscButton
		{
			idc = IDC_SERVER_DIFF;
			y = 0.7;
			text = $STR_DISP_OPTIONS_DIFFICULTY;			
		};


		class CA_B_Editor: CA_RscButton
		{
			idc = IDC_SERVER_EDITOR;
			y = 0.75;
			text = $STR_DISP_EDIT;			
		};


		CA_OK_AND_CANCEL_BUTTONS( $STR_DISP_OK, $STR_CA_CANCEL,1)
	};
};

//ToDo: finalize this display.
//Special display for people who already voted.
class RscDisplayRemoteMissionVoted: RscStandardDisplay
{
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.5 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowWidth = 76; _windowHeight = 57;)
	__EXEC( _windowBorder = 1;)

	class ControlsBackground
	{
		
		class CA_Mainbackground: CA_Mainback
		{
			moving = true;
			x = __EVAL(_xInit + (0 * _xSpacing)); 
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
			colorbackground[] = CA_UI_background;
		};	
		class CA_MissionVotedTitleback: CA_Title_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};

		class CA_RemainingTimeBack: CA_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			colorText[] =  CA_UI_element_background;
		};

		class CA_Players_list_back: CA_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (11 * _ySpacing));
			w = __EVAL(28 * _xSpacing);
			h = __EVAL(40 * _ySpacing);
			colorText[] = CA_UI_element_background;
		};

		class CA_Voted_missions_list_back: CA_Back
		{
			x = __EVAL(_xInit + (30 * _xSpacing));
			y = __EVAL(_yInit + (11 * _ySpacing));
			w = __EVAL(45 * _xSpacing);
			h = __EVAL(35 * _ySpacing); 
		};
		
		class CA_Voted_diff_back: CA_Voted_missions_list_back
		{
			y = __EVAL(_yInit + (47 * _ySpacing));
			h = __EVAL(4 * _ySpacing); 
		};		

		class Logo: CA_Logo_small
		{
			x = __EVAL(_xInit + ((_windowWidth - 25)  * _xSpacing)); 
			y = __EVAL(_yInit + (-1.9 * _ySpacing));
		};
	};
/*
RscDisplayRemoteMissionVoted
IDC_SERVER_PLAYERS_TITLE - text, titulek seznamu hráčů
IDC_SERVER_PLAYERS - listbox, seznam hráčů
IDC_SERVER_VOTED_MISSIONS - listbox, průběžné výsledky hlasování o misích
IDC_SERVER_VOTED_DIFFICULTY - text, průběžné výsledky hlasování o obtížnosti
IDC_SERVER_TIMEOUT - text, zbývající čas do konce hlasování
IDC_CANCEL - tlačítko, možnost opakovaného hlasování
*/
	class controls
	{
		delete TextWait;
		delete B_Cancel;
		
		class CA_Server_players_title: CA_Title
		{
			IDC = IDC_SERVER_PLAYERS_TITLE;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			colorText[] = Color_White;	
		};
		class CA_Remaining_Time: RscText
		{
			IDC = IDC_SERVER_TIMEOUT;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing));
			y = __EVAL(_yInit + (6 * _ySpacing)); 
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
		};
		
		class CA_Players_list: RscListBox
		{
			IDC = IDC_SERVER_PLAYERS;		
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (11 * _ySpacing));
			w = __EVAL(28 * _xSpacing);
			h = __EVAL(40 * _ySpacing);
		};
		
		class CA_Voted_missions_list: CA_Players_list
		{
			IDC = IDC_SERVER_VOTED_MISSIONS;		
			x = __EVAL(_xInit + (30 * _xSpacing));
			y = __EVAL(_yInit + (11 * _ySpacing));
			w = __EVAL(45 * _xSpacing);
			h = __EVAL(35 * _ySpacing); 
		};
		
		class CA_Voted_diff: RscText
		{
			IDC = IDC_SERVER_VOTED_DIFFICULTY;
			x = __EVAL(_xInit + (30 * _xSpacing));
			y = __EVAL(_yInit + (47 * _ySpacing));
			w = __EVAL(45 * _xSpacing);
			h = __EVAL(4 * _ySpacing); 
		};
		
		
		class CA_ChangeVote: CA_RscButton_dialog
		{
			idc = IDC_CANCEL;
			default = 1;

			x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 20 ) * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 4 ) * _ySpacing));
			w = __EVAL(20 * _xSpacing);
			h = __EVAL(4 * _ySpacing);

			text = $STR_CA_CANCEL;
		};
	};
};

//Enter a server password screen.
class RscDisplayHostSettings: RscStandardDisplay
{

	__EXEC( _windowWidth = 59; _windowHeight = 43;)
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.5 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowBorder = 1;)
	
	class controlsBackground
	{

		class Mainback: CA_Mainback
		{
			moving = true;
			x = __EVAL(_xInit + (0 * _xSpacing)); 
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
			colorbackground[] = CA_UI_background;
		};
		class Elementsback: CA_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowBorder*2 + 4  ) * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL((_windowHeight - 3 * _windowBorder - 4 - 10) * _ySpacing);
			colorbackground[] = CA_UI_element_background;
		};
		class HostSettingsTitleBack: CA_Title_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};
		class Logo: CA_Logo_small
		{
			x = __EVAL(_xInit + ((_windowWidth - 25)  * _xSpacing)); 
			y = __EVAL(_yInit + (-3.9 * _ySpacing));
		};			
	};

	class controls
	{
	
		delete Title;
		
		delete TextName;
		delete ValueName; 
		
		delete TextPassword; 
		delete ValuePassword; 
		
		delete TextMaxPlayers; 
		delete ValueMaxPlayers; 
		
		delete TextPrivate; 
		delete ValuePrivate; 
		
		delete TextPort;
		delete ValuePort; 
		delete B_OK;
		delete B_Cancel;

		
		class CA_SetHost_Title: CA_Title
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
      		text = $STR_DISP_SERVER_TITLE;
			colorText[] = Color_White;	
		};
	    // Session name
	    class CA_TextName : RscText
	    {
			x = __EVAL(_xInit + (2 * _xSpacing));
			y = __EVAL(_yInit + (7 * _ySpacing)); 
			w = __EVAL(15 * _xSpacing);
			text = $STR_DISP_GAME_NAME;
	    };
	    
		class CA_ValueNameBack: RscPicture
		{
			x = __EVAL(_xInit + (18 * _xSpacing)); 
			y = __EVAL(_yInit + (7 * _ySpacing));
			w = __EVAL((_windowWidth -  (18 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			text = "\ca\ui\textures\white_basic.paa";
		};
		     
	    class CA_ValueName : RscEdit
	    {
			idc = IDC_HOST_NAME;
			x = __EVAL(_xInit + (18 * _xSpacing)); 
			y = __EVAL(_yInit + (7 * _ySpacing));
			w = __EVAL((_windowWidth -  (18 + 2*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
	    };
	    
		class CA_TextPort: CA_TextName
		{
			y = __EVAL(_yInit + (12 * _ySpacing)); 
			text = $STR_DISP_IP_PORT;
		};		

		class CA_ValuePortBack: CA_ValueNameBack
		{
			y = __EVAL(_yInit + (12 * _ySpacing));
			w = __EVAL(13 * _xSpacing);
		};

		class CA_ValuePort: CA_ValueName
		{		
		    idc = IDC_HOST_PORT;
			y = __EVAL(_yInit + (12 * _ySpacing));
			w = __EVAL(13 * _xSpacing);
		};
				
		class CA_TextMaxPlayers  : CA_TextName
		{
			y = __EVAL(_yInit + (17 * _ySpacing)); 
			text = $STR_DISP_FILTER_MAXPLAYERS;
		};		

		class CA_ValueMaxPlayersBack: CA_ValuePortBack
		{
			y = __EVAL(_yInit + (17 * _ySpacing));
			w = __EVAL(13 * _xSpacing);
		};
		//Enter password field.
		class CA_ValueMaxPlayers : CA_Valueport
		{		
		    idc = IDC_HOST_MAX_PLAYERS;
		    y = __EVAL(_yInit + (17 * _ySpacing));
		};			
		class CA_TextPassword : CA_TextName
		{
			y = __EVAL(_yInit + (22 * _ySpacing)); 
			text = $STR_DISP_PASSWORD;
		};		

		class CA_ValuePasswordBack: CA_ValuePortBack
		{
			y = __EVAL(_yInit + (22 * _ySpacing));
		};
		//Enter password field.
		class CA_ValuePassword: CA_Valueport
		{		
		    idc = IDC_HOST_PASSWORD;
			y = __EVAL(_yInit + (22 * _ySpacing));
		};			
	    // Private / public session (reporting to GameSpy)
	    class CA_TextPrivate : CA_TextName
	    {
			y = __EVAL(_yInit + (27 * _ySpacing)); 
			text = $STR_DISP_FILTER_SERVER;
	    };
	    class CA_ValuePrivate : RscButton
	    {
			idc = IDC_HOST_PRIVATE;
			x = __EVAL(_xInit + (18 * _xSpacing)); 
			y = __EVAL(_yInit + (27 * _ySpacing));
	    };
	    
	    
		class Ok: CA_RscButton_dialog
		{
			idc = IDC_OK;

			x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 20 ) * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 9 ) * _ySpacing));
			w = __EVAL(20 * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			default = 1;

      		text = $STR_DISP_OK;
		};
		
		class Cancel: Ok
		{
			idc = IDC_CANCEL;
			default = 0;
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 4 ) * _ySpacing));
			text = $STR_CA_CANCEL;
		};
		
	};
};

class RscMPSetupMessage
{
	__EXEC( _windowWidth = 79; _windowHeight = 10;)
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.5 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowBorder = 1;)
	
	class controlsBackground
	{
		class Mainback: CA_Mainback
		{
			moving = true;
			x = __EVAL(_xInit + (0 * _xSpacing)); 
			y = __EVAL(_yInit + (0 * _ySpacing));
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
			colorbackground[] = CA_UI_background;
		};
		class Elementsback: CA_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowBorder*2 + 4  ) * _ySpacing));
			w = __EVAL((_windowWidth - 4 - 2 * _windowBorder) * _xSpacing);
			h = __EVAL((_windowHeight - 3 * _windowBorder - 4) * _ySpacing);
			colorText[] = Color_Black;
		};		
		class MPSetupMessageTitleBack: CA_Title_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		}; 
	};
		
	class Controls
	{
		delete Background;
		delete Text;
		delete Progress;
		delete ProgressIcon;

  		class CA_MPSetupMessageTitle 
		{
			idc = IDC_MPSETUP_MSG_MESSAGE;
			access = ReadAndWrite;
			type = CT_STRUCTURED_TEXT;
			style = 0;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) + 0.005);
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL((3 * _ySpacing));
			size = TextSize_medium;
			text = $STR_DISP_ERROR;
			
			class Attributes
			{
				font = Bitstream;
				color = #FFFFFF;
				align = left;
				shadow = false;
			};	
		};		

		class CA_Progress
		{		
			access = ReadAndWrite;
			type = CT_PROGRESS;
			idc = IDC_MPSETUP_MSG_PROGRESS;
			style = 1;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowBorder*2 + 4  ) * _ySpacing));
			w = __EVAL((_windowWidth - 4 - 2 * _windowBorder) * _xSpacing);
			h = __EVAL((_windowHeight - 3 * _windowBorder - 4) * _ySpacing);
			colorFrame[] = {0, 0, 0, 0};
			colorBar[] = CA_UI_green;
		};
					
		class CA_ProgressIcon: RscPicture
		{
			idc = IDC_MPSETUP_MSG_TIME;
			type = CT_ANIMATED_TEXTURE;      
			style = 0;           
			access = ReadOnlyVerified;
			x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 3 ) * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 3 ) * _ySpacing));
			w = __EVAL(3 * _xSpacing);
			h = __EVAL(3 * _ySpacing);
			texture = "\ca\ui\data\ui_notfreeze_ca.01.paa";		
        }; 
	};
};

class RscPendingInvitation
{
	textureConnectionQualityPoor = "\ca\ui\data\ui_connectionqualitypoor_ca.paa";
	textureConnectionQualityBad = "\ca\ui\data\ui_connectionqualitybad_ca.paa";
	textureDesyncLow = "\ca\ui\data\ui_desynclow_ca.paa";
	textureDesyncHigh = "\ca\ui\data\ui_desynchigh_ca.paa";

	color[] = {1, 1, 1, 1};
	x = 0.939;
	y = 0.852;
	w = 0.054;
	h = 0.072;
	timeout = 10;
	blinkingPeriod = 2;
};

class RscPendingInvitationInGame
{
	textureConnectionQualityPoor = "\ca\ui\data\ui_connectionqualitypoor_ca.paa";
	textureConnectionQualityBad = "\ca\ui\data\ui_connectionqualitybad_ca.paa";
	textureDesyncLow = "\ca\ui\data\ui_desynclow_ca.paa";
	textureDesyncHigh = "\ca\ui\data\ui_desynchigh_ca.paa";

	color[] = {1, 1, 1, 1};
	x = 0.939;
	y = 0.852;
	w = 0.054;
	h = 0.072;
	timeout = 10;
	blinkingPeriod = 2;
};



