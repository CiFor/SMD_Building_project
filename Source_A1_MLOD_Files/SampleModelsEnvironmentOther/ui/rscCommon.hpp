#define CA_colordark 					{0, 0, 0, 1}
#define CA_buttoff 						{1, 1, 1, 0.7}
#define CA_button 						{1, 1, 1, 1}
#define CA_textoff 						{1, 1, 1, 0.7}
#define CA_texton 						{1, 1, 1, 1}
#define CA_Redtextoff 				{0.25, 0, 0, 0.7}
#define CA_Redtexton 					{0.7, 0, 0, 1}
/*
original color definitions
#define CA_UI_element_background 					{1, 1, 1, 0.7}
#define CA_UI_background 					{0.6, 0.6, 0.6, 0.4}
#define CA_UI_help_background 					{0.2, 0.1, 0.1, 0.7}
#define CA_UI_title_background	{0.24, 0.47, 0.07, 1}
#define CA_UI_green					{0.84,1,0.55,1}
*/

#define CA_UI_element_background 					{1, 1, 1, 0.8}
#define CA_UI_background 					{0.6, 0.6, 0.6, 0.4}
#define CA_UI_help_background 					{0.2, 0.1, 0.1, 0.7}
#define CA_UI_scrollbar_selection 	{1, 1, 1, 0.8}
#define CA_UI_title_background	{0.24, 0.47, 0.07, 1}
#define CA_UI_title_background_red	{0.47, 0.24, 0.07, 1}
#define CA_UI_title_background_blue	{0.07, 0.24, 0.47, 1}
//#define CA_UI_green						{1, 0.55, 0, 1}
#define CA_UI_green					{0.709,0.972,0.384,1}

#define CA_UI_grey					{0.4,0.4,0.4,1}
#define CA_UI_transparent					{1,1,1,0}

#define CA_UI_HUD				{0.71,0.85,0.46,1}
#define CA_UI_HUD_transparency				{1,1,1,0.55}
//#define CA_UI_HUD				{0.39,0.55,0.25,1}

#define CA_UI_EDITOR_background 					{0.9, 0.9, 0.9, 1}

#define CA_UI_button_over_sound {"\ca\ui\data\sound\mouse2", 0.09, 1}
#define CA_UI_button_down_sound {"\ca\ui\data\sound\new1", 0.09, 1}
#define CA_UI_button_click_sound {"\ca\ui\data\sound\mouse3", 0.07, 1}
#define CA_UI_button_escape_sound {"\ca\ui\data\sound\mouse1", 0.09, 1}
  
#define Color_WhiteDark 			{1, 1, 1, 0.5}
#define Color_White				{1, 1, 1, 1}
#define Color_Black 					{0, 0, 0, 1}
#define Color_Gray 						{1, 1, 1, 0.5}
#define Color_DarkRed 				{0.5, 0.1, 0, 0.5}
#define Color_Green 					{0.8, 0.9, 0.4, 1}
#define Color_Orange 					{0.9, 0.45, 0.1, 1}
#define Color_Red 					{0.9, 0.2, 0.2, 1}
#define Color_Blue 					{0.2, 0.2, 0.9, 1}

#define Color_MainBack 				{1, 1, 1, 0.9} //hlavni pozadi
#define Color_Back 						{0.1, 0.1, 0.1, 0.4} // okraj pro obrazek
#define Color_BackList 				{0.2, 0.2, 0.2, 0.2} //back v seznamu
#define Color_MainBackFull 		CA_UI_EDITOR_background //v editoru

#define ProcTextWhite 				"#(argb,8,8,3)color(1,1,1,1)"
#define ProcTextBlack 				"#(argb,8,8,3)color(0,0,0,1)"
#define ProcTextGray 					"#(argb,8,8,3)color(0.3,0.3,0.3,1)"
#define ProcTextRed 					"#(argb,8,8,3)color(1,0,0,1)"
#define ProcTextGreen 				"#(argb,8,8,3)color(0,1,0,1)"
#define ProcTextBlue 					"#(argb,8,8,3)color(0,0,1,1)"
#define ProcTextOrange 				"#(argb,8,8,3)color(1,0.5,0,1)"
#define ProcTextTransparent			"#(argb,8,8,3)color(0,0,0,0)"
#define TextSize_xsmall 			0.014 //11/768	//ToDo: Hazi chybu do reportu !!! (Float value set as string)
#define TextSize_IGUI_normal 		0.0234375 // 18 /768
#define TextSize_small 				0.0208333 //16/768
#define TextSize_normal 			0.02474 //19/768
#define TextSize_medium 			0.0286458 //23/768
#define TextSize_big 				0.0325521 //25/768

#define TextSizeXbox_normal 				0.033333 //16/768

#define SizeMapMarker  				32

#define Black 								0, 			0, 			0
#define Green 								0, 			0.6, 		0
#define Red 									0.7, 		0.1, 		0
#define Yellow 								0.8, 		0.6, 		0
#define White 								0.8, 		0.8, 		0.8
#define ShineGreen 						0.07, 	0.7, 		0.2
#define ShineRed 							1, 			0.2, 		0.2
#define ShineYellow 					1, 			1, 			0
#define ShineWhite 						1, 			1, 			1
#define Blue 									0.1, 		0.1, 		0.9

#define Gray1 								0, 			0, 			0
#define Gray2 								0.2,	 	0.2, 		0.2
#define Gray3 								0.5, 		0.5, 		0.5
#define Gray4 								0.6, 		0.6, 		0.6
#define Gray5 								0.8, 		0.8, 		0.8


#define	flag_west  "ca\ui\data\flag_bluefor_co.paa"
#define	flag_east  "ca\ui\data\flag_opfor_co.paa"
#define	flag_guer  "ca\ui\data\flag_indep_co.paa"
#define	flag_civl  "ca\ui\data\flag_civil_co.paa"

#define KEY_HINT(name, dik, text) class name {key = dik; hint = text;}

#define QT "
__EXEC( _xSpacing = 0.0075;  _ySpacing = 0.01;)


//Use: CA_OK_AND_CANCEL_BUTTONS( $STR_DISP_OK, $STR_CA_CANCEL,1)
#define	CA_OK_AND_CANCEL_BUTTONS(OK_TEXT, CANCEL_TEXT,OK_DEFAULT) \
		class Ok: CA_RscButton\
		{\
			idc = IDC_OK;\
			default = OK_DEFAULT;\
			y = 0.80;\
      		text = OK_TEXT;\
		};\
		class Cancel: CA_RscButton\
		{\
			idc = IDC_CANCEL;\
			y = 0.85;\
			text = CANCEL_TEXT;\
		};
				
class RscText
{
  h = 0.035;
  font = Zeppelin32;
  SizeEx = TextSize_small;
  colorText[] = CA_colordark;
};
class RscTextMainMenu: RscText
{
	sizeEx = TextSize_normal;
	style = ST_CENTER + ST_SHADOW;
	colorText[] = Color_White;
};

//Obsolete? Not used anywhere else.
/*class RscTextSmall: RscText
{
  font = Zeppelin32;
  SizeEx = TextSize_small;
};*/

//Obsolete? Not used anywhere else.
/*class RscTextMenu: RscText
{
  font = Zeppelin32;
  colorText[] = {1, 1, 1, 0.2};
};*/

class RscTree
{
  font = Zeppelin32;
  sizeEx = TextSize_small;
};

class RscTitle;
class RscPicture;
class RscPictureKeepAspect: RscPicture
{
	style = ST_PICTURE + ST_KEEP_ASPECT_RATIO;
};
class RscStructuredText
{
	access = ReadAndWrite;
	type = CT_STRUCTURED_TEXT;
	idc = -1;
	style = 0;
	h = 0.05;
	text = "";
	size = TextSize_small;
	colorText[] = Color_White;

	class Attributes
	{
		font = FontMAIN;
		color = "#ffffff";
		align = "center";
		shadow = true;
	};
};


class RscObject;

class RscActiveText
{
	h = 0.035;
	font = Zeppelin32;
	sizeEx = TextSize_normal;
	color[] = CA_colordark;
	colortext[] = CA_colordark;
	colorActive[] = {0.3, 0.4, 0, 1};
};

class RscButton
{
  // items common to all controls
  type = CT_BUTTON;
  style = ST_LEFT; // alignment of text
  x = 0;
  y = 0;
  w = __EVAL(13 * _xSpacing);
  h = __EVAL(4 * _ySpacing);
  
  // text properties
  font = Zeppelin32;
  sizeEx = TextSize_normal;
  colorText[] = CA_colordark; // color of text if control is enabled
  colorDisabled[] = CA_UI_grey;//CA_UI_green; // color of text if control is disabled

  // background properties
  colorBackground[] = CA_button;
  colorBackgroundActive[] = CA_UI_green;
  colorBackgroundDisabled[] = CA_UI_element_background;
  offsetX = 0.003; // distance of backgroud from shadow 
  offsetY = 0.003;
  offsetPressedX = 0.002; // distance of backgroud from shadow when button is pressed
  offsetPressedY = 0.002;


//  offsetPressedX = "1.1/640"; // distance of backgroud from shadow when button is pressed
//  offsetPressedY = "1.1/480";
  colorFocused[] = CA_UI_green; // color of the rectangle around background when focused
  
  // shadow properties    
  colorShadow[] = Color_Black;

  // border properties
  colorBorder[] = Color_Black;
  borderSize = 0.00; // when negative, the border is on the right side of background

  // sounds
  
  soundEnter[] = CA_UI_button_over_sound;
  soundPush[] = CA_UI_button_down_sound;
  soundClick[] = CA_UI_button_click_sound;
  soundEscape[] = CA_UI_button_escape_sound;
};


class RscXKeyShadow 
{
	style = 0;
	h = 0.06;
	size = TextSizeXbox_normal;
	class Attributes
	{
		font = Zeppelin32;
		color = "#FFFFF";
		align = "left";
	};
	class AttributesImage
	{
		color = "#ffffff";
	};
};
class RscButton_small: RscButton
{
	w = __EVAL(13 * _xSpacing);
	h = __EVAL(3 * _ySpacing);
	sizeEx = TextSize_small;
};

class RscButtonTextOnly: RscButton
{
		colorBackground[] = CA_UI_transparent;
		colorBackgroundActive[] = CA_UI_transparent;
		colorBackgroundDisabled[] = CA_UI_transparent;
    	colorFocused[] = CA_UI_transparent;
    	colorShadow[]  = CA_UI_transparent;
    	borderSize = 0.00; 	
};
class RscProgress
{
			x = 0.0; 	
			y = __EVAL(91 * _ySpacing);
			w = 1; 
			h = __EVAL(8 * _ySpacing);
	
			colorFrame[] = {0, 0, 0, 0};
			colorBar[] = {1, 1, 1, 0.3};
};
class RscProgressBackground: RscPicture
{
	x = 0.0; 	
	y = __EVAL(91 * _ySpacing);
	w = 1; 
	h = __EVAL(8 * _ySpacing);
	text ="\ca\ui\data\ui_gradient_title_gs.paa";
	colorText[] = {0, 0, 0, 0.4};
};
//Small text on the loading screens
class RscLoadingText: RscText
{
	style = ST_LEFT + ST_SHADOW;
	x = __EVAL(7 * _xSpacing); //93
	y = __EVAL(94 * _ySpacing); // 93
	w = __EVAL(40 * _xSpacing);
	h = __EVAL(3 * _ySpacing);
	sizeEx = TextSize_normal;
	colorText[] = Color_White;
};

class RscProgressNotFreeze
{
	idc = -1;
	access = ReadOnlyVerified;
	type = CT_ANIMATED_TEXTURE;      
	style = 0;           			
	x = __EVAL(3 * _xSpacing);
	y = __EVAL(93 * _ySpacing);
	w = __EVAL(4 * _xSpacing);
	h = __EVAL(4 * _ySpacing);
	texture = "\ca\ui\data\ui_notfreeze_ca.01.paa";		
};

class RscListBox
{
//	onMouseButtonDblClick = " [_this] execVM ""\ca\ui\scripts\ShowNotWorkingListBox.sqf""";
	style = LB_TEXTURES;
	font = Zeppelin32;
	sizeEx = TextSize_small;
	color[] = {1, 1, 1, 1};
	colorText[] = {0, 0, 0, 1};
	colorScrollbar[] = {1, 1, 1, 1};
	colorSelect[] = {0, 0, 0, 1};  //First color of selected Text
	colorSelect2[] = {0, 0, 0, 1};  //Second color of selected Text
	colorSelectBackground[] = CA_UI_scrollbar_selection;  // Normal // Grey //First color of selected Backgrnd
	colorSelectBackground2[] = CA_UI_green;  //Active // Green //Second color of selected Backgrnd
	period = 0; //No blinking
	colorBackground[] = {0, 0, 0, 1};
};

class RscEdit
{
	font = Zeppelin32;
	sizeEx = TextSize_small;
	colorBackground[] = {1, 1, 1, 0};
	colorText[] = {0, 0, 0, 1};
	colorSelection[] = {0.3, 0.4, 0, 0.5};
};

class RscSlider
{
	h = 0.025;
	color[] = {0, 0, 0, 1};
	colorActive[] = {0, 0, 0, 1};
};

class RscStandardDisplay
{
	movingEnable = true;
	enableSimulation = true;
	enableDisplay = true;

	class controlsBackground
	{
		class Background1: RscText
		{
			w = 0; h = 0;
			colorBackground[] = {0, 0, 0, 0};
		};
	};
};

class RscFrame
{
	type = CT_STATIC;
	idc = -1;
	style = ST_FRAME;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = {1,1,1,1};
  font = Zeppelin32;
	sizeEx = 0.02;
	text = "";
};
class RscBackground
{
	type = CT_STATIC;
	IDC = -1;
	style = 512;
	x=0.0;
	y=0.0;
	w=1.0;
	h=1.0;
	text="";
	ColorBackground[]={0.48,0.50,0.35,1};
	ColorText[]={0.1,0.1,0.1,1};
	font="Zeppelin32";
	SizeEx = 1;
};
class RscHTML
{
	colorText[] = {1, 1, 1, 1};
	colorLink[] = {0.05, 0.2, 0.05, 1};
	colorBold[] = {0, 0, 0, 1};
	//colorLink[] = {0.22, 0.15, 0.15, 1};
	colorLinkActive[] = {0, 0, 0.2, 1};

  prevPage = "\ca\ui\data\arrow_left_ca.paa";
  nextPage = "\ca\ui\data\arrow_right_ca.paa";

	class H1
	{
		font = Zeppelin32;
		fontBold = Zeppelin33;
		sizeEx = TextSize_normal;
	};

	class H2
	{
		font = Zeppelin32;
		fontBold = Zeppelin33;
		sizeEx = TextSize_medium;
	};

	class H3
	{
		font = Zeppelin32;
		fontBold = Zeppelin33;
		sizeEx = TextSize_medium;
	};

	class H4
	{
		font = Zeppelin33Italic;
		fontBold = Zeppelin33;
		sizeEx = TextSize_small;
	};

	class H5
	{
		font = Zeppelin32;
		fontBold = Zeppelin33;
		sizeEx = TextSize_small;
	};

	class H6
	{
		font = Zeppelin32;
		fontBold = Zeppelin33;
		sizeEx = TextSize_small;
	};

	class P
	{
		font = Zeppelin32;
		fontBold = Zeppelin33;
		sizeEx = TextSize_small;
	};
};

class RscMapControl
{
	colorSea[] = {0.56, 0.8, 0.98, 0.5};
	colorForest[] = {0.6, 0.8, 0.2, 0.5};
  	colorRocks[] = {0.6, 0.45, 0.27, 0.4};
	colorCountlines[] = {0.7, 0.55, 0.3, 0.6};
//	colorCountlines[] = {0.65, 0.45, 0.27, 0.5};
	colorCountlinesWater[] = {0, 0.53, 1, 0.5};
	colorForestBorder[] = {0.4, 0.8, 0, 1};
  	colorRocksBorder[] = {0.6, 0.45, 0.27, 0.4};
	colorNames[] = {0, 0, 0, 1};
	colorInactive[] = {1, 1, 1, 0.5};



	fontLabel = Zeppelin32;
	sizeExLabel = TextSize_medium;
	fontGrid = Zeppelin32;
	sizeExGrid = TextSize_medium;
	fontUnits = Zeppelin32;
	sizeExUnits = TextSize_medium;
	fontNames = Zeppelin32;
	sizeExNames = 0.056; //Double the medium size
	fontInfo = Zeppelin32;
	sizeExInfo = TextSize_medium;
	fontLevel = Zeppelin32;
	sizeExLevel = TextSize_medium;

	text = "\ca\ui\data\map_background2_co.paa"; //"\ca\ui\data\map_background_co.paa";

	class Legend
	{
		x = 0.729;
		y = 0.05;
		w = 0.237;
		h = 0.127;
		
		font = Zeppelin32;
		sizeEx = TextSize_small;
		
		colorBackground[] = {0.906, 0.901, 0.88, 0.8};
		color[] = {0, 0, 0, 1};
	};
	class Bunker
	{
		icon = "\ca\ui\data\map_bunker_ca.paa";
		size = 14;
    		importance = 1.5 * 14 * 0.05; // limit for map scale
    		coefMin = 0.25;
    		coefMax = 4;
	};

	class Bush
	{
		icon = "\ca\ui\data\map_bush_ca.paa";
		color[] = {0.55, 0.64, 0.43, 1};
		size = 14;
    		importance = 0.2 * 14 * 0.05;
    		coefMin = 0.25;
    		coefMax = 4;
	};

	class BusStop
	{
		icon = "\ca\ui\data\map_busstop_ca.paa";	
		color[] = {0, 0, 1, 1};
//		color[] = {0.78, 0, 0.05, 1};
		size = 10;
    		importance = 1 * 10 * 0.05;
    		coefMin = 0.25;
    		coefMax = 4;
	};
	class Command
	{
		icon = ProcTextWhite;
		color[] = {0, 0.9, 0, 1};
		size = 18;
		importance = 1; // not used
		coefMin = 1; // not used
		coefMax = 1; // not used
	};

	class Cross
	{
		icon = "\ca\ui\data\map_cross_ca.paa";
		size = 16;
    		importance = 0.7 * 16 * 0.05;
    		coefMin = 0.25;
    		coefMax = 4;
	};

	class Fortress
	{
		icon = "\ca\ui\data\map_bunker_ca.paa";
		size = 16;
    		importance = 2 * 16 * 0.05;
    		coefMin = 0.25;
    		coefMax = 4;
	};

	class Fuelstation
	{
		icon = "\ca\ui\data\map_fuelstation_ca.paa";
		size = 16;
    		importance = 2 * 16 * 0.05;
    		coefMin = 0.75;
    		coefMax = 4;
	};

	class Fountain
	{
		icon = "\ca\ui\data\map_fountain_ca.paa";
		color[] = {0, 0.35, 0.7, 1};
		size = 12;
    		importance = 1 * 12 * 0.05;
    		coefMin = 0.25;
    		coefMax = 4;
	};

	class Hospital
	{
		icon = "\ca\ui\data\map_hospital_ca.paa";
		color[] = {0.78, 0, 0.05, 1};
		size = 16;
    		importance = 2 * 16 * 0.05;
    		coefMin = 0.5;
    		coefMax = 4;
	};

	class Chapel
	{
		icon = "\ca\ui\data\map_chapel_ca.paa";
		size = 16;
    		importance = 1 * 16 * 0.05;
		coefMin = 0.9;
    		coefMax = 4;
	};

	class Church
	{
		icon = "\ca\ui\data\map_church_ca.paa";
		size = 16;
    		importance = 2 * 16 * 0.05;
    		coefMin = 0.9;
    		coefMax = 4;
	};

	class Lighthouse
	{
		icon = "\ca\ui\data\map_lighthouse_ca.paa";
		color[] = {0.78, 0, 0.05, 1};
		size = 20;
    		importance = 3 * 16 * 0.05;
    		coefMin = 0.9;
    		coefMax = 4;
	};

	class Quay
	{
		icon = "\ca\ui\data\map_quay_ca.paa";
		size = 16;
    		importance = 2 * 16 * 0.05;
    		coefMin = 0.5;
    		coefMax = 4;
	};

	class Rock
	{
		icon = "\ca\ui\data\map_rock_ca.paa";
		size = 12;
    		importance = 0.5 * 12 * 0.05;
    		coefMin = 0.25;
    		coefMax = 4;
	};

  	class Ruin
 	{
		icon = "\ca\ui\data\map_ruin_ca.paa";
		color[] = {0.78, 0, 0.05, 1};
		size=16;
    		importance = 1.2 * 16 * 0.05;
    		coefMin = 1;
    		coefMax = 4;
	};

	class SmallTree
	{
		icon = "\ca\ui\data\map_smalltree_ca.paa";
		color[] = {0.55, 0.64, 0.43, 1};
		size = 12;
    		importance = 0.6 * 12 * 0.05;
    		coefMin = 0.25;
    		coefMax = 4;
	};

  	class Stack
	{
		icon = "\ca\ui\data\map_stack_ca.paa";
    		size = 20;
    		importance = 2 * 16 * 0.05;
    		coefMin = 0.9;
    		coefMax = 4;
  	};

	class Tree
	{
		icon = "\ca\ui\data\map_tree_ca.paa";
		color[] = {0.55, 0.64, 0.43, 1};
		size = 12;
    		importance = 0.9 * 16 * 0.05;
    		coefMin = 0.25;
    		coefMax = 4;
	};

  	class Tourism
  	{
		icon = "\ca\ui\data\map_tourism_ca.paa";
		color[] = {0.78, 0, 0.05, 1};
    		size = 16;
    		importance = 1 * 16 * 0.05;
    		coefMin = 0.7;
    		coefMax = 4;
  	};

	class Transmitter
	{
		icon = "\ca\ui\data\map_transmitter_ca.paa";
    		size = 20;
    		importance = 2 * 16 * 0.05;
    		coefMin = 0.9;
    		coefMax = 4;
  	};

	class ViewTower
	{
		icon = "\ca\ui\data\map_viewtower_ca.paa";
		size = 16;
    		importance = 2.5 * 16 * 0.05;
    		coefMin = 0.5;
    		coefMax = 4;
	};

  	class Watertower
	{
		icon = "\ca\ui\data\map_watertower_ca.paa";
		color[] = {0, 0.35, 0.7, 1};
		size=32;
    		importance = 1.2 * 16 * 0.05;
    		coefMin = 0.9;
    		coefMax = 4;
  	};

	class Waypoint
	{
		icon = "\ca\ui\data\map_waypoint_ca.paa";
	};

	class WaypointCompleted
	{
		icon = "\ca\ui\data\map_waypoint_completed_ca.paa";
	};
};


class RscMap
{
	access = ReadAndWrite;

	class controls
	{
		class Map: RscMapControl
		{
			moveOnEdges = false;
			x = 0; y = 0;
			w = 0.83; h = 1;
		};
	};
};

class RscCompass: RscObject
{
	model = "\ca\ui\compass.p3d";
	//Unit vector
	direction[] = {0, 0.5, 0.5};
	up[] = {0, 1, 0};
	positionBack[] = {0, -0.02, 0.075};
	scale = 0.22;
};

class RscWatch: RscObject
{
  model = "\ca\ui\watch.p3d";
};

//In-game GPS minimap
class RscMiniMap
{
	class controls 
	{
		class MiniMap: RscMapControl 
		{
			IDC = IDC_MINIMAP;
			ShowCountourInterval = false;
			x = 0.287;
			y = 0.214;
			w = 0.430;
			h = 0.568;
		};
		class CA_MinimapFrame: RscPicture
		{
			x = 0.199; 
			y = 0.098;
			w = 0.643;
			h = 0.853;
			text = "\ca\ui\data\ui_gps_ca.paa";			
		}; 
	};
};

//In-game GPS minimap small
class RscMiniMapSmall: RscMiniMap 
{
	class controls 
	{
		class MiniMap: RscMapControl 
		{
			IDC = IDC_MINIMAP;
			ShowCountourInterval = false;
			x = 0.034;
			y = 0.254;
			w = 0.196;
			h = 0.262;
		};
		class CA_MinimapFrame: RscPicture
		{
			x = -0.006; 
			y = 0.202;
			w = 0.294;
			h = 0.388;
			text = "\ca\ui\data\ui_gps_ca.paa";
		}; 
	};
};

class RscObjectives
{
  done = "\ca\ui\data\objective_complete_ca.paa";
  failed = "\ca\ui\data\objective_incomplete_ca.paa";
  active = "\ca\ui\data\objective_active_ca.paa";
};

class CA_Mainback: RscPicture
{
	x = 0.35; y = 0.8;
	w = 0.3; h = 0.2;
	//test
	text ="\ca\ui\data\ui_gradient_start_gs.paa";
	colorText[]= {1, 1, 1, 0.9}; //{0.7, 0.7, 0.7, 0.8};
};

class CA_Mainback_2: CA_Mainback
{
	x = 0.35; y = 0.8;
	w = 0.3; h = 0.2;
	//test
	text = "\ca\ui\data\ui_gradient_middle_gs.paa";
};
class CA_Mainback_3: CA_Mainback
{
	x = 0.35; y = 0.8;
	w = 0.3; h = 0.2;
	text = "\ca\ui\data\ui_gradient_end_gs.paa";
};
class CA_Back: CA_Mainback
{
	x = 0.29; y = 0.38;
	w = 0.56; h = 0.57;
	text ="\ca\ui\data\ui_gradient_reverse_gs.paa";
};
class CA_Title_Back: CA_Mainback
{
	x = 0.29; y = 0.38;
	w = 0.56; h = 0.57;
	text ="\ca\ui\data\ui_gradient_title_gs.paa";
	colorText[] =  CA_UI_title_background;
};
class CA_Back1: CA_Back
{
	x = 0.30; y = 0.43;
	w = 0.26; h = 0.22;
	colorText[] = Color_Back;
	//colorbackground[] = Color_Back;
};

class CA_Back2: CA_Back
{
	x = 0.565; y = 0.43;
	w = 0.27; h = 0.50;
  colorText[] = Color_BackList;
	//colorbackground[] = {0, 0, 0, 0.5};
};

class CA_Back3: CA_Back
{
	x = 0.57; y = 0.43;
	w = 0.27; h = 0.50;
	colorText[] = Color_BackList;
};
class CA_Black_Back: CA_Mainback
{
	x = -1; y = -1;
	w = 3; h = 3;
	text = ProcTextBlack; 
	colorText[] = Color_Black;
	color[] = Color_Black;
	colorBackground[] = Color_Black;
};
class CA_Title: RscText
{
	x = 0.30; y = 0.39;
	w = 0.4; h = 0.05;
	style = ST_LEFT;
	font = Zeppelin32;
	sizeEx = TextSize_medium;
	colorText[]= {0, 0, 0, 1};
};
// Original logo definition
class CA_Logo: RscPictureKeepAspect
{
	idc = 1220;
	x = 0.638; y = 0.333;
	w = 0.25; h = 0.08;
	text = "\ca\ui\data\logo_white_all_ca.paa";
};


class CA_Logo_Small: CA_Logo
{
	w = 0.2; h = 0.0666;
};

class CA_GameSpy_logo: RscPictureKeepAspect
{
	x = 0.55; y = 0.333;
	w = 0.15; h = 0.05;
	text = "\ca\ui\data\gamespy_logo.paa";
};

class CA_RscButton: RscButton
{
	idc = -1;
	default = false;
	x = __EVAL(86 * _ySpacing); 
	y = 0.8;
	w = __EVAL(15 * _ySpacing); 
	h =  __EVAL(4 * _ySpacing);
	borderSize =  __EVAL(1 * _ySpacing);
	color[] = {0, 0, 0, 0};
	colorActive[] = {0, 0, 0, 0};
};

class CA_RscButton_dialog: CA_RscButton
{
	x = __EVAL(84 * _ySpacing);
	y = 0.85;
	w = __EVAL(19.7 * _xSpacing);
	borderSize =  __EVAL(-1 * _ySpacing); // when negative, the border is on the right side of background

};

class CA_Ok: RscActiveText
{
	idc = -1;
	style = ST_PICTURE;
	default = false;
	x = 0.85; y = 0.8;
	w = 0.15; h = 0.035;
	text = "#(argb,8,8,3)color(0,0,0,0)";
	color[] = {0, 0, 0, 0};
	colorActive[] = {0, 0, 0, 0};
};


class CA_Ok_image: RscText
{
	idc = -1;
	x = 0.86; y = 0.8;
	w = 0.14; h = 0.04;
	text = "#(argb,8,8,3)color(1,1,1,0.9)";
	style = ST_PICTURE;
	colortext[] = {1, 1, 1, 0.8};
};

class CA_Ok_image2: RscText
{
	idc = -1;
	x = 0.85; y = 0.8;
	w = 0.010; h = 0.04;
	text = "#(argb,8,8,3)color(1,1,1,0.9)";
	style = ST_PICTURE;
	colortext[] = {0, 0, 0, 0.8};
};

class CA_Ok_text: RscText
{
	sizeEx = TextSize_normal;
  idc = -1;
	x = 0.86; y = 0.8;
	w = 0.14; h = 0.04;
	style = ST_LEFT;
	colortext[] = {0, 0, 0, 0.8};
};

class RscCombo
{
	h = 0.035;
					
	colorSelect[] = Color_Black;
	colorText[] = Color_Black;
	colorBackground[] = Color_White;
	colorSelectBackground[] = CA_UI_green; 
	colorScrollbar[] = Color_Black;	
				
  	
	font = Zeppelin32;
	sizeEx = TextSize_small;
};


class CA_Table_back: RscPicture
{
	x = 0.20; y = 0.25;
	w = 0.4; h = 0.68;
	text = "\ca\ui\textures\g_black2grey.paa";
	colortext[] = {1, 1, 1, 0.8};
};

class CA_UpTitle: RscTitle
{
	x = 0.01; y = 0.105;
	w = 0.5; h = 0.05;
	style = "ST_LEFT";
	colortext[] = {1, 1, 1, 1};
};

class CA_BoxLeft: RscPicture
{
	x = 0.00; y = 0.1;
	w = 1; h = 0.08;
	text = "\ca\ui\textures\white_basic.paa";
};

// cerny ramecek s bilou vyplni

class BB_left: Rsctext
{
	x = 0.05; y = 0.255;
	w = 0.005; h = 0.5;
	colorbackground[] = {0, 0, 0, 0.5};
};

class BB_right: BB_left
{
	x = 0.944;
};

class BB_down: BB_left
{
	y = 0.755;
	w = 0.9; h = 0.005;
};

class BB_up: BB_down
{
	y = 0.2495;
	w = 0.90;
};

class BB_Back: RscPicture
{
	x = 0.055; y = 0.255;
	w = 0.89; h = 0.5;
	colortext[] = {1, 1, 1, 0.5};
	text = "\ca\ui\textures\white_basic.paa";
};

class Back_UserTitle: RscPicture
{
	x = 0.05; y = 0.2;
	w = 0.27; h = 0.065;
	colortext[] = {1, 1, 1, 0.8};
	text = "\ca\ui\textures\title_up.paa";
};

class Table_back_black: RscPicture
{
	x = 0.20; y = 0.25;
	w = 0.4; h = 0.68;
	text = "\ca\ui\textures\g_black2grey.paa";
	colortext[] = {1, 1, 1, 0.8};
};

class Table_back_white: CA_Ok_image
{
	x = 0.21; y = 0.26;
	w = 0.38; h = 0.66;
	colortext[] = {1, 1, 1, 0.9};
};

class RscToolbox
{
	colorText[] = Color_Black;
	color[] = Color_Black;
	colorTextSelect[] = Color_Black;
	colorSelect[] = Color_Black;
	colorTextDisable[] = CA_UI_grey;
	colorDisable[] = CA_UI_grey;
	font = Zeppelin32;
	sizeEx = TextSize_small;
};
