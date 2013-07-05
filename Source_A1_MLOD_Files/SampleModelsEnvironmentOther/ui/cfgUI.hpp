#include "commonDefs.hpp"

scriptsPath = "ca\data\scripts\";
startupScript = "startup.sqs";
cameraScript = "camera.sqs";
playerKilledScript = "onPlayerKilled.sqs";
playerRespawnScript = "onPlayerRespawn.sqs";
playerRespawnOtherUnitScript = "onPlayerRespawnOtherUnit.sqs";
playerRespawnSeagullScript = "onPlayerRespawnAsSeagull.sqs";
playerResurrectScript = "onPlayerResurrect.sqs";
teamSwitchScript = "onTeamSwitch.sqf";

profilePathDefault = "Armed Assault";
profilePathCommon = "Armed Assault Other Profiles";

overviewLockedMission = "ca\ui\data\dtaext\lockedmission";
overviewMyMissions = "ca\ui\data\dtaext\mymissions";
overviewNewMission = "ca\ui\data\dtaext\newmission";


//ToDo:
//[*] Move to resources.
//[*] Move definitions to common define.

//Define procedural textures in several colors.
#define ProcTextWhite "#(argb,8,8,3)color(1,1,1,1)"
#define ProcTextBlack "#(argb,8,8,3)color(0,0,0,1)"
#define ProcTextGray "#(argb,8,8,3)color(0.3,0.3,0.3,1)"
#define ProcTextRed "#(argb,8,8,3)color(1,0,0,1)"
#define ProcTextGreen "#(argb,8,8,3)color(0,1,0,1)"
#define ProcTextBlue "#(argb,8,8,3)color(0,0,1,1)"

fontPlate = Zeppelin32;
fontHelicopterHUD = Zeppelin32;
fontClanName = Zeppelin32;

class CfgWrapperUI
{
	class Background
	{
		texture = "\ca\ui\data\ui_background_co.paa";
	};
	class TitleBar
	{
		texture = "\ca\ui\data\ui_window_title_co.paa";
	};
	class GroupBox2
	{
		texture = "\ca\ui\data\ui_window_background_co.paa";
	};

  class ListBox
  {
    line = "\ca\ui\textures\ui_line_ca.paa";
    thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa"; //Obsolete
    arrowEmpty = "\ca\ui\data\ui_arrow_left_ca.paa";
    arrowFull = "\ca\ui\data\ui_arrow_left_active_ca.paa";
    border = "\ca\ui\data\ui_border_frame_ca.paa";
    boxLeft = "\ca\ui\data\ui_combo_left_ca.paa";
    boxRight = "\ca\ui\data\ui_combo_right_ca.paa";
    boxHorz = "\ca\ui\data\ui_combo_horizon_ca.paa";
  };

  class Slider
  {
    arrowEmpty = "\ca\ui\textures\ui_arrow_left_ca.paa";
    arrowFull = "\ca\ui\textures\ui_arrow_left_active_ca.paa";
    border = "\ca\ui\data\ui_border_frame_ca.paa";
    thumb = "\ca\ui\textures\ui_slider_bar_ca.paa";
  };

	class Cursors
	{
		class Arrow
		{
			texture = "\ca\ui\data\cursor_raw.paa";
			width = 32;
			height = 32;
			hotspotX = 0.1875;  // 6 / 32
			hotspotY = 0.03125; // 1 / 32
		};

		class Track
		{
			texture = "\ca\ui\data\cursor_mapediting_raw.paa";
		};

		class Move
		{
			texture = "\ca\ui\data\cursor_mapediting_raw.paa";
		};

		class Scroll
		{
			texture = "\ca\ui\data\cursor_mapmoving_raw.paa";
		};
	};
};

class CfgInGameUI
{
	imageCornerElement = "\ca\ui\data\ui_corner_ca.paa";
	xboxStyle = false;
	colorBackground[] = CA_UI_HUD_transparency;
	colorBackgroundCommand[] = CA_UI_HUD_transparency;
	colorBackgroundHelp[] = CA_UI_HUD_transparency;
	//colorBackground[] = {0.2, 0.15, 0.1, 0.8};
	//colorBackgroundCommand[] = {Black, 0.3};
	//colorBackgroundHelp[] = {0.2, 0.15, 0.1, 0.8};

	class SideColors
	{
/*		colorFriendly[] = {1,0,1, 1};
		colorEnemy[] = {1,0,1,1};
		colorNeutral[] = {1,0,1,1};
		colorCivilian[] = {1,0,1,1};
		colorUnknown[] = {1,0,1,1}; */
	};


	class IslandMap
	{
		iconPlayer = "\ca\ui\data\map_player_ca.paa";
		iconCheckpoint = "\ca\ui\data\map_target_ca.paa";
		iconCamera = "\ca\ui\data\map_camera_ca.paa";
		iconSelect = "\ca\ui\data\map_select_ca.paa";
		iconSensor = "\ca\ui\data\map_trigger_ca.paa";

		sizeLeader = 24;
		size = 26;
	    	sizePlayer = 26;

		colorCountlinesWater[] = {0, 0, 0, 0}; //Changed 31.1.06 - testing needed.

		colorTracks[] = {0.35, 0.2, 0.1, 0.8};
		colorRoads[] = {0.35, 0.2, 0.1, 1};
		colorMainRoads[] = {0, 0, 0, 1};
		colorTracksFill[] = {0, 0, 0, 0};
		colorRoadsFill[] = {1, 0.92, 0.74, 1};
		colorMainRoadsFill[] = {0.95, 0.72, 0.27, 1}; 	
		cursorLineWidth = 1;
	};
	class MPTable
	{
		font = Zeppelin32;
		size = TextSize_medium;
	    class Columns
	    {
	      class KillsInfantry
	      {
	      	picture = "\ca\ui\data\stats_infantry_ca.paa";
	      };
	
	      class KillsSoft
	      {
	      	picture = "\ca\ui\data\stats_soft_ca.paa";
	      };
	
	      class KillsArmor
	      {
	      	picture = "\ca\ui\data\stats_armored_ca.paa";
	      };
	
	      class KillsAir
	      {
	      	picture = "\ca\ui\data\stats_air_ca.paa";
	      };
	
	      class Killed
	      {
	      	picture = "\ca\ui\data\stats_killed_ca.paa";
	      };
	
	      class KillsTotal
	      {
	      	picture = "\ca\ui\data\stats_total_ca.paa";
	      };
	    };

	    class RespawnMessage
	    {
	      font = Zeppelin32;
	      size = TextSize_medium;
	    };
	};

	class TankDirection
	{
		left = 0.034;
		top = 0.01;
		width = 0.13;
		height = 0.18;

		imageTower = "\ca\ui\data\tankdir_tower_ca.paa";
		imageTurret = "\ca\ui\data\tankdir_turret_ca.paa";
		imageGun = "\ca\ui\data\tankdir_gun_ca.paa";
		imageObsTurret = "\ca\ui\data\tankdir_turret_commander_ca.paa";
		imageEngine = "\ca\ui\data\tankdir_engine_ca.paa";
		imageHull = "\ca\ui\data\tankdir_hull_ca.paa";
		imageLTrack = "\ca\ui\data\tankdir_track_left_ca.paa";
		imageRTrack = "\ca\ui\data\tankdir_track_right_ca.paa";
	    imageMoveStop = "\ca\ui\data\tankdir_stop_ca.paa";
	    imageMoveBack = "\ca\ui\data\tankdir_back_ca.paa";
	    imageMoveForward = "\ca\ui\data\tankdir_forward_ca.paa";
	    imageMoveFast = "\ca\ui\data\tankdir_fast_ca.paa";
	    imageMoveLeft = "\ca\ui\data\tankdir_left_ca.paa";
	    imageMoveRight = "\ca\ui\data\tankdir_right_ca.paa";
	    imageMoveAuto = "\ca\ui\data\tankdir_waypoint_next_ca.paa";
	};

	class Picture
	{
		imageBusy = "\ca\ui\data\ui_busy_icon_ca.paa";
		imageWaiting = "\ca\ui\data\ui_waiting_icon_ca.paa";
		imageCommand = "\ca\ui\data\ui_command_icon_ca.paa";
	};

	class TacticalDisplay: SideColors
	{
		left = 0.3;
		top = 0.028;
		width = 0.4;
		height = 0.08;
		colorCamera[] = CA_UI_HUD_transparency;
	};

	class ProgressFont
	{
		font = Zeppelin32;
		size = TextSize_IGUI_normal;
	};


  class CheatXFont
  {
    font = Zeppelin32;
  };

  class FadeFont
  {
    font = Zeppelin32;
  };

  class DragAndDropFont
  {
    font = Zeppelin32;
    size = TextSize_small;
    colorEnabled[] = {Black, 0.9};
    colorDisabled[] = {Black, 0.6};
    hideCursor = false;
  };

  class TooltipFont
  {
    font = Zeppelin32;
    size = TextSize_small;
  };

	class Compass
	{
		left = 0.275;
		top = 0.003;
		width = 0.45;
		height = 0.025;
		color[] = {White, 1};
		dirColor[] = {White, 1};
		texture0 = "ca\ui\data\radar_compass1_ca.paa";
		texture90 = "ca\ui\data\radar_compass2_ca.paa";
		texture180 = "ca\ui\data\radar_compass3_ca.paa";
		texture270 = "ca\ui\data\radar_compass4_ca.paa";
	};

	class Menu //Commander menu 
	{
		left = 0.78;
 		top = 0.0;
		width = 0.22;
		height = 0.3;

		font = Zeppelin32;
		size = TextSize_IGUI_normal;
	};

	class GroupDir
	{
		left = 0.0;
 		top = 0.573;
		width = 0.142;
		height = 0.178;
		colorBackground[] = CA_UI_HUD_transparency;
		image = "\ca\ui\data\squad_orientation_ca.paa";
	};

	class PlayerInfo
	{
		left = 0;
		top =0;
		width = 0.15; //temp - 0.15
		colorBackground[] = CA_UI_HUD_transparency;
		
		class UnitPicture
		{
			width = 0.55;
			height = 0.56;
		};
	};

	class Actions
	{
		font = Zeppelin32;
		size = TextSize_IGUI_normal;
		rows = 5;
		arrowWidth = 0.015;
		arrowHeight = 0.02;
		iconArrowUp = "\ca\ui\data\ui_action_arrow_up_gs.paa";
		iconArrowDown = "\ca\ui\data\ui_action_arrow_down_gs.paa";
				
		colorBackground[] = CA_UI_HUD_transparency;
	    colorSelect[] = {1, 1, 1, 1};
	    background = "\ca\ui\data\ui_corner_ca.paa";
	};

	class DefaultAction
	{
		font = Zeppelin32;
		size = TextSize_normal;

		showHint = false;
		showNext = false;
		showLine = false;
  		
		relativeToCursor = 0;
	    offsetX = 0.5;
    	offsetY = 0.68;
	};

	class GroupInfo
	{
		left = 0;
		top =	0.93;
		width = 1;
		height = 0.07;
		colorIDPlayer[] = {1, 1, 0, 1};

		class Semaphore
		{
			imageSemaphore = "\ca\ui\data\hold_fire_ca.paa";
			width = 0.028;
			height = 0.04;
			colorHoldFire[] = {1, 0, 0, 1};
			colorOpenFire[] = {0, 1, 0, 1};
		};

		imageDefaultWeapons = "\ca\ui\data\ui_default_weapons_ca.paa";
		imageNoWeapons = "\ca\ui\data\ui_no_weapons_ca.paa";
		imagePrevPage = "\ca\ui\data\i_prev_group_ca.paa";
		imageNextPage = "\ca\ui\data\i_next_group_ca.paa";
		imageCommander = "\ca\ui\data\i_commander_ca.paa";
		imageDriver = "\ca\ui\data\i_driver_ca.paa";
		imageGunner = "\ca\ui\data\i_gunner_ca.paa";
		imageCargo = "\ca\ui\data\i_cargo_ca.paa";
		
		fontUnitID = Zeppelin32;
		sizeUnitID = TextSize_xsmall;
		fontCommand = Zeppelin32;
		sizeCommand = TextSize_xsmall;
	};

	class ConnectionLost
	{
		font = Zeppelin32;
		size = TextSize_IGUI_normal;
		color[] = {0.72, 0, 0, 1.0}; 
	};

	class Cursor
	{

		font = Zeppelin32;
		size = TextSize_IGUI_normal;

		aim = "\ca\ui\data\cursor_aim_ca.paa";
		weapon = "\ca\ui\data\cursor_weapon_ca.paa";
		outArrow = "\ca\ui\data\arrow_offscreen_ca.paa";
		select_target = "\ca\ui\data\cursor_target_active_ca.paa";
		lock_target = "\ca\ui\data\cursor_target_locked_ca.paa";
		me = "\ca\ui\data\cursor_circle_ca.paa";
		select = "\ca\ui\data\cursor_circle_ca.paa";
		leader = "\ca\ui\data\cursor_circle_ca.paa";
		mission = "\ca\ui\data\cursor_mission_ca.paa";
		tactical = "\ca\ui\data\cursor_tactical_ca.paa";
		move = "\ca\ui\data\cursor_basic_ca.paa";
		selected = "\ca\ui\data\cursor_selected_ca.paa";
		attack = "\ca\ui\data\cursor_attack_ca.paa";
		getIn = "\ca\ui\data\cursor_getin_ca.paa";
		watch = "\ca\ui\data\cursor_scroll_ca.paa";
	};

	class PeripheralVision
	{
	  cueTexture = "ca\ui\data\water.01.paa";
	  bloodTexture = "ca\ui\data\periph_blood_ca.paa";
	};
};

class CfgWeaponCursors
{
  class RifleCursorCore
  {
    fade = 0.40;
    class Sections
    {
      class Section1
      {
        uMax = 0.5;
        xOffset = -40;
      };
      class Section2
      {
        uMin = 0.5;
        xOffset = +40;
      };
    };
  };
};

class CfgActions
{
	class None
	{
		//picture = ; //Path to texture shown as an action image.
		priority = 0; //Base priority.
		show = true; //If set to false, action will not be displayed in the actions menu (but still accessible through shortcut).
		showWindow = false; //Action is displayed as a default action.
		hideOnUse = true; //Action menu is hidden when this action is processed.
		shortcut = ; //Name of input action used as a shortcut (see class ControllerSchemes for list of input actions).
		text = ; //Structured parametrized text, shown in the actions menu.
		textDefault = ; //Structured parametrized text, shown as a default action; if empty, "text" is used instead.
		textSimple = ; //Raw parametrized text, used in radio protocol for example; if empty, "text" is used instead.
	}; 
 
	class TeamSwitch: None
	{
		show = false;
	};
	
	class Gear: None
	{
		showWindow = true;
		priority = 1;
		textDefault = "<img image='\ca\ui\data\ui_action_gear_ca.paa' size='5.5' shadow='false' />";
	};
	  	
	class NVGoggles: None
	{
		show = false;
	};
	class NVGogglesOff: NVGoggles
	{
		show = false;
	};

 class GetOut: None
 {
	showWindow = false;
 	priority = 3.9;
 	textDefault = "<img image='\ca\ui\data\ui_action_getout_ca.paa' size='3' shadow='false' />";
 };

 class Eject: None
 {
	showWindow = false;
 	priority = 0.9;
 	textDefault = "<img image='\ca\ui\data\ui_action_eject_ca.paa' size='3' shadow='false' />";
 };
 
 class LadderOnUp: None
 {
 	showWindow = true;
 	textDefault = "<img image='\ca\ui\data\ui_action_ladderup_ca.paa' size='3' shadow='false' />";
 };

 class LadderOnDown: None
 {
 	showWindow = true;
 	textDefault = "<img image='\ca\ui\data\ui_action_ladderdown_ca.paa' size='3' shadow='false' />";
 };
 class LadderOff: None
 {
  showWindow = false;
	priority = 5;
  //No parameters.
  text = $STR_ACTION_LADDEROFF;
 	textDefault = "<img image='\ca\ui\data\ui_action_ladderoff_ca.paa' size='3' shadow='false' />";
 }; 
 class MoveToDriver: None
 {
	showWindow = false;
  priority = 4.05;
  textDefault = "<img image='\ca\ui\data\ui_action_getindriver_ca.paa' size='3' shadow='false' />"; 
 };
 class MoveToPilot: MoveToDriver
 {
	//showWindow = true;
  priority = 4.15;
  textDefault = "<img image='\ca\ui\data\ui_action_getinpilot_ca.paa' size='3' shadow='false' />"; 
 };
 class MoveToGunner: None
 {
	showWindow = false;
  priority = 4.35;
  textDefault = "<img image='\ca\ui\data\ui_action_getingunner_ca.paa' size='3' shadow='false' />"; 
 };
 class MoveToCommander: None
 {
	showWindow = false;
  priority = 4.25;
  textDefault = "<img image='\ca\ui\data\ui_action_getincommander_ca.paa' size='3' shadow='false' />"; 

 };
 class MoveToCargo: None
 {
	showWindow = false;
  priority = 4.0;
  textDefault = "<img image='\ca\ui\data\ui_action_getincargo_ca.paa' size='3' shadow='false' />"; 
 };
 
 class MoveToTurret: None
 {
	showWindow = false;
  priority = 4.2;
  textDefault = "<img image='\ca\ui\data\ui_action_getingunner_ca.paa' size='3' shadow='false' />"; 

 };
 class LoadMagazine: None
 {
  show = false; 
 };
 
	class LoadOtherMagazine: LoadMagazine
	{
		show = true;
		showWindow = false;  
	};

 class LoadEmptyMagazine: LoadMagazine
 {
 	show = true; 
 	textDefault = "<img image='\ca\ui\data\ui_action_reload_ca.paa' size='3' shadow='false' />";
  //New action - same effect as LoadMagazine, but other parameters.
  priority = 9.1; //Decreased by 0.01 for magazine of other type than current.
  showWindow = true;
 };
 class EngineOn: None
 {
  // textDefault = " ";
 };
 class EngineOff: None
 {
  // textDefault = "<img image='\ca\ui\data\ui_action_close.paa'/>";
 };
 
 class GetInCommander: None
 {
  showWindow = true;
  priority = 4.7;
  textDefault = "<img image='\ca\ui\data\ui_action_getincommander_ca.paa' size='3' shadow='false' />";
 };
 class GetInDriver: None
 {
  showWindow = true;
  priority = 4.8;
  textDefault = "<img image='\ca\ui\data\ui_action_getindriver_ca.paa' size='3' shadow='false' />";
 };
 class GetInPilot: None
 {
  showWindow = true;
  priority = 4.5;
  textDefault = "<img image='\ca\ui\data\ui_action_getinpilot_ca.paa' size='3' shadow='false' />"; 
 }; 
 class GetInGunner: None
 {
  showWindow = true;
  priority = 4.2;
  textDefault = "<img image='\ca\ui\data\ui_action_getingunner_ca.paa' size='3' shadow='false' />"; 
 };
 class GetInCargo: None
 {
 	showWindow = true;
  priority = 4.1;
  textDefault = "<img image='\ca\ui\data\ui_action_getincargo_ca.paa' size='3' shadow='false' />"; 
 };
 class GetInTurret: None
 {
  showWindow = true;
  priority = 4.6;
 	textDefault = "<img image='\ca\ui\data\ui_action_getingunner_ca.paa' size='3' shadow='false' />";
 };
 
 class Repair: None
 {
  showWindow = true;
  priority = 7.6;
  textDefault = "<img image='\ca\ui\data\ui_action_repair_ca.paa' size='3' shadow='false' />";
 };	
 
 class Rearm: None
 {
  showWindow = true;
  priority = 3.9;
  textDefault = "<img image='\ca\ui\data\ui_action_reammo_ca.paa' size='3' shadow='false' />";
 };
 class Refuel: None
 {
  showWindow = true;
  priority = 7.5;
  textDefault = "<img image='\ca\ui\data\ui_action_refuel_ca.paa' size='3' shadow='false' />";
 };
 class Heal: None
 {
  showWindow = true;
  priority = 9.9;
  textDefault = "<img image='\ca\ui\data\ui_action_heal_ca.paa' size='3' shadow='false' />";
 };
  
 class TakeWeapon: None
 {
  showWindow = true;
  priority = 5.6;
  textDefault = "<img image='\ca\ui\data\ui_action_reammo_ca.paa' size='3' shadow='false' />";
 };
 class TakeMagazine: None
 {
  showWindow = true;
  priority = 5.5;
  textDefault = "<img image='\ca\ui\data\ui_action_reammo_ca.paa' size='3' shadow='false' />";
 };
 class TakeFlag: None
 {
  showWindow = true;
  priority = 5.9;
  textDefault = "<img image='\ca\ui\data\ui_action_takeflag_ca.paa' size='3' shadow='false' />";
 };
 class ReturnFlag: None
 {
  showWindow = true;
  priority = 8;
  textDefault = "<img image='\ca\ui\data\ui_action_returnflag_ca.paa' size='3' shadow='false' />";
 };
 class WeaponInHand: None
 {
//  textDefault = "<img image='\ca\ui\data\unknown_object.paa' size='4' shadow='false' />";
 };
 class WeaponOnBack: None
 {
//  textDefault = "<img image='\ca\ui\data\unknown_object.paa' size='4' shadow='false' />";
 };
 class SetTimer: None
 {
  showWindow = true;
  priority = 7.9;
  textDefault = "<img image='\ca\ui\data\ui_action_settimer_ca.paa' size='3' shadow='false' />";
 };
 class Deactivate: None
 {
  showWindow = true;
  priority = 8.4;
  textDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='3' shadow='false' />";
 };
 class FireInflame: None
 {
  // textDefault = "<img image='\ca\ui\data\unknown_object.paa' size='4' shadow='false' />";
 };
 class FirePutDown: None
 {
 // textDefault = "<img image='\ca\ui\data\unknown_object.paa' size='4' shadow='false' />";
 };
 class TakeMine: None
 {
  showWindow = true;
  priority = 5.2;
  text = $STR_ACTION_TAKE_MINE;  
  textDefault = "<img image='\ca\ui\data\ui_action_reammo_ca.paa' size='3' shadow='false' />";
 };
 class DropWeapon: None
 {
  showWindow = true;
  priority = 3.2;
  text = $STR_ACTION_DROP_WEAPON;
//  textDefault = $STR_ACTION_DROP_WEAPON;
 };
 class PutWeapon : DropWeapon
 {
  showWindow = true;
  priority = 5.3;
  text = $STR_ACTION_PUT_WEAPON;
//  textDefault = "<img image='\ca\ui\data\unknown_object.paa' size='4' shadow='false' />";
 }; 
 
 class DeactivateMine: None
 {
  showWindow = true;
  priority = 8.3;
  textDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='3' shadow='false' />";
 };
 class CancelTakeFlag: None
 {
  showWindow = true;
  priority = 8.5;
  textDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='3' shadow='false' />";
 };
 class CancelAction: None
 {
  showWindow = true;
  priority = 8.6;
  textDefault = "<img image='\ca\ui\data\ui_action_close_ca.paa' size='3' shadow='false' />";
 };
 class MarkEntity: None
 {
  // textDefault = "<img image='\ca\ui\data\unknown_object.paa' size='4' shadow='false' />";
 };      
 class Talk: None
 {
  // textDefault = "<img image='\ca\ui\data\unknown_object.paa' size='4' shadow='false' />";
 };      
 class AutoHover: None
 {
  priority = 6;
  //No parameters.
  text = $STR_ACTION_HOVER;
  textDefault = "<img image='\ca\ui\data\ui_action_autohover_ca.paa' size='9.5' shadow='false' />";
 };          
 
  class AutoHoverCancel: AutoHover
  {
    showWindow = true;
    priority = 6;
    textDefault = "<img image='\ca\ui\data\ui_action_cancelhover_ca.paa' size='9.5' shadow='false' />";
  };
       
};
