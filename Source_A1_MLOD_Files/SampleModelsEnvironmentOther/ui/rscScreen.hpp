//Main map display.
class RscDisplayMainMap
{
	controlsBackground[] =
	{
		CA_Black,
		Map,
		Bck
	};
	class CA_Black: CA_Black_Back
	{
	};
	
	class Map: RscMapControl
	{
		moveOnEdges = true;
		x = -0.088; y = -0.088;
		w = 1.176; h = 1.176;
		
			class Command
			{
				icon = "\ca\ui\data\map_waypoint_ca.paa";
				color[] = {0, 1, 0, 1};
				size = 18;
				importance = 1; // not used
				coefMin = 1; // not used
				coefMax = 1; // not used
			};
	};
	
	class Bck: RscPicture
	{
		x = 0; y = 0.88;
		w = 0; h = 0.0;
		colorText[]= {1, 1, 1, 0};
		text = "\ca\ui\data\brief_back2.paa";
	};

	class controls
	{
		delete DiaryIndex;
		delete DiaryAdd;
		delete DiarySort;
		delete DiaryFilter;
		delete Diary;

		class CA_Toggle_Satellite: RscButton
		{
			idc = IDC_MAP_TEXTURES;
			default = false;
			x = 0.738; y = 0.142;
			w = 0.211; h = 0.027;
			colorBackground[] = {0.81, 0.81, 0.792, 1};
			colorFocused[] =  {0.405, 0.405, 0.396, 1}; 			
		};	 
	};

	class objects
	{
		//The map watch.
		class Watch: RscObject
		{
			model = "\ca\ui\Watch.p3d";
			x = 0.08; xBack = 0.4;
			y = 0.925; yBack = 0.5;
			z = 0.21; zBack = 0.11;
			
			enableZoom = true;

			direction[] = {0, 1, 7.2};
			up[] = {0, 0, -1};
		
			scale = 0.4;
			/*onMouseEnter = "[_this select 0] execVM ""\ca\ui\scripts\GetPosition.sqf""";
			onObjectMoved = "[_this select 0] execVM ""\ca\ui\scripts\GetPosition.sqf""";*/
		};

		//The map compass.
		class Compass: RscObject
		{
			model = "\ca\ui\Compass.p3d";
			selectionArrow = "";
			x = 0.16; xBack = 0.6;
			y = 0.925; yBack = 0.5;
			z = 0.2; zBack = 0.1;
			
			enableZoom = true;
			
			direction[] = {1, 0, 0};
			up[] = {0, 1, 0};
						
			scale = 0.35;
		};

		//The map GPS.
		class GPS: RscObject
		{
		model = "\ca\ui\gps.p3d";
		x = 0.75;
		y = 0.7;
		z = 0.3;
		scale = 0.085;
	//	onMouseEnter = "[_this select 0] exec ""\ca\ui\scripts\MapNotMove.sqs""";

			class Areas
			{
		    	//#define Y_Factor_GPS_Display 0.660
	
		      		class Display
		      		{
					class controls
					{
						class GPSSquare: RscText
						{
							y = -0.05; // * Y_Factor_GPS_Display;
							h = 1; // * Y_Factor_GPS_Display;
							sizeEx = 0.49;// * Y_Factor_GPS_Display;
						};
					};
				};
			};
		};

		//The map radio.
		class WalkieTalkie: RscObject
		{
			model = "\ca\ui\radio.p3d";
			position[] = {0.08, -0.014, 0.4};
			positionBack[] = {0.08, -0.014, 0.2};
			scale = 0.1;
		//	onMouseEnter = "[_this select 0] exec ""\ca\ui\scripts\MapNotMove.sqs""";

			class Areas
			{
				//#define Y_Factor_WalkieTalkie_Papir 1.359

				class Papir
				{
					class controls
					{
						class RscRadioText: RscActiveText
						{
							sizeEx = 0.17;// * Y_Factor_WalkieTalkie_Papir;
							x = 0.005;
							y = 0.02;// * Y_Factor_WalkieTalkie_Papir;
							h = 0.10;// * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioAlpha: RscRadioText
						{
							y = 0.05;// * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioBravo: RscRadioText
						{
							y = 0.17;// * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioCharlie: RscRadioText
						{
							y = 0.29;// * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioDelta: RscRadioText
						{
							y = 0.41;// * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioEcho: RscRadioText
						{
							y = 0.53;// * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioFoxtrot: RscRadioText
						{
							y = 0.65;// * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioGolf: RscRadioText
						{
							y = 0.77;// * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioHotel: RscRadioText
						{
							y = 0.89;// * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioIndia: RscRadioText
						{
							y = 1.01;// * Y_Factor_WalkieTalkie_Papir;
						};

						class RadioJuliet: RscRadioText
						{
							y = 1.13;// * Y_Factor_WalkieTalkie_Papir;
						};
					};
				};
			};
		};

		//The map notepad.
		class Notepad: RscObject
		{
	
			type = CT_OBJECT_CONTAINER;

			selectionPaper = "paper";
					
			model = "\ca\ui\notepad.p3d";
			scale = 1;
			position[] = {-0.160, -0.005, 0.31};
			positionBack[] = {-0.40,0.18, 0.82};
			enableZoom = true;
			saveParams = false;
			inBack = false;
			zoomDuration = 0.5;
								
			paper1 = "ca\ui\data\papier1_co.paa";
			paper2 = "ca\ui\data\papier2_co.paa";
			paper3 = "ca\ui\data\papier3_co.paa";
			paper4 = "ca\ui\data\papier4_co.paa";
			//Still present to prevent error messages
			paper5 = "ca\ui\data\papier1_co.paa";
			paper6 = "ca\ui\data\papier1_co.paa";
			paper7 = "ca\ui\data\papier1_co.paa";

			class Areas
			{

				class Paper
				{
					class controls
					{
						class Name: RscText
						{
							sizeEx = 0.065;
							colortext[] = {0.1, 0.1, 0.55, 1};
							y = 0.00;
							h = 0.08;
						};

						class RscBookmarkText: RscActiveText
						{
							sizeEx = 0.055;
							color[] = {0.24, 0.47, 0.07, 0.7};
							colorActive[] = {0.24, 0.47, 0.07, 1};
								

							colorLink[] = {0, 1, 0, 1};
							colorLinkActive[] =  {1, 0, 1, 1};
							y = 0.08;
							h = 0.1;
						};

						class Bookmark1: RscBookmarkText
						{
							x = -0.02; //0.088;
						};

						class Bookmark2 : RscBookmarkText
						{
							x = 0.245;
						};

						class Bookmark3: RscBookmarkText
						{
							x = 0.5;
						};

						class Bookmark4: RscBookmarkText
						{
							x = 0.745;
						};


						class Briefing: RscHTML
						{	
							size = 10;
							sizeEx = 0.050;
							x = 0.024; y = 0.22;
//							w = 0.984; h = 1.75;
							w = 0.9; h = 1.75;						
							//test
							colorPicture[] = Color_White;
  							colorPictureLink[] = Color_White;
							colorText[] =  Color_Black;
							colorActive[] =  Color_Black;
							colorLink[] =  CA_UI_green;
							colorLinkActive[] = Color_Black;

							class H1: H1
							{
								sizeEx = 0.055;
								color[] = {0, 0, 0, 1};
								colorText[] = {0, 0, 0, 1};
								
								colorActive[] = {0, 0, 0, 1};
							};

							class H2: H2
							{
								sizeEx = 0.055;
								color[] = {0, 0, 0, 1};
								colorText[] = {0, 0, 0, 1};
								
								colorActive[] = {0, 0, 0, 1};								
							};

							class H3: H3
							{
								sizeEx = 0.055;
								color[] = {0, 0, 0, 1};
								colorText[] = {0, 0, 0, 1};
							
								colorActive[] = {0, 0, 0, 1};
							};

							class H4: H4
							{
								sizeEx = 0.055;
								color[] = {0, 0, 0, 1};
								colorText[] = {0, 0, 0, 1};
								
								colorActive[] = {0, 0, 0, 1};
							};

							class H5: H5
							{
								sizeEx = 0.050;
								color[] = {0, 0, 0, 1};
								colorText[] = {0, 0, 0, 1};
								
								colorActive[] = {0, 0, 0, 1};								
							};

							class H6: H6
							{
								sizeEx = 0.050;
								color[] = {0, 0, 0, 1};
								colorText[] = {0, 0, 0, 1};
								
								colorActive[] = {0, 0, 0, 1};								
							};

							class P: P
							{
								sizeEx = 0.050;
								color[] = {0, 0, 0, 1};
								colorText[] = {0, 0, 0, 1};
								
								colorActive[] = {0, 0, 0, 1};
							};
						};
					};
				};
			};
		};
	};
};

class RscDisplayLogin: RscStandardDisplay
{
	class controlsBackground
	{
		class Mainback: CA_Mainback 
		{
			x = 0.27; y = 0.38;
			w = 0.58; h = 0.57;	
		};
		class Back1: CA_Back
		{
			x = 0.30; y = 0.43;
			w = 0.54;  h = 0.51;
		};
		class Logo: CA_Logo{};
	};

  class controls
  {
		delete B_OK;
		delete B_Cancel;
		delete B_Delete;
		delete B_Edit;
		delete B_New;
		delete TextUser;
		delete ValueUser;
		delete Title;

		class Title1: CA_Title
		{
			text = $STR_CA_LOGIN_TITLE;
		};

		class ValueUser2: RscListBox
		{
			idc = IDC_LOGIN_USER;
			x = 0.31; y = 0.44;
			w = 0.52; h = 0.49;
			rows = 10;
			Style = LB_TEXTURES;
		};

		//MOUSE OVER BUTTONS
		class BX_New: CA_RscButton
		{
			idc = IDC_LOGIN_NEW;
			y = 0.6;
			text = $STR_CA_NEW;
		};

		class BX_Edit: BX_New
		{
			default = 0;
			y = 0.65;
			idc = IDC_LOGIN_EDIT;
			text = $STR_CA_EDIT;
		};

		class BX_Delete: BX_New
		{
			default = 0;
			y = 0.7;
			idc = IDC_LOGIN_DELETE;
			text = $STR_CA_DELETE;
		};

		class BX_Ok: CA_RscButton
		{
			default = 0;
			idc = IDC_OK;
			text = $STR_DISP_OK;
		};

		class BX_Cancel: CA_RscButton
		{
			default = 0;
			y = 0.85;
			idc = IDC_CANCEL;
			text = $STR_CA_CANCEL;
		};
	};
};

class RscDisplayNewUser: RscStandardDisplay
{
	class controlsBackground
	{
		class Mainback: CA_Mainback 
		{
			x = 0.27; y = 0.38;
			w = 0.58; h = 0.57;
		};
		class Back1: CA_Back
		{
			x = 0.28; y = 0.43;
			w = 0.56;  h = 0.51;
		};
	
		class Back2: CA_Back
		{
			x = 0.50; y = 0.47;
			w = 0.34; h = 0.137;
		};
		/* sunglasses background
		class Back3: Back2
		{
			y = 0.6; h = 0.08;
		}; */
		
		class Back4: Back2
		{
			y = 0.615;
		};
	};

	class objects
	{
		class Head : RscObject
		{
			model = "\ca\ui\face_preview";
			modelWoman = "\ca\ui\face_preview";
			idc = IDC_NEW_USER_HEAD;
			type = CT_OBJECT;

			x = 0.347; y = 0.585; z = 0.3;
			xBack = 0.4;  yBack = 0.25; zBack =  0.3;
			scale = 0.16;
			
			direction[] = {0, 0, 1};
			up[] = {0, 1, 0};
			
			faceType = man;
			selectionLBrow = "lBrow";
			selectionMBrow = "mBrow";
			selectionRBrow = "rBrow";
			selectionLMouth = "lMouth";
			selectionMMouth = "mMouth";
			selectionRMouth = "rMouth";
			selectionEyelid = "eyelids";
			selectionLip = "LLip";
	    	selectionPersonality = "osobnost";
	    	selectionGlasses = "eyelids";
		};
	};

	class controls
	{
		delete B_OK;
		delete B_Cancel;
		delete TextName;
		delete ValueName;
		delete ValueId;
		delete TextFace;
		delete ValueFace;
		delete TextGlasses;
		delete ValueGlasses;
		delete TextSpeaker;
		delete ValueSpeaker;
		delete TextPitch;
		delete ValuePitch;
		delete TextSquad;
		delete ValueSquad;
		delete Title;

		class Logo: CA_Logo{};
	/*	
		class CA_EditPlayerTitle: CA_Title 
		{
		};
		*/
		class TextPlayer2: RscText
		{
			x = 0.30; y = 0.435;
			w = 0.2; h = TextSize_normal;
			text = $STR_DISP_NEW_USER_NAME;
			style = ST_RIGHT;
			colortext[] = CA_colordark;
		};

		//Profile name field.
		class NameValue: RscEdit
		{
			idc = IDC_NEW_USER_NAME;
			x = 0.50; y = 0.435;
			w = 0.34; h = 0.03;
			sizeEx = 0.025;
		};

		class FaceText: RscText
		{
			x = 0.30; y = 0.47;
			w = 0.2; h = TextSize_normal;
			style = ST_RIGHT;
			text = $STR_DISP_NEW_USER_FACE;
		};

		//Available avatar faces.
		class FaceValue: RscListBox
		{
			idc = IDC_NEW_USER_FACE;
			x = 0.501; y = 0.47;
			w = 0.34; h = 0.131;
			rows = 7;
		};
/*	Glasses are not supported yet
		class GlassText: FaceText
		{
			y = 0.6;
			text = $STR_DISP_NEW_USER_GLASSES;
		};

		//Available avatar glasses.
		class ValueGlasses2: FaceValue
		{
			idc = IDC_NEW_USER_GLASSES;
			y = 0.6;
			h = 0.08;
		};
*/
		class SpeakerText: FaceText
		{
			y = 0.615;
			text = $STR_DISP_NEW_USER_SPEAKER;
		};

		//Available avatar voices.
		class ValueSpeaker2: FaceValue
		{
			idc = IDC_NEW_USER_SPEAKER;
			y = 0.619;
		};

		class TextPitch2: FaceText
		{
			y = 0.76;
			text = $STR_DISP_NEW_USER_PITCH;
		};

		//Avatar voice pitch.
		class ValuePitch2: RscSlider
		{
			idc = IDC_NEW_USER_PITCH;
			x = 0.50; y = 0.76;
			w = 0.335; h = 0.05;
		};

		class SquadText: FaceText
		{
			idc = IDC_NEW_USER_SQUAD_TEXT;
			y = 0.83;
			text = $STR_DISP_NEW_USER_SQUAD;
		};

		//User's squad XML page.
		class SquadValue: NameValue
		{
			idc = IDC_NEW_USER_SQUAD;
			y = 0.83;	w = 0.335;
		};


		class CA_ValueID: SquadText
		{
			idc = IDC_NEW_USER_ID;
			style = ST_RIGHT;
			x = 0.501;
			y = 0.9;
			w = 0.34;			
		};
		//Cancel to the main menu.
		class OK: CA_RscButton
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
		};

		class Cancel: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.85;
			text = $STR_CA_CANCEL;
		};

		class Title2: CA_Title
		{
			text = $STR_CA_NEWUSER_TITLE2;
		};
	};
};

class RscDisplaySingleMission: RscStandardDisplay
{
  none = "ca\ui\textures\mission_empty.paa";
  done = "ca\ui\textures\mission_done.paa";
  locked = "ca\ui\textures\mission_locked.paa";
  package = "";

	class controlsBackground
	{
		class Mainback: CA_Mainback
		{
			x = 0.29; y = 0.38;
			w = 0.56; h = 0.57;
		};
		class Back1: CA_back
		{
			x = 0.30; y = 0.43;
			w = 0.26; h = 0.50;
		};
		class Back2: CA_back
		{
			x = 0.565; y = 0.43;
			w = 0.27; h = 0.50;
		};
	};

  class controls
  {
 		delete Missions;
		delete Overview;
		delete B_Cancel;
		delete B_Start;
		delete B_Continue;
		delete B_Difficulty;
		delete Title;

		class Logo: CA_Logo{};

		class CA_Title: CA_Title
		{
		//	text = $STR_CA_SINGLE_TITLE;
			idc = IDC_SINGLE_TITLE;
		};

		//Lists all the available single missions and subfolders with more missions.
		class MissionsList: RscListBox
		{
			idc = IDC_SINGLE_MISSION;
			x = 0.575; y = 0.44;
			w = 0.26; h = 0.46;
		};

		//Todo: make this control interactive to change pages.
		//HTML briefing screen is displayed in this field.
		class MissionOverview: RscHTML
		{
			idc = IDC_SINGLE_OVERVIEW;
			x = 0.305; y = 0.420;
			h = 0.48; w = 0.25;
			sizeEx = 0.01;
			colortext[] = {0, 0, 0, 1};

			class H1: H1{};
			class H2: H2{};
			class H3: H3{};
			class H4: H4{};
			class H5: H5{};
			class H6: H6{};
			class P: P{};
  	};
		
	  //Difficulty selection button.


		
		class CA_B_EDIT: CA_RscButton 
		{
			idc = IDC_SINGLE_EDIT;
			y = 0.55;
			text = $STR_CA_EDIT;
		}; 		 			
		
		class CA_B_COPY: CA_RscButton 
		{
			idc = IDC_SINGLE_COPY;
			y = 0.6;
			text = $STR_CA_COPY;
		}; 	
		class CA_B_DELETE: CA_RscButton 
		{
			idc = IDC_SINGLE_DELETE;
			y = 0.65;
			text = $STR_CA_DELETE;
		}; 		 

	  class Difficulty: CA_RscButton
	  {
			idc = IDC_SINGLE_DIFF;
			y = 0.7;
	  };	

		class CA_B_LOAD: CA_RscButton 
		{
			idc = IDC_SINGLE_LOAD;
			y = 0.75;
		};
				 
		  //Resume button with time displayed - sting length has to be fixed 
		class Continue_text: CA_RscButton
		{
			idc = IDC_OK;
			default = 1;			
			y = 0.8;
		};
		

		class Cancel: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.85;
			text = $STR_CA_CANCEL;
		};
	};
};

class RscDisplayOptions: RscStandardDisplay
{
	#define Display_Options_Y 0.2
	enableSimulation = false;

	class controls
	{
		delete Audio;
		delete Configure;
 		delete Difficulty;
 		delete Video;
		delete B_Close;
		delete B_Credits;
		delete B_OK;
		delete Title;

		class Mainback: CA_Mainback
		{
			x = 0.54; y = 0.60;
			w = 0.308;  h = 0.35;
		};

		class Title2: CA_Title
		{
			x = 0.55; y = 0.6;
			w = 0.4;  h = 0.05;
			text = $STR_DISP_OPTIONS_TITLE;
		};

		class Logo: CA_Logo_Small
		{
			x= 0.62; y = 0.562;
		};

		//Video options
		//Open the video options.
		class BVideo: RscButtonTextOnly
		{
			idc = IDC_OPTIONS_VIDEO;
			x = 0.56; y = 0.65;
			w = 0.13;  h = 0.13;

			onMouseEnter = "_display = ctrlParent (_this select 0); _ctrl021 = _display displayCtrl 021; _ctrl021 ctrlSetTextColor [0.84,1,0.55,1]; ";
			onMouseExit = "_display = ctrlParent (_this select 0); _ctrl021 = _display displayCtrl 021; _ctrl021 ctrlSetTextColor [1,1,1,0.9]; ";
			onSetFocus = "_display = ctrlParent (_this select 0); _ctrl021 = _display displayCtrl 021; _ctrl021 ctrlSetTextColor [0.84,1,0.55,1]; ";
			onKillFocus = "_display = ctrlParent (_this select 0); _ctrl021 = _display displayCtrl 021; _ctrl021 ctrlSetTextColor [1,1,1,0.9]; ";
		};

		class Table_back_white: CA_Back
		{
			idc = 21;
			x = 0.56; y = 0.65;
			w = 0.13;  h = 0.13;
		};

		class Video_text: RscText
		{
			idc = 025;
			style = ST_CENTER;
			x = 0.56; y = 0.75;
			w = 0.13; h = 0.04;
			sizeEx = TextSize_small;
			colortext[] = CA_colordark;
			text = $STR_DISP_OPTIONS_VIDEO;
		};
		class VideoIco: RscPicture //picture
		{
			x = 0.565; y = 0.655;
			w = 0.12; h = 0.1;
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\textures\options_video.paa";
		};

		//Audio options
		//Open the audio options.
		class BAudio: RscButtonTextOnly
		{
			idc = IDC_OPTIONS_AUDIO;
			x = 0.70; y = 0.65;
			w = 0.13;  h = 0.13;

			onMouseEnter = "_display = ctrlParent (_this select 0); _ctrl022 = _display displayCtrl 022; _ctrl022 ctrlSetTextColor [0.84,1,0.55,1];";
			onMouseExit = "_display = ctrlParent (_this select 0); _ctrl022 = _display displayCtrl 022; _ctrl022 ctrlSetTextColor [1,1,1,0.9];";
			onSetFocus = "_display = ctrlParent (_this select 0); _ctrl022 = _display displayCtrl 022; _ctrl022 ctrlSetTextColor [0.84,1,0.55,1];";
			onKillFocus = "_display = ctrlParent (_this select 0); _ctrl022 = _display displayCtrl 022; _ctrl022 ctrlSetTextColor [1,1,1,0.9];";
		};

		class Table_back_white_A: Table_back_white
		{
			idc = 22;
			x = 0.7;
		};

		class Audio_text: Video_text
		{
			idc = 026;
			x = 0.70;
			text = $STR_DISP_OPTIONS_AUDIO;
		};

		class AudioIco: VideoIco //picture
		{
			x = 0.705;
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\textures\options_sound.paa";
		};

		//Configure options
		//Open the configure options.
		class BConfigure: RscButtonTextOnly
		{
			idc = IDC_OPTIONS_CONFIGURE;
			x = 0.56; 	y = 0.79;
			w = 0.13;  h = 0.13;

			onMouseEnter = "_display = ctrlParent (_this select 0); _ctrl023 = _display displayCtrl 023; _ctrl023 ctrlSetTextColor [0.84,1,0.55,1];";
			onMouseExit = "_display = ctrlParent (_this select 0); _ctrl023 = _display displayCtrl 023; _ctrl023 ctrlSetTextColor [1,1,1,0.9];";
			onSetFocus = "_display = ctrlParent (_this select 0); _ctrl023 = _display displayCtrl 023; _ctrl023 ctrlSetTextColor [0.84,1,0.55,1];";
			onKillFocus = "_display = ctrlParent (_this select 0); _ctrl023 = _display displayCtrl 023; _ctrl023 ctrlSetTextColor [1,1,1,0.9];";
		};

		class Table_back_white_C: Table_back_white
		{
			idc = 23;
			y = 0.79;
		};

		class Configure_text: Video_text
		{
			idc = 027;
			y = 0.89;
			text = $STR_DISP_OPTIONS_CONFIGURE;
		};
		class ConfigureIco: VideoIco //picture
		{
			y = 0.795;
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\textures\options_control.paa";
		};

		//Difficulty options
		//Open the video options.
		class BDifficulty: RscButtonTextOnly
		{
			idc = IDC_OPTIONS_DIFFICULTY;
			x = 0.70; 	y = 0.79;
			w = 0.13;  h = 0.13;

			onMouseEnter = "_display = ctrlParent (_this select 0); _ctrl024 = _display displayCtrl 024; _ctrl024 ctrlSetTextColor [0.84,1,0.55,1];";
			onMouseExit = "_display = ctrlParent (_this select 0); _ctrl024 = _display displayCtrl 024; _ctrl024 ctrlSetTextColor [1,1,1,0.9]; ";
			onSetFocus = "_display = ctrlParent (_this select 0); _ctrl024 = _display displayCtrl 024; _ctrl024 ctrlSetTextColor [0.84,1,0.55,1];";
			onKillFocus = "_display = ctrlParent (_this select 0); _ctrl024 = _display displayCtrl 024; _ctrl024 ctrlSetTextColor [1,1,1,0.9];";
		};

		class Table_back_white_D: Table_back_white
		{
			idc = 024;
			x = 0.70; y = 0.79;
		};

		class Difficulty_text: Video_text
		{
			idc = 028;
			x = 0.70; y = 0.89;
			text = $STR_DISP_OPTIONS_DIFFICULTY;
		};

		class DifficultyIco: VideoIco	//picture
		{
			x = 0.705; y = 0.795;
			colortext[] = {1, 1, 1, 1};
			text = "\ca\ui\textures\options_diff.paa";
		};

		//ToDo:
		//Watch the credits.
		/*class BCredits: CA_OK
		{
			idc = IDC_OPTIONS_CREDITS;
			x = -0.005; y = -0.9;

			onMouseEnter = "_display = ctrlParent (_this select 0); _ctrl035 = _display displayCtrl 035; _ctrl036 = _display displayCtrl 036; _ctrl035 ctrlSetTextColor [0.84,1,0.55,1]; _ctrl036 ctrlSetTextColor [0, 0, 0, 1]";
      onMouseExit = "_display = ctrlParent (_this select 0); _ctrl035 = _display displayCtrl 035; _ctrl036 = _display displayCtrl 036; _ctrl035 ctrlSetTextColor [1,1,1,0.9]; _ctrl036 ctrlSetTextColor [0,0,0,0.9]";
      onSetFocus = "_display = ctrlParent (_this select 0); _ctrl035 = _display displayCtrl 035; _ctrl036 = _display displayCtrl 036; _ctrl035 ctrlSetTextColor [0.84,1,0.55,1]; _ctrl036 ctrlSetTextColor [0, 0, 0, 1]";
      onKillFocus = "_display = ctrlParent (_this select 0); _ctrl035 = _display displayCtrl 035; _ctrl036 = _display displayCtrl 036; _ctrl035 ctrlSetTextColor [1,1,1,0.9]; _ctrl036 ctrlSetTextColor [0,0,0,0.9]";
		};
		class Credits_image: CA_OK_image
		{
			idc = 035;
			x = -0.005; y = -0.90;
		};
		class Credits_text: CA_OK_text
		{
			idc = 036;
			x = 0.068; y = -0.9;
			text = $STR_DISP_MAIN_CREDITS;
		};*/

		class Cancel: CA_RscButton
		{
			idc = IDC_CANCEL;
			default = 1;
			y = 0.85;
			text = $STR_DISP_CLOSE;
		};
	};
};
class RscDisplayCampaignSelect: RscStandardDisplay
{
	idd = IDD_CAMPAIGN_SELECT;

	class controlsBackground
	{
		class Mainback: CA_Mainback 
		{
			x = 0.29; y = 0.38;
			w = 0.56; h = 0.57;	
		};
		class Back1: CA_back
		{
			x = 0.30; y = 0.43;
			w = 0.26; h = 0.50;
		};
		class Back2: CA_back
		{
			x = 0.565; y = 0.43;
			w = 0.27; h = 0.50;
		};
		class Logo: CA_Logo{};
	};

	class controls
	{
		delete Campaigns;
		delete Campaign;
		delete Description;


		class CA_Campaigns: RscListBox
		{
			idc = IDC_CAMPAIGNS_LIST;
			style = LB_TEXTURES;
		  	x = 0.575; y = 0.44;
			h = 0.46; w = 0.24;
		};
		class CA_Campaign: CA_Title
		{
			idc = IDC_CAMPAIGNS_CAMPAIGN;

		};

		class CA_Description: RscHTML

		{
			idc = IDC_CAMPAIGNS_DESCRIPTION;
			x = 0.30; y = 0.43;
			h = 0.50; w = 0.26;
			sizeEx = 0.01;
			colorBackground[] = CA_UI_transparent;
			colortext[] = {0, 0, 0, 1};

			class H1: H1{};
			class H2: H2{};
			class H3: H3{};
			class H4: H4{};
			class H5: H5{};
			class H6: H6{};
			class P: P{};
		}; 

		class Camp_B_OK: CA_RscButton
		{
			idc = IDC_OK;
			text = $STR_DISP_OK;
		};

		//Cancel to the main menu.
		class Camp_B_Cancel: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.85;
			text = $STR_CA_CANCEL;
		};
	};
};

class RscDisplayCampaignLoad: RscStandardDisplay
{
	class controlsBackground
	{
		class Mainback: CA_Mainback 
		{
			x = 0.29; y = 0.38;
			w = 0.56; h = 0.57;	
		};
		class Back1: CA_back
		{
			x = 0.30; y = 0.43;
			w = 0.26; h = 0.50;
		};
		class Back2: CA_back
		{
			x = 0.565; y = 0.43;
			w = 0.27; h = 0.50;
		};
	};

	class controls
	{
		delete Title;
		delete B_Next;
		delete B_Prev;
		delete Contents;
		delete History;
		delete Mission;
		delete Description;

		delete Date;
		delete Score;
		delete Duration;
		delete Casualties;
		delete Camp_BookTableItem;
		delete KillsTitle;

		delete EnemyRow;
		delete FriendlyRow;
		delete CivilianRow;
		delete InfantryColumn;
		delete SoftColumn;
		delete ArmoredColumn;
		delete AircraftColumn;

		delete TotalColumn;
		delete EInf;
		delete ESoft;
		delete EArm;
		delete EAir;
		delete ETot;
		delete FInf;

		delete FSoft;
		delete FArm;
		delete FAir;
		delete FTot;
		delete CInf;
		delete CSoft;
		delete CArm;

		delete CAir;
		delete CTot;

	    delete BookTableItem;
		delete BookText;

		delete B_OK;
		delete B_Replay;
		delete B_Cancel;
		delete B_Difficulty;

		//TODO:  zatim jsem ho dal do hajzlu, casem se k tomu vrati
		/*class Camp_Contents: RscText
		{
			x = 0.225; y = 0.18;
			w = 0.15;
			text = $STR_DISP_CAMPAIGN_CONTENTS;
			style = ST_LEFT;
		};*/

		//The campaign history / played missions and cutscenes.
		class Camp_History: RscListBox
		{
			idc = IDC_CAMPAIGN_HISTORY;
			style = LB_TEXTURES;
			x = 0.58; y = 0.44;
			h = 0.46; w = 0.25;
		};

		//The selected mission name.
		class Camp_Mission: CA_Title
		{
			idc = IDC_CAMPAIGN_MISSION;
		};

		//HTML description of the campaign.
		class Camp_Description: RscHTML
		{
			idc = IDC_CAMPAIGN_DESCRIPTION;
			x = 0.30; y = 0.43;
			h = 0.50; w = 0.26;
			sizeEx = 0.01;
			colortext[] = {0, 0, 0, 1};

			class H1: H1{};
			class H2: H2{};
			class H3: H3{};
			class H4: H4{};
			class H5: H5{};
			class H6: H6{};
			class P: P{};
		};
		
		class Logo: CA_Logo {};
		
		//ToDo:
		/*class Camp_BookText: RscText
		{
			x = 0.025;
			w = 0.2;
			y = 0.5;
			style = ST_LEFT;
			sizeEx = TextSize_small;
		};

		//Todo: Verify this works.
		//Date of last play.
		class Camp_Date: Camp_BookText
		{
			idc = IDC_CAMPAIGN_DATE;
			y = 0.76;
		};

		//Current mission and total score.
		class Camp_Score: Camp_BookText
		{
			idc = IDC_CAMPAIGN_SCORE;
			y = 0.79;
		};

		//Current mission and total duration.
		class Camp_Duration: Camp_BookText
		{
			idc = IDC_CAMPAIGN_DURATION;
			y = 0.82;
		};

		//Current mission and total casualties.
		class Camp_Casualties: Camp_BookText
		{
			idc = IDC_CAMPAIGN_CASUALTIES;
			y = 0.85;
		};

		//ToDo: Shows when it shouldn't.
		class Camp_Camp_BookTableItem: Camp_BookText
		{
			x = 0.35;
			w = 0.1; h = 0.03;
			style = ST_CENTER + ST_WITH_RECT;
		};

		//Statistics table.
		class Camp_KillsTitle: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_KILLS_TITLE;
			y = 0.76;
			text = $STR_CAMPAIGN_KILLS;
		};

		class Camp_EnemyRow: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_ENEMY_ROW;
			y = 0.79;
			text = $STR_DISP_CAMPAIGN_ENEMY;
		};

		class Camp_FriendlyRow: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_FRIENDLY_ROW;
			y = 0.82;
			text = $STR_DISP_CAMPAIGN_FRIENDLY;
		};

		class Camp_CivilianRow: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_CIVILIAN_ROW;
			y = 0.85;
			text = $STR_DISP_CAMPAIGN_CIVILIAN;
		};

		class Camp_InfantryColumn: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_INFANTRY_COLUMN;
			x = 0.45; y = 0.76;
			text = $STR_MPTABLE_INFANTRY;
		};

		class Camp_SoftColumn: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_SOFT_COLUMN;
			x = 0.55; y = 0.76;
			text = $STR_MPTABLE_SOFT;
		};

		class Camp_ArmoredColumn: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_ARMORED_COLUMN;
			x = 0.65; y = 0.76;
			text = $STR_MPTABLE_ARMORED;
		};

		class Camp_AircraftColumn: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_AIRCRAFT_COLUMN;
			x = 0.75; y = 0.76;
			text = $STR_MPTABLE_AIR;
		};

		class Camp_TotalColumn: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_TOTAL_COLUMN;
			x = 0.85; y = 0.76;
			text = $STR_MPTABLE_TOTAL;
		};

		class Camp_EInf: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_EINF;
			x = 0.45; y = 0.79;
		};

		class Camp_ESoft: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_ESOFT;
			x = 0.55; y = 0.79;
		};

		class Camp_EArm: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_EARM;
			x = 0.65; y = 0.79;
		};

		class Camp_EAir: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_EAIR;
			x = 0.75; y = 0.79;
		};

		class Camp_ETot: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_ETOT;
			x = 0.85; y = 0.79;
		};

		class Camp_FInf: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_FINF;
			x = 0.45; y = 0.82;
		};

		class Camp_FSoft: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_FSOFT;
			x = 0.55; y = 0.82;
		};

		class Camp_FArm: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_FARM;
			x = 0.65; y = 0.82;
		};

		class Camp_FAir: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_FAIR;
			x = 0.75; y = 0.82;
		};

		class Camp_FTot: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_FTOT;
			x = 0.85; y = 0.82;
		};

		class Camp_CInf: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_CINF;
			x = 0.45; y = 0.85;
		};

		class Camp_CSoft: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_CSOFT;
			x = 0.55; y = 0.85;
		};

		class Camp_CArm: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_CARM;
			x = 0.65; y = 0.85;
		};

		class Camp_CAir: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_CAIR;
			x = 0.75; y = 0.85;
		};

		class Camp_CTot: Camp_BookTableItem
		{
			idc = IDC_CAMPAIGN_CTOT;
			x = 0.85; y = 0.85;
		};*/

	  //Difficulty selection button.
	  class Difficulty: CA_RscButton
	  {
	  		idc = IDC_CAMPAIGN_DIFF;
			x = 0.86; y = 0.7;
			h = 0.04;
		};

		class Revert_Text: CA_RscButton
		{
			idc = IDC_CAMPAIGN_REPLAY;
			x = 0.86; y = 0.75;
		};

		//Continue or replay the campaign.
		class OK_Text: CA_RscButton
		{
			idc = IDC_OK;
			x = 0.86; y = 0.8;
		};
		
		class Camp_B_Cancel: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.85;
			x = 0.86;
			text = $STR_CA_CANCEL;
		};
	};
};

//briefing screen
class RscDisplayGetReady: RscDisplayMainMap
{
	class controlsBackground
	{
		delete Background4;
		delete Background3;
		delete Background2;
		delete Background1;
		//delete Map1;

		//In-game map.
		class Map1: Map
		{
			x = 0; y = 0;
			w = 1; h = 1;
		};
		class Logo: CA_Logo_small
		{
			x = 0.73; y = 0.015;
			style = ST_KEEP_ASPECT_RATIO + ST_SHADOW;
		};
	};

	class controls
	{
	  delete B_Cancel;
	  delete B_Continue;
	  delete Title;

		class HintsBackground: CA_Mainback	
		{
			x = -1; 
			y = __EVAL(80 * _ySpacing));
			w = 3;
			h = __EVAL(21 * _ySpacing);
			colorText[] = Color_Black;
		};			
/*		name temporary disabled
		class Title2: RscTitle
		{
			idc = IDC_GETREADY_TITLE;
			x = 0.338; y = 0.92;
			w = 0.611; h = 0.04;
			style = ST_RIGHT + ST_SHADOW;
			sizeEx = 0.035;
			colorText[] = Color_White;
		}; */
	/*	Should be handled by the program
		class CA_Toggle_Satellite: RscButton
		{
			idc = IDC_MAP_TEXTURES;
			default = false;
			x = 0.738; y = 0.142;
			w = 0.211; h = 0.027;
			colorBackground[] = {0.81, 0.81, 0.792, 1};
			colorFocused[] =  {0.405, 0.405, 0.396, 1}; 			
		}; */	 
		//10,39,67,95 - 81 85 89
		class HintX_Gear: RscXKeyShadow
		{
			y = __EVAL(81 * _ySpacing);
			x = __EVAL(10 * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			w = __EVAL(28 * _xSpacing);			
			key = KEY_XBOX_White;
		};
		class HintX_Notepad: RscXKeyShadow
		{
			y = __EVAL(85 * _ySpacing);
			x = __EVAL(10 * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			w = __EVAL(28 * _xSpacing);			
			key = KEY_XBOX_Black;
		};		
		class HintX_X: RscXKeyShadow
		{
			y = __EVAL(89 * _ySpacing);
			x = __EVAL(10 * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			w = __EVAL(28 * _xSpacing);			
			key = KEY_XBOX_X;
		};		
		class HintX_Insertion: RscXKeyShadow
		{
			y = __EVAL(81 * _ySpacing);
			x = __EVAL(95 * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			w = __EVAL(28 * _xSpacing);
			key = KEY_XBOX_A;
		};
		class HintX_Continue: RscXKeyShadow
		{
			y = __EVAL(85 * _ySpacing);
			x = __EVAL(95 * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			w = __EVAL(28 * _xSpacing);
			key = KEY_XBOX_Start;
		};
	
		class HintX_Cancel: RscXKeyShadow
		{
			y = __EVAL(89 * _ySpacing);
			x = __EVAL(95 * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			w = __EVAL(28 * _xSpacing);
			key = KEY_XBOX_B;			
		}; 
	};
		class KeyHints
		{
			KEY_HINT(B, KEY_XBOX_B, "[B] Abort");
			KEY_HINT(Start, KEY_XBOX_Start, "[St.] Continue");
			KEY_HINT(KeyWhite, KEY_XBOX_White, "[RB] Gear");
		};
};

class RscDisplayGear: RscStandardDisplay
{
	enableSimulation = true;
	movingEnable = true;
	
	emptyGun = "\ca\ui\data\ui_gear_gun_gs.paa";
	emptySec = "\ca\ui\data\ui_gear_sec_gs.paa";
	
	emptyEq = "\ca\ui\data\ui_gear_eq_gs.paa";
	emptyMag = "\ca\ui\data\ui_gear_mag_gs.paa";
	emptyMag2 = "\ca\ui\data\ui_gear_mag2_gs.paa";
	emptyHGun = "\ca\ui\data\ui_gear_hgun_gs.paa";
	emptyHGunMag = "\ca\ui\data\ui_gear_hgunmag_gs.paa";
	
	__EXEC( _xInit = 12 * _xSpacing; _yInit = 3 * _ySpacing;)
	__EXEC( _windowWidth = 101; _windowHeight = 90;)
	__EXEC( _windowBorder = 1;)
	__EXEC( _availableItemsHeight = 35;)
	
	class ControlsBackground
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

		class GearTitle: CA_Title_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			
		};

		class Available_items_back: CA_Back
		{
			x = __EVAL(_xInit + (1 * _xSpacing)); 
			y = __EVAL(_yInit + (9 * _ySpacing));
			w = __EVAL(59 * _xSpacing);
			h = __EVAL(_availableItemsHeight * _ySpacing);
		};
		
		class Description_back: CA_Title_Back
		{
			y = __EVAL(_yInit + (45 * _ySpacing));
			x = __EVAL(_xInit + (1 * _xSpacing));
			h = __EVAL(44 * _ySpacing);
			w = __EVAL(59 * _xSpacing);					
			colorText[] = CA_UI_title_background_blue;
		};

		class Gear_of_unit_back: Available_items_back
		{
			x = __EVAL(_xInit + (61 * _xSpacing)); 
			w = __EVAL((_windowWidth - 61 - _windowBorder) * _xSpacing);
			h = __EVAL(65 * _ySpacing);
			colorText[] = CA_UI_element_background;
		};
		class Logo: CA_Logo_small
		{
			x = __EVAL(_xInit + ((_windowWidth - 25)  * _xSpacing)); 
			y = __EVAL(_yInit + (-1.9 * _ySpacing));
		};
	};
	
	class controls
	{
		delete B_Close;
		delete B_Rearm;
		delete Title;
		delete SoldiersValue;
		delete Pool;
		delete Skill;
		delete Vehicle;
		delete Weapons;

		class Gear_Title: CA_Title
		{
			idc = IDC_GEAR_UNIT;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
			colorText[] = Color_White;	
			text = $STR_GEAR_TITLE;
		};

		class Available_items_Text: RscText
		{
			x = __EVAL(_xInit + (1 * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));
			w = __EVAL(59 * _xSpacing);
			h = __EVAL(3 * _ySpacing);
			text = $STR_GEAR_ITEMS;
			colorText[] = CA_colordark;
		};


/*		class Description_Text: Select_unit_Text
		{
			y = __EVAL(_yInit + (45 * _ySpacing));
			text = "Description:";

		}; */
		
		class Gear_of_unit_Text: Available_items_Text
		{
			x = __EVAL(_xInit + (61 * _xSpacing)); 
			text = $STR_GEAR_UNIT;
		};

		class Available_items : RscListBox
		{
			idc = IDC_GEAR_POOL;			
			x = __EVAL(_xInit + (1 * _xSpacing)); 
			y = __EVAL(_yInit + (9 * _ySpacing) + 	0.005);
			w = __EVAL(59 * _xSpacing);
			h = __EVAL(_availableItemsHeight * _ySpacing - 0.01);
			style = LB_TEXTURES;
			canDrag = true;
		};
		
		class Rank_of_unit_Text: Available_items_Text
		{
			x = __EVAL(_xInit + (62 * _xSpacing)); 
			y = __EVAL(_yInit + 66 * _ySpacing));
			text = $STR_GEAR_RANK;
		};

		class Vehicle_of_unit_Text: Rank_of_unit_Text
		{
			x = __EVAL(_xInit + (80 * _xSpacing)); 
			text = $STR_GEAR_VEHICLE;
		};
		
		//Selected unit's skill level.
		class CA_Skill: RscPictureKeepAspect
		{
			idc = IDC_GEAR_SKILL;
			x = __EVAL(_xInit + (75 * _xSpacing)); 
			y = __EVAL(_yInit + (66 * _ySpacing));
			w = __EVAL(7 * _xSpacing);
			h = __EVAL(7 * _ySpacing);
		};

		//Selected unit's vehicle.
		class CA_Vehicle: CA_Skill
		{
			idc = IDC_GEAR_VEHICLE;
			x = __EVAL(_xInit + (90 * _xSpacing)); 
		};


		class CA_Description: RscHtml
		{
			idc = IDC_GEAR_OVERVIEW;
			x = __EVAL(_xInit + (1 * _xSpacing) + 0.008);
			y = __EVAL(_yInit + (45 * _ySpacing) + 0.008);
			w = __EVAL(59 * _xSpacing - 0.016);
			h = __EVAL(41 * _ySpacing - 0.016);
			sizeEx = TextSize_small;
			colorText[] = Color_White;
		};

		class CA_Gear_slot_primary: RscActiveText
		{
			idc = IDC_GEAR_SLOT_PRIMARY;
			x = __EVAL(_xInit + (63 * _xSpacing)); 
			y = __EVAL(_yInit + (11 * _ySpacing));
			w = __EVAL(35 * _xSpacing);
			h = __EVAL(12 * _ySpacing);	
			style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
			soundDoubleClick[] = {"", 0.1, 1};
			color[] = {1, 1, 1, 1};
			colorBackground[] = {0.5, 0.5, 0.5, 1};			
			colorBackgroundSelected[] = {0.84, 1, 0.55, 1};			
			colorFocused[] = {0, 0, 0, 1};
		};

		class CA_Gear_slot_secondary: CA_Gear_slot_primary
		{
			idc = IDC_GEAR_SLOT_SECONDARY;
			y = __EVAL(_yInit + (24 * _ySpacing));
		};
		
		class CA_Gear_slot_item1: CA_Gear_slot_primary
		{
			idc = IDC_GEAR_SLOT_ITEM1;
			w = __EVAL(5 * _xSpacing);
			h = __EVAL(5 * _ySpacing);	
			y = __EVAL(_yInit + (37 * _ySpacing));
		};
		
		class CA_Gear_slot_item2: CA_Gear_slot_item1
		{
			idc = IDC_GEAR_SLOT_ITEM2;
			x = __EVAL(_xInit + (69 * _xSpacing)); 
		};
		class CA_Gear_slot_item3: CA_Gear_slot_item1
		{
			idc = IDC_GEAR_SLOT_ITEM3;
			x = __EVAL(_xInit + (75 * _xSpacing));
		};
		class CA_Gear_slot_item4: CA_Gear_slot_item1
		{
			idc = IDC_GEAR_SLOT_ITEM4;
			x = __EVAL(_xInit + (81 * _xSpacing));
		};
		class CA_Gear_slot_item5: CA_Gear_slot_item1
		{
			idc = IDC_GEAR_SLOT_ITEM5;
			x = __EVAL(_xInit + (87 * _xSpacing));
		};
		class CA_Gear_slot_item6: CA_Gear_slot_item1
		{
			idc = IDC_GEAR_SLOT_ITEM6;
			x = __EVAL(_xInit + (93 * _xSpacing));
		};
		class CA_Gear_slot_item7: CA_Gear_slot_item1
		{
			idc = IDC_GEAR_SLOT_ITEM7;
			y = __EVAL(_yInit + (43 * _ySpacing));
		};
		class CA_Gear_slot_item8: CA_Gear_slot_item7
		{
			idc = IDC_GEAR_SLOT_ITEM8;
			x = __EVAL(_xInit + (69 * _xSpacing));
		};
		class CA_Gear_slot_item9: CA_Gear_slot_item7
		{
			idc = IDC_GEAR_SLOT_ITEM9;
			x = __EVAL(_xInit + (75 * _xSpacing));
		};
		class CA_Gear_slot_item10: CA_Gear_slot_item7
		{
			idc = IDC_GEAR_SLOT_ITEM10;
			x = __EVAL(_xInit + (81 * _xSpacing));
		};
		
		class CA_Gear_slot_item11: CA_Gear_slot_item7
		{
			idc = IDC_GEAR_SLOT_ITEM11;
			x = __EVAL(_xInit + (87 * _xSpacing));
		};

		class CA_Gear_slot_item12: CA_Gear_slot_item7
		{
			idc = IDC_GEAR_SLOT_ITEM12;
			x = __EVAL(_xInit + (93 * _xSpacing));
		};
		class CA_Gear_slot_handgun: CA_Gear_slot_primary
		{
			idc = IDC_GEAR_SLOT_HANDGUN;
			y = __EVAL(_yInit + (49 * _ySpacing));
			w = __EVAL(11 * _xSpacing);
			h = __EVAL(11 * _ySpacing);
		};
		class CA_Gear_slot_handgun_item1: CA_Gear_slot_item1
		{
			idc = IDC_GEAR_SLOT_HANGUN_ITEM1;
			x = __EVAL(_xInit + (75 * _xSpacing)); 
			y = __EVAL(_yInit + (49 * _ySpacing));
		};
		class CA_Gear_slot_handgun_item2: CA_Gear_slot_handgun_item1
		{
			idc = IDC_GEAR_SLOT_HANGUN_ITEM2;
			x = __EVAL(_xInit + (81 * _xSpacing));
		};
		class CA_Gear_slot_handgun_item3: CA_Gear_slot_handgun_item1
		{
			idc = IDC_GEAR_SLOT_HANGUN_ITEM3;
			x = __EVAL(_xInit + (87 * _xSpacing));
		};
		class CA_Gear_slot_handgun_item4: CA_Gear_slot_handgun_item1
		{
			idc = IDC_GEAR_SLOT_HANGUN_ITEM4;
			x = __EVAL(_xInit + (93 * _xSpacing));
		};
		class CA_Gear_slot_handgun_item5: CA_Gear_slot_handgun_item1
		{
			idc = IDC_GEAR_SLOT_HANGUN_ITEM5;
			y = __EVAL(_yInit + (55 * _ySpacing));
		};
		class CA_Gear_slot_handgun_item6: CA_Gear_slot_handgun_item5
		{
			idc = IDC_GEAR_SLOT_HANGUN_ITEM6;
			x = __EVAL(_xInit + (81 * _xSpacing));
		};
		class CA_Gear_slot_handgun_item7: CA_Gear_slot_handgun_item5
		{
			idc = IDC_GEAR_SLOT_HANGUN_ITEM7;
			x = __EVAL(_xInit + (87 * _xSpacing));
		};
		class CA_Gear_slot_handgun_item8: CA_Gear_slot_handgun_item5
		{
			idc = IDC_GEAR_SLOT_HANGUN_ITEM8;
			x = __EVAL(_xInit + (93 * _xSpacing));
		};
		class CA_Gear_slot_handgun_special1: CA_Gear_slot_item1
		{
			idc = IDC_GEAR_SLOT_SPECIAL1;
			x = __EVAL(_xInit + (68 * _xSpacing)); 
			y = __EVAL(_yInit + (61 * _ySpacing));
			w = __EVAL(12 * _xSpacing);
			h = __EVAL(5 * _ySpacing);	
		};		
		class CA_Gear_slot_handgun_special2: CA_Gear_slot_handgun_special1
		{
			idc = IDC_GEAR_SLOT_SPECIAL2;
			x = __EVAL(_xInit + (81 * _xSpacing));
		};		
		
		//IDC_GEAR_OVERVIEW
		//IDC_GEAR_SLOT_PRIMARY
		//IDC_GEAR_SLOT_SECONDARY
		//IDC_GEAR_SLOT_ITEM1-12
		//IDC_GEAR_SLOT_HANDGUN
		//IDC_GEAR_SLOT_HANGUN_ITEM1-8
		//IDC_GEAR_SLOT_SPECIAL1-2
		
		//Exit the gear screen.
		class Gear_B_Rearm: CA_RscButton_dialog
		{
			idc = IDC_GEAR_REARM;
			x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 20 ) * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 14 ) * _ySpacing));
			w = __EVAL(20 * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			text = $STR_GEAR_REARM;
		};
		
		class Gear_B_Drop_Take: Gear_B_Rearm
		{
			idc = IDC_OK;
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 9 ) * _ySpacing));
			default = 1;
		};

		class Gear_B_Close: Gear_B_Rearm
		{
			idc = IDC_CANCEL;
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 4 ) * _ySpacing));
			text = $STR_DISP_CLOSE;
			default = 0;			
		};

	};
};




//Video options screen.
class RscDisplayOptionsVideo: RscStandardDisplay
{
	idd = 843;
	enableSimulation = false;
	
	__EXEC( _xInit = 0 * _xSpacing; _yInit = 0 * _ySpacing;)
	__EXEC( _windowWidth = 108; _windowHeight = 80;)
	__EXEC( _windowBorder = 2;)
	
	onLoad = "_dummy = [_this, ""CA_VO_Init""] call compile preprocessFile ""\ca\ui\scripts\HideVideoOptions.sqf""; ";		
	class ControlsBackground
	{  			
				//This prevents hideing of the dialog when mouse is over the active parts

				class Mainback: CA_Mainback
				{
					idc = 200;
					x = __EVAL(_xInit + (6 * _xSpacing)); 
					y = __EVAL(_yInit + (45 * _ySpacing));
					w = __EVAL(_windowWidth * _xSpacing);
					h = __EVAL((_windowHeight - 29) * _ySpacing);
					colorbackground[] = CA_UI_background;
				};
				class MainbackPart2: CA_Mainback_2
				{
					idc = 249;
					x = __EVAL(_xInit + (6 * _xSpacing)); 
					y = __EVAL(_yInit + (65 * _ySpacing));
					w = __EVAL(_windowWidth * _xSpacing);
					h = __EVAL((_windowHeight - 49) * _ySpacing);
					colorbackground[] = CA_UI_background;
				};
									
				//backgrounds
				class Back1: CA_Back //resolution
				{
					
					idc = 202;
					x = __EVAL(_xInit + (48 * _xSpacing)); 
					y = __EVAL(_yInit + (55 * _ySpacing));
					w = __EVAL(21 * _xSpacing);
					h = __EVAL(40 * _ySpacing);
				};
				
				class Back4: Back1 //aspect
				{
					idc = 203;
					x = __EVAL(_xInit + (70 * _xSpacing));
				};
			
				class Back2: Back1 //refresh
				{
					idc = 204;
					x = __EVAL(_xInit + (92 * _xSpacing)); 
				};	
				
				class Back3: Back1 //display
				{
					idc = 205;
					x = __EVAL(_xInit + (7 * _xSpacing)); 
					y = __EVAL(_yInit + (77 * _ySpacing));
					w = __EVAL(40 * _xSpacing);
					h = __EVAL(18 * _ySpacing);	
				};
				class Back5: Back3 //Advanced background
				{
					idc = 206;
					y = __EVAL(_yInit + (68 * _ySpacing));
					w = __EVAL(106 * _xSpacing);
					h = __EVAL(27 * _ySpacing);
				};
				class BackQ: Back1
				{
					idc = 248;
					x = __EVAL(_xInit + (7 * _xSpacing));
					y = __EVAL(_yInit + (55 * _ySpacing));
					w = __EVAL(40 * _xSpacing);
					h = __EVAL(18 * _ySpacing);
				};

				class Black1: CA_Title_Back //Basic Settings
				{
					idc = 246;
					x = __EVAL(_xInit + (7 * _xSpacing)); 
					y = __EVAL(_yInit + (52 * _ySpacing));
					w = __EVAL(40 * _xSpacing);
					h = __EVAL(3 * _ySpacing);
				};
		
				class BlackQ: Black1 //Resolution title
				{
					idc = 207;
					x = __EVAL(_xInit + (48 * _xSpacing)); 
					y = __EVAL(_yInit + (52 * _ySpacing));
					w = __EVAL(21 * _xSpacing);
					colorText[] = CA_UI_title_background_blue;				
				};
				
				class Black2: Black1 //Aspect title
				{
					idc = 208;
					x = __EVAL(_xInit + (70 * _xSpacing));
					w = __EVAL(21 * _xSpacing);
					colorText[] = CA_UI_title_background_blue;
				};
				
				class Black4: Black1 //Refresh title 
				{
					idc = 209;
					x = __EVAL(_xInit + (92 * _xSpacing)); 
					w = __EVAL(21 * _xSpacing);
					colorText[] = CA_UI_title_background_blue;					
				};
				
				class Black3: Black1 //Display title 
				{
					idc = 210;
					x = __EVAL(_xInit + (7 * _xSpacing)); 
					y = __EVAL(_yInit + (74 * _ySpacing));
					w = __EVAL(40 * _xSpacing);
				};

				class Black5: Black3 //Advanced title
				{
					idc = 211;
					y = __EVAL(_yInit + (65 * _ySpacing));
					w = __EVAL(106 * _xSpacing);
					colorText[] = CA_UI_title_background_red;
				};
		    	class Logo: CA_Logo_small
				{
					x = __EVAL(_xInit + (90 * _xSpacing));
					y = __EVAL(_yInit + (43 * _ySpacing));	
				};

	};
	class Controls
	{
		
				delete B_OK;
				delete B_Cancel;
				delete B_Default;	
				delete TextRefresh;
				delete ValueRefresh;
				delete TextTextureDetail;
				delete ValueTextureDetail;
				delete TextQualityPreference;
				delete ValueQualityPreference;
				delete TextShadingDetail;
				delete ValueShadingDetail;
				delete TextShadowDetail;
				delete ValueShadowDetail;
				delete TextTerrain;
				delete ValueTerrain;
				delete TextObjectShadows;
				delete ValueObjectShadows;
				delete TextHDRDetail;
				delete ValueHDRDetail;
				delete TextAnisotropicDetail;
				delete ValueAnisotropicDetail;
				delete TextPostprocessEffects;
				delete ValuePostprocessEffects;
				delete TextAntialiasing;
				delete ValueAntialiasing;
				delete TextBlood;
				delete ValueBlood;
				delete TextWBuffer;
				delete ValueWBuffer;
				delete TextAspectRatio;
				delete ValueAspectRatio;				
				delete TextResolution;
				delete ValueResolution;
				delete TextObjectsDetail;
				delete ValueObjectsDetail;	
				delete TextLanguage;
				delete ValueLanguage;		
				delete Title;	

				class Title1: CA_Title
				{
					idc = 212;
					x = __EVAL(_xInit + (7 * _xSpacing)); 
					y = __EVAL(_yInit + (46 * _ySpacing));
					text = $STR_DISP_OPTIONS_VIDEO;
				};
				
				class CA_TextBasicSettings: RscText
				{
					idc = 247;
					x = __EVAL(_xInit + (8 * _xSpacing)); 
					y = __EVAL(_yInit + (52 * _ySpacing));
					w = __EVAL(31 * _xSpacing);
					h = __EVAL(3 * _ySpacing);
					text = $STR_CA_BAS_SETTINGS;
					colorText[] = {1, 1, 1, 1};
				};


				class CA_TextLanguage: RscText
				{
					idc = 145;
					x = __EVAL(_xInit + (8 * _xSpacing)); 
					y = __EVAL(_yInit + (56 * _ySpacing));
					w = __EVAL(27 * _xSpacing);	
					h = __EVAL(3 * _ySpacing);	
					style = ST_LEFT;
					sizeEx = TextSize_small;			
					text = $STR_DISP_OPT_LANGUAGE;
				};				
				
				class CA_ValueLanguage: RscCombo
				{
					idc = IDC_OPTIONS_LANGUAGE;
					x = __EVAL(_xInit + (30 * _xSpacing));
					y = __EVAL(_yInit + (56 * _ySpacing));
					w = __EVAL(16 * _xSpacing);	
					h = __EVAL(3 * _ySpacing);	
				};
				//Select the quality preference.
				class CA_TextQualityPreference: CA_TextLanguage
				{
					idc = 232;
					y = __EVAL(_yInit + (60 * _ySpacing));	
					text = $STR_DISP_OPT_QUALITY_PREFERENCE;
					//y = Display_Options_Video_Y + 0.15;
				};
				class CA_ValueQualityPreference: RscCombo
				{
					idc = IDC_QUALITY_PREFERENCE;
					x = __EVAL(_xInit + (30 * _xSpacing));
					y = __EVAL(_yInit + (60 * _ySpacing));
					w = __EVAL(16 * _xSpacing);	
					h = __EVAL(3 * _ySpacing);
				};				
				//Select the screen resolution.
				class CA_TextResolution: CA_TextBasicSettings
				{
					idc = 213;
					x = __EVAL(_xInit + (49 * _xSpacing)); 
					text = $STR_DISP_OPT_RESOLUTION;
				};

				class TextVisibility: RscText
				{
					idc = 223;
					x = __EVAL(_xInit + (8 * _xSpacing)); 
					y = __EVAL(_yInit + (64 * _ySpacing));
					sizeEx = TextSize_small;					
					//x = 0.564; y = 0.44;
				};
				
				class ValueVisibility: RscText
				{
				//	idc = 224;
					style = ST_RIGHT;
					x = __EVAL(_xInit + (32 * _xSpacing)); 
					y = __EVAL(_yInit + (64 * _ySpacing));
					sizeEx = TextSize_small;					
					//x = 0.771; y = 0.44;
				};
				//Change the viewing distance.
				class SliderVisibility: RscSlider
				{
				//	idc = 225;
					x = __EVAL(_xInit + (9 * _xSpacing)); 
					y = __EVAL(_yInit + (68 * _ySpacing));
					w = __EVAL(36 * _xSpacing);					
					/*
					x = 0.567; y = 0.48;
					w = 0.263;*/
				};
				
				class CA_ValueResolution: RscListBox
				{	
					idc = IDC_OPTIONS_RESOLUTION;
					x = __EVAL(_xInit + (48 * _xSpacing)); 
					y = __EVAL(_yInit + (56 * _ySpacing));
					w = __EVAL(21 * _xSpacing);
					h = __EVAL(37 * _ySpacing);
					rows = 5;
				};
				
				//Select the Aspect ratio.
				class CA_TextAspectRatio: CA_TextBasicSettings
				{
					idc = 214;
					x = __EVAL(_xInit + (70 * _xSpacing)); 
					text = $STR_DISP_OPT_ASPECT_RATIO;
				};
								
				class CA_ValueAspectRatio: CA_ValueResolution
				{		
					idc = IDC_ASPECT_RATIO; 
					x = __EVAL(_xInit + (70 * _xSpacing));
					h = __EVAL(17 * _ySpacing); 
				};
				
				class CA_PictureAspectRatio: RscPicture
				{		
					idc = 218; 
					x = __EVAL(_xInit + (72 * _xSpacing));
					y = __EVAL(_yInit + (75 * _ySpacing));
					w = __EVAL(16 * _xSpacing);
					h = __EVAL(16 * _ySpacing);
					text = "\ca\ui\data\ui_aspect_circle_gr.paa";
				};
				//Select the screen refresh rate.
				class CA_TextRefresh: CA_TextBasicSettings
				{
					idc = 215;
					x = __EVAL(_xInit + (92 * _xSpacing)); 
					text = $STR_DISP_OPT_REFRESH;
				};
				
				class CA_ValueRefresh: CA_ValueResolution
				{					
					idc = IDC_OPTIONS_REFRESH;
					x = __EVAL(_xInit + (92 * _xSpacing)); 
				};
				
				//Display
				class TextDisplay: RscText
				{
					idc = 216;
					x = __EVAL(_xInit + (8 * _xSpacing)); 
					y = __EVAL(_yInit + (74 * _ySpacing));
					w = __EVAL(55 * _xSpacing);
					h = __EVAL(3 * _ySpacing);
					text = $STR_CA_DISPLAY;
					colorText[] = {1, 1, 1, 1};
				};
		
				class TextBrightness: RscText
				{
					idc = 217;
					x = __EVAL(_xInit + (8 * _xSpacing)); 
					y = __EVAL(_yInit + (78 * _ySpacing));
					sizeEx = TextSize_small;					
				};
				//The current brightness value.
				class ValueBrightness: RscText
				{
				//	idc = 218;
					style = ST_RIGHT;
					x = __EVAL(_xInit + (32 * _xSpacing)); 
					y = __EVAL(_yInit + (78 * _ySpacing));
					sizeEx = TextSize_small;				
				};
				//Change the brightness.
				class SliderBrightness: RscSlider
				{
				//	idc = 219;
					x = __EVAL(_xInit + (9 * _xSpacing)); 
					y = __EVAL(_yInit + (82 * _ySpacing));
					w = __EVAL(36 * _xSpacing);			
				};
		
				class TextGamma: RscText
				{
					idc = 220;
					x = __EVAL(_xInit + (8 * _xSpacing)); 
					y = __EVAL(_yInit + (86 * _ySpacing));				
					sizeEx = TextSize_small;					
				};
				//The current gamma level.
				class ValueGamma: RscText
				{
				//	idc = 221;
					style = ST_RIGHT;
					x = __EVAL(_xInit + (32 * _xSpacing)); 
					y = __EVAL(_yInit + (86 * _ySpacing));									
					sizeEx = TextSize_small;					
				};
				//Change the gamma level.
				class SliderGamma: RscSlider
				{
				//	idc = 222;
					x = __EVAL(_xInit + (9 * _xSpacing)); 
					y = __EVAL(_yInit + (90 * _ySpacing));
					w = __EVAL(36 * _xSpacing);	
				};
				
				//The current viewing distance.
	
				class TextAdvanced: RscText
				{
					idc = 226;
					x = __EVAL(_xInit + (8 * _xSpacing)); 
					y = __EVAL(_yInit + (65 * _ySpacing));
					w = __EVAL(104 * _xSpacing);	
					h = __EVAL(3 * _ySpacing);
					sizeEx = TextSize_small;
					text = $STR_CA_ADV_SETTINGS;
					colorText[] = {1, 1, 1, 1};
				};
		
				class TextTerrain1: RscText
				{
					idc = 227;
					x = __EVAL(_xInit + (8 * _xSpacing)); 
					y = __EVAL(_yInit + (70 * _ySpacing));
					w = __EVAL(27 * _xSpacing);	
					h = __EVAL(3 * _ySpacing);
					style = ST_LEFT;
					sizeEx = TextSize_small;
					text = $STR_DISP_OPT_TERRAIN;
				};
				//The current terrain detail.
				class ValueTerrain1: RscCombo
				{
					idc = IDC_OPTIONS_TERRAIN;
					x = __EVAL(_xInit + (42 * _xSpacing)); 
					y = __EVAL(_yInit + (70 * _ySpacing));
					w = __EVAL(16 * _xSpacing);	
					h = __EVAL(3 * _ySpacing);
					rows = 4;
				};
		
				//Select the objects detail.
				class CA_TextObjectsDetail: TextTerrain1
				{
					idc = 228;				
					y = __EVAL(_yInit + (75 * _ySpacing));
					text = $STR_DISP_OPT_OBJECTS_DETAIL;
				};
				class CA_ValueObjectsDetail: ValueTerrain1
				{
					idc = IDC_OBJECTS_DETAIL;
					y = __EVAL(_yInit + (75 * _ySpacing));
				};
		
				//Select the texture detail.
				class CA_TextTextureDetail: TextTerrain1
				{
					idc = 230;				
					y = __EVAL(_yInit + (80 * _ySpacing));
					text = $STR_DISP_OPT_TEXTURE_DETAIL;
				};
				class CA_ValueTextureDetail: ValueTerrain1
				{	
					idc = IDC_TEXTURE_DETAIL;
					y = __EVAL(_yInit + (80 * _ySpacing));
				};
		
				//Select the shading detail.
				class CA_TextShadingDetail: TextTerrain1
				{
					idc = 233;				
					y = __EVAL(_yInit + (85 * _ySpacing));		
					text = $STR_DISP_OPT_SHADING_DETAIL;
				};
				class CA_ValueShadingDetail: ValueTerrain1
				{		
					idc = IDC_SHADING_DETAIL;
					y = __EVAL(_yInit + (85 * _ySpacing));	

				};
		
				class CA_TextPostprocessEffects: TextTerrain1
				{					
					idc = 241;				
					y = __EVAL(_yInit + (90 * _ySpacing));	
					text = $STR_DISP_OPT_POSTPROCESS_EFFECTS;
				};
				class CA_ValuePostprocessEffects: ValueTerrain1
				{							
					idc = IDC_POSTPROCESS_EFFECTS;
					y = __EVAL(_yInit + (90 * _ySpacing));
				};

				//Select the Anisotropic Filtering Quality .
				class CA_TextAnisotropicDetail: TextTerrain1
				{
					idc = 239;
					x = __EVAL(_xInit + (63 * _xSpacing)); 				
					y = __EVAL(_yInit + (70 * _ySpacing));	
					text = $STR_DISP_OPT_ANISO_DETAIL;
				};
				class CA_ValueAnisotropicDetail: ValueTerrain1
				{		
					idc = IDC_ANISO_DETAIL;
					x = __EVAL(_xInit + (96 * _xSpacing)); 
					y = __EVAL(_yInit + (70 * _ySpacing));
				};
				
				//Select the PostprocessEffects Quality .
				class CA_TextShadowDetail: CA_TextAnisotropicDetail
				{
					idc = 235;
					y = __EVAL(_yInit + (75 * _ySpacing));
					text = $STR_DISP_OPT_SHADOW_DETAIL;
				};
				class CA_ValueShadowDetail: CA_ValueAnisotropicDetail
				{			
					idc = IDC_SHADOW_DETAIL;
					y = __EVAL(_yInit + (75 * _ySpacing));
				};
		
				//Select the Antialiasing  .
				class CA_TextAADetail: CA_TextAnisotropicDetail
				{
					idc = 242;
					y = __EVAL(_yInit + (80 * _ySpacing));								
					text = $STR_DISP_OPT_FSAA_DETAIL;
				};
				class CA_ValueAADetail: CA_ValueAnisotropicDetail
				{	
					idc = IDC_FSAA_DETAIL;
					y = __EVAL(_yInit + (80 * _ySpacing));								
				};

				//Enable or disable blood.
				class TextBlood1: CA_TextAnisotropicDetail
				{
					idc = 245;
 					y = __EVAL(_yInit + (85 * _ySpacing));
					text = $STR_DISP_OPT_BLOOD;
					/*				
					x = 0.47;
					y = Display_Options_Video_Y + 0.25;*/
				};
		
				class ValueBlood1: CA_ValueAnisotropicDetail
				{
					idc = IDC_OPTIONS_BLOOD;
 					y = __EVAL(_yInit + (85 * _ySpacing));
				};
				
				class HideAdvanced: CA_RscButton
				{
					idc = 345;
					y = __EVAL(_yInit + (60 * _ySpacing));
					x = __EVAL(115 * _xSpacing); 
					h =  __EVAL(4 * _ySpacing);
					borderSize =  __EVAL(1 * _xSpacing);
					text = $STR_CA_ADV_SHOW; //Automaticaly filled in by script
					OnButtonClick = "[_this, ""CA_VO_ToggleAdvanced""] execVM ""\ca\ui\scripts\HideVideoOptions.sqf""; ";

				};				
				class HideDialog: HideAdvanced
				{
					idc = 344;
					y = __EVAL(_yInit + (65 * _ySpacing));
					text = $STR_CA_HIDE;
					OnButtonClick = "[_this, ""CA_VO_ToggleAll""] execVM ""\ca\ui\scripts\HideVideoOptions.sqf""; ";
				};
				class VideoDefault: HideAdvanced
				{
					idc = IDC_OPTIONS_VIDEO_DEFAULT;
					y = __EVAL(_yInit + (70 * _ySpacing));
					text = $STR_DISP_DEFAULT;					
					OnButtonClick = "";
				};
		
				//Confirm the video options and exit.
				class Video_OK: HideAdvanced
				{
					idc = IDC_OK;
					default = 1;
					y = 0.8;
					text = $STR_DISP_OK;
					OnButtonClick = "";
				};
		
				//Cancel back to the main options screen.
				class Video_Cancel: HideAdvanced
				{
					idc = IDC_CANCEL;
					default = 0;
					y = __EVAL(_yInit + (85 * _ySpacing));
					text = $STR_CA_CANCEL;
					OnButtonClick = "";
				};			
	};
};

//Audio options screen.
class RscDisplayOptionsAudio: RscStandardDisplay
{
	enableSimulation = false;

  class controlsBackground
	{
		class Mainback: CA_Mainback
		{
			x = 0.29; y = 0.38;
			w = 0.56; h = 0.57;		
		};

		//backgrounds
		class Back1: CA_Back //volume
		{
			x = 0.3; y = 0.45;
			w = 0.54; h = 0.3;
		};
		class Back2: Back1 //advanced
		{
			y = 0.79;
			h = 0.15;
		};

		class Black1: CA_Title_Back //volume
		{
			x = 0.3; y = 0.42;
			w = 0.54;  h = 0.03;
		};
		class Black2: Black1 //advanced
		{
			y = 0.76;
			colorText[] = CA_UI_title_background_red;
		};
		class Logo: CA_Logo 
		{
			x = 0.638;
		};
	};

	class controls
	{
		delete TextEAX;
		delete ValueEAX;
		delete TextSingleVoice;
		delete ValueSingleVoice;
		delete TextPlayerVoice;
		delete ValuePlayerVoice;
		delete TextHWAcc;
		delete ValueHWAcc;
		
		delete B_Default;		
		delete B_OK;
		delete B_Cancel;
		delete Title;

		class Title1: CA_Title
		{
			x = 0.30; y = 0.38;
			w = 0.4; h = 0.05;
			text = $STR_DISP_OPTIONS_AUDIO;
		};

		class TextVolume: RscText
		{
			x = 0.3; y = 0.42;
			w = 0.54; h = 0.03;
			text = $STR_CA_VOLUME;
			colorText[] = {1, 1, 1, 1};
		};

		class TextEffects: RscText
		{
			x = 0.31; y = 0.47;
		};
		//The current volume for sound effects.
		class ValueEffects: RscText
		{
			x = 0.7; y = 0.47;
		};
		//Change the volume for sound effects.
		class SliderEffects: RscSlider
		{
			x = 0.31; y = 0.51;
			w = 0.52;
		};

		class TextVoices: RscText
		{
			x = 0.31; y = 0.55;
		};
		//The current volume for voices.
		class ValueVoices: RscText
		{
			x = 0.7; y = 0.55;
		};
		//Change the volume for voices.
		class SliderVoices: RscSlider
		{
			x = 0.31; y = 0.59;
			w = 0.52;
		};

		class TextMusic: RscText
		{
			x = 0.31; y = 0.63;
		};
		//The current volume for music.
		class ValueMusic: RscText
		{
			x = 0.7; y = 0.63;
		};
		//Change the volume for music.
		class SliderMusic: RscSlider
		{
			x = 0.31; y = 0.67;
			w = 0.52;
		};

		class TextAdvanced: RscText
		{
			x = 0.3; y = 0.76;
			w = 0.54;  h = 0.03;
			text = $STR_CA_ADVANCED;
			colorText[] = {1, 1, 1, 1};
		};

		class CA_TextHWAcc: RscText
		{
			x = __EVAL(_xInit + (41 * _xSpacing)); 
			y = __EVAL(_yInit + (82 * _ySpacing));
			w = 0.38;
			text = $STR_DISP_OPT_HWACC;
		};
		//Enable or disable hardware accelerated audio.
		class CA_ValueHWAcc: RscButton_small
		{
			idc = IDC_OPTIONS_HWACC;
			x = __EVAL(_xInit + (88 * _xSpacing)); 
			y = __EVAL(_yInit + (82 * _ySpacing));
		};

		class CA_TextEAX: CA_TextHWAcc
		{
			y = __EVAL(_yInit + (87 * _ySpacing));
			text = $STR_DISP_OPT_EAX;
		};
		//Enable or disable EAX sound.
		class CA_ValueEAX: CA_ValueHWAcc
		{
			idc = IDC_OPTIONS_EAX;
			y = __EVAL(_yInit + ( 87 * _ySpacing));
		};
		/*
		class CA_TextSingleVoice: CA_TextHWAcc
		{
	    y = Display_Options_Audio_Y + (2 * Display_Options_Audio_YSpacing);
			text = $STR_DISP_OPT_SINGLE_VOICE;
		};
		//Enable or disable multiple voices.
		
		class CA_ValueSingleVoice: CA_ValueHWAcc
		{
			idc = IDC_OPTIONS_SINGLE_VOICE;
	    y = Display_Options_Audio_Y + (2 * Display_Options_Audio_YSpacing);
		};
		*/
		//Set audio options to default.
		class AudioDefault: CA_RscButton
		{
			idc = IDC_OPTIONS_AUDIO_DEFAULT;
			y = 0.70;
			text = $STR_DISP_DEFAULT;
		};		
		
		//Confirm the audio options and exit.
		class Audio_OK: CA_RscButton
		{
			idc = IDC_OK;
			default = 1;
			text = $STR_DISP_OK;
		};

		//Cancel back to the main options screen.
		class Audio_Cancel: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.85;		
			text = $STR_CA_CANCEL;
		};
	};
};

//Difficulty options screen.
class RscDisplayDifficulty: RscStandardDisplay
{
	enableSimulation = false;

  class controlsBackground
	{
		//backgrounds
		class Mainback: CA_Mainback
		{
      		x = 0.1; y = 0.25;
			w = 0.75; h = 0.69;
    	};

		class Back1: CA_Back //Under ListBox
		{
			x = 0.118; y = 0.298;
			w = 0.71; h = 0.25;
		};

		class TitleBck: CA_Title_Back
		{
			x = 0.118; y = 0.298;
			w = 0.71; h = 0.035;
		};

		class EnemyUnitsBck: CA_Back
		{
			x = 0.118; y = 0.565;
			w = 0.71; h = 0.068;
		};

		class FriendlyUnitsBck: CA_Back
		{
			x = 0.118; y = 0.645;
			w = 0.71; h = 0.068;
		};

		class EnemySkillBck: CA_Back
		{
			x = 0.118; y = 0.725;
			w = 0.71; h = 0.068;
			colorbackground[] = {1, 1, 1, 0.4};
		};

		class FriendlySkillBck: CA_Back
		{
			x = 0.118; y = 0.805;
			w = 0.71; h = 0.068;
			colorbackground[] = {1, 1, 1, 0.4};
		};

		
		class Logo: CA_Logo
		{
			x = 0.629;
			y = 0.2;
		};		
	};

	class controls
	{
		delete B_OK;
		delete B_Cancel;
		delete B_Default;
		delete Title;
		delete EnableSubtitles;
		delete EnableRadio;
		
		class Title1: CA_Title
		{
			x = 0.118; y = 0.25;
			text = $STR_DISP_OPTIONS_DIFFICULTY;
		};

		class TextName: RscText
		{
			x = 0.118; y = 0.3;
			w = 0.2;
			colorText[] = Color_White;
		};

		class TextCadet: RscText
		{
			x = 0.54; y = 0.3;
			w = 0.2;
			colorText[] = Color_White;			
		};

		class TextVeteran: RscText
		{
			x = 0.675; y = 0.3;
			w = 0.2;
			colorText[] = Color_White;			
		};

		//List of the various difficulty options.
		class ValueDifficulties: RscListBox
		{
			x = 0.118; y = 0.335;
			w = 0.711; h = 0.2;
			rows = 4;
		};

		class TextEnemyLevel: RscText
		{
			x = 0.118; y = 0.58;
			w = 0.4;
		};

		//Level of the enemy forces on Cadet mode.
		class ValueCadetEnemyLevel: RscListBox
		{
			x = 0.53; y = 0.573;
			w = 0.12; h = 0.047;
		};

		//Level of the enemy forces on Veteran mode.
		class ValueVeteranEnemyLevel: RscListBox
		{
			x = 0.67; y = 0.573;
			w = 0.159; h = 0.047;
		};

		class TextFriendlyLevel: RscText
		{
			x = 0.118; y = 0.66;
			w = 0.5;
		};

		//Level of the friendly forces on Cadet mode.
		class ValueCadetFriendlyLevel: RscListBox
		{
			x = 0.53; y = 0.66;
			w = 0.12; h = 0.047;
		};

		//Level of the friendly forces on Veteran mode.
		class ValueVeteranFriendlyLevel: RscListBox
		{
			x = 0.67; y = 0.66;
			w = 0.159; h = 0.047;
		};

		class TextEnemySkill: RscText
		{
			x = 0.118; y = 0.74;
			w = 0.5;
		};

		//Change the skill level for enemies in Cadet mode.
		class ValueCadetEnemySkill: RscSlider
		{
			x = 0.53; y = 0.74;
			w = 0.12; h = 0.02;
			colorActive[] = {0.3, 0.4, 0.2, 1};
		};

		//Change the skill level for enemies in Veteran mode.
		class ValueVeteranEnemySkill: RscSlider
		{
			x = 0.67; y = 0.74;
			w = 0.12; h = 0.02;
			colorActive[] = {0.3, 0.4, 0.2, 1};
		};

		//The current skill level for enemies in Cadet mode.
		class EchoCadetEnemySkill: RscText
		{
			x = 0.53; y = 0.76;
			w = 0.12;
			sizeEx = TextSize_small;
		};

		//The current skill level for enemies in Veteran mode.
		class EchoVeteranEnemySkill: RscText
		{
			x = 0.67; y = 0.76;
			w = 0.12;
			sizeEx = TextSize_small;
		};

		class TextFriendlySkill: RscText
		{
			x = 0.118; y = 0.82;
			w = 0.5;
		};

		//Change the skill level for friendlies in Cadet mode.
		class ValueCadetFriendlySkill: RscSlider
		{
			x = 0.53; y = 0.82;
			w = 0.12; h = 0.02;
			colorActive[] = {0.3, 0.4, 0.2, 1};
		};

		//Change the skill level for friendlies in Veteran mode.
		class ValueVeteranFriendlySkill: RscSlider
		{
			x = 0.67; y = 0.82;
			w = 0.12; h = 0.02;
			colorActive[] = {0.3, 0.4, 0.2, 1};
		};

		//The current skill level for friendlies in Cadet mode.
		class EchoCadetFriendlySkill: RscText
		{
			x = 0.53; y = 0.84;
			w = 0.12;
			sizeEx = TextSize_small;
		};

		//The current skill level for friendlies in Veteran mode.
		class EchoVeteranFriendlySkill: RscText
		{
			x = 0.67; y = 0.84;
			w = 0.12;
			sizeEx = TextSize_small;
		};

		//Enable of disable subtitles.
		class CA_EnableSubtitles: RscButton
		{
			idc = IDC_OPTIONS_SUBTITLES;
			x = 0.118; y = 0.89;
			w = 0.24; h = 0.03;
			sizeEx = TextSize_small;
		};

		//Enable of disable radio subtitles.
		class CA_EnableRadio: CA_EnableSubtitles
		{
			idc = IDC_OPTIONS_RADIO;
			x = 0.528; y = 0.89;
			w = 0.24; h = 0.03;
		};

		class Default: CA_RscButton
		{
			idc = IDC_DIFFICULTIES_DEFAULT;
			y = 0.70;
			text = $STR_DISP_DEFAULT;
		};

		CA_OK_AND_CANCEL_BUTTONS( $STR_DISP_OK, $STR_CA_CANCEL,1)
		
	};
};

//Input options screen.
class RscDisplayConfigure: RscStandardDisplay
{
	enableSimulation = false;
	 
	__EXEC( _xInit = 13 * _xSpacing; _yInit = 11.7 * _ySpacing;)
	__EXEC( _windowWidth = 100; _windowHeight = 81.3;)
	__EXEC( _windowBorder = 2;)	

  class controlsBackground
	{
		class Mainback: CA_Mainback
		{
			x = __EVAL(_xInit); 
			y = __EVAL(_yInit);
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
		};

		class Back1: CA_Back //Under Combo box
		{
			x = 0.118; y = 0.2;
			w = 0.71; h = 0.047;
		};
		
		class Back2: CA_Back //Under ListBox
		{
			x = 0.118; y = 0.251;
			w = 0.71; h = 0.387;
		};
		

		class Back4: Back1 //Under Mouse and Joystick keys
		{
			y = 0.68;
			w = 0.35;  h = 0.114;
		};
		class Back5: Back1 //Under Mouse Sensitivity
		{
			x = 0.475; y = 0.68;
			w = 0.353; h = 0.114;
		};
		class Back6: CA_Back //Under Other
		{
			x = 0.118; y = 0.839;
			w = 0.71; h = 0.054;
		};
		class BlackConControls: CA_Title_Back //Configure controls
		{
			x = 0.118; 
			y = 0.168;
			w = 0.71;
			h = 0.032;
		};
		class BlackConOption: CA_Title_Back //Controler Option
		{
			x = 0.118; 
			y = 0.648;
			w = 0.35;
			h = 0.032;
			colorText[] = CA_UI_title_background_blue;
		};
		class BlackMouseSen: CA_Title_Back //Mouse sensitivity
		{
			x = 0.475; 
			y = 0.648;
			w = 0.353;
			h = 0.032;
			colorText[] = CA_UI_title_background_red;
		};
		class BlackOther: CA_Title_Back //Other
		{
			x = 0.118; 
			y = 0.807;
			w = 0.71;
			h = 0.032;
			colorText[] = CA_UI_title_background_red;
		};
		class Logo: CA_Logo
		{
			x = 0.625;
			y = 0.08;		
		};		
	};

	class controls
	{
	    delete B_OK;
	    delete B_Cancel;
	    delete B_Default;
	    delete ControlsPage;
	    delete TextName;
	    delete TextKeys;
	    delete TextMouseSens;
	    delete Title;
		delete TextReserved;
		delete TextButtons;
		delete ValueButtons;
		delete ValueYReversed;
		delete ValueJoystick;

	
		class Title1: CA_Title
		{
		  x = 0.118; y = 0.124;
		  text = $STR_DISP_OPTIONS_CONFIGURE;
   		};

		class CA_TextConfigureControls: RscText
		{
			x = 0.12; y = 0.169;
			w = 0.35;
			text = $STR_DISP_CONF_CONFIGURE;
			colorText[] = {1, 1, 1, 1};
		};
		class CA_TextControlerOpt: RscText
		{
			x = 0.12; y = 0.65;
			w = 0.35;
			text = $STR_DISP_CONF_CONTROLER;
			colorText[] = {1, 1, 1, 1};
		};

		class CA_TextMouseSens: RscText
		{
			x = 0.48; y = 0.65;
			w = 0.35;
			text = $STR_DISP_CONF_SENS;
			colorText[] = {1, 1, 1, 1};
		};
		
		class CA_TexOther: RscText
		{
			x = 0.12; y = 0.81;
			w = 0.35;
			text = $STR_DISP_OTHER;
			colorText[] = Color_White;
		};
		    	
    	class CA_ControlsPageText: RscText
		{
			x = 0.12; y = 0.205;
			w = 0.423; h = 0.04;
			text = $STR_DISP_CONF_SHOW;
		};
		class CA_ControlsPage: RscCombo
		{
		//	idc = -1;
			idc = IDC_CONFIG_CONTROLS_PAGE;
			x = 0.4; y = 0.205;
			w = 0.423; h = 0.038;
		};

	//List of the keyboard, mouse and joystick controls.
		class ValueKeys: RscListBox
		{
			x = 0.12; y = 0.264;
			w = 0.708; h = 0.36;
			rows = 13;
		};
		
		//Y Axis is hacked for demo (one control is brake on two) 28.11.05
		class TextYReversed: RscText
		{
			idc = -1;
			x = 0.12; y = 0.698;
			w = 0.3;
			text = $STR_CA_YAXIS;
		};
		class CA_ValueYReversed: RscButton_small
		{
			idc = IDC_CONFIG_YREVERSED;
			x = 0.35; y = 0.698;
			style = ST_RIGHT;
			
		};

		/*Old Definition change only for Demo
		//Enable or disable a reversed Y axis.
		class ValueYReversed: RscActiveText
		{
			x = 0.12; y = 0.795;
			w = 0.15;
			style = ST_LEFT;
		};*/

		//joystick is hacked for demo (one control is brake on two) 28.11.05
		class TextJoystick: RscText
		{
			idc = -1;
			x = 0.12; y = 0.742;
			w = 0.3;
			text = $STR_CA_JOY;
		};
		class CA_ValueJoystick: CA_ValueYReversed
		{
			idc = IDC_CONFIG_JOYSTICK;
			y = 0.742;
			style = ST_RIGHT;
		};

		/*Old Definition change only for Demo
		//Enable or disable a joystick.
		class ValueJoystick: RscActiveText
		{
			x = 0.12; y = 0.84;
			w = 0.2;
			style = ST_LEFT;
		};*/

		//The current mouse sensitivity on the X axis.
		class TextXAxis: RscText
		{
			x = 0.48; y = 0.698;
		};
		//Change the mouse sensitivity on the X axis.
		class ValueXAxis: RscSlider
		{
			x = 0.58;
			y = 0.703;
			w = 0.23;
		};

		//The current mouse sensitivity on the Y axis.
		class TextYAxis: RscText
		{
			x = 0.48; y = 0.742;
		};
		//Change the mouse sensitivity on the Y axis.
		class ValueYAxis: RscSlider
		{
			x = 0.58; y = 0.747;
			w = 0.23;
		};
		
		//Setting of the floating zone
		class TextFloatingZone: RscText
		{
			x = 0.12; y = 0.845;
			w = 0.15;
			text = $STR_DISP_CONF_FLOATING_ZONE;
		};

		//Change the setting of the floating zone 
		//(area whitin you can move cursor without rotating view)
		class ValueFloatingZone: RscSlider
		{
			idc = IDC_CONFIG_FLOATING_ZONE;
			x = 0.3; y = 0.855;
			w = 0.505; h = 0.03;
		};

		class Default: CA_RscButton
		{
			idc = IDC_CONFIG_DEFAULT;
			y = 0.7;
			text = $STR_DISP_DEFAULT;
		};

		//Confirm or cancel the difficulty options and exit.
 		CA_OK_AND_CANCEL_BUTTONS( $STR_DISP_OK, $STR_CA_CANCEL,1)
	};
};

// Configure single Input action
class RscDisplayConfigureAction
{
	access = ReadAndWrite;
	movingEnable = false;
	enableSimulation = false;
	enableDisplay = true;

	__EXEC( _xInit = 13 * _xSpacing; _yInit = 11.7 * _ySpacing;)
	__EXEC( _windowWidth = 100; _windowHeight = 81.3;)
	__EXEC( _windowBorder = 2;)	

	class ControlsBackground
	{
		delete Background;
		
		class Mainback: CA_Mainback
		{
			x = __EVAL(_xInit); 
			y = __EVAL(_yInit);
			w = __EVAL(_windowWidth * _xSpacing);
			h = __EVAL(_windowHeight * _ySpacing);
		};
		class AssignedInputBack: CA_Back
		{
			x = 0.118; 
			y = 0.2;
			w = 0.43625;						
			h = 0.558;
		};
		class AvailableInputBack: CA_Back
		{
			x = 0.56175;
			y = 0.2;
			w = 0.26625;
			h = 0.558;
		};
		class HelpInputBack: CA_Title_Back
		{
			x = 0.118; 
			y = 0.807;
			w = 0.71;
			h = 0.083;
			colorText[] =  CA_UI_title_background_red;
		};
		class BlackConControls: CA_Title_Back //Configure controls
		{
			x = 0.118; 
			y = 0.168;
			w = 0.43625;
			h = 0.032;
		};
		class BlackConControls2: BlackConControls //Configure controls
		{
			x = 0.56175;
			w = 0.26625;			
		};
		class Logo: CA_Logo
		{
			x = 0.625;
			y = 0.08;	
		};		
	};

  class Controls
  {
  	delete Title;
  	delete TextHelp;
  	delete TextReserved;
 	delete ValueCurrentKeys;
 	delete ValueSpecialKeys;
  	delete B_Delete;
  	delete B_Default;
  	delete B_Clear;
  	delete B_Cancel;
  	delete B_Next;
  	delete B_Prev;
  	delete B_OK;
 	delete RscConfActionButton;
		
  	class CA_Controls_Title: CA_Title
    {
		idc = IDC_CONFIGURE_ACTION_TITLE;
		style = ST_LEFT;
		x = 0.118; y = 0.124;
		w = 0.61;
      	text = $STR_DISP_CONFACT_TITLE;
    };
    class CA_TextHelp: RscText
    {
		x = 0.12; 
		y = 0.81;		
		w = 0.71;
		colorText[] = Color_White;	
		text = $STR_DISP_CONF_HELP;
    };
    class CA_TextReserved: CA_TextHelp
    {
		y = 0.85;
		text = $STR_DISP_CONF_RES;
    };
	class CA_ValueCurrentKeys : RscListBox
    {
		idc = IDC_CONFIGURE_ACTION_KEYS;
		
		x = 0.118; 
		y = 0.205;
		w = 0.43625;						
		h = 0.548;
			
		canDrag = true;		
		rowHeight = __EVAL(2 * _ySpacing);
		rows = 0.4 / 0.03;
    }; 
    class CA_ValueSpecialKeys: CA_ValueCurrentKeys
    {
		idc = IDC_CONFIGURE_ACTION_SPECIAL;
		x = 0.56175;
		y = 0.205;
		w = 0.26;
		h = 0.548;
    };
    class CA_B_Delete: RscButton_small
    {
		idc = IDC_CONFIGURE_ACTION_DELETE;
		x = 0.231; 
		y = 0.768;
      	text = $STR_DISP_DELETE;
	};
    class CA_B_Clear: CA_B_Delete
    {
		idc = IDC_CONFIGURE_ACTION_CLEAR;
		x = 0.345;
		y = 0.768; 
      	text = $STR_DISP_CONFACT_UNDO;
	};

    class CA_B_Prev: CA_B_Delete
    {
		idc = IDC_CONFIGURE_ACTION_PREV;
		x = 0.118; 
		y = 0.768;
      	text = $STR_USRACT_MENU_DOWN;
	};  
    class CA_B_Next: CA_B_Delete
    {
		idc = IDC_CONFIGURE_ACTION_NEXT;
		x = 0.458;
		y = 0.768;
      	text = $STR_USRACT_MENU_UP;
	};  
	
	class CA_B_Default: CA_RscButton
    {
		idc = IDC_CONFIGURE_ACTION_DEFAULT;
		y = 0.7;
      	text = $STR_DISP_DEFAULT;
	};  
    //Confirm the input options and exit.
	class CA_Ok: CA_RscButton
	{
		idc = IDC_OK;
		default = 1;
		y = 0.80;
   		text = $STR_DISP_OK;
	};
	class CA_Cancel: CA_RscButton
	{
		idc = IDC_CONFIGURE_ACTION_CANCEL;
		y = 0.85;
		text = $STR_CA_CANCEL;
	};
  };
};

//Killed screen.
class RscDisplayMissionEnd: RscStandardDisplay
{
	#define MissionEnd_Y 0.2

	class controlsBackground
	{
		class Mainback: CA_Mainback
		{
    	x = 0.35; y = 0.6;
    	w = 0.5;  h = 0.35;
		};

		class Back1: CA_back
		{
		  x = 0.37; y = 0.64;
		  w = 0.46; h = 0.19;
		};

		class Back2: CA_back
		{
		  x = 0.37; y = 0.85;
		  w = 0.46; h = 0.07;
		};
		class Logo: CA_Logo_small
		{
			y = 0.555;
			x = 0.663;
		};		
	};

	class controls
	{
		delete B_Retry;
		delete B_Restart;
		delete B_Abort;
		delete B_TeamSwitch;
		delete B_Load;
		delete Title;

		class Title1: CA_Title
		{
			x = 0.37;
			y = 0.6;
			text = $STR_MISSION_KILLED;
		};

		//Quote of famous person.
		class Quotation: RscText
		{
		  x = 0.375; y = 0.645;
		  w = 0.46; h = 0.19;
			colorText[] = Color_Black;
		};

		//Famous person.
		class Author: RscText
		{
		  x = 0.37; y = 0.85;
		  w = 0.46; h = 0.07;
			colorText[] = Color_Black;
		};

		class Retry: CA_RscButton
		{
			idc = IDC_ME_RETRY;
			y = 0.65;
			text = $STR_CA_LOADAUTO;
		};

		class Load: CA_RscButton
		{
			idc = IDC_ME_LOAD;
			y = 0.7;
			text = $STR_DISP_ME_LOAD;
		};



		//Continue as other soldier with TeamSwitch;
		class TeamSwitch: CA_RscButton
		{
			idc = IDC_ME_TEAM_SWITCH;
			y = 0.75;
			text = $STR_DISP_ME_TEAM_SWITCH;
		};


		//Continue
		class Restart: CA_RscButton
		{
			idc = IDC_ME_RESTART;
			default = 1;
			text = $STR_XBOX_PLAY_AGAIN;
		};

		//Restart
		class Abort: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.85;
			text = $STR_DISP_ME_ABORT;
		};
	};
};

//In-game pause single player screen with minimap.
class RscDisplayInterrupt: RscStandardDisplay
{
	__EXEC( _windowWidth = 22; _windowHeight = 36;)
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.618 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowBorder = 1;)
	
	movingEnable = true;
	enableSimulation = false;
	OnLoad = "_dummy = _this call compile preprocessFile ""pauseOnload.sqf"";";
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
	};
	
  class controls
	{
		delete B_Abort;
		delete B_Options;
		delete B_Retry;
		delete B_Load;
		delete B_Save;
		delete B_Continue;
		delete Title;

		class CA_PGTitle: CA_Title
		{
			idc = 523;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
			colorText[] = Color_White;	
			text = $STR_DISP_INT_TITLE; //"Paused"
		};

		//Close pause window and resume game
		class PG_resume: CA_RscButton_dialog
		{
			idc = IDC_CANCEL;
			x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 20 ) * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));			
			default = 1;
			text = $STR_DISP_INT_CONTINUE;
		};
	
		//Save mission progress
		class PG_Save: PG_resume
		{
			idc = IDC_INT_SAVE;
			default = 0;
			y = __EVAL(_yInit + (11  * _ySpacing));
			text = $STR_DISP_INT_SAVE;
		};


		//Abort cut-scene
		class PG_Load: PG_resume
		{
			idc = IDC_INT_LOAD;
			default = 0;			
			y = __EVAL(_yInit + (16  * _ySpacing));
			text = $STR_DISP_INT_LOAD;
		};

		//Retry paused mission
		class PG_Retry: PG_resume
		{
			idc = IDC_INT_RETRY;
			default = 0;			
			y = __EVAL(_yInit + (21  * _ySpacing));
			text = $STR_DISP_INT_RETRY;
		};

		
		//Go to options
		class PG_Options: PG_resume
		{
			idc = IDC_INT_OPTIONS;
			default = 0;			
			y = __EVAL(_yInit + (26  * _ySpacing));
			text =$STR_DISP_INT_OPTIONS;
		};
		
		//Abort paused game
		class PG_Abort: PG_resume
		{
			idc = IDC_INT_ABORT;
			default = 0;			
			y = __EVAL(_yInit + (31  * _ySpacing));
			text =$STR_DISP_INT_ABORT;
		};

	};
};

//In-game movies pause
class RscDisplayMovieInterrupt: RscStandardDisplay
{
	__EXEC( _windowWidth = 22; _windowHeight = 31;)
	__EXEC( _xInit = 0.5 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.618 - _windowHeight * _ySpacing / 2;)
	__EXEC( _windowBorder = 1;)
	
	idd = IDD_INTERRUPT;
	
	movingEnable = true;
	enableSimulation = false;


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
	};
	
  class controls
	{

		class CA_MITitle: CA_Title
		{
			idc = 523;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
			colorText[] = Color_White;	
			text = $STR_DISP_INT_TITLE; //"Paused"
		};

		//Skip cut-scene - OK button
		class MI_Skip: CA_RscButton_dialog
		{
			idc = IDC_OK;
			x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 20 ) * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));			
			default = 1;
			text = $STR_DISP_INT_SKIP;
		};
	
		//Resume cut-scene
		class MI_Resume: MI_Skip
		{
			idc = IDC_CANCEL;
			default = 0;
			y = __EVAL(_yInit + (11  * _ySpacing));
			text = $STR_DISP_INT_RESUME;
		};

		//Oh no! Play cut-scene again
		class MI_Again: MI_Skip
		{
			idc = IDC_INT_RETRY;
			default = 0;			
			y = __EVAL(_yInit + (16  * _ySpacing));
			text = $STR_DISP_INT_AGAIN;
		};

		//Enter video options
		class MI_Options: MI_Skip
		{
			idc = IDC_INT_OPTIONS;
			default = 0;			
			y = __EVAL(_yInit + (21  * _ySpacing));
			text = $STR_DISP_INT_OPTIONS;
		};
		
		//Abort cut-scene
		class MI_Abort: MI_Skip
		{
			idc = IDC_ABORT;
			default = 0;			
			y = __EVAL(_yInit + (26  * _ySpacing));
			text = $STR_DISP_INT_ABORT;
		};		
	};
};

//Debriefing screen.
class RscDisplayDebriefing: RscStandardDisplay
{		
	statisticsLinks = true;
	enableSimulation = true;
	movingEnable = true;
	
	__EXEC( _windowWidth = 58; _windowHeight = 87;)
	__EXEC( _xInit = 0.45 - _windowWidth * _xSpacing / 2;)
	__EXEC( _yInit = 0.5 - _windowHeight * _ySpacing / 2;)	


	__EXEC( _windowBorder = 1)
		
	class ControlsBackground
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
		
		class DebriefingTitle: CA_Back
		{
		
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			colorText[] =  CA_UI_title_background;		
		};
			
		class MissionNameBack: CA_Back
		{
			x = __EVAL(_xInit + (1 * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));
			w = __EVAL((_windowWidth - 2* _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			colorbackground[] = CA_UI_element_background;
		};
		
		class PlayerStatsBack: CA_Back
		{
			x = __EVAL(_xInit + (1 * _xSpacing)); 
			y = __EVAL(_yInit + (11 * _ySpacing));
			w = __EVAL((_windowWidth - 2* _windowBorder) * _xSpacing);
			h = __EVAL(11 * _ySpacing);
			colorbackground[] = CA_UI_element_background;
		};
		
		class DebriefInfoBack: CA_Back
		{
			x = __EVAL(_xInit + (1 * _xSpacing)); 
			y = __EVAL(_yInit + (23 * _ySpacing));
			w = __EVAL((_windowWidth - 2* _windowBorder) * _xSpacing);
			h = __EVAL(53  * _ySpacing);
			colorbackground[] = CA_UI_element_background;
		};
		class Logo: CA_Logo_small
		{
			x = __EVAL(_xInit + (34 * _xSpacing)); 
			y = __EVAL(_yInit + (-4 * _ySpacing));
		};
	};
	class controls
	{
		delete B_Continue;
		delete B_Restart;
		delete Title;
		delete MissionTitle;
		delete MissionResult;
		delete DebriefingInfo;
		delete DebriefingText;
		delete DebriefingObjectives; 
		delete Right; 
		delete Left;
		//For MP 
		delete PlayersTitle;
		delete Players;
		
	  	
		class Debriefing_MissionTitle: CA_Title 
		{
			//idc = IDC_DEBRIEFING_TITLE;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
			colorText[] = Color_White;		
			text = $STR_DISP_DEBRIEFING;
		};
		
  		class CA_MissionTitle: CA_Title 
		{
			idc = IDC_DEBRIEFING_TITLE;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing) - 0.005);
			//text = $STR_DISP_DEBRIEFING;
		};
		
		class CA_TextVotingTimeLeft: RscText
		{
			idc = IDC_DEBRIEFING_TIMEOUT;
			style = ST_RIGHT;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (19 * _ySpacing));
			w = __EVAL((_windowWidth - 2* _windowBorder) * _xSpacing);
			colorText[] = Color_Red;
		};
	
  		class CA_MissionResult: RscText 
		{
			idc = IDC_DEBRIEFING_RESULT;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (4 * _ySpacing) - 0.005);
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			colorText[] = Color_Red;
		};
		
		//Debriefing statistics.
        class CA_DebriefingInfo: RscHTML
		{
			idc = IDC_DEBRIEFING_INFO;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (12 * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing); 
			h = __EVAL(11 * _ySpacing);
			colorText[] = Color_Black;
			colorBackground[] = {0, 0, 0, 0};
				
				class H1: H1
				{
					sizeEx = TextSize_small;
					color[] = {1, 1, 1, 1};
					colorText[] = Color_Black;	
				};

				class H2: H2
				{
					sizeEx = TextSize_small;
					color[] = {1, 1, 1, 1};
					colorText[] = Color_Black;	
				};

				class H3: H3
				{
					sizeEx = TextSize_small;
					color[] = {1, 1, 1, 1};
					colorText[] = Color_Black;	
				};

				class H4: H4
				{
					sizeEx = TextSize_small;
					color[] = {1, 1, 1, 1};
					colorText[] = Color_Black;	
				};

				class H5: H5
				{
					sizeEx = TextSize_small;
					color[] = {1, 1, 1, 1};
					colorText[] = Color_Black;	
				};

				class H6: H6
				{
					sizeEx = TextSize_small;
					color[] = {1, 1, 1, 1};
					colorText[] = Color_Black;	
				};

				class P: P
				{
					sizeEx = TextSize_small;
					color[] = {1, 1, 1, 1};
					colorText[] = Color_Black;	
				};
		};

		class CA_DebriefingText: CA_DebriefingInfo
		{
			idc = IDC_DEBRIEFING_DEBRIEFING;
			y = __EVAL(_yInit + (24 * _ySpacing));
			h = __EVAL(15 * _ySpacing);
		};
		/*
		//Mission debriefing. - not visible
		class CA_Right: CA_DebriefingInfo
		{
			idc = IDC_SINGLE_OVERVIEW;
			y = __EVAL(_yInit + (65 * _ySpacing));
			h = __EVAL(15 * _ySpacing);
			colorBackground[] = {1, 0, 1, 1};
		}; */
		//Debriefing statistics.
						
		class CA_DebriefingObjectives: CA_DebriefingInfo
		{
			idc = IDC_DEBRIEFING_OBJECTIVES;
			onHTMLLink = "_dummy = [_this] execVM ""\ca\ui\scripts\debriefing.sqf""";	 
			y = __EVAL(_yInit + (40 * _ySpacing));
			h = __EVAL(36 * _ySpacing);
		};

 		class CA_Left: CA_DebriefingObjectives
		{
			idc = IDC_DEBRIEFING_STAT;
		};

		class CA_B_Retry: CA_RscButton_dialog
		{
			idc = IDC_DEBRIEFING_RESTART;
			
			x = __EVAL( _xInit + _windowWidth * _xSpacing  - (( 20 + _windowBorder) * _xSpacing))); 
			y = __EVAL( _yInit + _windowHeight * _ySpacing  - (( 9 + _windowBorder) * _ySpacing)));
			text = $STR_DISP_DEBRIEFING_RESTART;
		};

		class CA_B_Continue: CA_B_Retry
		{	
			idc = IDC_CANCEL;
			y = __EVAL( _yInit + _windowHeight * _ySpacing  - (( 4 + _windowBorder) * _ySpacing)));
			default = 1;
			text = $STR_DISP_CONTINUE;			
		};

	}; 
};

//  team switch dialog
class RscDisplayTeamSwitch: RscStandardDisplay
{
	idd = 632;
	movingEnable = true;
	enableSimulation = true;
	colorPlayer[] = CA_UI_title_background;
 	colorPlayerSelected[] = Color_Black;
  	
	onLoad = "_dummy = [_this, ""CA_TS_Pause""]  call compile preprocessFile ""\ca\ui\scripts\TeamSwitch.sqf"";";
	onUnload = "_dummy = [_this, ""CA_TS_Resume""]  call compile preprocessFile ""\ca\ui\scripts\TeamSwitch.sqf"";";
	
	class Controls
	{
	 	delete Background;
	  	delete Roles;
	  	delete ButtonOK;
	  	delete ButtonCancel;
	
		 		class Mainback: CA_Mainback
				{
				  x = 0.5170;
				  y = 0.1840;
				  w = 0.4650;
				  h = 0.3895;
				  colorbackground[] = CA_UI_background;
				};
				
						
				class HiddenMapBack: CA_Mainback_2
				{
				  idc = 555;
				  x = 0.5170;
				  y = 0.5735;
				  w = 0.4650;
				  h = 0.0310;
				  colorbackground[] = CA_UI_element_background;
				};
				
				class HideMap_Button: CA_Ok
				{
				  x = 0.5170;
				  y = 0.5730;
				  w = 0.4650;
				  h = 0.0320;
  				  onButtonClick = "_dummy = [_this, ""CA_TS_ShowMap""] execVM ""\ca\ui\scripts\TeamSwitch.sqf"" ";
				};
								
				class ShownMapBack: CA_Mainback_3
				{
				  idc = 556;
				  x = 0.5170;
				  y = 0.6045;
				  w = 0.4650;
				  h = 0.3100;
				};
				
				class Back0: RscText //Under the window title
				{
					x = 0.524; y = 0.194;
				  	w = 0.45; h = 0.04;
					colorbackground[] = CA_UI_title_background;
				};
				    
				class Back1: RscText //Under ListBox
				{
					x = 0.524; y = 0.244;
				  	w = 0.45; h = 0.17;
					colorbackground[] = CA_UI_element_background;
				};

				class CA_TSTitle: CA_Title
				{
					idc = 523;
					x = 0.525; y = 0.192;
				 	moving = true;
					text = $STR_USRACT_TEAM_SWITCH;
					colorText[] = {1, 1, 1, 1};
				};
				
				class CA_TSRoles: RscListBox
				{
					x = 0.524; y = 0.244;
				  	w = 0.45; h = 0.17;
				  	default = 1;
					sizeEx = TextSize_normal;
					IDC = IDC_TEAM_SWITCH_ROLES;
					onLBSelChanged = "_dummy = [_this, ""CA_TS_UnitSelected""] execVM ""\ca\ui\scripts\TeamSwitch.sqf"" ";
					onLBDblClick = "_dummy = [_this, ""CA_TS_ListDoubleClick""] execVM ""\ca\ui\scripts\TeamSwitch.sqf"" ";		     
				};
				
				class Back2: RscText //Icon & AI settings background
				{
					x = 0.524; y = 0.424;
				  	w = 0.289; h = 0.14;
					colorbackground[] = CA_UI_element_background;
				};
				
				// Selected Unit Icon
				class CA_TSUnitIcon: RscPicture
				{
					IDC = 493;
					x = 0.533; y = 0.435;
				  	w = 0.19; h = 0.12;
				  	
				  	//gets replaced by script
				  	text = ProcTextTransparent;  
				};
				
				//This texts displayes who controls unit (AI | Player)
				class CA_TSUnit: RscText
				{
					IDC = 501;
					x = 0.725; y = 0.435;
					w = 0.09; h = 0.022;
					//style = ST_CENTER;
					colorText[] = {0, 0, 0, 1};
					text = $STR_PLAYER; 
				};		
				class CA_TSMapSeparator1: RscText
				{
					idc = 557;
					x = 0.522; y = 0.584;
					w = 0.014; h = 0.002;
					colorBackground[] = {0, 0, 0, 0.6};
				};
				
				class CA_TSMapSeparator2: RscText
				{
					idc = 558;
					x = 0.60; y = 0.584;
					w = 0.378; h = 0.002;
					colorBackground[] = {0, 0, 0, 0.6};
				};
				
				
				class CA_TSMapTitle: RscText
				{
					idc = 559;
					x = 0.533; y = 0.567;
					colorText[] = {0, 0, 0, 1};
					text = $STR_USRACT_SHOW_MAP; //Map label
				};   	
								
				class CA_TSMapOpen: RscActiveText
				{
					IDC = 560;
					style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
					x = 0.579; y = 0.575;
					w = 0.016; h = 0.020;
					colorText[] = {0,0,0,1};
					colorBackground[] = {0,1,0,1};
					onButtonClick = "_dummy = [_this, ""CA_TS_ShowMap""] execVM ""\ca\ui\scripts\TeamSwitch.sqf"" ";
					text = "\Ca\ui\data\ui_map_arrow_open_ca.paa";  
				};   	
				
				class CA_TSMap: RscMapControl 
				{
					idc = 561;
					x = 0.525; y = 0.604;
					w = 0.450; h = 0.300;
					type = CT_MAP_MAIN;
					ShowCountourInterval = false;
					scaleDefault = 0.1;
					colorbackground[] = {1,1, 1, 1};
					//Commenting out - onMouseButtonClick does not return map coordinates - coversion fuction will be implemented
					onMouseButtonClick = "_dummy = [_this, ""CA_TS_MapClick""] execVM ""\ca\ui\scripts\TeamSwitch.sqf"";";
					onMouseButtonDblClick = "_dummy = [_this, ""CA_TS_ListDoubleClick""] execVM ""\ca\ui\scripts\TeamSwitch.sqf"";";
												
				};  	   	      
				
				//View Unit button
				class TSwitch_View: CA_RscButton_dialog
				{
					idc = 32;
					x = 0.821; y = 0.424;
					text = $STR_TEAM_SWITCH_VIEW_UNIT;
					onButtonClick = "_dummy = [_this, ""CA_TS_ViewUnit""] execVM ""\ca\ui\scripts\TeamSwitch.sqf"" ";
				};
				
				//Confirm selected unit - OK button
				class TSwitch_OK: TSwitch_View
				{
					idc = IDC_OK;
					y = 0.473;
					text = $STR_DISP_OK;					
					default = 1;		
					onButtonClick = ""; //Otherwise script is inherited!			
				};
				//Cancel teamSwitch dialog
				class TSwitch_Cancel: TSwitch_View
				{
					idc = IDC_CANCEL;
					y = 0.524;
					text = $STR_CA_CANCEL;
					onButtonClick = "";					
				};
				
		};
};








