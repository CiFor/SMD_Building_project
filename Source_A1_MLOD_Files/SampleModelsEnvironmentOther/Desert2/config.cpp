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
	class Desert2
	{
		units[] = {Desert2};
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

  class Desert2: CAWorld
	{
		access = ReadOnlyVerified;

		cutscenes[] = {Desert2Intro};

		description = "Porto";
		icon="";
		worldName=\ca\desert2\desert2.wrp;
		pictureMap = "";
		pictureShot = "";

		plateFormat="ML$ - #####";
		plateLetters="ABCDEGHIKLMNOPRSTVXZ";

		longitude = -44; // positive is east
		latitude = -35; // positive is south

		// landRange is stored directly in WRP file

		class Grid : Grid
		{
			offsetX = 0;
			offsetY = 0;

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

		startTime = 15:30;
		startDate = 24/06/2008;
		startWeather = 0.10;
		startFog = 0.0;
		forecastWeather = 0.10;
		forecastFog = 0.0;

		seagullPos[] = {1272.842,150.000,14034.962};
		// landing place - airport
		ilsPosition[] ={2545,3000};
		ilsDirection[] ={0,0.08,1};
		ilsTaxiIn[]= {};
		ilsTaxiOff[]= {};
		//default center position
		centerPosition[] = {2600,2200,300};

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


    clutterGrid = 1.11;
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
			swLighting = true;
			scaleMin = 0.75;
			scaleMax = 1.0;
		};	

		class D2SmallRocks: GrassGeneral
		{
			model=ca\desert2\data\plant\Clutter_d2_StoneSmall.p3d;
			affectedByWind = 0;
			scaleMin = 0.7;
			scaleMax = 1.1;
		};

		class D2TropicFlower: GrassGeneral
		{
		        model=ca\desert2\data\plant\Clutter_d2_TropicFlower.p3d;
			scaleMin = 0.5;
			scaleMax = 1.0;
		};

		class D2TropicGrassLong: GrassGeneral
		{
		        model=ca\desert2\data\plant\Clutter_d2_GrassLong.p3d;
		        affectedByWind = 0.8;
			scaleMin = 0.9;
			scaleMax = 1.1;
		};

		class D2TropicGrass: GrassGeneral
		{
		        model=ca\desert2\data\plant\Clutter_d2_GrassShort.p3d;
		        affectedByWind = 0.7;
		        scaleMin = 1.0;
		        scaleMax = 1.8;
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
	#include "Desert2.hpp"
    };
  };
};

class CfgWorldList
{
	class Desert2 {};
};

class CfgMissions
{
  class Cutscenes
  {
    class Desert2Intro
    {
      directory = "ca\desert2\data\scenes\intro.desert2";
    };
  };
};

class CfgSurfaces
{
	class Default {};
	class Water {};

	class D2Grass: Default
	{
		access = ReadOnly;
		files=d2trava_*;
		rough=0.15;
		dust=0.2;
		soundEnviron = drygrass;
		character=D2GrassClutter;
	};

	class D2City: Default
	{
		access = ReadOnly;
		files=d2mesto_*;
		rough=0.1;
		dust=0.1;
		soundEnviron = gravel;
		character=D2DirtClutter;
	};

	class D2Sand: Default
	{
		access = ReadOnly;
		files=d2pisek_*;
		rough=0.1;
		dust=0.4;
		soundEnviron = sand;
    		character=D2SandClutter;
	};

	class D2Rock: Default
	{
		access = ReadOnly;
		files=cr_pole_*;
		rough=0.5;
		dust=0.2;
		soundEnviron = rock;
		character=Empty;
	};
};

class CfgSurfaceCharacters
{
  	class D2GrassClutter
  	{
	        probability[]={0.94,0.05,0.01};
    		names[]={D2TropicGrass,D2TropicGrassLong,D2SmallRocks};
  	};

  	class D2SandClutter
	{
	        probability[]={0.05};
    		names[]={D2SmallRocks};
  	};

  	class D2DirtClutter
  	{
	        probability[]={0.04,0.03};
    		names[]={D2TropicFlower,D2SmallRocks};
  	};
};

