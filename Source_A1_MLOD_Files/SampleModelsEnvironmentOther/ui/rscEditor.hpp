//Todo:
//Rename to rscEditor.
//Add back normal island select screen.

#define LINE_HEIGHT 4 * _ySpacing
#define LINE_Y __EVAL(line_y)
#define LINE_Y_TOOLBOX __EVAL(line_y - 0.5 * _ySpacing)
#define LINE_W(VALUE) __EVAL(VALUE * line_w - _xSpacing)
#define LINE_X(VALUE) __EVAL(line_x + (VALUE * line_w))
#define NEXT_LINE __EXEC(line_y = line_y + LINE_HEIGHT)
#define NEXT_HALF_LINE __EXEC(line_y = line_y + LINE_HEIGHT/2)
#define NEXT(VALUE) __EXEC(line_y = line_y + VALUE)

#define DISPLAY(IDD, X, Y, W, H) \
	idd = IDD;\
	__EXEC(display_x = X);\
	__EXEC(display_y = Y);\
	__EXEC(display_w = W);\
	__EXEC(display_h = H);\
	__EXEC(line_x = X + _xSpacing);\
	__EXEC(line_w = W);\
	__EXEC(line_y = Y + 6 * _ySpacing);\
	__EXEC(dialog_vertical_center = 0.382);\
	movingEnable = true;\
	access = ReadAndWrite;

#define BACKGROUND(NAME,NAME2) \
	class NAME: CA_Mainback\
	{\
		x = __EVAL(display_x);\
		y = __EVAL(display_y);\
		w = __EVAL(display_w);\
		h = __EVAL(display_h);\
	};\
	class NAME2: CA_Back\
	{\
		x = __EVAL(display_x + (1 * _xSpacing));\
		y = __EVAL(display_y + (6 * _ySpacing));\
		w = __EVAL(display_w - (2 * _xSpacing));\
		h = __EVAL(display_h - (12 * _ySpacing));\
	};
	
#define TITLE_BACKGROUND() \
	class CA_Title_Background: CA_Title_Back\
	{\
		x = __EVAL(display_x +  _xSpacing);\
		y = __EVAL(display_y +  _ySpacing);\
		w = __EVAL(display_w - (2* _xSpacing));\
		h = __EVAL(4 * _ySpacing);\
		moving = true;\
	};
	
#define TITLE(NAME, TEXT, IDC) \
	class NAME: CA_Title\
	{\
		idc = IDC;\
		x = __EVAL(display_x +  (1 * _xSpacing));\
		y = __EVAL(display_y +  _ySpacing);\
		w = __EVAL(display_w - (4* _xSpacing));\
		h = __EVAL(4 * _ySpacing);\
		colorText[] = Color_White;\
		text = TEXT;\
	};

#define BEGIN_BOX \
	__EXEC(box_y = line_y);\
	__EXEC(line_x = display_x + 2 * _xSpacing);\
	__EXEC(line_w = display_w - 3 * _xSpacing);\
	__EXEC(line_y = box_y + _ySpacing);
	
#define END_BOX \
	__EXEC(box_start_x = line_x)\
	__EXEC(box_start_y = line_y)\
	__EXEC(line_y = line_y + 5 * _ySpacing);\
	__EXEC(line_x = display_x +  4 * _xSpacing);\
	__EXEC(line_w = display_w);\

#define	STATIC_TEXT(NAME, TEXT, IDC, XVAL, WVAL) \
	class NAME: RscText\
	{\
		idc = IDC;\
		style = ST_RIGHT;\
		x = LINE_X(XVAL);\
		y = LINE_Y;\
		w = LINE_W(WVAL);\
		h = __EVAL(3 * _ySpacing);\
		text = TEXT;\
		sizeEx = TextSize_small;\
	};

#define	STATIC_TEXT_LEFT(NAME, TEXT, IDC, XVAL, WVAL) \
	class NAME: RscText\
	{\
		idc = IDC;\
		style = ST_LEFT;\
		x = LINE_X(XVAL);\
		y = LINE_Y;\
		w = LINE_W(WVAL);\
		h = __EVAL(3 * _ySpacing);\
		text = TEXT;\
		sizeEx = TextSize_small;\
	};

#define	EDIT(NAME, IDC, XVAL, WVAL) \
	class NAME: RscEdit\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y;\
		w = LINE_W(WVAL);\
		h = __EVAL(3 * _ySpacing);\
		text = $STR_DISP_ERROR;\
		sizeEx = TextSize_small;\
	};

#define EDIT_SCRIPT(NAME, IDC, XVAL, WVAL) \
	class NAME: RscEdit\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y;\
		w = LINE_W(WVAL);\
		h = __EVAL(3 * _ySpacing);\
		text = $STR_DISP_ERROR;\
		autocomplete="scripting";\
		sizeEx = TextSize_small;\
	};

#define COMBO(NAME, IDC, XVAL, WVAL) \
	class NAME: RscCombo\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y;\
		w = LINE_W(WVAL);\
		h = __EVAL(3 * _ySpacing);\
	  	wholeHeight = 0.45;\
		sizeEx = TextSize_small;\
	};

#define	SLIDER(NAME, IDC, XVAL, WVAL) \
	class NAME: RscSlider\
	{\
		idc = IDC;\
		x = LINE_X(XVAL);\
		y = LINE_Y;\
		w = LINE_W(WVAL);\
		h = __EVAL(3 * _ySpacing);\
	};

#define	BUTTON(NAME, TEXT, IDC, SOUND, VOLUME, XVAL, DEFAULT) \
	class NAME: RscButton\
	{\
		idc = IDC;\
		x = __EVAL(display_x + display_w - 18.5 *_xSpacing - XVAL * 18.5 *_xSpacing);\
		y = __EVAL(display_y + display_h - (5 * _ySpacing));\
		h = __EVAL(4 * _ySpacing);\
		text = TEXT;\
		default = DEFAULT;\
		sizeEx = TextSize_small;\
	};

#define	LEFT_BUTTON(NAME, TEXT, IDC, SOUND, VOLUME, XVAL, DEFAULT) \
	class NAME: RscButton\
	{\
		idc = IDC;\
		x = __EVAL(display_x + _xSpacing);\
		y = __EVAL(display_y + display_h - 5 * _ySpacing);\
		h = __EVAL(4 * _ySpacing);\
		text = TEXT;\
		default = DEFAULT;\
		sizeEx = TextSize_small;\
	};

#define BUTTON_OK(XVAL) BUTTON(ButtonOK, $STR_DISP_OK, IDC_OK, "", 0.2, XVAL, 0)
#define DEFAULT_BUTTON_OK(XVAL) BUTTON(ButtonOK, $STR_DISP_OK, IDC_OK, "", 0.2, XVAL, 1)
#define BUTTON_CANCEL(XVAL) BUTTON(ButtonCancel, $STR_DISP_CANCEL, IDC_CANCEL, "", 0.2, XVAL, 0)
#define DEFAULT_BUTTON_CANCEL(XVAL) BUTTON(ButtonCancel, $STR_DISP_CANCEL, IDC_CANCEL, "", 0.2, XVAL, 1)


//Island selection screen. Shown when accessing the mission editor.
class RscDisplaySelectIsland: RscStandardDisplay
{
	class controlsBackground
	{
		class Mainback: CA_Mainback 
		{
			x = 0.29; y = 0.38;
			w = 0.56; h = 0.57;
		};

		class Back: CA_Back
		{
			x = 0.30; y = 0.43;
			w = 0.54;  h = 0.51;
		};
	};

	class controls
	{
		delete Title;
		delete Islands;
		delete B_Editor;
		delete B_OK;
		delete B_Cancel;
		delete B_Wizard;

		class Logo: CA_Logo{};
		class Title2: CA_Title
		{
			text = $STR_CA_SELECT_ISLAND;
		};

		//The available islands.
		class IslandsBox: RscListBox
		{
			idc = IDC_SELECT_ISLAND;
			x = 0.31; y = 0.44;
			w = 0.52; h = 0.49;
		};

		CA_OK_AND_CANCEL_BUTTONS( $STR_DISP_OK, $STR_CA_CANCEL,1)

	};
};

//Mission editor main screen.
class RscDisplayArcadeMap: RscMap
{
  textureClear = "\ca\ui\data\editor_jasno.paa";
  textureCloudly = "\ca\ui\data\editor_polojasno.paa";
  textureOvercast = "\ca\ui\data\editor_zatazeno.paa";
  textureRainy = "\ca\ui\data\editor_destivo.paa";
  textureStormy = "\ca\ui\data\editor_bourka.paa";
	
  class controlsBackground
  {
  	class CA_Black_Back3: CA_Black_Back  
	  {
	 	 colorText[] = CA_UI_EDITOR_background;
	  };
  };
	class controls: controls
	{
		delete Background1;
		delete ToolboxMode;
		delete B_Intel;
		delete Difficulty;
		delete B_Merge;
		delete B_Save;
		delete B_Clear;
		delete Section;
		delete B_Ids;
		delete B_Textures;
		delete B_Preview;
		delete B_Continue;
		delete B_Cancel;
		delete B_Load;

  	class Mainback: CA_Mainback
  	{
  		x = 0.83; y = 0;
		w = 0.17; h = 1;
  	};
  	
  	class IntelBack: CA_Back
  	{
		x = 0.84; y = 0.09;
    	w = 0.15; h = 0.185;
    	colorText[] =  CA_UI_title_background_blue;
  	}; 

	//Change the mission section that is being edited.
	class CA_Section: RscCombo
	{
		idc = IDC_ARCMAP_SECTION;
		x = 0.84; y = 0.04;
		w = 0.15; h = 0.03;
		wholeHeight = 0.45;
	};

	//Open the Intel screen.
	class Intel_text: RscText
	{
		idc = -1;
		x = 0.84; y = 0.1;
		w = 0.15; h = 0.03;
		sizeEx = TextSize_small;
		text = "$STR_CA_EDIT_INTEL";
		colorText[] = Color_White;
	};
	

  	class Weather: RscPicture
  	{
  		idc = IDC_WEATHER;
  		text = "\ca\ui\data\Editor_bourka.paa";
  		x = 0.92; y = 0.105;
  		w = 0.06; h = 0.08;
  		colorText[]= {1, 1, 1, 1};
  	};

  	class TimeFrame: RscFrame
  	{
  	//	colorText[] = Color_Black;
  		colorText[] = Color_White;
  		x = 0.850; y = 0.190;
  		w = 0.13; h = 0.028;
  	};
  	class Time: RscText
  	{
  		idc = IDC_TIME;
  		style = ST_CENTER;
  		x = 0.850; y = 0.190;
  		w = 0.13; h = 0.028;
  		colorText[] = Color_White;  		
  	};

  	class DateFrame: RscFrame
  	{
//  		colorText[] = Color_Black;
  		colorText[] = Color_White;
  		x = 0.850; y = 0.228;
  		w = 0.13; h = 0.028;
  	};
  	class Date: Time
  	{
  		colorText[] = Color_White;  	
  		idc = IDC_DATE;
  		style = ST_CENTER;
  		x = 0.850; y = 0.228;
  		w = 0.13; h = 0.028;
  	};

	class Intel: RscActiveText
	{
		idc = IDC_ARCMAP_INTEL;
		x = 0.842; y = 0.101;
		text = "#(argb,8,8,3)color(1,1,1,0)";
		style = ST_PICTURE;
		w = 0.15; h = 0.165;
		colortext[] = {0, 0, 0, 0};
	};

  	class TollBoxBack: CA_Title_Back
  	{
		x = 0.84; y = 0.30;
		w = 0.15; h = 0.185;
		colorText[] =  CA_UI_title_background;
  	}; 
	//List of editing modes.
	class CA_ToolboxMode: RscToolbox
	{
		idc = IDC_ARCMAP_MODE;
		x = 0.84; y = 0.31;
		w = 0.15; h = 0.165;
		style = ST_LEFT;

		colorText[] = Color_White;
		color[] = Color_White;
		colorTextSelect[] = Color_White;
		colorSelect[] = Color_White;

		strings[] =
		{
			$STR_DISP_ARCMAP_UNITS,
			$STR_DISP_ARCMAP_GROUPS,
			$STR_DISP_ARCMAP_SENSORS,
			$STR_DISP_ARCMAP_WAYPOINTS,
			$STR_DISP_ARCMAP_SYNCHRONIZE,
			$STR_DISP_ARCMAP_MARKERS
		};

		rows = 6;
		columns = 1;
	};

		//Load a saved mission.
		class Load: CA_RscButton
		{
			idc = IDC_ARCMAP_LOAD;
			x = 0.84; y = 0.52;
	    w = 0.16; h = 0.035;
			text = $STR_DISP_ARCMAP_LOAD;
		};

		//Merge two missions.
		class Merge: Load
		{
			idc = IDC_ARCMAP_MERGE;
			y = 0.56;
			text = $STR_DISP_ARCMAP_MERGE;
		};

		//Save the mission.
		class Save: Load
		{
			idc = IDC_ARCMAP_SAVE;
			y = 0.6;
			text = $STR_DISP_ARCMAP_SAVE;
		};

		//Clear the mission.
		class Clear: Load
		{
			idc = IDC_ARCMAP_CLEAR;
			y = 0.64;
			text = $STR_DISP_ARCMAP_CLEAR;
		};

		//Enable or disable object ID numbers.
		class Ids: Load
		{
			idc = IDC_ARCMAP_IDS;
			y = 0.72;
			text = "$STR_CA_EDIT_IDS";
		};

		//Enable or disable terrain textures.
		class Textures: Load
		{
			idc = IDC_ARCMAP_TEXTURES;
			y = 0.76;
			text = "$STR_CA_EDIT_TEXTURES";
		};

		//Preview the mission.
		class Preview: Load
		{
			idc = IDC_ARCMAP_PREVIEW;
			default = 1;
			y = 0.84;
			text = $STR_DISP_ARCMAP_PREVIEW;
		};

		//Continue previewing the mission.
		class Continue: Load
		{
			idc = IDC_ARCMAP_CONTINUE;
			y = 0.88;
			text = $STR_DISP_ARCMAP_CONTINUE;
		};

		//Cancel back to the main menu.
		class Cancel: Load
		{
			idc = IDC_CANCEL;
			y = 0.92;
			text = $STR_DISP_ARCMAP_EXIT;
		};
	};
};

//Mission editor Unit pop-up screen.
class RscDisplayArcadeUnit
{
	__EXEC( dialog_vertical_center = 0.382 );
	__EXEC( dialog_x = 0.5 - 75 * 0.5 * _xSpacing  );
	__EXEC( dialog_y = dialog_vertical_center - 82 * dialog_vertical_center * _ySpacing  );	
	__EXEC( dialog_w = 75 * _xSpacing);
	__EXEC( dialog_h = 82 * _ySpacing);
	/*
	__EXEC( dialog_x =  0.5 - 80 * 0.5 * _xSpacing  );
	__EXEC( dialog_y =  0.5 - 95 * 0.5 * _ySpacing  );	
	__EXEC( dialog_w = 80 * _xSpacing);
	__EXEC( dialog_h = 95 * _ySpacing); */
	DISPLAY(IDD_ARCADE_UNIT, dialog_x, dialog_y, dialog_w , dialog_h)
	//DISPLAY(IDD_ARCADE_UNIT, 0.15, 0.02, 0.6, 0.95)
	class controlsBackground
	{
		BACKGROUND(CA_Background, CA_Secondary_Background)
		TITLE_BACKGROUND()
	};
	
	class controls
	{
		delete Azimut;
		delete ValueAzimut;
		delete Background;
		delete Title;
		
		TITLE(CA_Title, "", IDC_ARCUNIT_TITLE)
		BEGIN_BOX

			STATIC_TEXT(TextSide, $STR_DISP_ARCUNIT_SIDE, -1, 0, 0.25)
			//Unit's side.
			COMBO(ValueSide, IDC_ARCUNIT_SIDE, 0.25, 0.25)
			STATIC_TEXT(TextRank, $STR_DISP_ARCUNIT_RANK, -1, 0.5, 0.25)
			//Unit's rank.
			COMBO(ValueRank, IDC_ARCUNIT_RANK, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextClass, $STR_DISP_ARCUNIT_CLASS, -1, 0, 0.25)
			//Unit's class.
			COMBO(ValueClass, IDC_ARCUNIT_CLASS, 0.25, 0.25)
			STATIC_TEXT(TextVehicle, $STR_DISP_ARCUNIT_VEHICLE, -1, 0.5, 0.25)
			//Unit's type.
			COMBO(ValueVehicle, IDC_ARCUNIT_VEHICLE, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextControl, $STR_DISP_ARCUNIT_CTRL, -1, 0, 0.25)
			//Unit is controlled by?
			COMBO(ValueControl, IDC_ARCUNIT_CTRL, 0.25, 0.25)
			STATIC_TEXT(TextSpecial, $STR_DISP_ARCUNIT_SPECIAL, -1, 0.5, 0.25)
			//Unit's special properties.
			COMBO(ValueSpecial, IDC_ARCUNIT_SPECIAL, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextAge, $STR_DISP_ARCUNIT_AGE, -1, 0, 0.25)
			//Unit's info age.
			COMBO(ValueAge, IDC_ARCUNIT_AGE, 0.25, 0.25)
			STATIC_TEXT(TextText, $STR_DISP_ARCUNIT_TEXT, -1, 0.5, 0.25)
			//Unit's name.
			EDIT(ValueText, IDC_ARCUNIT_TEXT, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextLock, $STR_DISP_ARCUNIT_LOCK, -1, 0, 0.25)
			//Unit is locked?
			COMBO(ValueLock, IDC_ARCUNIT_LOCK, 0.25, 0.25)
			STATIC_TEXT(TextSkill, $STR_DISP_ARCUNIT_SKILL, -1, 0.5, 0.25)
			//Unit's skill level.
			SLIDER(ValueSkill, IDC_ARCUNIT_SKILL, 0.75, 0.25)

		END_BOX

		BEGIN_BOX

			STATIC_TEXT(TextInit, $STR_DISP_ARCUNIT_INIT, -1, 0, 0.25)
			//Unit's initialization scripting commands.
			EDIT_SCRIPT(ValueInit, IDC_ARCUNIT_INIT, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextDescription, $STR_DISP_ARCUNIT_DESC, -1, 0, 0.25)
			//Unit's description.
			EDIT(ValueDescription, IDC_ARCUNIT_DESC, 0.25, 0.75)

		END_BOX

		BEGIN_BOX

			//Change the unit's azimuth.
			class CA_Azimut: RscPicture
			{
				idc = IDC_ARCUNIT_AZIMUT_PICTURE;
				onMouseButtonUp = "private [""_display"", ""_control""]; _display = ctrlParent (_this select 0); _control = _display displayctrl 111; ctrlSetFocus _control;";
				text = "\ca\ui\data\azimut.paa";
				x = __EVAL(dialog_x + dialog_w - 18 * _ySpacing);  
				y = LINE_Y;
				w = __EVAL(21.5 * _xSpacing);
				h = __EVAL(20 * _ySpacing);
			}; 

		
			class TextAzimut: RscText
			{
				style = ST_CENTER;
				x = __EVAL(dialog_x + dialog_w - 14 * _ySpacing); 						
				y = __EVAL(box_y + 0.07);
				w = __EVAL(11.5 * _xSpacing);
				sizeEx = TextSize_small;
			};

			//Unit's current azimuth.
			class CA_ValueAzimut: RscEdit
			{
				idc = IDC_ARCUNIT_AZIMUT;
				x = __EVAL(dialog_x + dialog_w - 12.5 * _ySpacing); 
				y = __EVAL(box_y + 0.1);
				w = 0.05;
				h = __EVAL(3 * _ySpacing);
			};

			NEXT_LINE
			NEXT_HALF_LINE
						
			STATIC_TEXT(TextHealth, $STR_DISP_ARCUNIT_HEALTH, -1, 0, 0.25)
			//Unit's health level.
			SLIDER(ValueHealth, IDC_ARCUNIT_HEALTH, 0.25, 0.42)
			NEXT_LINE

			STATIC_TEXT(TextFuel, $STR_DISP_ARCUNIT_FUEL, -1, 0, 0.25)
			//Unit's fuel level.
			SLIDER(ValueFuel, IDC_ARCUNIT_FUEL, 0.25, 0.42)
			NEXT_LINE

			STATIC_TEXT(TextAmmo, $STR_DISP_ARCUNIT_AMMO, -1, 0, 0.25)
			//Unit's ammo level.
			SLIDER(ValueAmmo, IDC_ARCUNIT_AMMO, 0.25, 0.42)

		END_BOX


		NEXT_LINE
		BEGIN_BOX

			STATIC_TEXT(TextPresence, $STR_DISP_ARCUNIT_PRESENCE, -1, 0, 0.5)
			//Unit's probability of presence.
			SLIDER(ValuePresence, IDC_ARCUNIT_PRESENCE, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextPresenceCondition, $STR_DISP_ARCUNIT_PRESENCE_COND, -1, 0, 0.5)
			//Unit's condition of presence.
			EDIT_SCRIPT(ValuePresenceCondition, IDC_ARCUNIT_PRESENCE_COND, 0.5, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextPlacement, $STR_DISP_ARCUNIT_PLACE, -1, 0, 0.5)
			//Unit's placement radius.
			EDIT(ValuePlacement, IDC_ARCUNIT_PLACE, 0.5, 0.5)
			NEXT_LINE

		END_BOX

		//Confirm the unit settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)

	};
};


//Mission editor Group pop-up screen.
class RscDisplayArcadeGroup
{
	__EXEC( dialog_x =  0.5 - 63 * 0.5 * _xSpacing  );
	__EXEC( dialog_y =  dialog_vertical_center - 26 * dialog_vertical_center * _ySpacing  );	
	__EXEC( dialog_w = 68 * _xSpacing);
	__EXEC( dialog_h = 35 * _ySpacing);
	DISPLAY(IDD_ARCADE_GROUP, dialog_x, dialog_y, dialog_w , dialog_h)

	class controlsBackground
	{
		BACKGROUND(CA_Background, CA_Secondary_Background)
		TITLE_BACKGROUND()
	};
	class controls
	{
		delete azimut;
		delete ValueAzimut;
		delete Background;
		delete Title;
		
		TITLE(CA_Title, $STR_DISP_ARCGRP_TITLE, -1)
		BEGIN_BOX
		//Change the group's azimuth.
		class CA_Azimut: RscPicture
		{
			idc = IDC_ARCGRP_AZIMUT_PICTURE;
			onMouseButtonUp = "private [""_display"", ""_control""]; _display = ctrlParent (_this select 0); _control = _display displayctrl 104; ctrlSetFocus _control;";
			text = "\ca\ui\data\azimut.paa";
			x = __EVAL(dialog_x + dialog_w - 18 * _ySpacing); 
			y = __EVAL(dialog_y + dialog_h - 28 * _ySpacing);
			w = __EVAL(21.5 * _xSpacing);
			h = __EVAL(20 * _ySpacing);
		};
		class TextAzimut: RscText
		{
			style = ST_CENTER;
			x = __EVAL(dialog_x + dialog_w - 14 * _ySpacing); 						
			y = __EVAL(box_y + 0.07);
			w = __EVAL(11.5 * _xSpacing);
			sizeEx = TextSize_small;
		};

		//Group's current azimuth.
		class CA_ValueAzimut: RscEdit
		{
			idc = IDC_ARCGRP_AZIMUT;
			x = 0.65; y = __EVAL(box_y + 0.1);
			w = 0.05; h = __EVAL(3 * _ySpacing);
		};

		NEXT_LINE

		
		STATIC_TEXT(TextSide, $STR_DISP_ARCGRP_SIDE, -1, 0, 0.20)
		//Group's side.
		COMBO(ValueSide, IDC_ARCGRP_SIDE, 0.20, 0.39)
		NEXT_LINE

		STATIC_TEXT(TextType, $STR_DISP_ARCGRP_TYPE, -1, 0, 0.20)
		//Group's type.
		COMBO(ValueType, IDC_ARCGRP_TYPE, 0.20, 0.39)
		NEXT_LINE

		STATIC_TEXT(TextName, $STR_DISP_ARCGRP_NAME, -1, 0, 0.20)
		//Group's name.
		COMBO(ValueName, IDC_ARCGRP_NAME, 0.20, 0.39)

		NEXT_HALF_LINE
		NEXT_HALF_LINE
		
		END_BOX

		//Confirm the group settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Waypoint pop-up screen.
class RscDisplayArcadeWaypoint
{
	__EXEC( dialog_x = 0.5 - 75 * 0.5 * _xSpacing  );
	__EXEC( dialog_y = dialog_vertical_center - 82 * dialog_vertical_center * _ySpacing  );	
	__EXEC( dialog_w = 75 * _xSpacing);
	__EXEC( dialog_h = 82 * _ySpacing);
	DISPLAY(IDD_ARCADE_WAYPOINT, dialog_x, dialog_y, dialog_w , dialog_h)
	
	class controlsBackground
	{
		BACKGROUND(CA_Background, CA_Secondary_Background)
		TITLE_BACKGROUND()
	};
	class controls
	{
		delete Background;
		delete Title;

		TITLE(CA_Title, "", IDC_ARCWP_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextType, $STR_DISP_ARCWP_TYPE, -1, 0, 0.382)
			//Waypoint's type.
			COMBO(ValueType, IDC_ARCWP_TYPE, 0.382, 0.618)
			NEXT_LINE

			STATIC_TEXT(TextSequence, $STR_DISP_ARCWP_SEQ, -1, 0, 0.382)
			//Sequence of waypoints for the attached unit.
			COMBO(ValueSequence, IDC_ARCWP_SEQ, 0.382, 0.618)
			NEXT_LINE

			STATIC_TEXT(TextDescription, $STR_DISP_ARCWP_DESC, -1, 0, 0.382)
			//Waypoint's description.
			EDIT(ValueDescription, IDC_ARCWP_DESC, 0.382, 0.618)
			NEXT_LINE

			STATIC_TEXT(TextCombatMode, $STR_DISP_ARCWP_SEMAPHORE, -1, 0, 0.382)
			//Waypoint's combat mode.
			COMBO(ValueCombatMode, IDC_ARCWP_SEMAPHORE, 0.382, 0.618)
			NEXT_LINE

			STATIC_TEXT(TextFormation, $STR_DISP_ARCWP_FORM, -1, 0, 0.382)
			//Waypoint's formation.
			COMBO(ValueFormation, IDC_ARCWP_FORM, 0.382, 0.618)
			NEXT_LINE

			STATIC_TEXT(TextSpeed, $STR_DISP_ARCWP_SPEED, -1, 0, 0.382)
			//Waypoint's movement speed.
			COMBO(ValueSpeed, IDC_ARCWP_SPEED, 0.382, 0.618)
			NEXT_LINE

			STATIC_TEXT(TextCombat, $STR_DISP_ARCWP_COMBAT, -1, 0, 0.382)
			//Waypoint's rules of engagement.
			COMBO(ValueCombat, IDC_ARCWP_COMBAT, 0.382, 0.618)
			NEXT_LINE

			STATIC_TEXT(TextPlacement, $STR_DISP_ARCWP_PLACE, -1, 0, 0.382)
			//Waypoint's placement radius.
			EDIT(ValuePlacement, IDC_ARCWP_PLACE, 0.382, 0.618)
			NEXT_LINE

			STATIC_TEXT(TextHousePos, $STR_DISP_ARCWP_HOUSEPOS, IDC_ARCWP_HOUSEPOSTEXT, 0, 0.382)
			//Waypoint's relative house position.
			COMBO(ValueHousePos, IDC_ARCWP_HOUSEPOS, 0.382, 0.618)
			NEXT_LINE

			STATIC_TEXT(TextTimeout, $STR_DISP_ARCWP_TIMEOUT, -1, 0, 0.25)
			STATIC_TEXT(TextTimeoutMin, $STR_DISP_ARCWP_TIMEOUT_MIN, -1, 0.25, 0.125)
			//Waypoint's minimum timeout or countdown time.
			EDIT(ValueTimeoutMin, IDC_ARCWP_TIMEOUT_MIN, 0.375, 0.125)
			STATIC_TEXT(TextTimeoutMax, $STR_DISP_ARCWP_TIMEOUT_MAX, -1, 0.5, 0.125)
			//Waypoint's maximum timeout or countdown time.
			EDIT(ValueTimeoutMax, IDC_ARCWP_TIMEOUT_MAX, 0.625, 0.125)
			STATIC_TEXT(TextTimeoutMid, $STR_DISP_ARCWP_TIMEOUT_MID, -1, 0.75, 0.125)
			//Waypoint's medium timeout or countdown time.
			EDIT(ValueTimeoutMid, IDC_ARCWP_TIMEOUT_MID, 0.875, 0.125)
			NEXT_LINE

			STATIC_TEXT(TextExpCond, $STR_DISP_ARCWP_EXPCOND, -1, 0, 0.25)
			//Waypoint's condition.
			EDIT(ValueExpCond, IDC_ARCWP_EXPCOND, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextExpActiv, $STR_DISP_ARCWP_EXPACTIV, -1, 0, 0.25)
			//Waypoint's scripting command execution upon activation.
			EDIT_SCRIPT(ValueExpActiv, IDC_ARCWP_EXPACTIV, 0.25, 0.75)
			NEXT_LINE

			//Waypoint's showing mode.

			NEXT_LINE

			STATIC_TEXT(TextExpScript, $STR_DISP_ARCWP_SCRIPT, -1, 0, 0.25)
			//Waypoint's executed script upon activation.
			EDIT(ValueExpScript, IDC_ARCWP_SCRIPT, 0.25, 0.75)
			//Waypoint's showing mode.
			NEXT_LINE
			NEXT_LINE
			class Show: RscToolbox
			{
				idc = IDC_ARCWP_SHOW;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(1); h = __EVAL(4 * _ySpacing);

				strings[] =
				{
					$STR_DISP_ARCWP_SHOW_NEVER,
					$STR_DISP_ARCWP_SHOW_EASY,
					$STR_DISP_ARCWP_SHOW_ALWAYS
				};

				rows = 1;
				columns = 3;
			};

		END_BOX

		//Access this waypoint's special effects.
		LEFT_BUTTON(ButtonEffects, $STR_DISP_ARCWP_EFFECTS, IDC_ARCWP_EFFECTS, "", 0, 0, 0)
		//Confirm the waypoint settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};



//Mission editor Marker pop-up screen.
class RscDisplayArcadeMarker
{
	__EXEC( dialog_x = 0.5 - 83 * 0.5 * _xSpacing  );
	__EXEC( dialog_y = dialog_vertical_center - 38 * dialog_vertical_center * _ySpacing  );	
	__EXEC( dialog_w = 83 * _xSpacing);
	__EXEC( dialog_h = 38 * _ySpacing);
	DISPLAY(IDD_ARCADE_MARKER, dialog_x, dialog_y, dialog_w , dialog_h)
	
//	DISPLAY(IDD_ARCADE_MARKER, 0.2, 0.2, 0.6, 0.5)
	class controlsBackground
	{
		BACKGROUND(CA_Background, CA_Secondary_Background)
		TITLE_BACKGROUND()
	};
	class controls
	{
		delete Background;
		delete Title;
		
		TITLE(CA_Title, "", IDC_ARCMARK_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextName, $STR_DISP_ARCMARK_NAME, -1, 0, 0.382)
			//Marker's name.
			EDIT(ValueName, IDC_ARCMARK_NAME, 0.382, 0.618)
			NEXT_LINE
			NEXT_HALF_LINE
		//Marker's type.
			class Marker: RscToolbox
			{
				idc = IDC_ARCMARK_MARKER;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(1); h = __EVAL(4 * _ySpacing);

				strings[] =
				{
					$STR_DISP_ARCMARK_ICON,
					$STR_DISP_ARCMARK_RECT,
					$STR_DISP_ARCMARK_ELLIPSE
				};

				rows = 1;
				columns = 3;
			};

			NEXT_HALF_LINE
			NEXT_LINE

			STATIC_TEXT(TextColorName, $STR_DISP_ARCMARK_COLOR, -1, 0, 0.25)
			//Marker's color.
			COMBO(ValueColorName, IDC_ARCMARK_COLOR, 0.25, 0.25)

			STATIC_TEXT(TextType, "", IDC_ARCMARK_TYPE_TEXT, 0.5, 0.25)
			//Marker's icon type.
			COMBO(ValueIcon, IDC_ARCMARK_TYPE, 0.75, 0.25)
			//Marker's fill type.
			COMBO(ValueFill, IDC_ARCMARK_FILL, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextA, $STR_DISP_ARCMARK_A, -1, 0, 0.233)
			//Marker's width.
			EDIT(ValueA, IDC_ARCMARK_A, 0.233, 0.1)
			STATIC_TEXT(TextB, $STR_DISP_ARCMARK_B, -1, 0.333, 0.233)
			//Marker's height.
			EDIT(ValueB, IDC_ARCMARK_B, 0.566, 0.1)
			STATIC_TEXT(TextAngle, $STR_DISP_ARCMARK_ANGLE, -1, 0.666, 0.233)
			//Marker's angle.
			EDIT(ValueAngle, IDC_ARCMARK_ANGLE, 0.9, 0.1)
			NEXT_LINE

			STATIC_TEXT(TextText, $STR_DISP_ARCMARK_TEXT, -1, 0, 0.382)
			//Marker's text.
			EDIT(ValueText, IDC_ARCMARK_TEXT, 0.382, 0.618)

		END_BOX

		//Confirm market settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Trigger pop-up screen.
class RscDisplayArcadeSensor
{
	__EXEC( dialog_x = 0.5 - 75 * 0.5 * _xSpacing  );
	__EXEC( dialog_y = dialog_vertical_center - 82 * dialog_vertical_center * _ySpacing  );	
	__EXEC( dialog_w = 75 * _xSpacing);
	__EXEC( dialog_h = 82 * _ySpacing);
	DISPLAY(IDD_ARCADE_SENSOR, dialog_x, dialog_y, dialog_w , dialog_h)
	
	class controlsBackground
	{
		BACKGROUND(CA_Background, CA_Secondary_Background)
		TITLE_BACKGROUND()
	};
	class controls
	{
		delete Background;
		delete Title;
		
		TITLE(CA_Title, $STR_DISP_ARCSENS_TITLE, IDC_ARCSENS_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextA, $STR_DISP_ARCSENS_A, -1, 0, 0.25)
			//Trigger's width.
			EDIT(ValueA, IDC_ARCSENS_A, 0.25, 0.25)
			STATIC_TEXT(TextB, $STR_DISP_ARCSENS_B, -1, 0.5, 0.25)
			//Trigger's height.
			EDIT(ValueB, IDC_ARCSENS_B, 0.75, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextAngle, $STR_DISP_ARCSENS_ANGLE, -1, 0, 0.25)
			//Trigger's angle.
			EDIT(ValueAngle, IDC_ARCSENS_ANGLE, 0.25, 0.25)

			//Trigger's shape.
			class Rectangular: RscToolbox
			{
				idc = IDC_ARCSENS_RECT;
				x = LINE_X(0.5); 
				y = LINE_Y_TOOLBOX;
				h = __EVAL(4 * _ySpacing);
			};
			NEXT_LINE
			NEXT(0.025)

			STATIC_TEXT(TextActivation, $STR_DISP_ARCSENS_ACTIV, -1, 0.0, 0.26)
			//The trigger is activated by?
			COMBO(ValueActivation, IDC_ARCSENS_ACTIV, 0.25, 0.25)

			//Is the trigger repeating?
			class Repeating: RscToolbox
			{
				x = LINE_X(0.5); 				
				y = LINE_Y_TOOLBOX;
				h = __EVAL(4 * _ySpacing);
			};

		END_BOX

		BEGIN_BOX

			//The trigger detects the presence of?
			class Presence: RscToolbox
			{
				x = LINE_X(0);				 
				y = LINE_Y_TOOLBOX;
				h = __EVAL(12 * _ySpacing);
				w = LINE_W(1); 
				rows = 3;
				columns = 2;
			};
			NEXT_LINE
			NEXT_LINE

		END_BOX

		BEGIN_BOX

			//Does the trigger have timeout or countdown?
			class Interruptable: RscToolbox
			{
				x = LINE_X(0); 				
				y = LINE_Y_TOOLBOX;
				w = LINE_W(0.5); h = __EVAL(4 * _ySpacing);

				rows = 1;
				columns = 2;
			};
			NEXT_LINE
			STATIC_TEXT(TextTimeoutMin, $STR_DISP_ARCSENS_TIMEOUT_MIN, -1, 0 , 1/6)
			//Trigger's minimum timeout or countdown time.
			EDIT(ValueTimeoutMin, IDC_ARCSENS_TIMEOUT_MIN, 1/6, 1/6)
			STATIC_TEXT(TextTimeoutMax, $STR_DISP_ARCSENS_TIMEOUT_MAX, -1, 2/6, 1/6)
			//Trigger's maximum timeout or countdown time.
			EDIT(ValueTimeoutMax, IDC_ARCSENS_TIMEOUT_MAX, 3/6, 1/6)
			STATIC_TEXT(TextTimeoutMid, $STR_DISP_ARCSENS_TIMEOUT_MID, -1, 4/6, 1/6)
			//Trigger's medium timeout or countdown time.
			EDIT(ValueTimeoutMid, IDC_ARCSENS_TIMEOUT_MID, 5/6, 1/6)
			NEXT(0.03)

		END_BOX

		BEGIN_BOX

			STATIC_TEXT(TextType, $STR_DISP_ARCSENS_TYPE, -1, 0, 0.25)
			//Trigger's type.
			COMBO(ValueType, IDC_ARCSENS_TYPE, 0.25, 0.25)
			NEXT_LINE

			STATIC_TEXT(TextName, $STR_DISP_ARCSENS_NAME, -1, 0, 0.25)
			//Trigger's name.
			EDIT(ValueName, IDC_ARCSENS_NAME, 0.25, 0.25)
			STATIC_TEXT(TextText, $STR_DISP_ARCSENS_TEXT, -1, 0.5, 0.25)
			//Trigger's text.
			EDIT(ValueText, IDC_ARCSENS_TEXT, 0.75, 0.25)
			NEXT_LINE
			NEXT(0.025)

			STATIC_TEXT(TextExpCond, $STR_DISP_ARCSENS_EXPCOND, -1, 0, 0.25)
			//Trigger's activation condition.
			EDIT_SCRIPT(ValueExpCond, IDC_ARCSENS_EXPCOND, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextExpActiv, $STR_DISP_ARCSENS_EXPACTIV, -1, 0, 0.25)
			//Trigger's scripting commands upon activation.
			EDIT_SCRIPT(ValueExpActiv, IDC_ARCSENS_EXPACTIV, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextExpDesactiv, $STR_DISP_ARCSENS_EXPDESACTIV, -1, 0, 0.25)
			//Trigger's scripting commands upon deactivation.
			EDIT_SCRIPT(ValueExpDesactiv, IDC_ARCSENS_EXPDESACTIV, 0.25, 0.75)

		END_BOX

		//Access the trigger's special effects.
		LEFT_BUTTON(ButtonEffects, $STR_DISP_ARCSENS_EFFECTS, IDC_ARCSENS_EFFECTS, "", 0.2, 0, 0)
		//Confirm trigger settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Effects pop-up screen.
class RscDisplayArcadeEffects
{
	__EXEC( dialog_x = 0.5 - 75 * 0.5 * _xSpacing  );
	__EXEC( dialog_y = dialog_vertical_center - 82 * dialog_vertical_center * _ySpacing  );	
	__EXEC( dialog_w = 75 * _xSpacing);
	__EXEC( dialog_h = 82 * _ySpacing);
	DISPLAY(IDD_ARCADE_EFFECTS, dialog_x, dialog_y, dialog_w , dialog_h)

	class controlsBackground
	{
		BACKGROUND(CA_Background, CA_Secondary_Background)
		TITLE_BACKGROUND()
	};
	
	class controls
	{
		delete Background;
		delete Title;
		
		TITLE(CA_Title, $STR_DISP_ARCEFF_TITLE, -1)

		BEGIN_BOX

			//Activated script.
			EDIT_SCRIPT(Condition, IDC_ARCEFF_CONDITION, 0.118, 0.764)
			NEXT_LINE

			STATIC_TEXT(TextSound, $STR_DISP_ARCEFF_SOUND_ANON, -1, 0, 0.382)
			//Anonymous sound source.
			COMBO(ValueSound, IDC_ARCEFF_SOUND, 0.382, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextVoice, $STR_DISP_ARCEFF_VOICE, -1, 0, 0.382)
			//Voice sound source.
			COMBO(ValueVoice, IDC_ARCEFF_VOICE, 0.382, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextSoundEnv, $STR_DISP_ARCEFF_SOUND_ENV, -1, 0, 0.382)
			//Environmental sound source.
			COMBO(ValueSoundEnv, IDC_ARCEFF_SOUND_ENV, 0.382, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextSoundDet, $STR_DISP_ARCEFF_SOUND_DET, -1, 0, 0.382)
			//Trigger sound source.
			COMBO(ValueSoundDet, IDC_ARCEFF_SOUND_DET, 0.382, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextMusic, $STR_DISP_ARCEFF_TRACK, -1, 0, 0.382)
			//Music track.
			COMBO(ValueMusic, IDC_ARCEFF_MUSIC, 0.382, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextTitleType, $STR_DISP_ARCEFF_TITTYPE, -1, 0, 0.382)
			//Type of resource title.
			COMBO(ValueTitleType, IDC_ARCEFF_TITTYPE, 0.382, 0.5)
			NEXT_LINE

			STATIC_TEXT(TextTitleEffect, $STR_DISP_ARCEFF_TITEFF, -1, 0, 0.382)
			//Type of title effect.
			COMBO(ValueTitleEffect, IDC_ARCEFF_TITEFF, 0.382, 0.5)


			STATIC_TEXT(TextTitle, $STR_DISP_ARCEFF_TITTEXT, IDC_ARCEFF_TEXT_TITTEXT, 0, 0.382)
			//Type for title resource.
			COMBO(ValueTitleRes, IDC_ARCEFF_TITRES, 0.382, 0.5)
			//Type for title object.
			COMBO(ValueTitleObj, IDC_ARCEFF_TITOBJ, 0.382, 0.5)
			//Text for title text.
			NEXT_LINE
			EDIT(ValueTitleText, IDC_ARCEFF_TITTEXT, 0.382, 0.5)

			NEXT_LINE

		END_BOX

		//Confirm effect settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the previous screen.
		BUTTON_CANCEL(0)
	};
};

//Mission editor saving pop-up screen.
class RscDisplayTemplateSave
{
	__EXEC( dialog_x =  0.5 - 63 * 0.5 * _xSpacing  );
	__EXEC( dialog_y =  dialog_vertical_center - 21 * dialog_vertical_center * _ySpacing  );	
	__EXEC( dialog_w = 63 * _xSpacing);
	__EXEC( dialog_h = 21 * _ySpacing);
	DISPLAY(IDD_TEMPLATE_SAVE, dialog_x, dialog_y, dialog_w , dialog_h)
	class controlsBackground
	{
		BACKGROUND(CA_Background, CA_Secondary_Background)
		TITLE_BACKGROUND()
	};
	class controls
	{
		delete Background;
		delete Title;
		
		TITLE(CA_Title, $STR_DISP_TEMPL_SAVE, -1)

		BEGIN_BOX

			STATIC_TEXT(TextName, $STR_DISP_TEMPL_NAME, -1, 0, 0.382)
			//Mission name.
			EDIT(ValueName, IDC_TEMPL_NAME, 0.382, 0.618)
			NEXT_LINE

			STATIC_TEXT(TextMode, $STR_DISP_TEMPL_MODE, -1, 0, 0.382)
			//Export type.
			COMBO(ValueMode, IDC_TEMPL_MODE, 0.382, 0.618)

		END_BOX

		//Confirm and save.
		DEFAULT_BUTTON_OK(1)
		//Cancel save.
		BUTTON_CANCEL(0)
	};
};

//Mission editor loading pop-up screen.
class RscDisplayTemplateLoad
{
	__EXEC( dialog_x =  0.5 - 63 * 0.5 * _xSpacing  );
	__EXEC( dialog_y =  dialog_vertical_center - 21 * dialog_vertical_center * _ySpacing  );	
	__EXEC( dialog_w = 63 * _xSpacing);
	__EXEC( dialog_h = 21 * _ySpacing);
	DISPLAY(IDD_TEMPLATE_LOAD, dialog_x, dialog_y, dialog_w , dialog_h)

	class controlsBackground
	{
		BACKGROUND(CA_Background, CA_Secondary_Background)
		TITLE_BACKGROUND()
	};
	class controls
	{
		delete Background;
		delete Title;
		TITLE(CA_Title, $STR_DISP_TEMPL_LOAD, IDC_TEMPL_TITLE)

		BEGIN_BOX

			STATIC_TEXT(TextIsland, $STR_DISP_TEMPL_ISLAND, -1, 0, 0.382)
			//Select mission's map.
			COMBO(ValueIsland, IDC_TEMPL_ISLAND, 0.382, 0.618)
			NEXT_LINE

			STATIC_TEXT(TextName, $STR_DISP_TEMPL_NAME, -1, 0, 0.382)
			//Select mission's name.
			COMBO(ValueName, IDC_TEMPL_NAME, 0.382, 0.618)
			NEXT_LINE

		END_BOX

		//Confirm and load.
		DEFAULT_BUTTON_OK(1)
		//Cancel load.
		BUTTON_CANCEL(0)
	};
};

//Mission editor Intel pop-up screen.
class RscDisplayIntel
{
	__EXEC( dialog_x = 0.5 - 75 * 0.5 * _xSpacing  );
	__EXEC( dialog_y = dialog_vertical_center - 93 * dialog_vertical_center * _ySpacing  );	
	__EXEC( dialog_w = 75 * _xSpacing);
	__EXEC( dialog_h = 93 * _ySpacing);
	DISPLAY(IDD_INTEL, dialog_x, dialog_y, dialog_w , dialog_h)

	class controlsBackground
	{
		BACKGROUND(CA_Background, CA_Secondary_Background)
		TITLE_BACKGROUND()
	};
	class controls
	{
		delete Background;
		delete Title;
		delete ValueResistance;
		delete ValueFogForecast;
		delete ValueFog;
		
		TITLE(CA_Title, $STR_DISP_INTEL_TITLE, -1)

		BEGIN_BOX

			STATIC_TEXT(TextBriefingName, $STR_DISP_INTEL_NAME, -1, 0, 0.25)
			//Mission's name in the briefing screens.
			EDIT(ValueBriefingName, IDC_INTEL_BRIEFING_NAME, 0.25, 0.75)
			NEXT_LINE

			STATIC_TEXT(TextBriefingDescription, $STR_DISP_INTEL_DESC, -1, 0, 0.25)
			//Mission's description.
			EDIT(ValueBriefingDescription, IDC_INTEL_BRIEFING_DESC, 0.25, 0.75)
			NEXT_LINE
			NEXT_LINE
			STATIC_TEXT(TextDate, $STR_DISP_INTEL_DATE, -1, 0, 0.125)
			//Month.
			COMBO(ValueMonth, IDC_INTEL_MONTH, 0.125, 0.125)
			//Day.
			COMBO(ValueDay, IDC_INTEL_DAY, 0.25, 0.125)
			//Year
			class ValueYear: ValueDay
			{
				idc = IDC_INTEL_YEAR;
				//reason, why we can not use macro
				from = 1995;
				to = 2009;
				x = LINE_X(0.375);
			};
			STATIC_TEXT(TextTime, $STR_DISP_INTEL_TIME, -1, 0.625, 0.125)
			//Hour.
			COMBO(ValueHour, IDC_INTEL_HOUR, 0.75, 0.125)
			//Minute.
			COMBO(ValueMinute, IDC_INTEL_MINUTE, 0.875, 0.125)
			NEXT_LINE
			NEXT_LINE
			//Current weather conditions.
			STATIC_TEXT_LEFT(TextWeather, $STR_DISP_INTEL_EDIT_WEATHER, -1, 0.0, 0.3)
			NEXT_LINE	
			SLIDER(ValueWeather, IDC_INTEL_WEATHER, 0, 1)							
			NEXT_HALF_LINE
			class CA_Editor_Overcast1: RscPictureKeepAspect
			{
				x = LINE_X(0.02); 
				y = LINE_Y;
				w = __EVAL(4 * _ySpacing);	h = __EVAL(4 * _ySpacing);
				text = "\ca\ui\data\editor_bourka.paa";
				colorText[]= {0, 0, 0, 1};
			};
			class CA_Editor_Clear1: CA_Editor_Overcast1
			{
				x = LINE_X(0.9); 
				y = LINE_Y;
				text = "\ca\ui\data\editor_jasno.paa";
				colorText[]= {0, 0, 0, 1};				
			};			
			NEXT_HALF_LINE	
			NEXT_LINE			
			
			//Current fog conditions.
			STATIC_TEXT_LEFT(TextFog, $STR_DISP_INTEL_EDIT_FOG, -1, 0.0, 0.3)
			NEXT_LINE
			class CA_Editor_Slider1: RscPictureKeepAspect
			{
				x = LINE_X(0.05); 
				y = LINE_Y;
				w = 0.486; h = 0.021;
				colorText[]= {1, 1, 1, 0.6};
				text = "\ca\ui\data\slider_back.paa";
			};
			SLIDER(CA_ValueFog, IDC_INTEL_FOG, 0, 1)
			NEXT_LINE

			NEXT_LINE

			//Forecasted weather conditions.
			STATIC_TEXT_LEFT(TextForecasted, $STR_DISP_INTEL_EDIT_FORECAST, -1, 0.0, 0.3)
			NEXT_LINE
			SLIDER(ValueWeatherForecast, IDC_INTEL_WEATHER_FORECAST, 0, 1)
			NEXT_HALF_LINE
			class CA_Editor_Overcast2: CA_Editor_Overcast1
			{
				x = LINE_X(0.02); 
				y = LINE_Y;
				text = "\ca\ui\data\editor_bourka.paa";
				colorText[]= {0, 0, 0, 1};
			};	
			class CA_Editor_Clear2: CA_Editor_Overcast1
			{
				x = LINE_X(0.9); 
				y = LINE_Y;
				text = "\ca\ui\data\editor_jasno.paa";
				colorText[]= {0, 0, 0, 1};				
			};					
			

			NEXT_HALF_LINE
			NEXT_LINE
			//Forecasted fog conditions.
			STATIC_TEXT_LEFT(TextForecastedFog, $STR_DISP_INTEL_EDIT_FOGFORECAST, -1, 0.0, 0.3)
			NEXT_LINE

			class CA_Editor_Slider2: RscPictureKeepAspect
			{
				x = LINE_X(0.05); 
				y = LINE_Y;
				w = 0.486; h = 0.021;
				colorText[]= {1, 1, 1, 0.6};
				text = "\ca\ui\data\slider_back.paa";
			};						
			SLIDER(CA_ValueFogForecast, IDC_INTEL_FOG_FORECAST, 0, 1)
			NEXT_LINE
			NEXT_LINE
			STATIC_TEXT_LEFT(TextRestanceStance, $STR_DISP_INTEL_EDIT_GUERILLA, -1, 0.0, 0.4)
			NEXT_LINE
			
			class CA_ValueResistance: RscToolbox
			{
				idc = IDC_INTEL_RESISTANCE;
				x = LINE_X(0); y = LINE_Y;
				w = LINE_W(1); h = __EVAL(4 * _ySpacing);

				strings[] =
				{
					$STR_DISP_INTEL_NONE_FRIENDLY,
					$STR_DISP_INTEL_WEST_FRIENDLY,
					$STR_DISP_INTEL_EAST_FRIENDLY,
					$STR_DISP_INTEL_BOTH_FRIENDLY
				};

				rows = 1;
				columns = 4;
			};

			//Resistance stance to other sides.

		END_BOX

		//Confirm intel settings and exit.
		DEFAULT_BUTTON_OK(1)
		//Cancel back to the mission editor.
		BUTTON_CANCEL(0)
	};
};


class RscDisplaySelectProfile: RscStandardDisplay
{
	class controls
	{
		class TxtControls: RscText
		{
			text = $STR_CA_PROFILE_CONTROLS;
		};

		class TxtDifficulty: TxtControls
		{
			text = $STR_CA_DIFFICULTY;
		};
	};
};
