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
	class CAPlants
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {};
	};
};

class cfgVehicles
{
	class House;
	class Land_Javor01Posed: House
	{
		ladders[]={{"start","end"}}; // default no ladder
		model=\ca\Plants\Javor01Posed;
		displayName="Strom-Posed"; //TODO: Stringtable
	};
  class Land_parez_str_test: House
  {
		model=\ca\Plants\parez_str_test.p3d;
		displayName="Parez-hrusen"; //TODO: Stringtable    
  };
};

class CfgDestroy
{
	class TreeHit
	{
		sound[]={\ca\plants\Sound\Treehit1,db-30,1};
	};
};

class CfgNonAiVehicles
{
  class Proxy_hrusen2
  {
		model=\ca\plants\hrusen2.p3d;
		autocenter=false;
		scope=public;
		animated=true;
		reversed=false;
		simulation="alwaysshow";
  };
};