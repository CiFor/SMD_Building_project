class RscIGText: RscText
{
	font = Bitstream;
	sizeEx = TextSize_IGUI_normal;
//	colorText[] = CA_colordark;
	colorText[] = Color_White;
	style = ST_LEFT + ST_SHADOW;
};

class RscSplashText: RscText
{
	sizeEx = TextSize_IGUI_normal;
	colorText[] = Color_White;
	colorbackground[] = CA_UI_transparent;
	style = ST_CENTER + ST_MULTI  + ST_NO_RECT + ST_SHADOW;
	lineSpacing = 1;
};

//Armor, fuel
class RscIGProgress;

//Loading screen
class RscDisplayLoading
{
  class Variants
  {
  	//Loading_West1
    class LoadingOne
    {
    	idd = -1;
    	movingEnable = false;

	    class controls
		{
			delete TextLoad;
			delete Progress;
			delete Progress2;

			class Name: RscText
			{
			    style = ST_LEFT;
				colorText[] = {1, 1, 1, 1};
			};

			class Date;

			class DebugText: RscText
			{
				x = 0.1; y = 0.1;
				sizeEx = 0.05;
				text = "RscDisplayLoading : Loading One";
			};

			class LoadingPic: RscPicture
			{
				x = 0; y = 0;
				w = 1; h = 1;
				text = "\ca\ui\data\loadscreen_west1_co.paa";
				colortext[] = {1, 1, 1, 1};
			};

			//Progress bar.
			class CA_Progress: RscProgress
			{
				idc = IDC_PROGRESS_PROGRESS;
			};

			//Activity indicator bar.
			class CA_ActivityProgress: RscProgressNotFreeze
			{
				idc = IDC_PROGRESS_TIME;
			};

			class CA_TextLoad: RscLoadingText
			{
				text = $STR_LOADING;
			};
		};
	};

    class Loading_West2: LoadingOne
		{
      	idd = -1;
		movingEnable = false;

	    class controls: controls
			{
			    class Name: Name {};
				class Date: Date {};
				class DebugText: DebugText {};

				class LoadingPic: LoadingPic
				{
					text = "\ca\ui\data\loadscreen_west2_co.paa";
				};

				class CA_Progress: CA_Progress {};

				class CA_ActivityProgress: RscProgressNotFreeze {};
				class CA_TextLoad: CA_TextLoad {};
			};
		};

    	class Loading_East1: LoadingOne
		{
	      	idd = -1;
		    movingEnable = false;
		    class controls: controls
			{
					//delete TextLoad;

					class Name: Name {};
					class Date: Date {};
					class DebugText: DebugText {};

					class LoadingPic: LoadingPic
					{
						text = "\ca\ui\data\loadscreen_east1_co.paa";
					};

					class CA_Progress: CA_Progress {};

					class CA_ActivityProgress: RscProgressNotFreeze {};
					class CA_TextLoad: CA_TextLoad {};
			};
		};
  /*  	class Loading_East2: LoadingOne
		{
	      	idd = -1;
		    movingEnable = false;
		    class controls: controls
			{
				class Name: Name {};
				class Date: Date {};

				class LoadingPic: LoadingPic
				{
					text = "\ca\ui\data\loadscreen_east2_co.paa";
				};

				class Progress: RscProgress {};
				class CA_ActivityProgress: RscProgress {};
				class CA_TextLoad: CA_TextLoad {};
			};
		};	*/
	};
};

//Loading screen, saving screen
class RscDisplayNotFreezeBig: RscStandardDisplay
{
	class controlsBackground
	{
	};

	class controls
	{
		delete Text;
		delete Progress;
		delete Progress2;

		class CA_Text: RscLoadingText
		{
			idc = IDC_LOAD_MISSION_NAME;
			text = $STR_DISP_ERROR;
		};
		//Loading progress bar.
		class CA_Progress: RscProgress
		{
		  	idc = IDC_PROGRESS_PROGRESS;
		};

		//Activity indicator bar.
		class CA_Progress2: RscProgressNotFreeze
		{
			idc = IDC_PROGRESS_TIME;
		};
	};
};

//Generic loading screen/ pri startu.
class RscDisplayNotFreeze: RscStandardDisplay
{
	class controlsBackground
	{

	};
 	class controls
  	{
	 	delete Text;
	 	delete Progress;
		delete Progress2;
		
		class CA_Text: RscLoadingText
		{
			idc = IDC_LOAD_MISSION_NAME;
		};
	};
};

//Load mission screen.
class RscDisplayLoadMission: RscStandardDisplay
{
	class controlsBackground
	{
		class LoadingPic: RscPicture
		{
			x = 0; y = 0;
			w = 1; h = 1;
			text = "\ca\ui\textures\loading.paa";
			colortext[] = {1, 1, 1, 1};
		};
	};

  class controls
  {
  		delete Progress2;
 		delete Name;
 		delete Date;
 		delete Title;
		delete Progress;
		delete Briefing;
		class BackgroundTitle: RscText
		{
			x = 0; y = 0.48;
			w = 1; h = 0.12;
			colorBackground[] = {0, 0, 0, 0.5};
		};

		class Title1: RscLoadingText
		{
			text = $STR_LOADING;
		};

		//Mission's name.
		class Name2: RscText
		{
			idc = IDC_LOAD_MISSION_NAME;
			style = ST_CENTER;
			x = 0; y = 0.49;
			w = 1; h = 0.09;
			sizeEx = 0.05;
			colorText[] = {1, 1, 1, 1};
		};

		//Loading progress bar.
		class CA_Progress: RscProgress
		{
		  	idc = IDC_PROGRESS_PROGRESS;
		};
		
		class CA_Progress2: RscProgressNotFreeze
		{
		  idc = IDC_PROGRESS_TIME;
		};
		//Mission's date.
		class Date2: RscText
		{
			idc = IDC_LOAD_MISSION_DATE;
			text = $STR_DISP_ERROR;
		  	style = ST_CENTER;
			x = 0; y = 0.54;
			w = 1; h = 0.09;
			colorText[] = {1, 1, 1, 1};
		};
	};
};
//Loading screen start
class RscDisplayStart: RscStandardDisplay
{
	idd = -1;

	class controlsBackground
	{
		class CA_Black_Back3: CA_Black_Back { };
	};
  	class controls
  	{
	 	delete Text;
		delete Progress;
		delete Progress2;
		
		class LoadingPic: RscPicture
		{
			x = 0; y = 0;
			w = 1;  h = 1;
			text = "\ca\ui\textures\loading.paa";
			colorText[] = {1, 1, 1, 1};
		};

	 	class CA_Text: RscLoadingText
		{
			idc = IDC_LOAD_MISSION_NAME;
		};

		//Progress bar.
		class CA_Progress: RscProgress
		{
		  	idc = IDC_PROGRESS_PROGRESS;
		};

		//Activity indicator bar.
		class CA_Progress2: RscProgressNotFreeze
		{
			idc = IDC_PROGRESS_TIME;		
		};
	};
};
class RscDisplayHintC
{
	class controls
	{
		class Background
		{
			x = 0.35;
			y = 0.40;
			w = 0.50;
			h = 0.11;
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = Zeppelin32;
			sizeEx = 0.1;
		};

		class Hint: RscIGText
		{
			lineSpacing = 1;
			sizeEx = TextSize_IGUI_normal;
			x = 0.36;
			y = 0.41;
			w = 0.48;
			h = 0.035;
			colorBackground[] = {0, 0, 0, 0};
		};

		class continue: RscActiveText
		{
			sizeEx = TextSize_IGUI_normal;
			x = 0.55;
			y = 0.46;
			w = 0.3;
			h = 0.035;
			color[] = {0.8, 0.8, 0.8, 1};
			colorActive[] = Color_White;
		};
	};
};

class RscDisplayHintCEx
{
  	indent = "\ca\ui\data\ui_indent_gr.paa";

	class controls
	{

		class Background
		{
			x = 0.15;
			y = 0.40;
			w = 0.70;
			h = 0.155;
			text = "";
			colorBackground[] = {0.2, 0.15, 0.1, 0.8};
			colorText[] = {0, 0, 0, 0};
			font = Zeppelin32;
			sizeEx = 0.1;
		};

		class Title: RscText
		{
			style = ST_LEFT;
			x = 0.17;
			y = 0.42;
			w = 0.66;
			h = 0.06;
			text = STR_DISP_ERROR;
			colorText[] = Color_White;
			sizeEx = TextSize_IGUI_normal;
		};

		class Line1: RscText
		{
			style = ST_LINE;
			x = 0.17;
			y = 0.48;
			w = 0.66;
			h = 0;
			text = ;
			colorBackground[] = Color_White;
			colorText[] = {1, 1, 1, 1};
		};

		class Hint
		{
			access = ReadAndWrite;
			type = CT_STRUCTURED_TEXT;
			style = 0;
			x = 0.17;
			y = 0.48;
			w = 0.66;
			h = 0;
			size = TextSize_IGUI_normal;
			text = STR_DISP_ERROR;

			class Attributes
			{
				font = Zeppelin32;
				color = #FFFFFF;
				shadow = false;
			};
		};

		class Line2: RscText
		{
			style = ST_LINE;
			x = 0.17;
			y = 0.48;
			w = 0.66;
			h = 0;
			text = ;
			colorBackground[] = Color_White;
			color[] = Color_White;
			colorText[] = Color_White;
		};


		class continue: RscActiveText
		{
			x = 0.17;
			y = 0.49;
			w = 0.66;
			h = 0.035;
			SizeEx = TextSize_IGUI_normal;
			color[] = {0.8, 0.8, 0.8, 1};
			colorActive[] = Color_White;
			text = $STR_DISP_HINTC_CONTINUE;
		};
	};
};

class RscInGameUI
{
	unitInfoTypes[] =
	{
		RscUnitInfoSoldier,	// soldier,
		RscUnitInfoTank,	// tank
		RscUnitInfoNoHUD,	// car, by default no hud
		RscUnitVehicle,		// ship, used also for cars with guns
		RscUnitInfoAir,	  	// airplane
		RscUnitInfoAir		// helicopter
	};
	colorReady[] = Color_White;
	colorPrepare[] = Color_Orange;
	colorUnload[] = Color_Red;

	class RscUnitInfoNoHUD
	{
		idd = IDD_UNITINFO;
		movingEnable = false;
		controls[]= {};
	};
	class RscUnitInfoSoldier
	{
		class Background
		{
			x = 0.00; y = 0.0;
			h = 0.04;
			colorBackground[] = CA_UI_HUD_transparency;
			font = bitStream;
			sizeEx = TextSize_IGUI_normal;
		};
		class Weapon: RscIGText
		{
			style = ST_LEFT + ST_SHADOW;
			x = 0.005; y = 0.001;
		};

		class Ammo: RscIGText
		{
			style = ST_RIGHT + ST_SHADOW;
			y = 0.001;
		};
	};
	class RscUnitInfoTank
	{
		class Background
		{
			x = 0.0; y = 0.0;
			h = 0.2;  w = 0.23;
			colorBackground[] = CA_UI_HUD_transparency;
			font = bitStream;
			sizeEx = TextSize_IGUI_normal;
		};
		class Weapon: RscIGText
		{
			style = ST_LEFT + ST_SHADOW;
			x = 0.016; y = 0.163; //0.185;
		};
		class Ammo: RscIGText
		{
			style = ST_RIGHT + ST_SHADOW;
			x = 0.033; y = 0.163;
		};
	};
	class RscUnitVehicle: RscUnitInfoSoldier
	{
		class Background: Background
		{
			w = 0.27;
		};

		class Weapon: Weapon
		{
			w = 0.2;
		};
		class Ammo: Ammo
		{
			w = 0.165;
		};
	};
	class RscUnitInfo
	{
		controls[] =
		{
			Background,
			ValueArmor,
			ValueFuel,
			Speed,
			Alt,
			TextArmor,
			TextFuel,
			Weapon,
			Ammo
		};
		class Background
		{
			x = 0.0; y = 0.0;
			h = 0.2; w = 0.23;
			colorBackground[] = CA_UI_HUD_transparency;
			font = bitStream;
			sizeEx = TextSize_IGUI_normal;
		};
		class Speed: RscIGText
		{
			style = ST_LEFT  + ST_SHADOW;
			x = 0.017; y = 0.01;
			w = 0.17;
		};
		class Alt: RscIGText
		{
			style = ST_RIGHT + ST_SHADOW;
			x = -0.06; y = 0.04; //0.18
			w = 0.17;
		};
		class TextArmor: RscIGText
		{
			x = 0.017; y = 0.08;
		};
		class ValueArmor: RscIGProgress
		{
			x = 0.028; y = 0.11;
			w = 0.145; h = 0.0125;
		};
		class TextFuel: RscIGText
		{
			x = 0.017; y = 0.118;
		};
		class ValueFuel: RscIGProgress
		{
			x = 0.028; y = 0.148;
			w = 0.145; h = 0.0125;
		};
		class Weapon: RscIGText
		{
			x = 0.017; y = 0.163;
			w = 0.17;
		};
		class Ammo: RscIGText
		{
			x = 0.01; y = 0.163;
			w = 0.2;
		};
	};
	class RscHint
	{
		controls[]=
		{
			Background,
			Hint
		};
		class Background
		{
			x = 0.012;
			font = Zeppelin32;
			size = TextSize_IGUI_normal;
		};

		class Hint : RscStructuredText
		{
			x = 0.013;
			size = TextSize_IGUI_normal;
			sizeEx = TextSize_IGUI_normal;
			class Attributes : Attributes
			{
				align = "left";
			};
		};
	};
};

class RscTitles
{
	class Default;

	class DefPic: Default
	{
		font = BitStream;
	};

	class SplashBohemia
	{
		idd = -1;
		movingEnable = false;
		duration = 3;
		name = "Splashscreen Bohemia";

		controls[] =
		{
		  Picture,
		  Text_BIS
		};

		class Picture: RscPicture
		{
			x = 0; y = 0;
			w = 1; h = 1;
			text = "\ca\ui\data\splash1_co.paa";
		};
		class Text_BIS: RscSplashText
		{
			x = 0; y = 0.6;
			w = 1; h = 0.05;
			sizeEx = TextSize_medium;
			text = $STR_ARMA_SPLASH_1;
		};
  };
  class SplashESRB
  {
    idd = -1;
    movingEnable = false;
    duration = 3;
    name = "ESRB content rating notice";

    controls[] =
    {
      Picture,
      Text_ESRB
	};

		class Picture: RscPicture
		{
			x = 0; y = 0;
			w = 1; h = 1;
			text = "\ca\miscus\data\ui_splash_esrb_co.paa";
		};
		class Text_ESRB: RscSplashText
		{
			x = 0; y = 0.8;
			w = 1; h = 0.1;
			sizeEx = TextSize_medium;
			text = "";
		};
  };
  class SplashUS
  {
    idd = -1;
    movingEnable = false;
    duration = 3;
    name = "Splashscreen US release";

    controls[] =
    {
      Background,
	  Picture,
      Atari_Text
	};

		class Background: RscPicture
		{
			x = -1; y = -1;
			w = 3; h = 3;
			text = "#(argb,8,8,3)color(0.792,0.051,0.027,1)";
		};

		class Picture: RscPicture
		{
			x = 0; y = 0;
			w = 1; h = 1;
			text = "\ca\miscus\data\ui_splash_atari_gs.paa";
		};
		class Atari_Text: RscSplashText
		{
			x = 0; y = 0.80;
			w = 1; h = 0.2;
			style = ST_CENTER + ST_MULTI  + ST_NO_RECT;
			text = "ArmA: Combat Operations © 2007 Bohemia Interactive a.s. All rights reserved. \n ""Virtual Battlespace"" and ""ArmA: Combat Operations"" are trademarks of Bohemia Interactive a.s.\n Developed by Bohemia Interactive a.s. Published and marketed by Atari, Inc., New York, NY. \n ATARI word mark and logo are registered trademarks owned by Atari Interactive, Inc. ";
		};
  };

  class SplashArmA
  {
    idd = -1;
    movingEnable = false;
    duration = 3;
    name = "Splashscreen ArmA";

    controls[] =
    {
      Picture
	};

		class Picture: RscPicture
		{
			x = 0; y = 0;
			w = 1; h = 1;
			text = "\ca\ui\data\splash2_co.paa";
		};
  };

 class SplashCombatOperations
  {
    idd = -1;
    movingEnable = false;
    duration = 4;
    name = "Splashscreen Combat Operations";

    controls[] =
    {
		MPPicture
	};

		class MPPicture: RscPicture
		{
			x = 0; y = 0;
			w = 1; h = 1;
			text = "\ca\miscus\data\ui_splash_combatop_co.paa";
		};


  };

  class SplashText1
  {
    idd = -1;
    movingEnable = false;
    duration = 4;
    name = "Splashscreen Text1";

    controls[] =
    {
		MPPicture,
		Text_1,
		Text_Trademark
    };

		class MPPicture: RscPicture
		{
			x = 0; y = 0;
			w = 1; h = 1;
			text = "\ca\ui\data\splash5_co.paa";
		};
		class Text_1: RscSplashText
		{
			x = 0; y = 0.70;
			w = 1; h = 0.1;
			text = $STR_ARMA_SPLASH_3a;
		};
		class Text_Trademark: RscSplashText
		{
			x = 0; y = 0.8;
			w = 1; h = 0.1;
			sizeEx = TextSize_small;
			text = $STR_ARMA_SPLASH_3b;
		};

  };

  class SplashCopyright
  {
    idd = -1;
    movingEnable = false;
    duration = 5;
    name = "Splashscreen Copyright";

    controls[] =
    {
		Picture,
		Text_WWW,
		Text_Copyright
    };

	class Picture: RscPicture
	{
		x = 0; y = 0;
		w = 1; h = 1;
		text = "\ca\ui\data\splash3_co.paa";
	};
	class Text_WWW: RscSplashText
	{
		x = 0; y = 0.48;
		w = 1; h = 0.3;
		sizeEx = TextSize_medium;
		text = $STR_ARMA_SPLASH_4a;
	};
	class Text_Copyright: RscSplashText
	{
		x = 0; y = 0.65;
		w = 1; h = 0.3;
		sizeEx = TextSize_normal;
		text = $STR_ARMA_SPLASH_4b;
	};


  };
  class SplashCopyrightUS
  {
    idd = -1;
    movingEnable = false;
    duration = 5;
    name = "Splashscreen Copyright US";

    controls[] =
    {
		Picture,
		Text_Copyright
    };

	class Picture: RscPicture
	{
		x = 0; y = 0;
		w = 1; h = 1;
		text = "\ca\miscus\data\ui_splash_logos_co.paa";
	};

	class Text_Copyright: RscSplashText
	{
		x = 0.1; y = 0.55;
		w = 0.8; h = 0.4;
		sizeEx = TextSize_normal;
		text = "ArmA: Combat Operations © 2007 Bohemia Interactive a.s. All rights reserved. ""Virtual Battlespace"" and ""ArmA: Combat Operations"" are trademarks of Bohemia Interactive a.s. Developed by Bohemia Interactive a.s. Published and marketed by Atari, Inc., New York, NY. The ATARI word mark and logo are registered trademarks owned by Atari Interactive, Inc. The product contains software technology licensed from GameSpy industries, Inc. © 1999-2007. GameSpy Industries, inc. GameSpy and the ""Powered by GameSpy"" design are trademarks of GameSpy Industries, Inc. All rights reserved. The ESRB rating icons are registered trademarks of the Entertainment Software Association. Software platform logo (TM and ©) IEMA 2007. All other trademarks are the property of their respective owners. Operation Flashpoint is the trademark of the Codemasters Software Company Limited (""Codemasters""). The game ""Operation Flashpoint"" was developed by Bohemia Interactive Studio and published by Codemasters. ARMA: Combat Operations was developed by Bohemia Interactive a.s. and is published by Atari, Inc. Neither Bohemia nor Atari, Inc. are affiliated with, authorized by or related to Codemasters.";
	};


  };
 class SplashNVIDIA
  {
    idd = -1;
    movingEnable = false;
    duration = 4;
    name = "Splashscreen NVIDIA";

    controls[] =
    {
		NVIDIALogo
    };

		class NVIDIALogo: RscPicture
		{
			x = 0; y = 0;
			w = 1; h = 1;
			text = "\ca\miscus\data\ui_splash_nvidia_co.paa";
		};


  };
  class PromoControls
  {
    idd = -1;
    movingEnable = false;
    duration = 5;
    name = "Promo - Controls";

    controls[] =
    {
      Picture
    };

		class Picture: RscPicture
		{
			x = 0; y = 0;
			w = 1; h = 1;
			text = "\ca\ui\textures\splash5.paa";
		};
  };
  class PromoWWW
  {
    idd = -1;
    movingEnable = false;
    duration = 3;
    name = "Promo Web";

    controls[] =
    {
      Picture
    };

		class Picture: RscPicture
		{
			x = 0; y = 0;
			w = 1; h = 1;
			text = "\ca\ui\textures\splash6.paa";
		};
  };
  class PromoControls2: PromoControls
  {
		idd=-1;
		name="Promo - Controls2";
		controls[]=
		{
			"Picture"
		};
		class Picture: RscPicture
		{
			x=0;
			y=0;
			w=1;
			h=1;
			text="\ca\ui\textures\load_layout_vehicle.paa";
		};
  };
  class PromoControls3: PromoControls
  {
		idd=-1;
		name="Promo - Controls3";
		controls[]=
		{
			"Picture"
		};
		class Picture: RscPicture
		{
			x=0;
			y=0;
			w=1;
			h=1;
			text="\ca\ui\textures\load_layout_command.paa";
		};
  };
  class MPFlagsdefault
  {
    idd = -1;
    movingEnable = false;
    duration = 10000;
    name = "Flags Advenced";

    controls[] =
    {
      Flag1,
      Flag2,
      Flag3,
      Flag4,
      Flag5
    };

		class Flag1: RscPicture
		{
			x = 0.01; y = 0.6;
			w = 0.05; h = 0.04;
			text = "\ca\misc\data\usa_vlajka.pac";
		};
		class Flag2: Flag1
		{
			y = 0.65;
		};
		class Flag3: Flag1
		{
			y = 0.7;
		};
		class Flag4: Flag1
		{
			y = 0.75;
		};
		class Flag5: Flag1
		{
			y = 0.8;
		};
	};

  class MPFlagsAdvanced
  {
    idd = -1;
    movingEnable = false;
    duration = 10000;
    name = "Flags Default";

    controls[] =
    {
      Flag3,
      Flag4,
      Flag5
    };

		class Flag3: RscPicture
		{
			x = 0.01; y = 0.7;
			w = 0.05; h = 0.04;
			text = "\ca\misc\data\usa_vlajka.pac";
		};
		class Flag4: Flag3
		{
			y = 0.75;
		};
		class Flag5: Flag3
		{
			y = 0.8;
		};
	};
};

class RscChatListDefault
{
	x = 0.031; //Left
	w = 0.95;	//Width
	h = 0.023;
	font = Bitstream;
	size = 0.021;
	rows = 4;
};

class RscChatListMission: RscChatListDefault
{
	x = 0.01; //Left
	y = 0.75; // top
	w = 0.95;	//Width
	rows = 8;
};

class RscChatListBriefing: RscChatListDefault
{
	x = 0.01; //Left
	y = 0.75; // top
	w = 0.95;	//Width
	rows = 8;
};

class RscChatListMap: RscChatListDefault
{
	x = 0.01; //Left
	y = 0.75; // top
	w = 0.95;	//Width
	rows = 8;
};

class RscTitlesText
{
	fontBasic = BitStream;
	sizeExBasic = TextSize_medium;

	fontDown = BitStream;
	sizeExDown = TextSize_medium;
};
