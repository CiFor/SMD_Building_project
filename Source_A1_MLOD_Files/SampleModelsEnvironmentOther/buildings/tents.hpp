	class Shed: Strategic
	{
		scope = public;

		vehicleClass=Objects;
		model = BuildingPath\Tents\pristresek;
		icon="\Ca\buildings\Icons\i_camo_CA.paa";
		displayName=$STR_DN_SHED;
		nameSound="tent";
		accuracy=0.20;
		typicalCargo[]={};
		animated = false;

		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;

		mapSize = 8.1;

		cost=0;
		armor=200;
	};
	class ShedSmall : Shed
	{
		model = BuildingPath\Tents\pristresek_mensi;
		icon="\Ca\buildings\Icons\i_camosmall_CA.paa";
		displayName=$STR_DN_SHED_SMALL;
		mapSize = 4.3;

		accuracy=1000; // never recognize
	};

	class ShedBig : Shed
	{
		model = BuildingPath\Tents\Camo_Box;
		icon="\Ca\buildings\Icons\i_camo_CA.paa";
		displayName=$STR_DN_SHED_BIG;
		mapSize = 9.8;

		accuracy=1000; // never recognize
	};
	class Camp: Strategic
	{
		scope = public;
		model = BuildingPath\Tents\stan;
		icon="\Ca\buildings\Icons\i_Stan_CA.paa";
		displayName=$STR_DN_TENT;

		animated = false;
		vehicleClass=Objects;

//		nameSound="tent";
		accuracy=0.20;
		typicalCargo[]={};
		destrType=DestructTent;

		irTarget = false;

		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;

		cost=0;
		armor=20;
		mapSize = 6.4;
	};
	class CampEmpty: Camp
	{
		scope = public;
		model = BuildingPath\Tents\stan;
		icon="\Ca\buildings\Icons\i_Stan_CA.paa";
		displayName=$STR_DN_TENT_OPEN;
		accuracy=1000; // never recognize
	};
	class CampEast: Camp
	{
		scope = public;
		model = BuildingPath\Tents\stan_east;
		icon="\Ca\buildings\Icons\i_Stan_east_CA.paa";
		displayName=$STR_DN_TENT_EAST;
		accuracy=1000; // never recognize
	};
	class CampEastC: Camp
	{
		scope = public;
		model = BuildingPath\Tents\stan_east;
		icon="\Ca\buildings\Icons\i_Stan_east_CA.paa";
		displayName=$STR_DN_TENT_EAST_C;
		accuracy=1000; // never recognize
	};
	class ACamp: Camp
	{
		scope = public;
		model = BuildingPath\Tents\astan;
		icon="\Ca\buildings\Icons\i_Astan_CA.paa";
		displayName=$STR_DN_TENT_A;
		accuracy=1000; // never recognize
		mapSize = 2.6;
	};
	class MASH: Camp
	{
		scope = public;
		model = BuildingPath\Tents\mash;
		icon="\Ca\buildings\Icons\i_MASH_CA.paa";
		displayName=$STR_DN_MASH;
		nameSound="fieldhospital";
		accuracy=0.3;

		attendant = true; // medical
		mapSize = 6.4;
		supplyRadius = 9.3;
	};
