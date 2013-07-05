
class CfgSurfaces
{
	class Default {};
	class Water {};
	
	class Roadway: Default
	{
		access = ReadOnly;
		files=silnice*;
		rough=0.005;
		dust=0.01;
		soundEnviron = road;
		character=Empty;
	};
	class Asfalt: Roadway
	{
		access = ReadOnly;
		files=asfalt*;
		rough=0.01;
		dust=0.05;
		soundEnviron = road;
		character=Empty;
	};
	class Cesta: Roadway
	{
		access = ReadOnly;
		files=cesta*;
		rough=0.08;
		dust=0.15;
		soundEnviron = gravel;
		character=Empty;
	};	
	class Wood: Default
	{
		access = ReadOnly;
		files=podlaha_prkna*;
		rough=0.15;
		dust=0.1;
		soundEnviron = wood;
		character=Empty;
	};	
	class Metal: Default
	{
		access = ReadOnly;
		files=plechprolis*;
		rough=0.15;
		dust=0.1;
		soundEnviron = metal;
		character=Empty;
		impact = Impact_Metal;
	};	
	class Beton: Default
	{
		access = ReadOnly;
		files=kameny.pac;
		rough=0.15;
		dust=0.1;
		soundEnviron = rock;
		character=Empty;
	};	
	class Carpet: Default
	{
		access = ReadOnly;
		files=dum_mesto_koberec*;
		rough=0.15;
		dust=0.1;
		soundEnviron = wood;
		character=Empty;
	};
	
	class SandBuilding: Default
	{
		access = ReadOnly;
		files=pisek01*;
		rough=0.12;
		dust=0.5;
		soundEnviron = sand;
		character=Empty;
	};
	class MudBuilding: Default
	{
		access = ReadOnly;
		files=hlinasterk*;
		rough=0.12;
		dust=0.5;
		soundEnviron = rock;
		character=Empty;
	};	
	class BetonNew: Default
	{
		access = ReadOnly;
		files=beton*;
		rough=0.005;
		dust=0.01;
		soundEnviron = road;
		character=Empty;
	};
			
// define for Noe

	class CubeRoad: Default
	{
		access = ReadOnly;
		files=sil_kos*;
		rough=0.04;
		dust=0.15;
		soundEnviron = road;
		character="Empty";
	};
	class Sil_new: Default
	{
		access = ReadOnly;
		files=sil_new*;
		rough=0.005;
		dust=0.01;
		soundEnviron = road;
		character="Empty";
	};
	class Asfalt_New: Default
	{
		access = ReadOnly;
		files=asf_new*;
		rough=0.008;
		dust=0.025;
		soundEnviron = road;
		character="Empty";
	};
	class Cesta_new: Default
	{
		access = ReadOnly;
		files=ces_hned*;
		rough=0.04;
		dust=0.14;
		soundEnviron = gravel;
		character="Empty";
	};
	class Pesina: Roadway
	{
		access = ReadOnly;
		files=pesina*;
		rough=1;
		dust=0.15;
		soundEnviron = gravel;
		character=Empty;
	};	
	class Hallway: Default
	{
		access = ReadOnly;
		files=podldlzin02*;
		rough=0.12;
		dust=0.1;
		soundEnviron = hallway;
		character=Empty;
	};

//surfaces defined for SAHRANI nad DESERT island, should be separated for each one by full patch

	class Grass: Default
	{
		access = ReadOnly;
		files=trava_*;
		rough=0.1;
		dust=0.1;
		soundEnviron = grass;
		character=GrassClutter;
	};

	class GrassSouth: Default
	{
		access = ReadOnly;
		files=travajih*;
		rough=0.1;
		dust=0.2;
		soundEnviron = drygrass;
		character=GrassSouthClutter;
	};

	class ForestLeaves: Default
	{
		access = ReadOnly;
		files=leslist*;
		rough=0.2;
		dust=0.2;
		soundEnviron = wood;
		character=ForestLeavesClutter;
	};

	class ForestNeedles: Default
	{
		access = ReadOnly;
		files=lesjeh*;
		rough=0.2;
		dust=0.2;
		soundEnviron = forest;
		character=ForestNeedlesClutter;
	};

	class RockSouth: Default
	{
		access = ReadOnly;
		files=skalajih*;
		rough=0.5;
		dust=0.2;
		soundEnviron = rock;
		character=RockSouthClutter;
	};

	class RockNorth: Default
	{
		access = ReadOnly;
		files=skalas*;
		rough=0.5;
		dust=0.2;
		soundEnviron = rock;
		character=Empty;
	};

	class Mud: Default
	{
		access = ReadOnly;
		files=blato*;
		rough=0.3;
		dust=0.3;
		soundEnviron = mud;
		character=Empty;
	};

	class CityGround: Default
	{
		access = ReadOnly;
		files=mesto*;
		rough=0.01;
		dust=0.05;
		soundEnviron = gravel;
		character=Empty;
	};

	class DryGround: Default
	{
		access = ReadOnly;
		files=mesto2*;
		rough=0.05;
		dust=0.05;
		soundEnviron = gravel;
		character=Empty;
	};
	
	class Field1: Default
	{
		access = ReadOnly;
		files=pole1*;
		rough=0.3;
		dust=0.25;
		soundEnviron = mud;
		character=SparseWeedsClutter;
	};

	class SandGeneral: Default
	{
		access = ReadOnly;
		files=pisek_*;
		rough=0.1;
		dust=0.5;
		soundEnviron = sand;
		character=SandGeneralClutter;
	};

	class SandDesert: Default
	{
		access = ReadOnly;
		files=pisekpoust*;
		rough=0.2;
		dust=0.8;
		soundEnviron = sand;
		character=Empty;
	};

	class SandBeach: Default
	{
		access = ReadOnly;
		files=pisekplaz*;
		rough=0.1;
		dust=0.5;
		soundEnviron = sand;
		character=Empty;
	};
};


class CfgSurfaceCharacters
// Clutter names used here are defined in each island cfg as Clutter class
{
  class GrassClutter
  {
    probability[]={0.98,0.03,0.02,0.015};
    names[]={GrassGeneral,FlowersColor,GrassLong,GrassSevenbeauty};
  };

  class GrassSouthClutter
  {
    probability[]={0.8,0.03,0.05,0.08};
    names[]={GrassDesert,GrassLong,SmallRocks,FlowersWhite};
  };

  class SandGeneralClutter
  {
    probability[]={0.01,0.05};
    names[]={GrassLong,SmallRocks};
  };

  class ForestLeavesClutter
  {
    probability[]={0.008,0.3,0.1,0.1,0.001,0.003};
    names[]={MushroomsHorcak,GrassLong,GrassFlowers,SmallRocks,MushroomsBabka,MushroomsPrasivka};
  };

  class ForestNeedlesClutter
  {
    probability[]={0.2,0.15,0.1,0.1,0.001,0.002,0.001};
    names[]={ForestFern,GrassLong,GrassFlowers,SmallRocks,MushroomsHorcak,MushroomsPrasivka,MushroomsMuchomurka};
  };

  class RockSouthClutter
  {
    probability[]={0.01,0.2};
    names[]={GrassDesert,SmallRocks};
  };

  class SparseWeedsClutter
  {
    probability[]={0.02};
    names[]={FlowersWhite};
  };

};
