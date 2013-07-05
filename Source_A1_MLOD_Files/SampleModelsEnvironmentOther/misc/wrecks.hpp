	class JeepWreck1: Strategic
	{
		scope = public;
		model = \ca\misc\JeepT.p3d;
		icon="\Ca\misc\data\icons\i_Jeep_W_CA.paa";
		mapSize = 7;
		displayName=$STR_DN_JEEP_WRECK_1;
		animated = false;
		vehicleClass=Objects;

		nameSound="wreck";

		accuracy=0.3;
		destrType=DestructNo;

		cost = 10000;
		armor=20;

		typicalCargo[]={};

		irTarget = false;


		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
	};
	class JeepWreck2: JeepWreck1
	{
		model = \ca\misc\JeepT_horeznacky.p3d;
		displayName=$STR_DN_JEEP_WRECK_2;
	};
	class JeepWreck3: JeepWreck1
	{
		scope = public;
		model = \ca\misc\JeepT_Tanker.p3d;
		displayName=$STR_DN_JEEP_WRECK_3;
		nameSound="wreck";
		accuracy=0.3;
		transportFuel = 0;
		destrType=DestructNo;
		cost = 10000;
	};
	class BMP2Wreck: JeepWreck1
	{
		model = \ca\misc\bvp1t.p3d;
		icon="\Ca\misc\data\icons\i_bmp2_W_CA.paa";
		mapSize = 8;
		displayName=$STR_DN_BMP2_WRECK;
	};
	class M113Wreck: JeepWreck1
	{
		model = \ca\misc\M113T.p3d;
		icon="\Ca\misc\data\icons\i_m113_W_CA.paa";
		mapSize = 8;
		displayName=$STR_DN_M113_WRECK;
	};
	class UralWreck: JeepWreck1
	{
		model = \ca\misc\UralT.p3d;
		icon="\Ca\misc\data\icons\i_URAL_W_CA.paa";
		mapSize = 12;
		displayName=$STR_DN_URAL_WRECK;
	};
	class BlackhawkWreck: JeepWreck1
	{
		model = \ca\misc\UH60_Crashed.p3d;
		icon="\Ca\misc\data\icons\i_uh60_W_CA.paa";
		mapSize = 14;
		displayName=$STR_DN_UH60_WRECK;
	};
	class Body: JeepWreck1
	{
		model = \ca\misc\Mrtvola_Army1.p3d;
		icon="\ca\data\data\Unknown_object";
		displayName=$STR_DN_BODY;
		nameSound="body";
	};
	class datsun01Wreck: JeepWreck1
	{
		model = \ca\misc\datsun01t.p3d;
		icon="\Ca\misc\data\icons\i_datsun_W_CA.paa";
		mapSize = 7;
		displayName=$STR_DN_DATSUN01_WRECK;
	};
	class datsun02Wreck: JeepWreck1
	{
		model = \ca\misc\datsun02t.p3d;
		icon="\Ca\misc\data\icons\i_datsun_W_CA.paa";
		mapSize = 7;
		displayName=$STR_DN_DATSUN02_WRECK;
	};
	class hiluxWreck: JeepWreck1
	{
		model = \ca\misc\hiluxt.p3d;
		icon="\Ca\misc\data\icons\i_hilux_W_CA.paa";
		mapSize = 7;
		displayName=$STR_DN_HILUX_WRECK;
	};
