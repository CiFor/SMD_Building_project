#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define VSoft 0
#define VArmor 1
#define VAir 2

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
	class CAMisc
	{
		units[] =
		{
			"BarrelBase","Barrels","Barrel1","Barrel2","Barrel3","Barrel4","Camera1","Computer","TVStudio","Radio",
			"PaletaBase","Paleta1","Paleta2","JeepWreck1","JeepWreck2","JeepWreck3","M113Wreck", "BMP2Wreck" ,"UralWreck",
			"datsun01Wreck","datsun02Wreck","hiluxWreck",
			"Body","misc01","Vysilacka","WallMap","Vec03","Land_vez_ropa","FlagCarrier","FlagCarrierWest",
			"FlagCarrierEast","Fire","FireLit","TargetE"
		};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {CAData,CAUI};
	};
};

class CfgDamageAround
{
  class DamageAroundPole
  {
    radiusRatio = "0.3";
    //indirectHit = "30*intensity";
    indirectHit = "900";
  };
};

class CfgDestructPos
{
  class DelayedDestruction
  {
    // we can use lifetime here if desired
    timeBeforeHiding = "0.2";
    hideDuration = "0.65+lifeTime*0.05";
  };
};

class cfgVehicles
{
	class Thing;
	class Strategic;
	class NonStrategic;
	class House;

	#define BUILD_NAME(x) Land_##x

	class BUILD_NAME(podlejzacka): Strategic
	{
		scope = public;

		animated = false;
		vehicleClass="Objects";
		typicalCargo[]={};

		irTarget = false;
		mapSize = 0.7;
		model = "\ca\misc\podlejzacka.p3d";
		icon="\ca\data\data\Unknown_object.paa";
		displayName=$STR_DN_CRAWLING;
		nameSound="obstacle";
		accuracy=0.3;

		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		destrType=DestructTent;

		coefInside = 0.5;
		coefInsideHeur = 0.8;

		cost=0;
		armor=20;
	};
	class BUILD_NAME(prolejzacka): BUILD_NAME(podlejzacka)
	{
		displayName=$STR_DN_TRAINING_2;
		model = "\ca\misc\prolejzacka.p3d";
		icon="\ca\data\data\Unknown_object.paa";
		destrType=DestructTree;
	};
	class BUILD_NAME(prebehlavka): BUILD_NAME(podlejzacka)
	{
		displayName=$STR_DN_TRAINING_3;
		model = "\ca\misc\prebehlavka.p3d";
		icon="\ca\data\data\Unknown_object.paa";
	};
	class BUILD_NAME(obihacka): BUILD_NAME(podlejzacka)
	{
		displayName=$STR_DN_TRAINING_4;
		model = "\ca\misc\obihacka.p3d";
		icon="\ca\data\data\Unknown_object.paa";
	};
	class BUILD_NAME(strelecky_post_new): BUILD_NAME(podlejzacka)
	{
		scope = 1;
		displayName="Shooting Range";
		model = "\ca\misc\strelecky_post_new.p3d";
		icon="\ca\data\data\Unknown_object.paa";
		destrType=DestructNo;
	};
	class BUILD_NAME(kolotoc): BUILD_NAME(podlejzacka)
	{
		displayName=$STR_DN_CAROUSEL;
		model = "\ca\misc\kolotoc.p3d";
		icon="\ca\data\data\Unknown_object.paa";
	};
	class BUILD_NAME(maly_kolotoc): BUILD_NAME(podlejzacka)
	{
		displayName=$STR_DN_CAROUSEL_SMALL;
		model = "\ca\misc\maly_kolotoc.p3d";
		icon="\ca\data\data\Unknown_object.paa";
	};
	class BUILD_NAME(houpacka): BUILD_NAME(podlejzacka)
	{
		displayName=$STR_DN_SWING;
		model = "\ca\misc\houpacka.p3d";
		icon="\ca\data\data\Unknown_object.paa";
	};
	class BUILD_NAME(kulata_prolezacka): BUILD_NAME(podlejzacka)
	{
		displayName=$STR_DN_PROLEZACKA; //TODO: RENAME
		model = "\ca\misc\kulata_prolezacka.p3d";
		icon="\ca\data\data\Unknown_object.paa";
	};
	class BUILD_NAME(Piskoviste): BUILD_NAME(podlejzacka)
	{
		displayName=$STR_DN_SANDPIT;
		model = "\ca\misc\piskoviste.p3d";
		icon="\ca\data\data\Unknown_object.paa";
	};
	class BUILD_NAME(jezekbeton): Strategic
	{
		destrType=DestructNo;
		displayName=$STR_DN_HOUSE;
		model = "\ca\misc\jezekbeton.p3d";
		icon="\Ca\misc\data\icons\i_jez_CA.paa";
		animated=false;
		armor=800;
	};
	class BUILD_NAME(fuel_tank_small): Strategic
	{
		model = "\ca\misc\fuel_tank_small.p3d";
		icon="\Ca\misc\data\icons\i_fuel_CA.paa";
		displayName=$STR_DN_HOUSE;

		animated = false;
		transportFuel = 0;
		armor=50;
		accuracy=0.50;
		destrType=DestructEngine;
	};
	class BUILD_NAME(Fuel_tank_big): Strategic
	{
		//-- fuel station building
		animated = false;
		armor=50;
		model = "\ca\misc\Fuel_tank_big.p3d";
		icon="\Ca\misc\data\icons\i_fuel_CA.paa";
		displayName=$STR_DN_FUEL_STATION;
		nameSound="fuelstation";
		accuracy=0.50;

		transportFuel = 50000;
		destrType=DestructEngine;
	};

	class BUILD_NAME(Fuel_tank_stairs): Land_Fuel_tank_big
	{
		model = "\ca\misc\Fuel_tank_stairs.p3d";
		icon="\Ca\misc\data\icons\i_fuel_CA.paa";
		ladders[]={{"start","end"}}; // default no ladder
	};

	class BarrelHelper: Thing
	{
		scope = private;
		simulation="thing";
		animated = false;
		mapSize = 0.7;

		displayName=$STR_DN_BARREL;
		nameSound="barrel";
		accuracy=0.2;
		transportFuel = 100;
		destrType=DestructEngine;
	};
	class BarrelBase: BarrelHelper
	{
		accuracy=1000; // never recognize
		armor=20;
		cost=0;
		supplyRadius = 1.4;
		class DestructionEffects
		{
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "destructionEffect1";

				intensity = 0.001;
				interval = 1;
				lifeTime = 3;
			};
			class Sound
			{
				simulation = "sound";
				type = "Fire";
				position = "destructionEffect1";

				intensity = 1;
				interval = 1;
				lifeTime = 3;
			};
			class Fire1
			{
			  simulation = "particles";
			  type = "BarelDestructionFire";
			  position = "destructionEffect1";

			  intensity = 0.15;
			  interval = 1;
			  lifeTime = 3;
			};
			class Smoke1
			{
			  simulation = "particles";
			  type = "BarelDestructionSmoke";
			  position = "destructionEffect1";

			  intensity = 0.15;
			  interval = 1;
			  lifeTime = 3.2;
			};
		};
	};

	class Barrels: BarrelBase
	{
		scope = public;
		model = \ca\misc\Barels.p3d;
		icon="\Ca\misc\data\icons\i_beczki_CA.paa";
		displayName=$STR_DN_BARRELS;
		transportFuel = 400;
		supplyRadius = 2.2;
	};

	class Barrel1: BarrelBase
	{
		scope = public;
		model = \ca\misc\Barel1.p3d;
		icon="\Ca\misc\data\icons\i_beczka_CA.paa";
		displayName=$STR_DN_BARREL_RED;
	};

	class Barrel2: BarrelBase
	{
		scope = public;
		model = \ca\misc\Barel2.p3d;
		icon="\Ca\misc\data\icons\i_beczka_CA.paa";
		displayName=$STR_DN_BARREL_BROWN;
	};

	class Barrel3: BarrelBase
	{

		scope = public;
		model = \ca\misc\Barel3.p3d;
		icon="\Ca\misc\data\icons\i_beczka_CA.paa";
		displayName=$STR_DN_BARREL_YELLOW;
	};

	class Barrel4: BarrelBase
	{
		scope = public;
		model = \ca\misc\Barel4.p3d;
		icon="\Ca\misc\data\icons\i_beczka_CA.paa";
		displayName=$STR_DN_BARREL_BLACK;
	};

	class Barrel5: BarrelBase
	{
		scope = public;
		model = \ca\misc\Barel5.p3d;
		icon="\Ca\misc\data\icons\i_beczka_CA.paa";
		displayName=$STR_DN_BARREL_GREEN;
	};

	class Barrel6: BarrelBase
	{
		scope = public;
		model = \ca\misc\Barel6.p3d;
		icon="\Ca\misc\data\icons\i_beczka_CA.paa";
		displayName=$STR_DN_BARREL_PURPLE;
	};

	class Camera1: Thing
	{
		model = \ca\misc\betacam.p3d;
		icon="\ca\data\data\Unknown_object.paa";
		displayName=$STR_DN_CAMERA;

		scope = public;
		simulation="thing";
		nameSound="";

		transportFuel = 0;
		mapSize = 0.7;
		accuracy=0.2;
		cost=0;
		armor=20;

		class DestructionEffects
		{};
	};

	class Computer: Camera1
	{
		model = \ca\misc\PC.p3d;
		icon="\ca\data\data\Unknown_object";
		displayName=$STR_DN_COMPUTER;
		nameSound="";

		mapSize = 0.7;
		accuracy=0.2;
		armor=5;
	};

	class TVStudio: Camera1
	{
		model = \ca\misc\TVstudio.p3d;
		icon="\ca\data\data\Unknown_object.paa";
		displayName="TV Studio";
		nameSound="";

		mapSize = 5;
		accuracy=10000;
		destrType=DestructNo;
	};


	class Radio: Camera1
	{
		model = \ca\misc\radio.p3d;
		icon="\ca\data\data\Unknown_object.paa";
		displayName=$STR_DN_RADIO;
		nameSound="";

		mapSize = 0.7;
		accuracy=0.2;
		armor=5;
	};
	class PaletaHelper: BarrelHelper
	{
		mapSize = 0.7;
		icon="\ca\data\data\Unknown_object.paa";
		displayName=$STR_DN_PALLET;
		nameSound="pallet";
		accuracy=0.2;
		transportFuel = 0;
		irTarget = false;
	};
	class PaletaBase: PaletaHelper
	{
		accuracy=1000;
		cost=0;
		class DestructionEffects {};
		destrType=DestructNo;
	};

	class Paleta1: PaletaBase
	{
		scope = public;
		model = \ca\misc\PaletaA.p3d;
		icon="\ca\data\data\Unknown_object.paa";
		displayName=$STR_DN_PALLET_A;
	};

	class Paleta2: PaletaBase
	{
		scope = public;
		model = \ca\misc\PaletyC.p3d;
		icon="\ca\data\data\Unknown_object.paa";
		displayName=$STR_DN_PALLETS_C;
	};
	#include "wrecks.hpp"

	class misc01: NonStrategic
	{
		scope = public;
		displayName=$STR_DN_OUT_BLACK;
		model = \ca\Misc\Carnakrychle;
		vehicleClass="Objects";
		icon="\ca\data\data\Unknown_object.paa";
		animated=0;
		nameSound="house";
		accuracy=0.20;
		cost=0;
		ladders[]={}; // default no ladder
	};

	class Vysilacka: JeepWreck1
	{
		access = ReadOnly;
		displayName=$STR_DN_OUT_RADIO;
		model = \ca\Misc\mutt_vysilacka;
		icon="\ca\data\data\Unknown_object.paa";
	};

	class WallMap: Camera1
	{
		access = ReadOnly;
		displayName=$STR_DN_OUT_WALLMAP;
		model = \ca\Misc\nastenkaX;
		icon="\ca\data\data\Unknown_object.paa";
	};

	class Vec03: misc01
	{
		scope = protected;
		model = \ca\Misc\seno_balik;
		icon="\ca\data\data\Unknown_object.paa";
	};

	class Land_vez_ropa: House
	{
		scope = protected;
		model=\ca\Misc\vez_ropa;
		icon="\ca\data\data\Unknown_object.paa";
		animated = true;
		destrType=DestructNo;
		ladders[]={{"start","end"}}; // default no ladder
		class AnimationSources
		{
			class Vez_ropa_anim
			{
				source = "time";
				sourceAddress = loop;
			};
		};
	};

	class FlagCarrierCore: Strategic {};
	class FlagCarrier: FlagCarrierCore
	{
		model = "\ca\misc\vlajkstozar.p3d";
		icon="\Ca\misc\data\icons\I_flag_CA.paa";
		animationFlag = "\ca\misc\rtm\stozar.rtm";
		supplyRadius = 2;
	};
	class FlagCarrierWest: FlagCarrier
	{
		scope = public;
		accuracy = 1000; // never recognize
		displayName = $STR_DN_FLAG_WEST;
		nameSound = "flag";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\ca\misc\data\usa_vlajka.pac""";
		};
	};
	class FlagCarrierSouth: FlagCarrierWest
	{
		displayName = $STR_DN_FLAG_SOUTH;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\ca\misc\data\jih_vlajka.paa""";
		};
	};
	class FlagCarrierNorth: FlagCarrierSouth
	{
		displayName = $STR_DN_FLAG_NORTH;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""\ca\misc\data\sever_vlajka.paa""";
		};
	};

	class Danger: FlagCarrier
	{
		scope = public;
		model = "\ca\misc\Danger!.p3d";
		icon="\Ca\misc\data\icons\i_danger_CA.paa";
		displayName=$STR_DN_DANGER;
		mapSize = 0.7;
		accuracy=0.2;
		destrType=DestructNo;
	};
	class DangerWest: FlagCarrier
	{
		scope = public;
		model = "\ca\misc\Danger_us.p3d";
		icon="\Ca\misc\data\icons\i_danger_CA.paa";
		displayName=$STR_XBOX_DANGER_WEST;
		mapSize = 0.7;
		accuracy=0.2;
		destrType=DestructNo;
	};
	class DangerEAST: FlagCarrier
	{
		scope = public;
		model = "\ca\misc\Danger_rus.p3d";
		icon="\Ca\misc\data\icons\i_danger_CA.paa";
		displayName=$STR_XBOX_DANGER_EAST;
		mapSize = 0.7;
		accuracy=0.2;
		destrType=DestructNo;
	};
	class DangerGUE: FlagCarrier
	{
		scope = public;
		model = "\ca\misc\Danger_res.p3d";
		icon="\Ca\misc\data\icons\i_danger_CA.paa";
		displayName=$STR_XBOX_DANGER_GUER;
		mapSize = 0.7;
		accuracy=0.2;
		destrType=DestructNo;
	};

	class Fence: NonStrategic
	{
		scope = public;
		animated = false;
		vehicleClass="Objects";
		model = "\ca\Misc\pytle_BSL";
    		icon="\Ca\misc\data\icons\i_pytle_BSL_CA.paa";
		displayName=$STR_DN_FENCE;
		nameSound="fence";
		accuracy=0.20;
		typicalCargo[]={};

		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;

		cost=0;
		armor=800;
		mapSize = 3.3;
	};

	class FenceWood : Fence
	{
		model = "\ca\Misc\pytle";
		icon="\Ca\misc\data\icons\i_pytle_CA.paa";
		displayName=$STR_DN_FENCE_WOOD;

		mapSize = 2.4;
		accuracy=1000; // never recognize
	};

	class FenceWoodPalet : Fence
	{
		model = "\ca\Misc\pytle_palet.p3d";
		icon="\Ca\misc\data\icons\i_pytle_CA.paa";

		displayName=$STR_DN_FENCE_WOOD_PALET;

		mapSize = 2.4;
		accuracy=1000; // never recognize
	};
	class LODy_test : Fence
	{
		scope = protected;
		model = "\ca\Misc\LODy_test.p3d";
    icon="\ca\data\data\Unknown_object.paa";
		displayName="LODy_test";

		mapSize = 2.4;
		accuracy=1000; // never recognize
	};
	class Wire: Fence
	{
		scope = public;
		destrType=DestructNo;

		model = "\ca\Misc\Barbedwire.p3d";
		icon="\Ca\misc\data\icons\I_drutkolczasty_CA.paa";
		displayName=$STR_DN_WIRE;
		accuracy=0.3;
		mapSize = 5.5;
	};
	class Fire: NonStrategic
	{
		scope = public;

		animated = false;
		simulation="fire";
//		sound = "Fire";
		vehicleClass="Objects";

		model = "\ca\Misc\ohniste.p3d";
		icon="\Ca\misc\data\icons\i_ognisko_CA.paa";
		displayName=$STR_DN_FIRE;
		nameSound="campfire";
		accuracy=0.20;
		typicalCargo[]={};

		mapSize = 1.2;

		cost=0;
		armor=20;

		effects = "SmallFire";
/*		class Smoke // : FlameSpectrum
		{
			interval = 0.07;
			// single cloudlet parameters
			cloudletDuration = 0; // time to live (not including fades)
			cloudletAnimPeriod = 1.0; // animation speed
			cloudletSize = 0.5;
			cloudletAlpha = 0.15;
			cloudletGrowUp = 1.5; // grow-up time
			cloudletFadeIn = 0.0; // fade-in time
			cloudletFadeOut = 6.0; // fade-out time
			cloudletAccY = -0.1; // vertical acceleration
			cloudletMinYSpeed = 0.3; // vertical speed range
			cloudletMaxYSpeed = 1.5;
			cloudletShape = "\ca\data\cl_basic";
			cloudletColor[] = {1, 1, 1, 0};
			initT = 1000;
			deltaT = -500;
			class Table
			{
				class T1 {maxT = 0; color[] = {0.15, 0.15, 0.15, 0};}
				class T2 {maxT = 900; color[] = {0, 0, 0, 0.3};}
				class T3 {maxT = 920; color[] = {1, 0.4, 0, 1};}
				class T4 {maxT = 980; color[] = {1, 0.5, 0, 1};}
				class T5 {maxT = 1000; color[] = {1, 1, 1, 1};}
			};
/*
			initT = 2200;
			deltaT = -4000;
*/
			// source parameters
/*			density = 0.5;
			size = 0.2;
			initYSpeed = 1.7;
			timeToLive = 1e20; // time to live (not including fades)
			in = 0.0; // fade-in time
			out = 0.0; // fade-out time
		};
		class Light
		{
			color[] = {4.543, 2.124, 1.269};
			ambient[] = {0.05, 0.05, 0.05};
			brightness = 0.03;
			shape = "\ca\data\koulesvetlo";
			size = 0.05;
			position = "ohniste";
		};*/
	};
	class FireLit: Fire
	{
		accuracy=1000; // never recognize
		displayName=$STR_DN_FIRE_LIT;
		class EventHandlers
		{
			init="(_this select 0) inflame true";
		};
	};
	class HeliH : NonStrategic
	{
		scope = public;
		model = "\ca\misc\heli_h_army";
    icon="\Ca\misc\data\icons\i_H_CA.paa";
		displayName=$STR_DN_HELI_H;
		animated = false;
		vehicleClass="Objects";
		nameSound="helipad";

		accuracy=0.20;

		typicalCargo[]={};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;

		mapSize = 9.8;

		cost=0;

		destrType=DestructNo;
	};
	class HeliHEmpty : HeliH
	{
		model = "\ca\misc\empty";
		icon="\Ca\misc\data\icons\i_H_CA.paa";
		displayName=$STR_DN_HELI_H_EMPTY;
		nameSound="";
	};
	class Heli_H_civil: HeliH
	{
		model = "\ca\misc\heli_h_civil";
		icon="\Ca\misc\data\icons\i_H_CA.paa";
		displayName=$STR_DN_HELI_H_CIVIL;
	};
	class Heli_H_rescue: HeliH
	{
		model = "\ca\misc\heli_h_rescue";
		icon="\Ca\misc\data\icons\i_H_CA.paa";
		displayName=$STR_DN_HELI_H_RESCUE;
	};
	class xxxPhotos : NonStrategic
	{
		scope = protected;
		vehicleClass="Objects";
		model = "\ca\Misc\xxxres.p3d";
		icon="\ca\data\data\Unknown_object.paa";
		displayName="XXX-Res";
		nameSound="";
	};
	class BUILD_NAME(water_tank) : House
	{
		model = "\ca\misc\water_tank.p3d";
		icon="\ca\data\data\Unknown_object.paa";
		destrType=DestructTree;
		ladders[]={{"start","end"}};
		armor = 500;
	};
	class BUILD_NAME(water_tank2) : BUILD_NAME(water_tank) {};
	#include "targets.hpp"
	class BUILD_NAME(sloup_vn) : House
	{
		model = "\ca\misc\sloup_vn.p3d";
		icon="\ca\data\data\Unknown_object.paa";
		//destrType=DestructTree;
		armor = 300;
		class DestructionEffects
		{
		     /* class Sound
		      {
			  simulation = "sound";
			  type = "DestrHouse";
			  position = "destructionEffect1";

			  intensity = 1;
			  interval = 1;
			  lifeTime = 0.05;
		      };*/
		      class DamageAround1
		      {
		        simulation = "damageAround";
		        type = "DamageAroundPole";

		        // for damage around parameters do not matter?
		        position = "map1";
		        intensity = 1;
		        interval = 1;
		        lifeTime = 1;
		      };
		};
	};
	class BUILD_NAME(sloup_vn_dratZ) : House
	{
		model = "\ca\misc\sloup_vn_dratZ.p3d";
		icon="\ca\data\data\Unknown_object.paa";
		//destrType=tent;
		armor = 20;
		class DestructionEffects
		{
			class DestroyPhase1
			{
			        simulation = "destroy";
			        type = "DelayedDestruction";

			        // for destroy parameters do not matter
			        position = "";
			        intensity = 1;
			        interval = 1;
			        lifeTime = 1;
			};
		};
	};
	class BUILD_NAME(sloup_vn_drat) : House
	{
		model = "\ca\misc\sloup_vn_drat.p3d";
		icon="\ca\data\data\Unknown_object.paa";
		//destrType=tent;
		armor = 20;
		class DestructionEffects
		{
			class DestroyPhase1
			{
			        simulation = "destroy";
			        type = "DelayedDestruction";

			        // for destroy parameters do not matter
			        position = "";
			        intensity = 1;
			        interval = 1;
			        lifeTime = 1;
			};
		};
	};
	class BUILD_NAME(HiddenPath_5) : House
	{
		model = "\ca\misc\HiddenPath_5.p3d";
		destrType=DestructNo;
		armor = 100000;
		cost = 0.3;
		irTarget = false;
	};
	class BUILD_NAME(ladder): House
	{
		scope = public;
		displayName = $STR_DN_LADDER;
		model = "\ca\misc\ladder.p3d";
		mapSize = 0.6;
    icon="\Ca\misc\data\icons\i_ladder_CA.paa";
		armor = 50;
		ladders[]={{"start","end"}};
	};
	class BUILD_NAME(ladder_half): House
	{
		scope = public;
		displayName = "Ladder Half";
		model = "\ca\misc\ladder_half.p3d";
		mapSize = 0.6;
		icon="\Ca\misc\data\icons\i_ladder_CA.paa";
		armor = 50;
		ladders[]={{"start","end"}};
	};
	class BUILD_NAME(HiddenPath_corner): BUILD_NAME(HiddenPath_5)
	{
		model = "\ca\misc\HiddenPath_corner.p3d";
	};
	class ClutterCutter: Thing
	{
		model = \ca\misc\clutterCutter.p3d;
		displayName=$STR_DN_CLUTTERCUTTER;
		icon="\ca\data\data\Unknown_object.paa";

		scope = public;
		simulation="thing";
		nameSound="";

		transportFuel = 0;
		mapSize = 0.7;
		accuracy=0.2;
		cost=0;
		armor=200000;
	};
};

class cfgNonAiVehicles
{
	class Proxy_Radio2
	{
		simulation="house";
		model = \ca\misc\Radio2.p3d;
		autocenter=false;
		scope=public;
		animated=false;
		reversed=false;
	};
	class ProxyFlag
	{
		autocenter = false; // normal vehicle are autocentered
		scope = public;
		reversed = false;
		model = "";
		simulation = "flag";
		selectionFabric = "latka";
	};
	class ProxyFlag_Stozar: ProxyFlag {model = "\ca\Misc\flag_stozar";};
};
