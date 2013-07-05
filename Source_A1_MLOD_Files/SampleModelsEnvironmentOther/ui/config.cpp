class CfgPatches
{
	class CAUI
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {CAFonts};
	};
};

//Outsources UI definitions.
#include "resincl.hpp"
#include "commonDefs.hpp"
#include "rscCommon.hpp"
#include "rscScreen.hpp"
#include "rscDisplayMain.hpp"
#include "cfgUI.hpp" 
#include "rscIGUI.hpp"
#include "cfgSkill.hpp"
#include "rscMP.hpp"
#include "rscEditor.hpp"
#include "rscWizard.hpp"
#include "rscDialog.hpp"
#include "cfgLang.hpp"

#ifdef _STRATEGY_MAP_TWEAK
#include "rscStrategyMap.hpp"  
#endif



class CfgCoreData
{
  forceArrowModel = "ca\ui\force.p3d";
};

class CfgNonAIVehicles
{
	class EditCursor
	{
		model = "\ca\ui\cursor.p3d";
	};

	class Camera
	{
		crossHairs = "\ca\ui\data\krizek.paa";
	};
};

class CfgVehicleIcons
{
  iconObject = "\ca\ui\data\iconobject_ca.paa";
  iconLogic = "\ca\ui\data\iconlogic_ca.paa";
  iconVehicle = "\ca\ui\data\iconvehicle_ca.paa";
  iconCar = "\ca\ui\data\iconcar_ca.paa";
  iconMotorcycle = "\ca\ui\data\iconcar_ca.paa";
  iconTank = "\ca\ui\data\icontank_ca.paa";
  iconAPC = "\ca\ui\data\iconapc_ca.paa";
  iconMan = "\ca\ui\data\iconman_ca.paa";
  iconAir = "\ca\ui\data\iconhelicopter_ca.paa";
  iconHelicopter = "\ca\ui\data\iconhelicopter_ca.paa";
  iconPlane = "\ca\ui\data\iconplane_ca.paa";
  iconShip = "\ca\ui\data\iconship_ca.paa";
  iconParachute = "\ca\ui\data\iconparachute_ca.paa";
  iconStaticObject = "\ca\ui\data\iconobject_ca.paa";
  iconThing = "\ca\ui\data\iconobject_ca.paa";
  iconLaserTarget = "\ca\ui\data\iconobject_ca.paa";
  iconPaperCar = "\ca\ui\data\iconpapercar_ca.paa";
  pictureLogic = "\ca\ui\data\picturelogic_ca.paa";
  pictureParachute = "\ca\ui\data\pictureparachute_ca.paa";
  pictureLaserTarget = "\ca\ui\data\picturelogic_ca.paa";
  picturePaperCar = "\ca\ui\data\picturepapercar_ca.paa";
  pictureStaticObject = "\ca\ui\data\picturelogic_ca.paa";
  pictureThing = "\ca\ui\data\picturelogic_ca.paa";
};

class CfgMarkers
{
	class Flag
	{
		name = $STR_CFG_MARKERS_FLAG;
		icon = "\ca\ui\data\marker_objective_ca.paa";
		color[] = {1, 0, 0, 1};
		size = 32;
	};

	class Flag1
	{
		name = $STR_CFG_MARKERS_FLAG1;
		icon = "\ca\ui\data\marker_waypoint_ca.paa";
		color[] = {1, 0, 0, 1};
		size = 32;
	};

	class Dot
	{
		name = $STR_CFG_MARKERS_DOT;
		icon = "\ca\ui\data\marker_dot_ca.paa";
		color[] = {1, 0, 0, 1};
		size = 32;
	};

	class Destroy
	{
		name = $STR_CFG_MARKERS_DESTROY;
		icon = "\ca\ui\data\marker_destroy_ca.paa";
		color[] = {1, 0, 0, 1};
		size = 32;
	};

	class Start
	{
		name = $STR_CFG_MARKERS_START;
		icon = "\ca\ui\data\marker_start_ca.paa";
		color[] = {0, 1, 0, 1};
		size = 32;
	};

	class End
	{
		name = $STR_CFG_MARKERS_END;
		icon = "\ca\ui\data\marker_goal_ca.paa";
		color[] = {0, 0, 0, 1};
		size = 32;
	};

	class Warning
	{
		name = $STR_CFG_MARKERS_WARNING;
		icon = "\ca\ui\data\marker_exclamation_ca.paa";
		color[] = {0, 0, 0, 1};
		size = 32;
	};

	class Join
	{
		name = $STR_CFG_MARKERS_JOIN;
		icon = "\ca\ui\data\marker_join_ca.paa";
		color[] = {0, 0, 0, 1};
		size = 32;
	};

	class Pickup
	{
		name = $STR_CFG_MARKERS_PICKUP;
		icon = "\ca\ui\data\marker_pickup_ca.paa";
		color[] = {0, 0, 0, 1};
		size = 32;
	};

	class Unknown
	{
		name = $STR_CFG_MARKERS_UNKNOWN;
		icon = "\ca\ui\data\marker_question_ca.paa";
		color[] = {0, 0, 0, 1};
		size = 32;
	};

	class Marker
	{
		name = $STR_CFG_MARKERS_MARKER;
		icon = "\ca\ui\data\marker_x_ca.paa";
		color[] = {0, 0, 0, 1};
		size = 32;
	};

	class Arrow
	{
		name = $STR_CFG_MARKERS_ARROW;
		icon = "\ca\ui\data\marker_sipka_ca.paa";
		color[] = {1, 0, 0, 1};
		size = 32;
	};

	class Empty
	{
		name = $STR_CFG_MARKERS_EMPTY;
		icon = "\ca\ui\data\marker_empty_ca.paa";
		color[] = {0, 0, 0.2, 1};
		size = 0;
	};
	class Select
	{
		name = $STR_CFG_MARKERS_EMPTY;
		icon = "\ca\ui\data\map_player_ca.paa";
		color[] = {1, 0, 0, 1};
		size = 32;
	};
};

class CfgMarkerColors
{
	class Default
	{
		name = $STR_CFG_MARKERCOL_DEFAULT;
		color[] = {0, 0, 0, 1};
	};

	class ColorBlack
	{
		name = $STR_CFG_MARKERCOL_BLACK;
		color[] = {0, 0, 0, 1};
	};

	class ColorRed
	{
		name = $STR_CFG_MARKERCOL_RED;
		color[] = {1, 0, 0, 1};
	};

	class ColorRedAlpha
	{
		name = $STR_CFG_MARKERCOL_REDALPHA;
		color[] = {1, 0, 0, 0.9};
	};

	class ColorGreen
	{
		name = $STR_CFG_MARKERCOL_GREEN;
		color[] = {0, 1, 0, 1};
	};

	class ColorGreenAlpha
	{
		name = $STR_CFG_MARKERCOL_GREENALPHA;
		color[] = {0, 1, 0, 0.9};
	};

	class ColorBlue
	{
		name = $STR_CFG_MARKERCOL_BLUE;
		color[] = {0, 0, 1, 1};
	};

	class ColorYellow
	{
		name = $STR_CFG_MARKERCOL_YELLOW;
		color[] = {1, 1, 0, 1};
	};

	class ColorWhite
	{
		name = $STR_CFG_MARKERCOL_WHITE;
		color[] = {1, 1, 1, 1};
	};
};

class CfgMarkerBrushes
{
	class Solid
	{
		name = $STR_CFG_MARKERBR_SOLID;
		texture = "";
	};

	class Horizontal
	{
		name = $STR_CFG_MARKERBR_HORIZONTAL;
		texture = "\ca\ui\data\marker_brush_horizontal_ca.paa";
	};

	class Vertical
	{
		name = $STR_CFG_MARKERBR_VERTICAL;
		texture = "\ca\ui\data\marker_brush_vertical_ca.paa";
	};

	class Grid
	{
		name = $STR_CFG_MARKERBR_GRID;
		texture = "\ca\ui\data\marker_brush_grid_ca.paa";
	};

	class FDiagonal
	{
		name = $STR_CFG_MARKERBR_FDIAGONAL;
		texture = "\ca\ui\data\marker_brush_bdiagonal_ca.paa"; //TODO: MAKE TEXTURE FDIAGONAL
	};

	class BDiagonal
	{
		name = $STR_CFG_MARKERBR_BDIAGONAL;
		texture = "\ca\ui\data\marker_brush_bdiagonal_ca.paa";
	};

	class DiagGrid
	{
		name = $STR_CFG_MARKERBR_DIAGGRID;
		texture = "\ca\ui\data\marker_brush_diaggrid_ca.paa";
	};

	class Cross
	{
		name = $STR_CFG_MARKERBR_CROSS;
		texture = "\ca\ui\data\marker_brush_cross_ca.paa";
	};
};

class CfgLocationTypes
{
  class Mount
  {
    name = $STR_GETIN;
    drawStyle = mount; // icon, area, mount
    texture = ; // icon or brush
    color[] = {0, 0, 0, 1};
    size = 0; // size of icon (in pixels in resolution 640 x 480)
    font = Zeppelin33;
    textSize = 0.04; // height of text (in screen coordinates)
  };
  // default key point name in map
  class Name
  {
    name = $STR_NAME; 
    drawStyle = name;
    texture = ; // icon or brush
    color[] = {0, 0, 0, 1};
    size = 0; // size of icon
    font = Zeppelin33;
    textSize = 0.04;
  };
  // key points used in map
  class NameMarine : Name
  {
    name = "$STR_NAME_MARINE";
    color[] = {0.05, 0.4, 0.8, 0.8};
    font = Zeppelin33Italic;
    textSize = 0.05;
  };
  class NameCityCapital : Name
  {
    name = "$STR_NAME_CAPITAL";
    textSize = 0.075;
  };
  class NameCity : Name
  {
    name = "$STR_NAME_CITY";
    textSize = 0.06;
  };
  class NameVillage : Name
  {
    name = "$STR_NAME_VILLAGE";
    textSize = 0.05;
  };
  class NameLocal : Name
  {
    name = "$STR_NAME_LOCALNAME";
    color[] = {0.44, 0.38, 0.3, 1};
//  color[] = {0.5, 0.5, 0.5, 1};
    textSize = 0.05;
  };

  class Hill : Name
  {
    name = "$STR_NAME_HILL";
    drawStyle = icon;
    texture = "\ca\ui\data\mapkey_hill_ca.paa";
    color[] = {0, 0, 0, 1};
    font = Zeppelin33Italic;
    size = 14;
    textSize = 0.04;
  };
  class ViewPoint : Hill
  {
    name = "$STR_NAME_VIEWPOINT";
    drawStyle = icon;
    texture = "\ca\ui\data\mapkey_viewpoint_ca.paa";
    color[] = {0.78, 0, 0.05, 1};
    size = 16;
    textSize = 0.04;
  };
  class RockArea : Hill
  {
    name = "$STR_NAME_ROCKAREA";
    texture = "\ca\ui\data\map_rock_ca.paa";
    color[] = {0, 0, 0, 1};
    size = 12;
  };
  class BorderCrossing : Hill
  {
    name = "$STR_NAME_BCROSS";
    texture = "\ca\ui\data\mapkey_borcross_ca.paa";
    color[] = {0.78, 0, 0.05, 1};
    size = 16;
  };
  class VegetationBroadleaf : Hill
  {
    name = "$STR_NAME_VEGB";
    texture = "\ca\ui\data\mapkey_vbroad_ca.paa";
    color[] = {0.25, 0.4, 0.2, 1};
    font = Zeppelin33Italic;
    size = 18;
  };
  class VegetationFir : Hill
  {
    name = "$STR_NAME_VEGF";
    texture = "\ca\ui\data\mapkey_vfir_ca.paa";
    color[] = {0.25, 0.4, 0.2, 1};
    font = Zeppelin33Italic;
    size = 18;
  };
  class VegetationPalm : Hill
  {
    name = "$STR_NAME_VEGP";
    texture = "\ca\ui\data\mapkey_vpalm_ca.paa";
    color[] = {0.25, 0.4, 0.2, 1};
    font = Zeppelin33Italic;
    size = 18;
  };
  class VegetationVineyard : Hill
  {
    name = "$STR_NAME_VEGV";
    texture = "\ca\ui\data\mapkey_vvine_ca.paa";
    color[] = {0.25, 0.4, 0.2, 1};
    font = Zeppelin33Italic;
    size = 16;
  };
};
