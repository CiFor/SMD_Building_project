#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4

#define true 1
#define false 0

// type scope
#define private 0
#define protected 1
#define public 2

#define ReadAndWrite 0 //! any modifications enabled
#define ReadAndCreate 1 //! only adding new class members is allowed
#define ReadOnly 2 //! no modifications enabled
#define ReadOnlyVerified 3 //! no modifications enabled, CRC test applied

class CfgPatches
{
	class Desert
	{
		units[] = {Intro};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {CAData,CABuildings,CAMisc,CAPlants,CARoads,CARocks};
	};
};


class DefaultLighting;
class DefaultLighting_CA : DefaultLighting {};

class CfgWorlds
{

  class DefaultClutter
  {
    scaleMin = 0.9;
    scaleMax = 1.4;
  };
  class DefaultWorld;
  class CAWorld : DefaultWorld
  {
    class Grid {};
  };

  class Intro: CAWorld
	{
		access = ReadOnlyVerified;

		cutscenes[] = {DesertIntro1};

		description = "Rahmadi";
		icon="";
		worldName=\ca\desert\intro.wrp;
		pictureMap = "";
		pictureShot = "";

		plateFormat="ML$ - #####";
		plateLetters="ABCDEGHIKLMNOPRSTVXZ";

		longitude = -40; // positive is east
		latitude = -40; // positive is south

		// landRange is stored directly in WRP file

		class Grid : Grid
		{
			offsetX = 0;
			offsetY = -15360;

			class Zoom1
			{
				zoomMax = 0.5;
				format = "XY";
				formatX = "Aa";
				formatY = "00";
				stepX = 200;
				stepY = 200;
			};
			class Zoom2
			{
				zoomMax = 1e30;
				format = "XY";
				formatX = "A";
				formatY = "0";
				stepX = 2000;
				stepY = 2000;
			};
		};

		startTime = 8:30;
		startDate = 07/06/2007;
		startWeather = 0.1;
		startFog = 0.0;
		forecastWeather = 0.3;
		forecastFog = 0.0;

		seagullPos[] = {1272.842,150.000,14034.962};

		//default center position
		centerPosition[] = {2500,2500,300};

		// landing place - airport
		ilsPosition[] ={2545,3000};
		ilsDirection[] ={0,0.08,1};
		ilsTaxiIn[]= {2495,2725, 2495,2850,  2508,2860, 2508,3000, 2520,3010, 2545,3000};
		ilsTaxiOff[]= {2545,2445,2520,2425,2495,2445,2495,2725};
		drawTaxiway=false;

    class ReplaceObjects {};

    // sound sources
    class Sounds
    {
    	sounds[]={};
    };
    class Animation
    {
      vehicles[]={};
    }; // default - no film


    class Lighting : DefaultLighting {};


    clutterGrid = 1.11;//pred demem to bylo 1.5
    /// how far clutters are visible
    clutterDist = 55;

    noDetailDist = 40;
    /// where ground detail texture is fully visible (begin fading out)
    fullDetailDist = 5;

    minTreesInForestSquare = 3;
    minRocksInRockSquare = 4;

    class clutter
    {

      class GrassGeneral: DefaultClutter
      {
        model=ca\plants\clutter_grass_general.p3d;
        affectedByWind = 0.3;
        swLighting = true;        //relativeColor[]={0.8,0.8,0.8,0};
        //colorByGround=0.9;
        scaleMin = 0.75;
        scaleMax = 1.0;
      };

      class GrassFlowers: GrassGeneral
      {
        model=ca\plants\clutter_grass_flowers.p3d;
      };

      class GrassLong: GrassGeneral
      {
        model=ca\plants\clutter_grass_long.p3d;
        affectedByWind = 0.6;
        scaleMin = 0.60;
        scaleMax = 1.10;
      };

      class GrassSevenbeauty: GrassGeneral
      {
        model=ca\plants\clutter_grass_sevenbaeuty.p3d;
        affectedByWind = 0.2;
        scaleMin = 0.70;
        scaleMax = 1.10;
      };

      class GrassYellow: GrassGeneral
      {
        model=ca\plants\clutter_grass_yellow.p3d;
        affectedByWind = 0.2;
        scaleMin = 0.70;
        scaleMax = 1.10;
      };

      class GrassDesert: GrassGeneral
      {
        model=ca\plants\clutter_grass_desert.p3d;
      };

      class ForestFern: GrassGeneral
      {
        model=ca\plants\clutter_forest_fern.p3d;
        affectedByWind = 0.1;
        scaleMin = 0.90;
        scaleMax = 1.10;
      };

      class SmallRocks: GrassGeneral
      {
        model=ca\rocks\clutter_stone_small.p3d;
        affectedByWind = 0;
        scaleMin = 0.90;
        scaleMax = 1.10;
      };

      class FlowersColor: GrassGeneral
      {
        model=ca\plants\clutter_smetanka.p3d;
      };

      class FlowersWhite: GrassGeneral
      {
        model=ca\plants\clutter_white_flower.p3d;
      };

      class MushroomsHorcak: GrassGeneral
      {
        model=ca\plants\clutter_horcak.p3d;
        affectedByWind = 0;
        scaleMin = 0.85;
        scaleMax = 1.25;
      };
      
      class MushroomsPrasivka: MushroomsHorcak
      {
        model=ca\plants\clutter_prasivky.p3d;
      };
      
      class MushroomsBabka: MushroomsHorcak
      {
        model=ca\plants\clutter_babka.p3d;
      };
      
      class MushroomsMuchomurka: MushroomsHorcak
      {
        model=ca\plants\clutter_muchomurka.p3d;
      };


    };
		class Subdivision
		{
			// fractal component of subdivision
			// changes are smaller for smaller rectangles
			class Fractal
			{
				// texture roughness factor
				rougness = 5;
				// max. value for squares containing road
				maxRoad = 0.02;
				// max. value for squares containing track
				maxTrack = 0.50;
				// max. coeficient depending on slope
				maxSlopeFactor = 0.05;
			};
			// white noise component of subdivision
			// change size is independent on rectangle size
			class WhiteNoise
			{
				rougness = 2;
				// max. value for squares containing road
				maxRoad = 0.01;
				// max. value for squares containing track
				maxTrack = 0.05;
				// max. coeficient depending on slope
				maxSlopeFactor = 0.0025;
			};

			// do not divide surfaces that are under given limit
			minY = -0.0;
			// do not divide flat surfaces
			minSlope = 0.02;
		};

		class Ambient
    {
      /*
		  Layer cost and species probability use expressions.
		  Variables which can be used inside of expressions:
        rain: rain intensity.
        night: 1 during night, 0 during day.

        hills: 0 at 150 ASL, 1 at 400 ASL.
        windy: 0 at 0 m/s, 1 at 20 m/s.

        trees: tree density.
        sea: distance to sea.
        houses: house density.
        meadow: meadow character.
        forest: 1 in the forest.

      Any values are continuous/interpolated in the range of 0 to 1.
      Values they are independent unless notes otherwise
      (meaning meadow and forest can be 1 at the same time).

      You can observe these values in real-time using:
      	diag_toggle "ambient"
      */

		  class BigBirds
		  {
		    //Container radius:
		    	//Species are normally spawned at the edges of the circle defined by this radius.
		    	//One exception to this is the initial start of the simulation, where the whole
		    	//circle will be filled.
		    radius = 300;
		    //Points allowed for this container:
		    //Xbox: 1 * (1 - night) * (1 - sea)
		    cost = "((1 + forest + trees) - ((2 * rain)) - houses) * (1 - night) * (1 - sea)";
  		  //Classname in Species corresponds to type name:
		    class Species
		    {
		      class Hawk
		      {
		        probability = 0.2;
		        cost = 1;
		      };
		    };
		  };

		  class Birds
		  {
		    radius = 170;
		    //Xbox: (1 - night) * (2 + 8 * sea)
		    cost = "(1 - night) * ((1 + (3 * sea)) - (2 * rain))";
		    class Species
		    {
		      class Seagull
		      {
		        probability = 0.2;
		        cost = 1;
		      };
		    };
		  };

		  class BigInsects
		  {
		    radius = 20;
		    //Xbox: 1 * (1 - night) * (1 - rain) * (1 - sea)
		    cost = "(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
		    class Species
		    {
		      class DragonFly
		      {
		        probability = 0.6 - (meadow * 0.5) + (forest * 0.4);
		        cost = 1;
		      };
		      class ButterFly
		      {
		        probability = 0.4 + (meadow * 0.5) - (forest * 0.4);
		        cost = 1;
		      };
		    };
		  };

		  class BigInsectsAquatic
		  {
		  	radius = 20;
		  	cost = "(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
		  	class Species
		  	{
		  		class DragonFly
		  		{
		  			probability = 1;
		  			cost = 1;
		  		};
		  	};
		  };

		  //The wind is blowing various particles around:
		  class WindClutter
		  {
		    radius = 10;
		    //Xbox: (10 - 5 * rain) * (1 - sea) * (windy factor [0.2, 0.5])
		    cost = "((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
		    class Species
		    {
		      class FxWindGrass1 //Dark green grass.
		      {
		        probability = "0.4 - 0.2 * hills - 0.2 * trees";
		        cost = 1;
		      };
		      class FxWindGrass2 //Dry grass.
		      {
		        probability = "0.4 - 0.2 * hills - 0.2 * trees";
		        cost = 1;
		      };
		      class FxWindRock1 //Dust.
		      {
		        probability="0.4 * hills";
		        cost = 1;
		      };
		      class FxWindLeaf1 //Green leaf.
		      {
		        probability = "0.2 * trees";
		        cost = 1;
		      };
		      class FxWindLeaf2 //Dry leaf.
		      {
		        probability = "0.1 * trees + 0.2";
		        cost = 1;
		      };
		      class FxWindLeaf3 //Green leaf with a dry spot.
		      {
		        probability = "0.1 * trees";
		        cost = 1;
		      };
		    };
		  };

		  class NoWindClutter
		  {
		  	//Xbox: 10
		    radius = 15;
		    //Xbox: 1 * (1 - rain) * (1 - sea) * (1 - forest) * (1 - houses) * (1 - (windy factor [0.1, 0.2]))
		    cost = "(20 * (windy factor [0.1, 0.2])) * meadow * (1 - rain) * (1 - sea) * (1 - forest) * (1 - houses)";
		    class Species
		    {
		      class FxWindPollen1
		      {
		        probability = 1;
		        cost = 1;
		      };
		    };
		  };

		  class SmallInsects
		  {
		    radius = 3;
		    //Xbox: (9 - 5 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)
		    cost = "(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
		    class Species
		    {
		      class HouseFly
		      {
		        probability = "deadBody + (1 - deadBody) * (0.5 - forest * 0.1 - meadow * 0.2)";
		        cost = 1;
		      };
		      class HoneyBee
		      {
		        probability = "(1 - deadBody) * (0.5 - forest * 0.1 + meadow * 0.2)";
		        cost = 1;
		      };
		      class Mosquito
		      {
		        probability = "(1 - deadBody) * (0.2 * forest)";
		        cost = 1;
		      };
		    };
		  };

		  class NightInsects
		  {
		    radius = 3;
		    cost = "(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
		    class Species
		    {
		      class Mosquito
		      {
		        probability = 1;
		        cost = 1;
		      };
		    };
		  };
		};

    class Names
    {
	#include "Intro.hpp"
    };
  };
};

class CfgWorldList
{
	class Intro {};
};

class CfgMissions
{
  class Cutscenes
  {
    class DesertIntro1
    {
      directory = "ca\introAnims\data\scenes\intro.intro";
    };
  };
};
