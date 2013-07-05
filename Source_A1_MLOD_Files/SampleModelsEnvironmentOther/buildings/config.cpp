#include "basicDefines.hpp"
#define BuildingPath \ca\buildings

class CfgPatches
{
	class CABuildings
	{
		units[] =
		{
			"Shed","Fortress1","Camp","CampEmpty","CampEast","CampEastC","ACamp","MASH",
			"Grave","GraveCross1","GraveCross2","GraveCrossHelmet","Table","Tablemap",
			"Chair","ChairX",
			"Wall1","Walldoor","Wallend","Wallhole","Land_radar"
		};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"CAData"};
	};
};

class CfgDestroy
{
	access = ReadAndCreate;
	class BuildingHit
	{
		sound[]={};

	};
};

class CfgVehicles
{
	class Thing;
	class Building;
	class Strategic;
	class NonStrategic: Building
	{
		class DestructionEffects;
	};
	class HouseBase;
	class Land_VASICore;
	class House : HouseBase
	{
		class DestructionEffects;
	};
	class Ruins;

	class Church: NonStrategic
	{
		scope=protected;
		displayName=$STR_DN_CHURCH;
		nameSound="church";
		accuracy=0.25;
		simulation="church";
		armor=1000;
		class DestructionEffects
		{
			class Smoke1
			{
				simulation = "particles";
				type = "HouseDestructionSmoke";
				position = "destructionEffect1";

				intensity = 0.15;
				interval = 1;
				lifeTime = 0.05;
			};
			class Smoke2
			{
				simulation = "particles";
				type = "HouseDestructionSmoke2";
				position = "destructionEffect1";

				intensity = 0.15;
				interval = 1;
				lifeTime = 0.01;
			};
			class Smoke3
			{
				simulation = "particles";
				type = "HouseDestructionSmoke3";
				position = "destructionEffect1";

				intensity = 0.15;
				interval = 1;
				lifeTime = 0.01;
			};
			class Smoke4
			{
				simulation = "particles";
				type = "HouseDestructionSmoke4";
				position = "destructionEffect1";

				intensity = 0.15;
				interval = 1;
				lifeTime = 0.01;
			};
			class HouseDestr
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

//These objects can be inserted in Editor

	class Fortress1: Strategic
	{
		scope = public;
		model = BuildingPath\Tents\fortress_01;
		icon="\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName=$STR_DN_FORTRESS_1;

		animated = false;
		vehicleClass=Objects;
		nameSound="bunker";
		accuracy=0.20;
		typicalCargo[]={};
		destrType=DestructBuilding;

		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;

		mapSize = 11;
		cost=0;
		armor=800;
	};
	class Fortress2: Fortress1
	{
		model = BuildingPath\Tents\fortress_02;
		icon="\Ca\buildings\Icons\i_Fortress_02_CA.paa";
		displayName = $STR_DN_FORTRESS_2;
	};
	#include "tents.hpp"
	class Grave: Camp
	{
		scope = public;
		model = BuildingPath\Misc\hrobecek.p3d;
		icon="\Ca\buildings\Icons\i_grob_CA.paa";
		displayName=$STR_DN_GRAVE;
		nameSound="grave";
		accuracy=1000; // never recognize
		destrType=DestructNo;
	};
	class GraveCross1: Camp
	{
		scope = public;
		model = BuildingPath\Misc\hrobecek_krizek1.p3d;
		icon="\Ca\buildings\Icons\i_grob_CA.paa";
		displayName=$STR_DN_GRAVE_CROSS_1;
		nameSound="grave";
		accuracy=1000; // never recognize
		destrType=DestructNo;
	};
	class GraveCross2: Camp
	{
		scope = public;
		model = BuildingPath\Misc\hrobecek_krizek2.p3d;
		icon="\Ca\buildings\Icons\i_grob_CA.paa";
		displayName=$STR_DN_GRAVE_CROSS_2;
		nameSound="grave";
		accuracy=1000; // never recognize
		destrType=DestructNo;
	};
	class GraveCrossHelmet: Camp
	{
		scope = public;
		model = BuildingPath\Misc\hrobecek_krizekhelma.p3d;
		icon="\Ca\buildings\Icons\i_grob_CA.paa";
		displayName=$STR_DN_GRAVE_CROSS_HELMET;
		nameSound="grave";
		accuracy=1000; // never recognize
		destrType=DestructNo;
	};
	class WireFence: NonStrategic
	{
		scope = public;
		animated = false;
		vehicleClass="Objects";
		nameSound="fence";
		typicalCargo[]={};

		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;

		cost=0;
		armor=200;

		model = BuildingPath\Misc\plot_provizorni.p3d;
		icon="\Ca\buildings\Icons\i_fence_CA.paa";
		displayName=$STR_DN_FENCE_WIRE;
		accuracy=0.3;
		mapSize = 5.5;
	};

  //These objects can NOT be inserted in Editor
	//Temporary objects for artists. ToDo: Check for deleting
	class CATest_Object: House
	{
		simulation = "house";
		vehicleClass = Objects;
	};
	class CATest_Thing: Thing
	{
		simulation = "house";
		vehicleClass = Objects;
		coefInside = 2;
		coefInsideHeur = 4.3;
	};
	class FuelStation: Strategic
	{
		//-- fuel station building
		icon="\Ca\buildings\Icons\i_fuel_CA.paa";

		scope = protected;
		animated = false;
		armor=20;
		model = BuildingPath\fuelstation;
		displayName=$STR_DN_FUEL_STATION;
		nameSound="fuelstation";
		accuracy=0.50;

		transportFuel = 50000;

		class DestructionEffects
		{
			//	explosion
			class FuelStationExp
			{
				simulation = "particles";
				type = "FuelStationExp";
				position = "";

				intensity = 0.15;
				interval = 1;
				lifeTime = 0.001;
			};
			class FuelStationSmk1
			{
				simulation = "particles";
				type = "FuelStationSmk1";
				position = "";

				intensity = 0.15;
				interval = 1;
				lifeTime = 0.001;
			};
			//	fire
			class Light1
			{
				simulation = "light";
				type = "ObjectDestructionLight";
				position = "DestructionFire";

				intensity = 0.001;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelFire1
			{
				simulation = "particles";
				type = "FuelFire1";
				position = "DestructionFire";

				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelSmoke1
			{
				simulation = "particles";
				type = "FuelSmoke1";
				position = "DestructionFire";

				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			class FuelSmoke2
			{
				simulation = "particles";
				type = "FuelSmoke2";
				position = "DestructionFire";

				intensity = 0.15;
				interval = 1;
				lifeTime = 0.5;
			};
			//	destruction
			class FuelDestr
			{
				 simulation = "destroy";
				 type = "FuelStationDestr";
				 // for destroy parameters do not matter
				 position = "";
				 intensity = 1;
				 interval = 1;
				 lifeTime = 1;
			};
		};
	};

	/*
	class Fountain: NonStrategic // compatibility - some addons may derive from this
	{
		animated=false;
		scope = protected;
		model = BuildingPath\kasna;
		displayName=$STR_DN_FOUNTAIN;
//		nameSound="fountain";
		simulation = fountain;
		sound = "Fountain";
		animPeriod = 1.33;
		cost=0;
		armor=800;
	};
	*/
	// #include "furniture.hpp"

	class Wall: Strategic
	{
		animated = false;
		scope = protected;

		vehicleClass=Objects;
		icon="\Ca\buildings\Icons\i_wall_CA.paa";
		nameSound="wall";
		accuracy=0.20;
		typicalCargo[]={};
		destrType=DestructTree;

		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 2.684;
		cost=0;
		armor=500;
	};

	class Wall1: Wall
	{
		scope = public;
		icon="\Ca\buildings\Icons\i_wall_CA.paa";
		model = BuildingPath\Misc\zidka01.p3d;
		displayName=$STR_DN_WALL;
		mapSize = 2.684;
	};

	class Land_zidka_branka: Wall
	{
		scope = public;
		icon="\Ca\buildings\Icons\i_wallD_CA.paa";
		model = BuildingPath\Misc\zidka_branka.p3d;
		displayName=$STR_DN_WALL_DOOR;
		mapSize = 2.684;
	};

	class Wallend: Wall
	{
		scope = public;
		icon="\Ca\buildings\Icons\i_wall_CA.paa";
		model = BuildingPath\Misc\zidka04.p3d;
		displayName=$STR_DN_WALL_END;
		mapSize = 2.684;
	};

	class Land_zidka03: Wall
	{
		scope = public;
		icon="\Ca\buildings\Icons\i_wallD_CA.paa";
		model=BuildingPath\Misc\zidka03.p3d;
		displayName=$STR_DN_WALL_HOLE;
		mapSize = 2.684;
	};

	#define BUILD_NAME(x) Land_##x

	#define BUILDING(x) class Land_##x: House {scope=protected;model=\ca\buildings\##x;}
	#define BUILDING_MISC(x) class Land_##x:House {scope=protected;model=\ca\buildings\misc\##x;};
	#define BUILDING_CASTLE(x) class Land_##x: House {scope=protected;model=\ca\buildings\castle\##x;}

	#define RUINEFFECT(x) class DestructionEffects: DestructionEffects \
		{ \
			class Ruin1 \
			{ \
				simulation = ruin; \
				type=\ca\buildings\ruins\##x##_ruins.p3d; \
				position=""; \
				intensity = 1; \
				interval = 1; \
				lifeTime = 1; \
			}; \
		};
	#define SOFT_BUILDING_WITH_RUINS(x) class Land_##x: House \
	{\
		scope=protected; \
		model=\ca\buildings\##x.p3d; \
		armor=200; \
		RUINEFFECT(x) \
	};
	#define MEDIUM_BUILDING_WITH_RUINS(x) class Land_##x: House \
	{\
		scope=protected; \
		armor=500; \
		model=\ca\buildings\##x.p3d; \
		RUINEFFECT(x) \
	};
	#define BUILDING_WITH_RUINS(x) class Land_##x: House \
	{\
		scope=protected; \
		model=\ca\buildings\##x.p3d; \
		armor=800; \
		RUINEFFECT(x) \
	};
	#define LIGHTBUILDING(x) class Land_##x:House {scope=protected;model=\ca\buildings\##x;destrType=DestructTent;armor = 50;};
	#define RUINS(x) class Land_##x: Ruins {scope=protected;vehicleClass=Ruins;model=\ca\buildings\Ruins\##x;displayName=##x;}
	#include "ruins.hpp"
	class Land_majak: House
	{
		scope = protected;
		model=BuildingPath\majak;
		displayName = $STR_DN_LIGHTHOUSE;
		animated = true;
		ladders[]={{"start","end"}};
		RUINEFFECT(majak)
		armor=1000;

		class MarkerLights
		{
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.02;
				blinking = true;
			};
		};

		class Reflectors
		{
			class MainLight
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "Source_MainLight";
				direction = "Direction_MainLight";
				hitpoint = "MainLight";
				selection = "LightFlare";
				size = 5;
				brightness = 3;
				period[] = {4.6, 2.4};
			};
		};
	};
	class Land_majak_v_celku: Land_majak
	{
	  	model=BuildingPath\majak_v_celku;
	  	RUINEFFECT(majak_v_celku)
	};
	class BUILD_NAME(majak_podesta): house
	{
	  	model=BuildingPath\majak_podesta;
	  	destrType=DestructNo;
	  	scope = protected;
	};
	class Land_majak2: Land_majak
	{
	  	model=BuildingPath\majak2;
	  	class Reflectors
		{
			class MainLight
			{
				color[] = {0.9, 0.8, 0.8, 1.0};
				ambient[] = {0.1, 0.1, 0.1, 1.0};
				position = "Source_MainLight";
				direction = "Direction_MainLight";
				hitpoint = "MainLight";
				selection = "LightFlare";
				size = 5;
				brightness = 3;
				period[] = {2.4, 4.6};
			};
		};
	  	RUINEFFECT(majak)
	};
	class BUILD_NAME(molo_beton): house
	{
	  	model=BuildingPath\molo_beton;
	  	destrType=DestructNo;
	  	scope = protected;
	};
	class BUILD_NAME(molo_drevo): house
	{
	  	model=BuildingPath\molo_drevo;
	  	destrType=DestructTree;
	  	scope = protected;
	};
	class BUILD_NAME(molo_drevo_bs): house
	{
	  	model=BuildingPath\molo_drevo_bs;
	  	destrType=DestructTree;
	  	scope = protected;
	};
	class BUILD_NAME(molo_drevo_end): house
	{
	  	model=BuildingPath\molo_drevo_end;
	  	destrType=DestructTree;
	  	scope = protected;
	};
	class BUILD_NAME(molo_drevo_krychle): house
	{
	  	model=BuildingPath\molo_drevo_krychle;
	  	destrType=DestructNo;
	  	scope = protected;
	};
	class BUILD_NAME(molo_drevo_krychle2): house
	{
	  	model=BuildingPath\molo_drevo_krychle2;
	  	destrType=DestructNo;
	  	scope = protected;
	};
	class BUILD_NAME(molo_krychle): house
	{
	  	model=BuildingPath\molo_krychle;
	  	destrType=DestructNo;
	  	scope = protected;
	};
	class BUILD_NAME(molo_krychle2): house
	{
	  	model=BuildingPath\molo_krychle2;
	  	destrType=DestructNo;
	  	scope = protected;
	};
	class BUILD_NAME(zastavka_jih): house
	{
	  	model=BuildingPath\zastavka_jih;
	  	destrType=DestructBuilding;
	  	scope = protected;
	};
	class BUILD_NAME(zastavka_sever): house
	{
	  	model=BuildingPath\zastavka_sever;
	  	destrType=DestructBuilding;
	  	scope = protected;
	};
	BUILDING_MISC(pletivo_dira)
	BUILDING_MISC(plot_zed_drevo1_branka)
	BUILDING_MISC(plot_istan1b_hole)
	BUILDING_MISC(plot_istan1_rovny_gate)
	BUILDING_MISC(Plot_Ohrada_Pruchozi)
	BUILDING_MISC(plot_zboreny)
	BUILDING_MISC(stanek_1)
	BUILDING_MISC(stanek_1B)
	BUILDING_MISC(stanek_1C)
	BUILDING_MISC(zed_dira)
	BUILDING_MISC(zed_dira_civil)
	BUILDING_MISC(zed_dira_desert)

	MEDIUM_BUILDING_WITH_RUINS(afbarabizna)		// Burned house
	MEDIUM_BUILDING_WITH_RUINS(afdum_mesto2)		// Burned house
	MEDIUM_BUILDING_WITH_RUINS(afdum_mesto2L)		// Burned city house
	MEDIUM_BUILDING_WITH_RUINS(afdum_mesto3)		// Burned house
	MEDIUM_BUILDING_WITH_RUINS(afhospoda_mesto)	// Burned pub
	SOFT_BUILDING_WITH_RUINS(bouda1)		// Shed
	// BUILDING_WITH_RUINS(bouda2)		// Shed
	SOFT_BUILDING_WITH_RUINS(bouda3)		// Shed
	SOFT_BUILDING_WITH_RUINS(brana02)   //House gate
	SOFT_BUILDING_WITH_RUINS(brana02nodoor) //House gate without doors
	MEDIUM_BUILDING_WITH_RUINS(budova1)		// House
	MEDIUM_BUILDING_WITH_RUINS(budova2)		// House
	MEDIUM_BUILDING_WITH_RUINS(budova3)		// House
	MEDIUM_BUILDING_WITH_RUINS(budova4)		// House
	MEDIUM_BUILDING_WITH_RUINS(budova5)		// House
	BUILDING_WITH_RUINS(cihlovej_dum)		// Brick house
	BUILDING_WITH_RUINS(cihlovej_dum_in)	// Brick house (interiour)
	MEDIUM_BUILDING_WITH_RUINS(cihlovej_dum_mini)	// Small brick house
	BUILDING_WITH_RUINS(deutshe)		// German house
	MEDIUM_BUILDING_WITH_RUINS(deutshe_mini)		// German house
	// BUILDING_WITH_RUINS(domek_hospoda)   //Pub
	// BUILDING_WITH_RUINS(domek_kovarna)   //BlackSmith
	// BUILDING_WITH_RUINS(domek_podhradi_1)  //House
	BUILDING_WITH_RUINS(domek_rosa)   //House
	/*
	BUILDING_WITH_RUINS(domek_ruina)   //House
	BUILDING_WITH_RUINS(domek_sedy_bez)   //House
	BUILDING_WITH_RUINS(domek_vilka)   //House
	BUILDING_WITH_RUINS(domek_zluty_bez)   //House
	BUILDING_WITH_RUINS(domek01)   //House
	BUILDING_WITH_RUINS(domek02)   //House
	BUILDING_WITH_RUINS(domek03)   //House
	BUILDING_WITH_RUINS(domek04)   //House
	BUILDING_WITH_RUINS(domek05)   //House
	*/
	MEDIUM_BUILDING_WITH_RUINS(dulni_bs)		// Minehouse
	BUILDING_WITH_RUINS(dum_istan2)		// South House
	BUILDING_WITH_RUINS(dum_istan2b)		// South House
	BUILDING_WITH_RUINS(dum_istan2_01)		// South House
	BUILDING_WITH_RUINS(dum_istan2_02)		// South House
	BUILDING_WITH_RUINS(dum_istan2_03)		// South House
	BUILDING_WITH_RUINS(dum_istan2_03a)		// South House
	BUILDING_WITH_RUINS(dum_istan2_04a)		// South House
	BUILDING_WITH_RUINS(dum_istan3)		// South House
	BUILDING_WITH_RUINS(dum_istan3_hromada)		// South House
	BUILDING_WITH_RUINS(dum_istan3_hromada2)		// South House
	BUILDING_WITH_RUINS(dum_istan3_pumpa)		// South House
	BUILDING_WITH_RUINS(dum_istan4)		// South House
	BUILDING_WITH_RUINS(dum_istan4_big)		// South House
	BUILDING_WITH_RUINS(dum_istan4_big_inverse)		// South House
	BUILDING_WITH_RUINS(dum_istan4_detaily1)		// South House
	BUILDING_WITH_RUINS(dum_istan4_inverse)		// South House
	MEDIUM_BUILDING_WITH_RUINS(dum_m2)		// House
	BUILDING_WITH_RUINS(dum_mesto)		// City house
	BUILDING_WITH_RUINS(dum_mesto_in)		// City house (interiour)
	BUILDING_WITH_RUINS(dum_mesto2l)		// City house
	BUILDING_WITH_RUINS(dum_mesto3)		// City house
	BUILDING_WITH_RUINS(dum_mesto3_istan)		// South House
	BUILDING_WITH_RUINS(dum_olezlina)		// Broken house
	BUILDING_WITH_RUINS(dum_olez_istan1)		// South House
	BUILDING_WITH_RUINS(dum_olez_istan2)		// South House
	BUILDING_WITH_RUINS(dum_olez_istan2_maly)		// South House
	BUILDING_WITH_RUINS(dum_olez_istan2_maly2)		// South House
	BUILDING_WITH_RUINS(dum_patr_nizky_prujezd)    // City house
	/*
	BUILDING_WITH_RUINS(dum_patrovy01)   // City house
	BUILDING_WITH_RUINS(dum_patrovy01c)  // City house
	BUILDING_WITH_RUINS(dum_patrovy01d)  // City house
	BUILDING_WITH_RUINS(dum_patrovy01prujezd)  // City house
	BUILDING_WITH_RUINS(dum_patrovy02)   // City house
	BUILDING_WITH_RUINS(dum_patrovy03)   // City house
	BUILDING_WITH_RUINS(dum_patrovy04)   // City house
	BUILDING_WITH_RUINS(dum_patrovy05)   // City house
	BUILDING_WITH_RUINS(dum_patrovy06)   // City house
	BUILDING_WITH_RUINS(dum_podloubi)    // City house
	BUILDING_WITH_RUINS(dum_podloubi02)  // City house
	BUILDING_WITH_RUINS(dum_podloubi03)  // City house
	BUILDING_WITH_RUINS(dum_podloubi03klaster) // City house
	BUILDING_WITH_RUINS(dum_rasovna)	// Broken house (interiour)
	*/
	MEDIUM_BUILDING_WITH_RUINS(dum_zboreny)		// Destroyed house
	// BUILDING_WITH_RUINS(dum_zboreny_lidice)	// Totally destroyed house
	SOFT_BUILDING_WITH_RUINS(dum_zboreny_total)	// Totally destroyed house
	BUILDING_WITH_RUINS(dum01)			// House
	BUILDING_WITH_RUINS(dum02)			// House
	BUILDING_WITH_RUINS(dumruina)		// Ruin
	MEDIUM_BUILDING_WITH_RUINS(dumruina_mini)		// Ruin
	MEDIUM_BUILDING_WITH_RUINS(garaz)			// Garage
	MEDIUM_BUILDING_WITH_RUINS(garaz_mala)			// Garage
	BUILDING_WITH_RUINS(hangar_2)    //hangar
	// BUILDING_WITH_RUINS(hasic_zbroj)   //House
	BUILDING_WITH_RUINS(hospital)		// Hospital
	BUILDING_WITH_RUINS(hospoda_mesto)		// Pub
	MEDIUM_BUILDING_WITH_RUINS(house_y)		// South house
	MEDIUM_BUILDING_WITH_RUINS(hut_old02)		// South house
	// BUILDING_WITH_RUINS(Chata6)    //House
	BUILDING_WITH_RUINS(kasarna_rohova)
	MEDIUM_BUILDING_WITH_RUINS(kasarna_brana)
	BUILDING_WITH_RUINS(kasarna)
	BUILDING_WITH_RUINS(kasarna_prujezd)
	// BUILDING_WITH_RUINS(kostel_mexico)   // South Church
	MEDIUM_BUILDING_WITH_RUINS(kostel_trosky)		// Church ruins
	MEDIUM_BUILDING_WITH_RUINS(kostelik)    //Church
	// BUILDING_WITH_RUINS(kostelin)    //Church
	LIGHTBUILDING(kulna)    //Small house
	BUILDING_WITH_RUINS(jizak_test)    // South House
	// BUILDING_WITH_RUINS(mesto_dum)		// City house
	BUILDING_WITH_RUINS(OrlHot)    //Big House
	// BUILDING_WITH_RUINS(plechbud)		// Shed

	class BUILD_NAME(podesta_1_cube): House      //wall (with stairs)
	{
		scope = protected;
		model = BuildingPath\podesta_1_cube;
		displayName = "";
		destrType=DestructNo;
	};
	class BUILD_NAME(podesta_1_cube_long): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_1_cube_long;
	};
	class BUILD_NAME(podesta_1_cornl): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_1_cornl;
	};
	class BUILD_NAME(podesta_1_cornp): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_1_cornp;
	};
	class BUILD_NAME(podesta_1_mid_cornl): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_1_mid_cornl;
	};
	class BUILD_NAME(podesta_1_mid_cornp): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_1_mid_cornp;
	};
	class BUILD_NAME(podesta_1_mid): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_1_mid;
	};
	class BUILD_NAME(podesta_1_stairs): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_1_stairs;
	};
	class BUILD_NAME(podesta_1_stairs2): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_1_stairs2;
	};
	class BUILD_NAME(podesta_1_stairs3): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_1_stairs3;
	};
	class BUILD_NAME(podesta_1_stairs4): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_1_stairs4;
	};
	class BUILD_NAME(podesta_5): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_5;
	};
	class BUILD_NAME(podesta_10): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_10;
	};
	class BUILD_NAME(podesta_s5): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_s5;
	};
	class BUILD_NAME(podesta_s10): BUILD_NAME(podesta_1_cube)
	{
		model = BuildingPath\podesta_s10;
	};
	class BUILD_NAME(repair_center): House // Repair center
	{
		scope = protected;
		model = BuildingPath\repair_center;
		RUINEFFECT(repair_center)
		supplyRadius = 2.4;
		armor=500;
	};
	MEDIUM_BUILDING_WITH_RUINS(ryb_domek)		// Fishing house
	BUILDING_WITH_RUINS(skola)   //Big House
	BUILDING_WITH_RUINS(SS_hangar)   //Hangar duuude
	BUILDING_WITH_RUINS(SS_hangarD)   //Hangar duuude
	MEDIUM_BUILDING_WITH_RUINS(stanice)		// Station
	SOFT_BUILDING_WITH_RUINS(statek_brana)		// Farmhouse
	SOFT_BUILDING_WITH_RUINS(statek_brana_open)		// Farmhouse
	SOFT_BUILDING_WITH_RUINS(psi_bouda)		// puòta´s home
	MEDIUM_BUILDING_WITH_RUINS(statek_hl_bud)		// Farmhouse
	// BUILDING_WITH_RUINS(Statek_kulna_old)
	MEDIUM_BUILDING_WITH_RUINS(Statek_kulna)
	// BUILDING_WITH_RUINS(stodola)		// Barn
	// BUILDING_WITH_RUINS(stodola2)		// Barn
	// BUILDING_WITH_RUINS(stodola3)		// Barn
	BUILDING_WITH_RUINS(stodola_old)		// Old farm
	BUILDING_WITH_RUINS(stodola_old_open)		// Old farm
	// BUILDING_WITH_RUINS(stodola_old_open2)		// Old farm
	BUILDING_WITH_RUINS(stodola_open)		// Barn
	BUILDING_WITH_RUINS(strazni_vez)		// Guard tower
	MEDIUM_BUILDING_WITH_RUINS(ZalChata)    //WoodHouse
	// BUILDING_WITH_RUINS(zluty_statek)    //House

//	BUILDING(bouda2_vnitrek)	// Shed (interiour)
//	BUILDING(drevo_hromada)

//	BUILDING(invisible_house)


//specific houses on sara
	MEDIUM_BUILDING_WITH_RUINS(army_hut_storrage)   //House
	MEDIUM_BUILDING_WITH_RUINS(army_hut_int)   //House
	MEDIUM_BUILDING_WITH_RUINS(army_hut2)   //House
	MEDIUM_BUILDING_WITH_RUINS(army_hut2_int)   //House
	MEDIUM_BUILDING_WITH_RUINS(army_hut3_long)   //House
	MEDIUM_BUILDING_WITH_RUINS(army_hut3_long_int)   //House


	SOFT_BUILDING_WITH_RUINS(hut01)   //House
	SOFT_BUILDING_WITH_RUINS(hut02)   //House
	SOFT_BUILDING_WITH_RUINS(hut03)   //House
	SOFT_BUILDING_WITH_RUINS(hut04)		//House
	SOFT_BUILDING_WITH_RUINS(hut06)		//House

	BUILDING_WITH_RUINS(sara_domek01)   //House
	BUILDING_WITH_RUINS(sara_domek02)   //House
	BUILDING_WITH_RUINS(sara_domek03)   //House
	BUILDING_WITH_RUINS(sara_domek04)   //House
	BUILDING_WITH_RUINS(sara_domek05)   //House

	BUILDING_WITH_RUINS(sara_domek_hospoda)   //House
	BUILDING_WITH_RUINS(sara_domek_kovarna)   //House
	BUILDING_WITH_RUINS(sara_domek_sedy_bez)   //House
	BUILDING_WITH_RUINS(sara_domek_podhradi_1)   //House
	BUILDING_WITH_RUINS(sara_domek_rosa)   //House
	BUILDING_WITH_RUINS(sara_domek_ruina)   //House
	BUILDING_WITH_RUINS(sara_domek_vilka)   //House
	BUILDING_WITH_RUINS(sara_domek_zluty_bez)   //House
	BUILDING_WITH_RUINS(sara_dum_patr_nizky_prujezd)   //House
	/*
	BUILDING_WITH_RUINS(sara_dum_patrovy01)   //House
	BUILDING_WITH_RUINS(sara_dum_patrovy01b)   //House
	BUILDING_WITH_RUINS(sara_dum_patrovy01c)   //House
	BUILDING_WITH_RUINS(sara_dum_patrovy01d)   //House
	BUILDING_WITH_RUINS(sara_dum_patrovy01prujezd)   //House
	BUILDING_WITH_RUINS(sara_dum_patrovy02)   //House
	BUILDING_WITH_RUINS(sara_dum_patrovy03)   //House
	BUILDING_WITH_RUINS(sara_dum_patrovy04)   //House
	BUILDING_WITH_RUINS(sara_dum_patrovy05)   //House
	BUILDING_WITH_RUINS(sara_dum_podloubi)   //House
	BUILDING_WITH_RUINS(sara_dum_podloubi02)   //House
	BUILDING_WITH_RUINS(sara_dum_podloubi02b)   //House
	BUILDING_WITH_RUINS(sara_dum_podloubi03)   //House
	*/
	BUILDING_WITH_RUINS(sara_dum_podloubi03klaster)  //House
	BUILDING_WITH_RUINS(sara_dum_podloubi03rovny)  //House
	BUILDING_WITH_RUINS(sara_hasic_zbroj)   //House
	BUILDING_WITH_RUINS(sara_stodola)   //House
	BUILDING_WITH_RUINS(sara_stodola2)   //House
	BUILDING_WITH_RUINS(sara_stodola3)
	BUILDING_WITH_RUINS(sara_zluty_statek)   //House

	BUILDING(townhall)   //House

// End of specific houses for sara

	BUILDING_MISC(ruiny_3_dvere)
	BUILDING_MISC(ruiny_3_prasklina)
	BUILDING_MISC(ruiny_3_roh)
	BUILDING_MISC(ruiny_3_stenazbor)
	BUILDING_MISC(ruiny_3_stena)
	BUILDING_MISC(ruiny_obvod_3)

	class BUILD_NAME(pumpa): House
	{
		scope = protected;
		model = \ca\buildings\misc\pumpa;
		destrType=DestructBuilding;
		armor=50;
	};
	class BUILD_NAME(helfenburk): House      //Castle
	{
		scope = protected;
		model = BuildingPath\castle\helfenburk;
		destrType=DestructNo;
	};
	class BUILD_NAME(helfenburk_brana): BUILD_NAME(helfenburk)
	{
		model = BuildingPath\castle\helfenburk_brana;
	};
	class BUILD_NAME(helfenburk_budova2): BUILD_NAME(helfenburk)
	{
		model = BuildingPath\castle\helfenburk_budova2;
	};
	class BUILD_NAME(helfenburk_cimburi): BUILD_NAME(helfenburk)
	{
		model = BuildingPath\castle\helfenburk_cimburi;
	};
	class BUILD_NAME(helfenburk_zed): BUILD_NAME(helfenburk)
	{
		model = BuildingPath\castle\helfenburk_zed;
	};

//	BUILDING_MISC(ruiny_obvod_2)
//	BUILDING_MISC(ruiny_obvod_kompl)

	LIGHTBUILDING(bouda2_vnitrek)	// Shed (interiour)
	LIGHTBUILDING(bouda_plech)
	LIGHTBUILDING(aut_zast)

	class BUILD_NAME(benzina): FuelStation
	{
		model=BuildingPath\benzina;
		nameSound="fuelstation";
		supplyRadius = 5.5;
		armor=20;
	};
	class BUILD_NAME(benzina_schnell): Land_benzina
	{
		model=BuildingPath\benzina_schnell;
		RUINEFFECT(benzina_schnell)
		armor=20;
	};
	class BUILD_NAME(budova4_in): House
	{
		side = TCivilian;
		model = BuildingPath\budova4_in;
		displayName=$STR_DN_BARRACKS;
		nameSound="building";
		simulation="house";
		mapSize = 15.4;
		RUINEFFECT(budova4_in)
		armor=500;
	};
	class BUILD_NAME(HANGAR): Shed
	{
		scope=protected;
		side = TCivilian;
		model = BuildingPath\HANGAR;
		animated=false;
		displayName=$STR_DN_HANGAR_HALL;
		nameSound="building";
		simulation="house";
		mapSize = 25;
		armor=500;
	};

	// class BUILD_NAME(kasna): Fountain {};
	// class BUILD_NAME(kasna_new_bez): Fountain {};
	// class BUILD_NAME(kasna_sucha): Fountain {};

	class BUILD_NAME(garaz_bez_tanku) : House
	{
		scope=protected;
		model = BuildingPath\garaz_bez_tanku;
		ladders[]={{"start","end"},{"start1","end1"},{"start2","end2"}};
		destrType=DestructNo;
	};

	class BUILD_NAME(garaz_s_tankem) : House
	{
		scope=protected;
		model = BuildingPath\garaz_s_tankem;
		ladders[]={{"start","end"},{"start1","end1"},{"start2","end2"}};
		supplyRadius = 1.1;
		destrType=DestructNo;
	};

	class BUILD_NAME(hruzdum): House
	{
		scope=protected;
		model = BuildingPath\hruzdum;
		ladders[]={{"start","end"}};
		armor=300;
		RUINEFFECT(hruzdum)
	};

	class BUILD_NAME(dum_rasovna): House		// Broken house
	{
		scope=protected;
		model = BuildingPath\dum_rasovna;
		ladders[]={{"start","end"}};
		armor=300;
		RUINEFFECT(dum_rasovna)
	};

	class BUILD_NAME(ammostore2): House
	{
		scope=protected;
		model = BuildingPath\ammostore2;
		ladders[]={{"start","end"},{"start1","end1"},{"start2","end2"}};
		destrType=DestructNo;
		supplyRadius = 5.5;
	};

	class BUILD_NAME(hlaska): House
	{
		scope=protected;
		model = BuildingPath\hlaska;
		nameSound="guardtower";
		ladders[]={{"start","end"}};
		armor=500;
		RUINEFFECT(hlaska)
	};
	class BUILD_NAME(vez): House
	{
		scope=protected;
		model = BuildingPath\vez;
		nameSound="guardtower";
		ladders[]={{"start","end"}};
		armor=500;
		RUINEFFECT(vez)
	};

	class BUILD_NAME(kostel): Church
	{
		scope=protected;
		model = BuildingPath\kostel.p3d;
		ladders[]={{"start","end"}};

		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = "ruin";
				type = BuildingPath\ruins\kostel_ruins.p3d;
				// following parameters need to be there, but they are not really used
				position="";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
  	};
	class BUILD_NAME(kostel2): Church
	{
		scope=protected;model=BuildingPath\kostel2.p3d;
		class DestructionEffects: DestructionEffects
		{
			class Ruins
			{
				simulation = "ruin";
				type = BuildingPath\ruins\kostel2_ruins.p3d;
				// following parameters need to be there, but they are not really used
				position="";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class BUILD_NAME(kostel3): Church
	{
		scope=protected;model=BuildingPath\kostel3.p3d;
		class DestructionEffects: DestructionEffects
		{
			class Ruins
			{
				simulation = "ruin";
				type = BuildingPath\ruins\kostel3_ruins.p3d;
				// following parameters need to be there, but they are not really used
				position="";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class BUILD_NAME(kostel_mexico): Church
	{
		scope=protected;
		model = BuildingPath\kostel_mexico.p3d;
		ladders[]={{"start","end"},{"start1","end1"}};
		simulation="house";
		animated=false;
		class DestructionEffects: DestructionEffects
		{
			class Ruins
			{
				simulation = "ruin";
				type = BuildingPath\ruins\kostel_mexico_ruins.p3d;
				// following parameters need to be there, but they are not really used
				position="";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
  };
 	class BUILD_NAME(fuelstation): FuelStation
 	{
 		supplyRadius = 3.3;
 		ladders[]={{"start","end"}};
 	};
	class BUILD_NAME(fuelstation_army): FuelStation
	{
		armor=50;
		model = BuildingPath\fuelstation_army;
		displayName=$STR_DN_FUEL_STATION_3;
		accuracy=1000;
		supplyRadius = 3.3;
		ladders[]={{"start","end"}};
	};
	/*
	class BUILD_NAME(brana): House
	{
		model=BuildingPath\castle\brana;
		armor=200;
	};
	*/
	class BUILD_NAME(brana_krat_1_7): House
	{
		model=BuildingPath\castle\brana_krat_1_7;
		armor=200;
	};
	class BUILD_NAME(Panelak): House
	{
		ladders[]={{"start","end"}};
		model=BuildingPath\Panelak;
		RUINEFFECT(panelak)
		armor=1000;
	};

	class BUILD_NAME(letistni_hala): House
	{
		ladders[]={{"start2","end2"},{"start1","end1"}};
		model=BuildingPath\letistni_hala;
		RUINEFFECT(letistni_hala)
		armor=500;
	};

	class BUILD_NAME(KBud): House
	{
		model=BuildingPath\Misc\KBud;
		animated = true;
		destrType=DestructTent;
		armor=20;
		class AnimationSources
		{
			class Dvere1 {animPeriod = 1;};
		};
		class UserActions
		{
			class OpenDoors
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere1;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
			class CloseDoors
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere1;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0]";
			};
		};
		actionBegin1 = OpenDoors;
		actionEnd1 = OpenDoors;
	};
	class BUILD_NAME(Nasypka): House
	{
		model=BuildingPath\Misc\Nasypka;
		RUINEFFECT(Nasypka)
		ladders[]={{"start","end"}};
		armor = 500;
	};
	class BUILD_NAME(Tovarna1): House
	{
		armor = 800;
		model=BuildingPath\Tovarna1;
		ladders[]={{"start","end"}};
		RUINEFFECT(Tovarna1)
	};
	class BUILD_NAME(Tovarna2): House
	{
		armor = 800;
		model=BuildingPath\tovarna2;
		ladders[]={{"start1","end1"},{"start3","end3"},{"start4","end4"},{"start5","end5"}};
		RUINEFFECT(Tovarna2)
	};


	class BUILD_NAME(Hlidac_budka): House
	{
		model=BuildingPath\Hlidac_budka;
		armor=200;
		animated = true;
		scope=protected;
		RUINEFFECT(Hlidac_budka)
		class AnimationSources
		{
			class Dvere1 {animPeriod = 1;};
			class Dvere2 :Dvere1 {};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere1;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere1;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
			class OpenDoors2
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere2;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere2"" >= 0.5";
				statement = "this animate [""Dvere2"", 0]";
			};
			class CloseDoors2
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere2;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1]";
			};
		};

		actionBegin1 = OpenDoors1;
		actionEnd1 = OpenDoors1;
		actionBegin2 = OpenDoors2;
		actionEnd2 = OpenDoors2;
	};

	class BUILD_NAME(Domek_sedy): House
	{
		model=BuildingPath\Domek_sedy;
		animated = true;
		armor=300;
		class AnimationSources
		{
			class Dvere1 {animPeriod = 1;};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere1;
				radius = 3;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere1;
				radius = 3;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
		};
		actionBegin1 = OpenDoors1;
		actionEnd1 = OpenDoors1;
	};
	class BUILD_NAME(sara_Domek_sedy): Land_Domek_sedy
	{
		model=BuildingPath\sara_Domek_sedy;
		RUINEFFECT(sara_domek_sedy)
		armor=300;
		class AnimationSources
		{
			class Dvere1 {animPeriod = 1;};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere1;
				radius = 3;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere1;
				radius = 3;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
		};
		actionBegin1 = OpenDoors1;
		actionEnd1 = OpenDoors1;
	};
	class BUILD_NAME(posed): House
	{
		ladders[]={{"start","end"}};
		model=BuildingPath\posed;
		RUINEFFECT(posed)
		armor=100;
	};

	class BUILD_NAME(leseni4x): House
	{
		ladders[]={{"start2","end2"},{"start1","end1"}};
		model=BuildingPath\Misc\leseni4x;
		RUINEFFECT(leseni4x)
		armor=50;
	};
	class BUILD_NAME(leseni2x): House
	{
		model=BuildingPath\Misc\leseni2x;
		RUINEFFECT(leseni2x)
		armor=50;
	};

	class BUILD_NAME(domek_zluty): House
	{
		model=BuildingPath\domek_zluty;
		animated = true;
		armor=300;
		class AnimationSources
		{
			class Dvere1 {animPeriod = 1;};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere1;
				radius = 3;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere1;
				radius = 3;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
		};
		actionBegin1 = OpenDoors1;
		actionEnd1 = OpenDoors1;
	};
	class BUILD_NAME(sara_domek_zluty): land_domek_zluty
	{
		model=BuildingPath\sara_domek_zluty;
		RUINEFFECT(sara_domek_zluty)
	};
	class BUILD_NAME(Vysilac_FM): House
	{
		scope = protected;
		armor = 150;
		destrType=DestructBuilding;
		ladders[]={{"start","end"}};
		model=BuildingPath\Vysilac_FM;
		class MarkerLights
		{
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.01;
				blinking = true;
			};
		};
		class Destruction
		{
			animations[]={{"ca\buildings\rtm\vysilac_fm.rtm",0.5,3}};
		};
		displayName = $STR_DN_RADAR1;
	};

	class BUILD_NAME(vysilac_FM2): BUILD_NAME(vysilac_FM)
	{
		scope = protected;
		model=BuildingPath\vysilac_FM2;
		displayName = $STR_DN_RADAR2;
		placement = vertical;
	};
	class BUILD_NAME(watertower1): House
	{
		scope = protected;
		model=BuildingPath\watertower1;
		displayName = $STR_DN_WATERTOWER1;
		armor = 500;
		destrType=DestructBuilding;
		RUINEFFECT(watertower1)
		ladders[]={{"start","end"}};

		class MarkerLights
		{
			class RedBlinking
			{
				name = "cerveny pozicni";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.01;
				blinking = true;
			};
		};
	};
	class BUILD_NAME(telek1): House
	{
		scope = protected;
		armor = 600;
		destrType=DestructBuilding;
		model=BuildingPath\telek1;
		RUINEFFECT(telek1)
		class MarkerLights
		{
			class RedBlinking
			{
				name = "cerveny pozicni";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.01;
				blinking = true;
			};
		};
		displayName = $STR_DN_TELEK1;
		ladders[]={{"start1","end1"},{"start2","end2"},{"start3","end3"}};
    };
	class BUILD_NAME(radar): BUILD_NAME(vysilac_FM2)
	{
		armor = 80;
		scope = public;
		displayName = $STR_DN_RADAR;
	};

	class BUILD_NAME(zluty_statek_in): House
	{
		armor = 1000;
		model=BuildingPath\zluty_statek_in;
		animated = true;
		class AnimationSources
		{
			class Dvere1 {animPeriod = 1;};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere1;
				radius = 3;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0]";
			};
			class CloseDoors1
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere1;
				radius = 3;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
		};
		actionBegin1 = OpenDoors1;
		actionEnd1 = OpenDoors1;
	};
	class BUILD_NAME(sara_zluty_statek_in): Land_zluty_statek_in
	{
		model=BuildingPath\sara_zluty_statek_in;
		RUINEFFECT(sara_zluty_statek_in)
	};
	class BUILD_NAME(domek_radnice): House
	{
		displayName = $STR_O_HOUSE_TOWN_HALL;
		scope=protected;
		armor = 1000;
		animated = true;
		simulation = "church";
		model=BuildingPath\domek_radnice;
		ladders[]={{"start","end"}};
	};

	class BUILD_NAME(Panelak2): House
	{
		ladders[]={{"start","end"}};
		model=BuildingPath\Panelak2;
		RUINEFFECT(Panelak2)
		armor = 1000;
	};

	class BUILD_NAME(Panelak3): House
	{
		ladders[]={{"start2","end2"},{"start1","end1"}};
		model=BuildingPath\Panelak3;
		animated = true;
		RUINEFFECT(panelak3)
		armor = 1000;
		class AnimationSources
		{
			class Dvere1 {animPeriod = 1;};
			class Dvere2 :Dvere1 {};
		};
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere1;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere1;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere2;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1]";
			};
			class CloseDoors2
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere2;
				radius = 2.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere2"" >= 0.5";
				statement = "this animate [""Dvere2"", 0]";
			};
		};
		actionBegin1 = OpenDoors1;
		actionEnd1 = OpenDoors1;
		actionBegin2 = OpenDoors2;
		actionEnd2 = OpenDoors2;
	};

	class BUILD_NAME(Hotel): House
	{
		model=BuildingPath\Hotel;
		displayName = "HOTEL";
		scope=protected;
		armor=1000;
		RUINEFFECT(Hotel)
		ladders[]={{"start1","end1"},{"start2","end2"},{"start3","end3"},{"start4","end4"}};
		animated=false;
		/* class AnimationSources
		{
			class Dvere1 {animPeriod = 1;};
			class Dvere2 : Dvere1 {};
			class Dvere3 : Dvere1 {};
			class Dvere4 : Dvere1 {};
			class Dvere5 : Dvere1 {};
			class Dvere6 : Dvere1 {};
			class Dvere7 : Dvere1 {};
			class Dvere8 : Dvere1 {};
			class Dvere9 : Dvere1 {};
			class Dvere10 : Dvere1 {};
			class Dvere11 : Dvere1 {};
			class Dvere12 : Dvere1 {};
			class Dvere13 : Dvere1 {};
			class Dvere14 : Dvere1 {};
			class Dvere15 : Dvere1 {};
			class Dvere16 : Dvere1 {};
			class Dvere17 : Dvere1 {};
			class Dvere18 : Dvere1 {};
			class Dvere19 : Dvere1 {};
			class Dvere20 : Dvere1 {};
			class Dvere21 : Dvere1 {};
			class Dvere22 : Dvere1 {};
			class Dvere23 : Dvere1 {};
			class Dvere24 : Dvere1 {};
			class Dvere25 : Dvere1 {};
			class Dvere26 : Dvere1 {};
			class Dvere27 : Dvere1 {};
			class Dvere28 : Dvere1 {};
			class Dvere29 : Dvere1 {};
			class Dvere30 : Dvere1 {};
			class Dvere31 : Dvere1 {};
			class Dvere32 : Dvere1 {};
			class Dvere33 : Dvere1 {};
			class Dvere34 : Dvere1 {};
			class Dvere35 : Dvere1 {};
			class Dvere36 : Dvere1 {};
			class Dvere37 : Dvere1 {};
			class Dvere38 : Dvere1 {};
			class Dvere39 : Dvere1 {};
			class Dvere40 : Dvere1 {};
			class Dvere41 : Dvere1 {};
			class Dvere42 : Dvere1 {};
			class Dvere43 : Dvere1 {};
			class Dvere44 : Dvere1 {};
			class Dvere45 : Dvere1 {};
			class Dvere46 : Dvere1 {};
			class Dvere47 : Dvere1 {};
			class Dvere48 : Dvere1 {};
			class Dvere49 : Dvere1 {};
			class Dvere50 : Dvere1 {};
			class Dvere51 : Dvere1 {};
			class Dvere52 : Dvere1 {};
			class Dvere53 : Dvere1 {};
			class Dvere54 : Dvere1 {};
			class Dvere55 : Dvere1 {};
			class Dvere56 : Dvere1 {};
			class Dvere57 : Dvere1 {};
			class Dvere58 : Dvere1 {};
			class Dvere59 : Dvere1 {};
			class Dvere60 : Dvere1 {};
			class Dvere61 : Dvere1 {};
			class Dvere62 : Dvere1 {};
			class Dvere63 : Dvere1 {};
			class Dvere64 : Dvere1 {};
			class Dvere65 : Dvere1 {};
			class Dvere66 : Dvere1 {};
			class Dvere67 : Dvere1 {};
			class Dvere68 : Dvere1 {};
			class Dvere69 : Dvere1 {};
			class Dvere70 : Dvere1 {};
			class Dvere71 : Dvere1 {};
			class Dvere72 : Dvere1 {};
			class Dvere73 : Dvere1 {};

			class Vytah1p1A : Dvere1 {animPeriod = 8;};
			class Vytah1p1B : Vytah1p1A {};
			class Vytah1p1C : Vytah1p1A {};
			class Vytah2p1A : Vytah1p1A {};
			class Vytah2p1B : Vytah1p1A {};
			class Vytah2p1C : Vytah1p1A {};
			class Vytah1p2A : Vytah1p1A {};
			class Vytah1p2B : Vytah1p1A {};
			class Vytah1p2C : Vytah1p1A {};
			class Vytah2p2A : Vytah1p1A {};
			class Vytah2p2B : Vytah1p1A {};
			class Vytah2p2C : Vytah1p1A {};
			class Vytah1p3A : Vytah1p1A {};
			class Vytah1p3B : Vytah1p1A {};
			class Vytah1p3C : Vytah1p1A {};
			class Vytah2p3A : Vytah1p1A {};
			class Vytah2p3B : Vytah1p1A {};
			class Vytah2p3C : Vytah1p1A {};
			class Vytah1p4A : Vytah1p1A {};
			class Vytah1p4B : Vytah1p1A {};
			class Vytah1p4C : Vytah1p1A {};
			class Vytah2p4A : Vytah1p1A {};
			class Vytah2p4B : Vytah1p1A {};
			class Vytah2p4C : Vytah1p1A {};
			class Vytah1p5A : Vytah1p1A {};
			class Vytah1p5B : Vytah1p1A {};
			class Vytah1p5C : Vytah1p1A {};
			class Vytah2p5A : Vytah1p1A {};
			class Vytah2p5B : Vytah1p1A {};
			class Vytah2p5C : Vytah1p1A {};
			class Vytah1 : Dvere1 {animPeriod = 10;};
			class Vytah2 : Vytah1 {};
		};
		class UserActions
		{
			class Elevator1p2_menu1
			{
				displayName = "Patro 2";//$STR_DN_OUT_O_DOOR;
				position = V1_P1_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 0";
				statement = "[this,1,2] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p3_menu1
			{
				displayName = "Patro 3";//$STR_DN_OUT_O_DOOR;
				position = V1_P1_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 0";
				statement = "[this,1,3] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p4_menu1
			{
				displayName = "Patro 4";//$STR_DN_OUT_O_DOOR;
				position = V1_P1_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 0";
				statement = "[this,1,4] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p5_menu1
			{
				displayName = "Patro 5";//$STR_DN_OUT_O_DOOR;
				position = V1_P1_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 0";
				statement = "[this,1,5] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};

			class Elevator1p1_menu2
			{
				displayName = "Patro 1";//$STR_DN_OUT_O_DOOR;
				position = V1_P2_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/4";
				statement = "[this,1,1] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p3_menu2
			{
				displayName = "Patro 3";//$STR_DN_OUT_O_DOOR;
				position = V1_P2_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/4";
				statement = "[this,1,3] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p4_menu2
			{
				displayName = "Patro 4";//$STR_DN_OUT_O_DOOR;
				position = V1_P2_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/4";
				statement = "[this,1,4] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p5_menu2
			{
				displayName = "Patro 5";//$STR_DN_OUT_O_DOOR;
				position = V1_P2_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/4";
				statement = "[this,1,5] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};

			class Elevator1p1_menu3
			{
				displayName = "Patro 1";//$STR_DN_OUT_O_DOOR;
				position = V1_P3_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/2";
				statement = "[this,1,1] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p2_menu3
			{
				displayName = "Patro 2";//$STR_DN_OUT_O_DOOR;
				position = V1_P3_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/2";
				statement = "[this,1,2] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p4_menu3
			{
				displayName = "Patro 4";//$STR_DN_OUT_O_DOOR;
				position = V1_P3_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/2";
				statement = "[this,1,4] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p5_menu3
			{
				displayName = "Patro 5";//$STR_DN_OUT_O_DOOR;
				position = V1_P3_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/2";
				statement = "[this,1,5] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};

			class Elevator1p1_menu4
			{
				displayName = "Patro 1";//$STR_DN_OUT_O_DOOR;
				position = V1_P4_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/4*3";
				statement = "[this,1,1] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p2_menu4
			{
				displayName = "Patro 2";//$STR_DN_OUT_O_DOOR;
				position = V1_P4_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/4*3";
				statement = "[this,1,2] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p3_menu4
			{
				displayName = "Patro 3";//$STR_DN_OUT_O_DOOR;
				position = V1_P4_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/4*3";
				statement = "[this,1,3] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p5_menu4
			{
				displayName = "Patro 5";//$STR_DN_OUT_O_DOOR;
				position = V1_P4_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94/4*3";
				statement = "[this,1,5] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};

			class Elevator1p1_menu5
			{
				displayName = "Patro 1";//$STR_DN_OUT_O_DOOR;
				position = V1_P5_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94";
				statement = "[this,1,1] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p2_menu5
			{
				displayName = "Patro 2";//$STR_DN_OUT_O_DOOR;
				position = V1_P5_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94";
				statement = "[this,1,2] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p3_menu5
			{
				displayName = "Patro 3";//$STR_DN_OUT_O_DOOR;
				position = V1_P5_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94";
				statement = "[this,1,3] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p4_menu5
			{
				displayName = "Patro 4";//$STR_DN_OUT_O_DOOR;
				position = V1_P5_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah1"" == 4.94";
				statement = "[this,1,4] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};


			class Elevator2p2_menu1
			{
				displayName = "Patro 2";//$STR_DN_OUT_O_DOOR;
				position = V2_P1_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 0";
				statement = "[this,2,2] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p3_menu1
			{
				displayName = "Patro 3";//$STR_DN_OUT_O_DOOR;
				position = V2_P1_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 0";
				statement = "[this,2,3] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p4_menu1
			{
				displayName = "Patro 4";//$STR_DN_OUT_O_DOOR;
				position = V2_P1_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 0";
				statement = "[this,2,4] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p5_menu1
			{
				displayName = "Patro 5";//$STR_DN_OUT_O_DOOR;
				position = V2_P1_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 0";
				statement = "[this,2,5] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};

			class Elevator2p1_menu2
			{
				displayName = "Patro 1";//$STR_DN_OUT_O_DOOR;
				position = V2_P2_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/4";
				statement = "[this,2,1] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p3_menu2
			{
				displayName = "Patro 3";//$STR_DN_OUT_O_DOOR;
				position = V2_P2_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/4";
				statement = "[this,2,3] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p4_menu2
			{
				displayName = "Patro 4";//$STR_DN_OUT_O_DOOR;
				position = V2_P2_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/4";
				statement = "[this,2,4] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p5_menu2
			{
				displayName = "Patro 5";//$STR_DN_OUT_O_DOOR;
				position = V2_P2_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/4";
				statement = "[this,2,5] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};

			class Elevator2p1_menu3
			{
				displayName = "Patro 1";//$STR_DN_OUT_O_DOOR;
				position = V2_P3_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/2";
				statement = "[this,2,1] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p2_menu3
			{
				displayName = "Patro 2";//$STR_DN_OUT_O_DOOR;
				position = V2_P3_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/2";
				statement = "[this,2,2] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p4_menu3
			{
				displayName = "Patro 4";//$STR_DN_OUT_O_DOOR;
				position = V2_P3_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/2";
				statement = "[this,2,4] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p5_menu3
			{
				displayName = "Patro 5";//$STR_DN_OUT_O_DOOR;
				position = V2_P3_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/2";
				statement = "[this,2,5] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};

			class Elevator2p1_menu4
			{
				displayName = "Patro 1";//$STR_DN_OUT_O_DOOR;
				position = V2_P4_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/4*3";
				statement = "[this,2,1] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p2_menu4
			{
				displayName = "Patro 2";//$STR_DN_OUT_O_DOOR;
				position = V2_P4_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/4*3";
				statement = "[this,2,2] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p3_menu4
			{
				displayName = "Patro 3";//$STR_DN_OUT_O_DOOR;
				position = V2_P4_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/4*3";
				statement = "[this,2,3] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p5_menu4
			{
				displayName = "Patro 5";//$STR_DN_OUT_O_DOOR;
				position = V2_P4_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94/4*3";
				statement = "[this,2,5] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};

			class Elevator2p1_menu5
			{
				displayName = "Patro 1";//$STR_DN_OUT_O_DOOR;
				position = V2_P5_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94";
				statement = "[this,2,1] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p2_menu5
			{
				displayName = "Patro 2";//$STR_DN_OUT_O_DOOR;
				position = V2_P5_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94";
				statement = "[this,2,2] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p3_menu5
			{
				displayName = "Patro 3";//$STR_DN_OUT_O_DOOR;
				position = V2_P5_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94";
				statement = "[this,2,3] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator2p4_menu5
			{
				displayName = "Patro 4";//$STR_DN_OUT_O_DOOR;
				position = V2_P5_menu;
				radius = 1.5;
				onlyForPlayer = true;
				condition = "this animationPhase ""vytah2"" == 4.94";
				statement = "[this,2,4] exec ""ca\buildings\scripts\HotelElevator2.sqs""";
			};
			class Elevator1p1
			{
				displayName = "Zavolat Vytah1p1";//$STR_DN_OUT_C_DOOR;
				position = V1_Patro1;
				radius = 2;
				onlyForPlayer = true;
				condition = "true";
				statement = "[this,1,1] exec ""ca\buildings\scripts\HotelElevator.sqs""";
			};
			class Elevator1p2
			{
				displayName = "Zavolat Vytah1p2";//$STR_DN_OUT_C_DOOR;
				position = V1_Patro2;
				radius = 2;
				onlyForPlayer = true;
				condition = "true";
				statement = "[this,1,2] exec ""ca\buildings\scripts\HotelElevator.sqs""";
			};
			class Elevator1p3
			{
				displayName = "Zavolat Vytah1p3";//$STR_DN_OUT_C_DOOR;
				position = V1_Patro3;
				radius = 2;
				onlyForPlayer = true;
				condition = "true";
				statement = "[this,1,3] exec ""ca\buildings\scripts\HotelElevator.sqs""";
			};
			class Elevator1p4
			{
				displayName = "Zavolat Vytah1p4";//$STR_DN_OUT_C_DOOR;
				position = V1_Patro4;
				radius = 2;
				onlyForPlayer = true;
				condition = "true";
				statement = "[this,1,4] exec ""ca\buildings\scripts\HotelElevator.sqs""";
			};
			class Elevator1p5
			{
				displayName = "Zavolat Vytah1p5";//$STR_DN_OUT_C_DOOR;
				position = V1_Patro5;
				radius = 2;
				onlyForPlayer = true;
				condition = "true";
				statement = "[this,1,5] exec ""ca\buildings\scripts\HotelElevator.sqs""";
			};
			class Elevator2p1
			{
				displayName = "Zavolat Vytah2p1";//$STR_DN_OUT_C_DOOR;
				position = V2_Patro1;
				radius = 2;
				onlyForPlayer = true;
				condition = "true";
				statement = "[this,2,1] exec ""ca\buildings\scripts\HotelElevator.sqs""";
			};
			class Elevator2p2
			{
				displayName = "Zavolat Vytah2p2";//$STR_DN_OUT_C_DOOR;
				position = V2_Patro2;
				radius = 2;
				onlyForPlayer = true;
				condition = "true";
				statement = "[this,2,2] exec ""ca\buildings\scripts\HotelElevator.sqs""";
			};
			class Elevator2p3
			{
				displayName = "Zavolat Vytah2p3";//$STR_DN_OUT_C_DOOR;
				position = V2_Patro3;
				radius = 2;
				onlyForPlayer = true;
				condition = "true";
				statement = "[this,2,3] exec ""ca\buildings\scripts\HotelElevator.sqs""";
			};
			class Elevator2p4
			{
				displayName = "Zavolat Vytah2p4";//$STR_DN_OUT_C_DOOR;
				position = V2_Patro4;
				radius = 2;
				onlyForPlayer = true;
				condition = "true";
				statement = "[this,2,4] exec ""ca\buildings\scripts\HotelElevator.sqs""";
			};
			class Elevator2p5
			{
				displayName = "Zavolat Vytah2p5";//$STR_DN_OUT_C_DOOR;
				position = V2_Patro5;
				radius = 2;
				onlyForPlayer = true;
				condition = "true";
				statement = "[this,2,5] exec ""ca\buildings\scripts\HotelElevator.sqs""";
			};

			#define Doors(sel) class Open##sel \
			{ \
				displayName = Open #sel; \
				position = osa_##sel; \
				radius = 2; \
				onlyForPlayer = true; \
				condition = (this animationPhase #sel < 0.5); \
				statement = (this animate [#sel ,1]); \
			}; \
			class Close##sel: Open##sel \
			{ \
				displayName = Close #sel; \
				condition = (this animationPhase #sel > 0.5); \
				statement = (this animate [#sel ,0]); \
			};

			Doors(dvere1);Doors(dvere2);Doors(dvere3);Doors(dvere4)Doors(dvere5);Doors(dvere6);Doors(dvere7);Doors(dvere8);Doors(dvere9);
  			Doors(dvere10);Doors(dvere11);Doors(dvere12);Doors(dvere13);Doors(dvere14);Doors(dvere15);Doors(dvere16);Doors(dvere17);Doors(dvere18);Doors(dvere19);
  			Doors(dvere20);Doors(dvere21);Doors(dvere22);Doors(dvere23);Doors(dvere24);Doors(dvere25);Doors(dvere26);Doors(dvere27);Doors(dvere28);Doors(dvere29);
  			Doors(dvere30);Doors(dvere31);Doors(dvere32);Doors(dvere33);Doors(dvere34);Doors(dvere35);Doors(dvere36);Doors(dvere37);Doors(dvere38);Doors(dvere39);
  			Doors(dvere40);Doors(dvere41);Doors(dvere42);Doors(dvere43);Doors(dvere44);Doors(dvere45);Doors(dvere46);Doors(dvere47);Doors(dvere48);Doors(dvere49);
  			Doors(dvere50);Doors(dvere51);Doors(dvere52);Doors(dvere53);Doors(dvere54);Doors(dvere55);Doors(dvere56);Doors(dvere57);Doors(dvere58);Doors(dvere59);
  			Doors(dvere60);Doors(dvere61);Doors(dvere62);Doors(dvere63);Doors(dvere64);Doors(dvere65);Doors(dvere66);Doors(dvere67);Doors(dvere68);Doors(dvere69);
  			Doors(dvere70);Doors(dvere71);Doors(dvere72);Doors(dvere73);
			#undef Doors
		};

#define AIActions(nr) actionBegin##nr = OpenDoors##nr; actionEnd##nr = OpenDoors##nr
		AIActions(1);AIActions(2);AIActions(3);AIActions(4);AIActions(5);AIActions(6);AIActions(7);AIActions(8);AIActions(9);
		AIActions(10);AIActions(11);AIActions(12);AIActions(13);AIActions(14);AIActions(15);AIActions(16);AIActions(17);AIActions(18);AIActions(19);
		AIActions(20);AIActions(21);AIActions(22);AIActions(23);AIActions(24);AIActions(25);AIActions(26);AIActions(27);AIActions(28);AIActions(29);
		AIActions(30);AIActions(31);AIActions(32);AIActions(33);AIActions(34);AIActions(35);AIActions(36);AIActions(37);AIActions(38);AIActions(39);
		AIActions(40);AIActions(41);AIActions(42);AIActions(43);AIActions(44);AIActions(45);AIActions(46);AIActions(47);AIActions(48);AIActions(49);
		AIActions(50);AIActions(51);AIActions(52);AIActions(53);AIActions(54);AIActions(55);AIActions(56);AIActions(57);AIActions(58);AIActions(59);
		AIActions(60);AIActions(61);AIActions(62);AIActions(63);AIActions(64);AIActions(65);AIActions(66);AIActions(67);AIActions(68);AIActions(69);
		AIActions(70);AIActions(71);AIActions(72);AIActions(73);
		*/
	};

	class BUILD_NAME(dum_mesto2): House
	{
		//displayName = "DUM-Mesto";
		animated = true;
		scope=protected;
		armor = 500;
		model=BuildingPath\dum_mesto2;

		class AnimationSources
		{
			class Dvere1 {animPeriod = 1;};
			class Dvere2 : Dvere1 {initPhase = 0;};
			class Dvere3 : Dvere1 {};
			class Dvere4 : Dvere1 {};
//			class Dvere5 : Dvere1 {};
//			class Dvere6 : Dvere1 {};
    		};
		RUINEFFECT(dum_mesto2)
		class UserActions
		{
			class OpenDoors1
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere1;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" < 0.5";
				statement = "this animate [""Dvere1"", 1]";
			};
			class CloseDoors1
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere1;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere1"" >= 0.5";
				statement = "this animate [""Dvere1"", 0]";
			};
			class OpenDoors2
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere2;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere2"" >= 0.5";
				statement = "this animate [""Dvere2"", 0]";
			};
			class CloseDoors2
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere2;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere2"" < 0.5";
				statement = "this animate [""Dvere2"", 1]";
			};
			class OpenDoors3
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere3;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere3"" < 0.5";
				statement = "this animate [""Dvere3"", 1]";
			};
			class CloseDoors3
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere3;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere3"" >= 0.5";
				statement = "this animate [""Dvere3"", 0]";
			};
			class OpenDoors4
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere4;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere4"" < 0.5";
				statement = "this animate [""Dvere4"", 1]";
			};
			class CloseDoors4
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere4;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere4"" >= 0.5";
				statement = "this animate [""Dvere4"", 0]";
			};
/*			class OpenDoors5
			{
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere5;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere5"" < 0.5";
			statement = "this animate [""Dvere5"", 1]";
			};
			class CloseDoors5
			{
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere5;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere5"" >= 0.5";
				statement = "this animate [""Dvere5"", 0]";
			};
			class OpenDoors6
			{
				displayName = $STR_DN_OUT_O_DOOR;
				position = osa_dvere6;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere6"" < 0.5";
				statement = "this animate [""Dvere6"", 1]";
			};
			class CloseDoors6
			{
				displayName = $STR_DN_OUT_C_DOOR;
				position = osa_dvere6;
				radius = 2;
				onlyForPlayer = true;
				condition = "this animationPhase ""Dvere6"" >= 0.5";
				statement = "this animate [""Dvere6"", 0]";
			};
*/
		};

		actionBegin1 = OpenDoors1;
		actionEnd1 = OpenDoors1;
		actionBegin2 = OpenDoors2;
		actionEnd2 = OpenDoors2;
		actionBegin3 = OpenDoors3;
		actionEnd3 = OpenDoors3;
		actionBegin4 = OpenDoors4;
		actionEnd4 = OpenDoors4;
/*		actionBegin5 = OpenDoors5;
		actionEnd5 = OpenDoors5;
		actionBegin6 = OpenDoors6;
		actionEnd6 = OpenDoors6;
*/
	};
	class BUILD_NAME(nabrezi): House
	{
		ladders[]={{"start2","end2"},{"start1","end1"}};
		model=BuildingPath\nabrezi;
		destrType=DestructNo;
	};
	class BUILD_NAME(nabrezi_najezd): House
	{
		ladders[]={{"start2","end2"},{"start1","end1"}};
		model=BuildingPath\nabrezi_najezd;
		destrType=DestructNo;
	};
	class BUILD_NAME(trafostanica_velka): House
	{
		model=BuildingPath\trafostanica_velka;
		RUINEFFECT(trafostanica_velka)
		armor = 800;
	};
	class BUILD_NAME(trafostanica_mala): House
	{
		model=BuildingPath\trafostanica_mala;
		RUINEFFECT(trafostanica_mala)
		armor = 800;
	};
	class BUILD_NAME(komin): House
	{
		ladders[]={{"start","end"}};
		model=BuildingPath\komin;
		armor=300;
		RUINEFFECT(komin)
		class MarkerLights
		{
			class RedBlinking
			{
				name = "cerveny pozicni blik";
				color[] = {1.0, 0.1, 0.1, 1};
				ambient[] = {0.1, 0.01, 0.01, 1};
				brightness = 0.01;
				blinking = true;
			};
		};
	};
	class BUILD_NAME(invisible_house): House
	{
		access = ReadOnly;
		displayName="";
		model=BuildingPath\invisible_house;
	};

	/*
	class TableX: Table
	{
		access = ReadOnly;
		displayName=$STR_DN_OUT_TABLEX;
		model=BuildingPath\Furniture\stulsuplik_proxy_x; // no such model in VCS
		destrType=DestructTent;
		armor=20;
	};

	class TableMapRes: Table
	{
		access = ReadOnly;
		displayName=$STR_DN_OUT_TABLEMAP;
		model=BuildingPath\Furniture\stulsuplikmapaX; // no such model in VCS
		destrType=DestructTent;
		armor=20;
	};
	*/

	/*
	class BUILD_NAME(kasna_new): Fountain
	{
		access = ReadOnly;
		model=BuildingPath\kasna_new;
		vehicleClass=Objects;
	};
	*/

	class BUILD_NAME(hotel_riviera1) : House
	{
		model = BuildingPath\hotel_riviera1.p3d;
		ladders[]={{"start","end"}};
		armor=1000;
		RUINEFFECT(hotel_riviera1)
	};

	class BUILD_NAME(hotel_riviera2) : House
	{
		model = BuildingPath\hotel_riviera2.p3d;
		ladders[]={{"start","end"}};
		RUINEFFECT(hotel_riviera2)
		armor=1000;
	};
	class ZavoraAnim: NonStrategic
	{
		scope = public;
		model = BuildingPath\Misc\zavora_2.p3d;
		displayName=$STR_DN_BARGATEANIM;
		vehicleClass="Objects";
		icon="\ca\data\data\Unknown_object";
		nameSound="";
		accuracy=1000; // never recognize
		animated = true;
		simulation = house;
		cost=0;
		armor=150;
		mapSize = 7.5;
		class AnimationSources
		{
			class BarGate {animPeriod = 6;};
		};
		class UserActions
		{
			class OpenGate
			{
				displayNameDefault = $STR_DN_OUT_O_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_O_GATE;
				position = osa_zavora;
				radius = 3;
				onlyForPlayer = true;
				condition = "this animationPhase ""Bargate"" >= 0.5";
				statement = "this animate [""Bargate"", 0]";
			};
			class CloseGate
			{
				displayNameDefault = $STR_DN_OUT_C_DOOR_DEFAULT;
				displayName = $STR_DN_OUT_C_GATE;
				position = osa_zavora;
				radius = 3;
				onlyForPlayer = true;
				condition = "this animationPhase ""Bargate"" < 0.5";
				statement = "this animate [""Bargate"", 1]";
			};
		};
		actionBegin1 = OpenGate;
		actionEnd1 = OpenGate;
	};
	class Land_Stoplight01: house
	{
		scope=protected;
		model=BuildingPath\Misc\stoplight01;
		armor = 50;
		class MarkerLights
		{
			class YellowTopBlinking
			{
				name = "Source_topLight";
				color[] = {0.99,0.69,0.17,1.0};
				ambient[] = {0.099,0.069,0.017,1.0};
				brightness = 0.01;
				blinking = true;
			};
			class YellowLowBlinking
			{
				name = "Source_lowLight";
				color[] = {0.99,0.69,0.17,1.0};
				ambient[] = {0.099,0.069,0.017,1.0};
				brightness = 0.01;
				blinking = true;
			};
		};
	};
	class Land_Stoplight02: Land_Stoplight01
	{
		model=BuildingPath\Misc\stoplight02;
		class MarkerLights
		{
			class YellowTopBlinking
			{
				name = "Source_topLight";
				color[] = {0.99,0.69,0.17,1.0};
				ambient[] = {0.099,0.069,0.017,1.0};
				brightness = 0.01;
				blinking = true;
			};
		};

		/*
		class Reflectors
		{
			class TopLight
			{
				color[] = {0.1,0.1,0.0501961,1.0};
				ambient[] = {0.01, 0.01, 0.01, 1};
				position = "Source_topLight";
				direction = "Direction_topLight";
				hitpoint = "topLight";
				selection = "topLightFlare";
				size = 0.05;
				brightness = 0.05;
				period[] = {1, 1};
				// blinking = true;
			};
			class LowLight
			{
				color[] = {0.1,0.1,0.0501961,1.0};
				ambient[] = {0.01, 0.01, 0.01, 1};
				position = "Source_lowLight";
				direction = "Direction_lowLight";
				hitpoint = "lowLight";
				selection = "lowLightFlare";
				size = 0.05;
				brightness = 0.05;
				period[] = {1, 1};
				// blinking = true;
			};
		};
		*/
	};
	class Land_NavigLight: house
	{
		scope=protected;
		model=BuildingPath\Misc\NavigLight;
		armor = 50;
		class MarkerLights
		{
			class WhiteStill
			{
				name = "zluty pozicni";
				color[] = {1,1,1,1};
				ambient[] = {0.1,0.1,0.1,1};
				brightness = 0.02;
				blinking = false;
			};
		};
	};
	class Land_runway_edgelight: house
	{
		scope=protected;
		model=BuildingPath\Misc\runway_edgelight;
		armor = 20;
		class MarkerLights
		{
			class RedStill
			{
				name = "zluty pozicni";
				color[] = {0.99,0.69,0.17,1.0};
				ambient[] = {0.099,0.069,0.017,1.0};
				brightness = 0.01;
				blinking = false;
			};
		};
	};
	class Land_Runway_PAPI: Land_VASICore
	{
		icon="\ca\data\data\Unknown_object";
		model = BuildingPath\Misc\Runway_PAPI;
		displayName = "PAPI";	//TODO: Stringtable
		armor=20;

		//@{ vasi specific parameters
		/// color below glide path
		vasiRed[]={1,0,0};
		/// color above glide path
		vasiWhite[]={1,1,1};
		/// glide path angle (ILS percentage, same as in ilsDirection)
		vasiSlope=0.095;
		//@}
		destrType=DestructTent;
	};
	class Land_Runway_PAPI_2: Land_Runway_PAPI
	{
		model = BuildingPath\Misc\Runway_PAPI_2;
		vasiSlope=0.085;
	};
	class Land_Runway_PAPI_3: Land_Runway_PAPI
	{
		model = BuildingPath\Misc\Runway_PAPI_3;
		vasiSlope=0.075;
	};
	class Land_Runway_PAPI_4: Land_Runway_PAPI
	{
		model = BuildingPath\Misc\Runway_PAPI_4;
		vasiSlope=0.065;
	};
	class BUILD_NAME(trafostanica_velka_draty): House
	{
		model = BuildingPath\trafostanica_velka_draty;
		destrType=DestructBuilding;
		armor=20;
	};
};

class CfgNonAIVehicles
{
	class StreetLamp
	{
		colorDiffuse[] = {0.9,0.8,0.6};
		colorAmbient[] = {0.02,0.02,0.02};
		brightness = 0.15; // 1 == light is full at 50 m
	};
	#include "lamps.hpp"
};

class CfgSFX
{
	class Church
	{
		smallBell[]={BuildingPath\Sound\bell1,db-20,1};
		largeBell[]={BuildingPath\Sound\bell2,db-10,1};
	};
};
