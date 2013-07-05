class RscDisplayXWizardTemplate: RscStandardDisplay
{
	west= flag_west;
	east = flag_east;
	guer = flag_guer;
	civl = flag_civl;


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
		delete title;
		delete TemplateText;
		delete B_OK;
		delete B_Cancel;

		//class Title: CA_Title {text = $STR_SINGLE_NEW_MISSION_TITLE;};
		class Logo: CA_Logo{};


		class TemplateText_CA: CA_Title {text = $STR_DISP_MPW_TEMPLATE;};
/*
		{
			x = 0.025; y = 0.16;
			w = 0.3;
			text = $STR_DISP_MPW_TEMPLATE;
		};
*/
		//Available templates.
		class TemplateValue: RscListBox
		{
			idc = IDC_XWIZ_TEMPLATE;
			x = 0.575; y = 0.44;
			w = 0.26; h = 0.46;
		};

		//HTML overview page of the selected template.
		class Overview: RscHTML
		{
			idc = IDC_XWIZ_TEMPLATE_OVERVIEW;
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


		//Confirm template settings.
		class OK: CA_RscButton
		{
			idc = IDC_OK;
			default = 1;
			text = $STR_SINGLE_OPEN;
		};
		//Cancel template creation and exit.
		class Cancel: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.85;
			text = $STR_CA_CANCEL;
		};
	};
};

//X-box style mission wizard configuration screen.
class RscDisplayXWizardIntel: RscStandardDisplay
{
  textureClear = "\ca\ui\data\Editor_jasno.paa";
  textureCloudly = "\ca\ui\data\Editor_polojasno.paa";
  textureOvercast = "\ca\ui\data\Editor_zatazeno.paa";
  textureRainy = "\ca\ui\data\Editor_destivo.paa";
  textureStormy = "\ca\ui\data\Editor_bourka.paa";

	class controlsBackground
	{
		class Mainback: CA_Back {};
		class Back1: CA_back1 {h = 0.5;};
		class Back2: CA_back2 {};
		class Logo: CA_Logo_small 
		{
			x = 0.67; 
		};
	};

	class controls
	{
		delete B_OK;
		delete B_Cancel;
		delete Title;

		delete Island;
		delete Name;
		delete Map;
		delete Time;
		delete Weather;
		delete Unit;

		class Title_CA : CA_Title {text = $STR_XBOX_WIZARD_EDIT;};

		class SumaTemplateValue: RscText
		{
			idc = IDC_XWIZ_SUM_TEMPLATE;
			style = ST_RIGHT;
			x = 0.53; y = 0.378;
			w = 0.29; h = 0.08;
		};
		
		class Name_CA: RscButton
		{
			idc = IDC_XWIZ_NAME;
			x = 0.305; y = 0.45;
			w = __EVAL(17 * _ySpacing); 
			text = $STR_DISP_XBOX_EDIT_PROFILE_NAME;
		};

	 	class Unit_CA: Name_CA	
	 	{
	 		idc = IDC_XWIZ_UNIT;
			y = 0.5;
			text = $STR_DISP_SRVSETUP_UNITS;
		};

		class Island_CA: Name_CA
		{
			idc = IDC_XWIZ_ISLAND;
			y = 0.55;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_ISLAND;
		};

		class Map_CA: Name_CA
		{
			idc = IDC_XWIZ_MAP;
			y = 0.6;
			text = $STR_USRACT_MAP;
		};

		class Time_CA: Name_CA
		{
			idc = IDC_XWIZ_TIME;
			y = 0.65;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_TITLE;
		};

		class Weather_CA: Name_CA
		{
			idc = IDC_XWIZ_WEATHER;
			y = 0.7;
			text = $STR_DISP_INTEL_WEATHER;
		};

		class NameText: RscText
		{
			x = 0.57; y = 0.45;
			w = 0.2; h = 0.04;
			text = $STR_DISP_GAME_NAME;
		};

		class NameValue: RscText
		{
			idc = IDC_XWIZ_SUM_NAME;
			x = 0.64; y = 0.44;
			w = 0.3; h = 0.06;
		};

		class IslandText: NameText
		{
			idc = -1;
			y = 0.5;
			text = $STR_DISP_XBOX_MULTI_ISLAND;
		};

		class IslandValue: NameValue
		{
			idc = IDC_XWIZ_SUM_ISLAND;
			y = 0.49;
			text = "";
		};

		class TimeText: IslandText
		{
			y = 0.55;
			text = $STR_DISP_INTEL_TIME;
		};

		class TimeValue: IslandValue
		{
			idc = IDC_XWIZ_SUM_TIME;
			y = 0.54;
			text = "";
		};

		class DateText: IslandText
		{
			y = 0.6;
			text = $STR_DISP_INTEL_DATE;
		};

		class DateValue: IslandValue
		{
			idc = IDC_XWIZ_SUM_DATE;
			y = 0.59;
			text = "";
		};

		class WeatherCurrentText: IslandText
		{
			y = 0.65;
			w = 0.4;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_SUMA_CURRENT;
		};

		class WeatherCurrentValue: RscPicture
		{
			idc = IDC_XWIZ_SUM_WEATHER;
			x = 0.75; y = 0.65;
			w = 0.05; h = 0.05;
		};

		class WeatherForecastText: IslandText
		{
			y = 0.7;
			w = 0.4;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_SUMA_FORECAST;
		};

		class WeatherForecastValue: WeatherCurrentValue
		{
			idc = IDC_XWIZ_SUM_WEATHER_FORECAST;
			y = 0.7;
			text = "";
		};
		class OK: CA_RscButton
		{
			idc = IDC_OK;
			text = $STR_DISP_ARCMAP_PREVIEW;
		};

		class Cancel: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.85;
			text = $STR_CA_CANCEL;
		};
	};
};

class RscDisplayXWizardUnit: RscStandardDisplay
{
	west= flag_west;
	east = flag_east;
	guer = flag_guer;
	civl = flag_civl;

	class controlsBackground
	{
		class Mainback: CA_Back {};
		class Back1: CA_back1 
		{
			x = 0.30; y = 0.43;
			w = 0.36; h = 0.50;
		};
		class Back2: CA_back2 
		{
			x = 0.665; y = 0.43;
			w = 0.17; h = 0.50;
		};
		class Logo: CA_Logo_small {};
	};

	class controls
	{
		delete Title;
		delete UnitText;
		delete UnitValue;
		delete B_OK;
		delete B_Cancel;
		

		class Title_CA: CA_Title {text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_CHOOSE;};
		
		class CA_UnitValue: RscListBox
		{
			idc = IDC_XWIZ_UNITS;
			x = 0.31; y = 0.45;
			w = 0.32; h = 0.4;
		};

		class CA_B_OK: CA_RscButton
		{
			idc = IDC_OK;
      		text = $STR_DISP_CONTINUE;
		};

		class CA_B_Back: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.85;
			text = $STR_DISP_BACK;
		};
	};
};
class RscDisplayXWizardUnitSelect: RscStandardDisplay
{
	//onload = " ""resource""  diag_enable true; ";
	class controlsBackground
	{
		class Mainback: CA_Back {};
		
		class Back1: CA_back1 
		{
			x = 0.30; y = 0.43;
			w = 0.36; h = 0.50;
		};
		class Back2: CA_back2 
		{
			x = 0.665; y = 0.43;
			w = 0.17; h = 0.50;
		};
		class Logo: CA_Logo_small 
		{
			x = 0.67;
		};
	};
	
	class controls
	{
		delete B_OK;
		delete B_CANCEL;
		delete UnitText;
		delete UnitValue;
		delete Title;
		
		class CA_SelectUint_Title: CA_Title
		{
		    idc = IDC_XWIZ_UNIT_SELECT_TITLE;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT;
		};
		/*
		class CA_UnitText: RscText
		{
			x = 0.475; y = 0.722;
			w = 0.3; h = 0.04;
			text = $STR_DISP_ARCUNIT_VEHICLE;
		}; */
		class CA_UnitValue: RscListBox
		{
			idc = IDC_XWIZ_UNIT_SELECT;
			x = 0.31; y = 0.45;
			w = 0.32; h = 0.4;
		};

		class CA_B_OK: CA_RscButton
		{
			idc = IDC_OK;
      		text = $STR_DISP_OK;
		};

		class CA_B_Back: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.85;
			text = $STR_DISP_CANCEL;
		};
	};
}; 
class RscDisplayXWizardUnitSelectCustom: RscStandardDisplay
{

	class controlsBackground
	{
		class Mainback: CA_Back
		{
			x = 0.55;
			w = 0.3;
		};
		//class Back1: CA_back1 {};
		class Back2: CA_back2 {};
		class Logo: CA_Logo_small 
		{
			x = 0.67;
		};
	};

	class controls
	{
		delete B_OK;
		delete B_Cancel;
		delete Title;

		class Title_CA: CA_Title
		{
			x = 0.55;
			idc = IDC_XWIZ_UNIT_SELECT_CUSTOM_TITLE;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT;
		};

		class TitleClass: RscText
		{
			x = 0.57; y = 0.44;
			w = 0.45; h = 0.05;
			text = $STR_DISP_ARCUNIT_CLASS;
		};

		class ButtonClass: RscCombo
		{
			idc = IDC_XWIZ_UNIT_CLASS;
			x = 0.58; y = 0.49;
			w = 0.2; h = 0.03;
			wholeHeight = 0.4;
		};

		class TitleType: RscText
		{
			x = 0.57; y = 0.54;
			w = 0.45; h = 0.05;
			text = $STR_DISP_ARCGRP_TYPE;
		};

		class ButtonType: Buttonclass
		{
			idc = IDC_XWIZ_UNIT_TYPE;
			y = 0.59;
		};

		class TitleCount: RscText
		{
			x = 0.57; y = 0.64;
			w = 0.4; h = 0.05;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_COUNT;
		};

		class ButtonCount: Buttonclass
		{
			idc = IDC_XWIZ_UNIT_COUNT;
			y = 0.69;
		};

		class CA_B_OK: CA_RscButton
		{
			idc = IDC_OK;
      		text = $STR_DISP_OK;
		};

		class CA_B_Back: CA_RscButton
		{
			idc = IDC_CANCEL;
			y = 0.85;
			text = $STR_DISP_CANCEL;
		};
	};
};

class RscDisplayXWizardIntelIsland: RscStandardDisplay
{

	class controlsBackground
	{
		class Mainback: CA_Back {};
		class Back1: CA_back1 {h = 0.5;};
		class Back2: CA_back2 {};
		class Logo: CA_Logo_small 
		{
			x = 0.67;
		};
	};

	class controls
	{
		delete IslandMap;
		delete B_OK;
		delete B_Cancel;
		delete Title;
		
		class Title_CA: CA_Title {text = $STR_DISP_XBOX_EDITOR_WIZARD_ISLAND_TITLE;};

		class IslandValue: RscListBox
		{
			idc = IDC_XWIZ_ISLAND_LIST;
			x = 0.31; y = 0.45;
			w = 0.22; h = 0.4;
		};

		class IslandShots: RscPicture
		{
			idc = IDC_XWIZ_ISLAND_SHOTS;
			x = 0.56; y = 0.45;
			w = 0.26; h = 0.46;
		};

		CA_OK_AND_CANCEL_BUTTONS( $STR_DISP_OK, $STR_CA_CANCEL,1)
	};
};

class RscDisplayXWizardIntelTime: RscStandardDisplay
{
	class controlsBackground
	{
		class Mainback: CA_Back
		{
			x = 0.55;
			w = 0.3;
		};
		//class Back1: CA_back1 {};
		class Back2: CA_back2 {};
		class Logo: CA_Logo_small 
		{
			x = 0.67;
		};
	};

	class controls
	{
		delete Title;
		delete B_OK;
		delete B_Cancel;

		class Title_CA: CA_Title {x = 0.55; text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_TITLE;};

		class HourText: RscText
		{
			x = 0.57; y = 0.43;
			w = 0.22 ; h = 0.05;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_HOUR;
		};

		class MinuteText: HourText
		{
			y = 0.51;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_MINUTES;
		};

		class DayText: HourText
		{
			y = 0.59;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_DAY;
		};

		class MonthText: HourText
		{
			y = 0.67;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_MONTH;
		};

		class YearText: HourText
		{
			y = 0.75;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_TIME_YEAR;
		};

		class Hour: RscCombo
		{
			idc = IDC_XWIZ_TIME_HOUR;
			x = 0.575; y = 0.47;
			w = 0.22; h = 0.03;
		};

		class Minute: Hour
		{
			idc = IDC_XWIZ_TIME_MINUTE;
			y = 0.55;
		};

		class Day: Hour
		{
			idc = IDC_XWIZ_TIME_DAY;
			y = 0.63;
		};

		class Month: Hour
		{
			idc = IDC_XWIZ_TIME_MONTH;
			y = 0.71;
		};

		class Year: Hour
		{
			idc = IDC_XWIZ_TIME_YEAR;
			y = 0.79;
		};

		CA_OK_AND_CANCEL_BUTTONS( $STR_DISP_OK, $STR_CA_CANCEL, 1)
	};
};

class RscDisplayXWizardIntelWeather: RscStandardDisplay
{
	class controlsBackground
	{
		class Mainback: CA_Back	{};
		class Back1: CA_back1
		{
			x = 0.31; y = 0.43;
			w = 0.52; h = 0.27;
		};
		class Back2: CA_back2
		{
			x = 0.31; y = 0.72;
			w = 0.52; h = 0.22;
		};
		class Logo: CA_Logo_small 
		{
			x = 0.67;
		};
	};

	class controls
	{
		delete Title;
		delete B_OK;
		delete B_Cancel;

		class Title_CA: CA_Title {text = $STR_DISP_INTEL_WEATHER;};

		class Bourka: RscPicture
		{
			text = "\ca\ui\data\Editor_bourka.paa";
			x = 0.32; y = 0.44;
			w = 0.06; h = 0.08;
		};
		class Jasno: RscPicture
		{
			text = "\ca\ui\data\Editor_jasno.paa";
			x = 0.76; y = 0.44;
			w = 0.06; h = 0.08;
		};
		class WeatherText: RscText
		{
			style = ST_LEFT;
			x = 0.44; y = 0.52;
			w = 0.43;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER;
		};
		class Current: RscText
		{
			idc = IDC_XWIZ_WEATHER_TITLE;
			style = ST_LEFT;
			x = 0.32; y = 0.57;
			w = 0.34;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_CURRENT;
		};
		class WeatherValueTitle: RscText
		{
			idc = IDC_XWIZ_WEATHER_TITLE;
			x = 0.25; y = 0.54;
			w = 0.5;
		};
		class WeatherValue: RscSlider
		{
			idc = IDC_XWIZ_WEATHER_VALUE;
			x = 0.45; y = 0.58;
			w = 0.36;
		};
		class Forecast: Current
		{
			idc = IDC_XWIZ_WEATHER_FORECAST_TITLE;
			y = 0.65;
			text = $STR_DISP_INTEL_FORECAST;
		};
		class ForecastWeatherTitle: RscText
		{
			idc = IDC_XWIZ_WEATHER_FORECAST_TITLE;
			x = 0.25; y = 0.42;
			w = 0.5;
		};
		class ForecastWeatherValue: RscSlider
		{
			idc = IDC_XWIZ_WEATHER_FORECAST_VALUE;
			x = 0.45; y = 0.66;
			w = 0.36;
		};
		class FogText: WeatherText
		{
			y = 0.7;
			text = $STR_DISP_XBOX_EDITOR_WIZARD_WEATHER_FOG;
		};
		class Current2: Current
		{
			idc = IDC_XWIZ_FOG_TITLE;
			y = 0.77;
		};
		class FogValueTitle: RscText
		{
			idc = IDC_XWIZ_FOG_TITLE;
			x = 0.25; y = 0.74;
			w = 0.5;
		};
		class FogValue: RscSlider
		{
			idc = IDC_XWIZ_FOG_VALUE;
			x = 0.45; y = 0.78;
			w = 0.36;
		};
		class Forecast2: Forecast
		{
			idc = IDC_XWIZ_FOG_FORECAST_TITLE;
			y = 0.85;
		};
		class ForecastFogValueTitle: RscText
		{
			idc = IDC_XWIZ_FOG_FORECAST_TITLE;
			x = 0.25; y = 0.67;
			w = 0.5;
		};
		class ForecastFogValue: RscSlider
		{
			idc = IDC_XWIZ_FOG_FORECAST_VALUE;
			x = 0.45; y = 0.86;
			w = 0.36;
		};
		CA_OK_AND_CANCEL_BUTTONS( $STR_DISP_OK, $STR_CA_CANCEL,1)
	};
};


//Taken from rscXbox.hpp
class RscDisplaySelectDifficulty: RscStandardDisplay
{

	class controlsBackground
	{
		class Mainback: CA_Back {};
		class Back1: CA_back1 {h = 0.5;};
		class Back2: CA_back2 {};
	};

  class controls
  {
		class Logo: CA_Logo {};

  	//List of difficulties.
		class Difficulty: RscListBox
		{
			//idc = IDC_DIFF_LIST;
			x = 0.31; y = 0.45;
			w = 0.22; h = 0.4;
		};
		//Description of difficulties.
		class Description: RscHTML
		{
			idc = IDC_DIFF_DESC;
			x = 0.52; y = 0.15;
			w = 0.42; h = 0.7;
			align = "center";
		};
		CA_OK_AND_CANCEL_BUTTONS( $STR_DISP_OK, $STR_CA_CANCEL,1)
	};
};
//Enter a server password screen.
class RscDisplayXWizardIntelName: RscStandardDisplay
{

	__EXEC( _windowWidth = 45; _windowHeight = 21;)
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
		class MissionTitleBack: CA_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			colorText[] =  CA_UI_title_background;
		};

		class BB_Back: RscPicture
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			text = "\ca\ui\textures\white_basic.paa";
		};
	};

	class controls
	{
		delete B_OK;
		delete B_Cancel;
		delete Name;
		delete Title;
		
		class CA_Mission_Name_Title_CA: CA_Title
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
			colorText[] = Color_White;	
			text = $STR_DISP_XBOX_EDITOR_WIZARD_NAME_TITLE;			
		};

		class CA_Mission_NameValue: RscEdit
		{
			idc = IDC_PROFILE_NAME_PREVIEW;
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (6 * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
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

class RscDisplayXWizardMap: RscStandardDisplay
{
	idd = IDD_XWIZARD_MAP;

	class controlsBackground
	{
		class Map: RscMapControl
		{
			class Command
			{
			};

			class ActiveMarker
			{
			};
		};

	};

	class controls
	{
		delete B_OK;
		delete Briefing;
		delete Points;
		
		class CA_Points: RscText
		{
			idc = IDC_XWIZ_MAP_POINTS;
			x = 0.05; y = 0.02;
			w = 0.35; h = 0.06;		
			sizeEx = 0.03;
			colorText[] = Color_White; 
			style = ST_LEFT + ST_SHADOW;
			text = $STR_MISSION_WIZARD_POINTS;
		};

		class CA_Briefing: RscHTML
		{
			idc = IDC_BRIEFING;
			x = 0.12; y = 0.07;
			w = 0.8; h = 0.7;
		};
	    // Preview
	    class CA_B_OK: CA_RscButton_dialog
	    {
	      idc = IDC_OK;
	      text = $STR_DISP_ARCMAP_PREVIEW;
	    };
	    class CA_B_CANCEL: CA_RscButton_dialog
	    {
	      idc = IDC_CANCEL;
	      y = 0.9;
	      text =$STR_DISP_BACK;
	    };	    
	    
	};
};


class RscDisplayXWizardMapInsertUnit: RscStandardDisplay
{
	__EXEC( _windowWidth = 44; _windowHeight = 38;)
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
		};		
		class InsertUnitTitleBack: CA_Back
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing));
			w = __EVAL((_windowWidth - 2 * _windowBorder) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			colorText[] =  CA_UI_title_background;
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
		delete TitleClass;
		delete ComboClass;
		delete TitleType;
		delete ComboType;
		delete TitleCount;
		delete ComboCount;
		delete TitleSide;
		delete ComboSide;
				
  		class CA_InsertUnitTitle: CA_Title 
		{
			x = __EVAL(_xInit + (_windowBorder * _xSpacing)); 
			y = __EVAL(_yInit + (_windowBorder * _ySpacing) - 0.005);
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_SELECT;
			colorText[] = Color_White;
		};		
		
		class CA_TextSide: RscText
		{
			x = __EVAL(_xInit + (2 * _xSpacing));
			y = __EVAL(_yInit + (7 * _ySpacing)); 
			w = __EVAL(12 * _xSpacing);
			text = $STR_DISP_ARCUNIT_SIDE;
		};
		//Server name filter field.
		class CA_ValueSideBack: RscPicture
		{
			x = __EVAL(_xInit + (12 * _xSpacing)); 
			y = __EVAL(_yInit + (7 * _ySpacing));
			w = __EVAL((_windowWidth -  (13 + 1*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			text = "\ca\ui\textures\white_basic.paa";
		}; 
		
		class CA_ValueSide: RscCombo
		{
			idc = IDC_XWIZ_UNIT_SIDE;
			x = __EVAL(_xInit + (12 * _xSpacing)); 
			y = __EVAL(_yInit + (7 * _ySpacing));
			w = __EVAL((_windowWidth -  (13 + 1*_windowBorder)) * _xSpacing);
			h = __EVAL(4 * _ySpacing);
		};

		class CA_TextClass: CA_TextSide
		{
			y = __EVAL(_yInit + (12 * _ySpacing)); 
			text = $STR_DISP_ARCUNIT_CLASS;
		};
		
		class CA_ClassBack: CA_ValueSideBack
		{
			y = __EVAL(_yInit + (12 * _ySpacing));
		}; 

		class CA_ValueClass: CA_ValueSide
		{
			idc = IDC_XWIZ_UNIT_CLASS;
			y = __EVAL(_yInit + (12 * _ySpacing));
		};

		class CA_TextType: CA_TextSide
		{
			y = __EVAL(_yInit + (17 * _ySpacing)); 
			text = $STR_DISP_ARCGRP_TYPE;
		};
		
		class CA_TypeBack: CA_ValueSideBack
		{
			y = __EVAL(_yInit + (17 * _ySpacing));
		}; 

		class CA_ValueType: CA_ValueSide
		{
			idc = IDC_XWIZ_UNIT_TYPE;
			y = __EVAL(_yInit + (17 * _ySpacing));
		};		

		class CA_TextCount: CA_TextSide
		{
			y = __EVAL(_yInit + (22 * _ySpacing)); 
			text = $STR_DISP_XBOX_EDITOR_WIZARD_UNIT_COUNT;
		};
		class CA_CountBack: CA_ValueSideBack
		{
			y = __EVAL(_yInit + (22 * _ySpacing));
		}; 		
		
		class CA_ValueCount: CA_ValueSide
		{
			idc = IDC_XWIZ_UNIT_COUNT;
			y = __EVAL(_yInit + (22 * _ySpacing));
		};	
		
		class CA_InsertUnit_Ok: CA_RscButton_dialog
		{
			idc = IDC_OK;
			x = __EVAL(_xInit + ((_windowWidth - _windowBorder - 20 ) * _xSpacing)); 
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 9 ) * _ySpacing));
			w = __EVAL(20 * _xSpacing);
			h = __EVAL(4 * _ySpacing);
			default = 1;
			text = $STR_DISP_OK;
		};
		
		class CA_InsertUnit_Cancel: CA_InsertUnit_Ok
		{
			idc = IDC_CANCEL;
			default = 0;
			y = __EVAL(_yInit + ((_windowHeight - _windowBorder - 4 ) * _ySpacing));
			text = $STR_CA_CANCEL;
		};
				
	};
};

