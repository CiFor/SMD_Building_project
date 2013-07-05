	class Table: Thing
	{
		scope = public;
		simulation="thing";

		model = BuildingPath\furniture\stulsuplik_proxy.p3d;
		displayName=$STR_DN_TABLE;
		nameSound="table";
		transportFuel = 0;

		mapSize = 0.7;
		accuracy=0.2;
		destrType=DestructBuilding;
		cost=0;
	};
	class Tablemap: Table
	{
		model = BuildingPath\furniture\stulsuplikmapa.p3d;
		displayName=$STR_DN_TABLEMAP;
	};
	class Chair: Table
	{
		model = BuildingPath\furniture\Zidle.p3d;
		displayName=$STR_DN_CHAIR;
		nameSound="chair";

	};
	class Phone: Table
	{
		model = BuildingPath\furniture\hangar_telefon.p3d;
		displayName=$STR_DN_PHONEHANG;
		nameSound="";

		simulation = house;
		coefInside = 0;
		coefInsideHeur = 0;
	};
	class PhoneBase: Table
	{
		scope=protected;
		model = BuildingPath\furniture\hangar_telefon_bez.p3d;
		displayName=$STR_DN_PHONEBASE;
		nameSound="";

		simulation = house;
		coefInside = 0;
		coefInsideHeur = 0;
		};
	class ChairHangar: Table
	{
		model = BuildingPath\furniture\Hangar_zidle.p3d;
		displayName=$STR_DN_CHAIR_HANGAR;
		nameSound="chair";
	};
	class ChairX: Table
	{
		model = BuildingPath\furniture\zidle_x.p3d;
		displayName=$STR_DN_CHAIR_X;
		nameSound="chair";
	};
	class VideoTable: Table
	{
		model = BuildingPath\furniture\televizesvideem.p3d;
		displayName=$STR_DN_VIDEO;
	};
	class TablePub: Table
	{
		model = BuildingPath\furniture\stul_hospodax.p3d;
		displayName=$STR_DN_TABLE_PUB;
	};
	class ChairSmall: Table
	{
		model = BuildingPath\furniture\Zidlicka.p3d;
		displayName=$STR_DN_CHAIR_SMALL;
		nameSound="chair";
	};