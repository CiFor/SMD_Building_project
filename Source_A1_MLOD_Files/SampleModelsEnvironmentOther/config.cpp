class CfgPatches
{
	class CAData
	{
		units[] = {"FxWindGrass1","FxWindGrass2","FxWindRock1"};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {};
	};
};
#include "basicDefines.hpp"
#include "CfgSurfaces.hpp"
#include "CfgMaterials.hpp"
#include "CfgWorlds.hpp"
//#include "CfgLight.hpp"
#include "CfgCloudlets.hpp"
#include "CrewAnimations.hpp"
#include "EditorGroups.hpp"


class CfgAddons
{
	access = ReadOnly;
	class PreloadBanks
	{};
	class PreloadAddons
	{
     class CAWeapons3Added
     {
        list[]=
        {
            			"CAWeapons","CAweapons3_aks74pso","CAweapons3_ksvk","CAweapons3_m107",
			"CAweapons3_m16a4","CAweapons3_m16a4_acg","CAweapons3_m16a4_gl","CAweapons3_m16a4_acg_gl"
        };
    };
	};
};

class CfgCoreData
{
	textureDefault = "ca\data\data\default.pac";
	textureTrack = "ca\data\data\texturetrack_ca.paa";
	textureTrackFour = "ca\data\data\texturetrackfour_ca.paa";
	maskTextureFlare = "ca\data\data\masktextureflare%02d_co.paa";
	eyeFlare = "ca\data\data\eyeflare_ca.paa";

	cloudletBasic = ca\Data\cl_basic.p3d;
	cloudletFire = ca\Data\cl_fire.p3d;
	cloudletFireD = ca\Data\cl_fireD.p3d;
	cloudletWater = ca\Data\cl_water.p3d;
	paperCarModel = ca\Data\papauto.p3d;
	collisionShape = ca\Data\colision.p3d;

	sphereModel = "ca\data\koule.p3d";
	rectangleModel = "ca\data\rect.p3d";

	craterShell = "ca\data\krater.p3d";
	craterBullet = "ca\data\krater_po_kulce.p3d";
	sphereLight = "ca\data\kouleSvetlo.p3d";
	cloudletMissile = "ca\data\missileSmoke.p3d";

	horizontObject = "ca\data\horizont.p3d";
	skysphere = "ca\data\obloha.p3d";
	halflight = "ca\data\halfLight.p3d";

  // this texture is currently used for penetrable glass
  // it is mapped on models, therefore it is not possible to use a procedural one
	textureBlack = "ca\data\data\black.pac";
	textureLine = "ca\data\data\tracer.paa";

};

class CfgCloudletShapes
{
	cloudletFireAnim = "\ca\Data\ParticleEffects\FireAndSmokeAnim\FireAnim";
	cloudletSmokeAnim = "\ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim";
	cloudletWaterNew = "\ca\Data\ParticleEffects\CloudletWater\CloudletWater";
	cloudletSand = "\ca\Data\ParticleEffects\CloudletSand\CloudletSand";

	cloudletExplosion = "\ca\Data\cl_basic"; // basic cloudlet used to improve instancing (was "cl_fired")
	cloudletSmoke = "\ca\Data\cl_basic"; // crater smoke
	cloudletDust = "\ca\Data\cl_basic"; // crater dust
	cloudletBlood = "\ca\Data\cl_water";
	cloudletWater = "\ca\Data\cl_water";
	cloudletMissile = "\ca\Data\cl_basic"; // basic used to improve instancing (was "missileSmoke")
	cloudletFire = "\ca\Data\cl_fireD"; // weapon fire
	cloudletClouds = "\ca\Data\cl_basic"; // weapon clouds
};

class PreloadTextures
{
	class CfgCloudletShapes
	{
		cloudletFireAnim = "@*";
		cloudletSmokeAnim = "@*";
		cloudletWaterNew = "@*";
		cloudletSand = "@*";
	};
};

class PreloadConfig
{
	CfgDestroy = "*";
	class CfgSFX
	{
		Church = "*";
	};
};

class CfgVehicleClasses
{
	access = ReadAndCreate;
	class Men
	{
		displayName = $STR_DN_MEN;
	};
	class Armored
	{
		displayName = $STR_DN_ARMORED;
	};
	class Car
	{
		displayName = $STR_DN_CAR;
	};
	class Air
	{
		displayName = $STR_DN_AIR;
	};
	class Ship
	{
		displayName = $STR_DN_SHIP;
	};
	class Static
	{
		displayName = $STR_DN_STATIC;
	};
};
class CfgTitles
{
	access = ReadAndCreate;
	defaultSpeed = 1;
	defaultIn = 0.5;
	defaultTime = 10;
	defaultOut = 0.5;
	titles[] =
	{
		Sphere, BISLogo, TVSet // UbiLogo,
		// Campaign, FirstBattle, NukeEden,
		// AttackKain, DefendEden, DefendAbel,
		// AttackEden
	};
	class Sphere
	{
		name = $STR_CFG_TITLES_SPHERE;
		model = "\ca\data\koule.p3d";
		duration = 5;
		camera[] = {0,0,-10};
	};
	class TVSet
	{
		name=$STR_CFG_TITLES_TVSET;
		duration=1000; //how to do unlimited time?
		model = "\ca\data\TVhi.p3d";
		camera[] = {0, 0,-1.2};
		//camera[] = {0,0,-0.91};
	};
};

class CfgLights
{
  class ObjectDestructionLight
  {
    color[] = {8.543, 4.124, 2.269};
    ambient[] = {0.05, 0.05, 0.05};
    brightness[] = {"fireIntensity", 0.065, 0.065};
  };
  class SmallFireLight
  {
    color[] = {8.543, 4.124, 2.269};
    ambient[] = {0.05, 0.05, 0.05};
    brightness = 0.065;

    position[] = {0, 0, 0};
  };
  class ExploLight
  {
    color[] = {20, 19, 17.74};
    ambient[] = {4, 3.8, 3.4};
    brightness[] = {"fireIntensity", 0.15, 0.15};
  };
  class GrenadeExploLight
  {
    color[] = {10, 10, 9.37};
    ambient[] = {1, 1, 0.937};
    brightness[] = {"fireIntensity", 0.05, 0.05};
  };
  class RocketLight
  {
    color[] = {3, 3, 2.7};
    ambient[] = {1, 1, 0.9};
    brightness[] = {"fireIntensity", 0.07, 0.07};
  };
  class SparksLight
  {
    color[] = {8.543, 4.124, 2.269};
    ambient[] = {0.05, 0.05, 0.05};
    brightness = 0.0003;

    position[] = {0, 0, 0};
  };
};

// ********************************************************************
// ***********************  MISSLE EFFECTS  ***************************
// ********************************************************************
class MissileManualEffects
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0, 0, 0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class MissileManualEffects01
	{
		simulation = "particles";
		type = "MissileManualEffects1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class MissileEffects
{
	class Light1
	{
		simulation = "light";
		type = "RocketLight";
		position[] = {0, 0, 0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class MissileEffects01
	{
		simulation = "particles";
		type = "MissileEffects1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

// ********************************************************************
// ***********************  CRATER EFFECTS  ***************************
// ********************************************************************
class ImpactEffectsBig
{
	class CircleDust1
	{
		simulation = "particles";
		type = "CircleDust";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmokeTrails1
	{
		simulation = "particles";
		type = "SmokeTrails";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class BigSmoke1
	{
		simulation = "particles";
		type = "SmokeBig";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "SmallSmokeFast1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke2
	{
		simulation = "particles";
		type = "SmallSmokeFast2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke3
	{
		simulation = "particles";
		type = "SmallSmokeSlow1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke4
	{
		simulation = "particles";
		type = "SmallSmokeSlow2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class GrenadeCrater
{
	class GrenadeSmoke1
	{
		simulation = "particles";
		type = "GrenadeSmoke1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class GrenadeSmoke2
	{
		simulation = "particles";
		type = "GrenadeSmoke2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class GrenadeStones1
	{
		simulation = "particles";
		type = "GrenadeStones1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class GrenadeStones2
	{
		simulation = "particles";
		type = "GrenadeStones2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
};

class MissileCrater
{
	class MissileCircleDust
	{
		simulation = "particles";
		type = "MissileCircleDust";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class RocketSmokeTrails1
	{
		simulation = "particles";
		type = "RocketSmokeTrails";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class RocketSmokeTrails2
	{
		simulation = "particles";
		type = "RocketSmokeTrails";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class BigSmoke1
	{
		simulation = "particles";
		type = "SmokeBig";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke1
	{
		simulation = "particles";
		type = "SmallSmokeFast1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke2
	{
		simulation = "particles";
		type = "SmallSmokeFast2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke3
	{
		simulation = "particles";
		type = "SmallSmokeSlow1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class SmallSmoke4
	{
		simulation = "particles";
		type = "SmallSmokeSlow2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};

};
class ShellCrater
{
	class ShellSmokeTrail1
	{
		simulation = "particles";
		type = "ShellSmokeTrail1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShellSmokeTrail2
	{
		simulation = "particles";
		type = "ShellSmokeTrail2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShellSmokeTrail3
	{
		simulation = "particles";
		type = "ShellSmokeTrail3";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShellSmoke
	{
		simulation = "particles";
		type = "ShellSmoke";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ShellStones
	{
		simulation = "particles";
		type = "ShellStones";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
};
class ExploAmmoCrater
{
	class ExploAmmoSmoke
	{
		simulation = "particles";
		type = "ExploAmmoSmoke";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ExploAmmoStones
	{
		simulation = "particles";
		type = "ExploAmmoStones";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};


class ImpactEffectsSmall
{
	class ImpactEffectsSmall01
	{
		simulation = "particles";
		type = "ImpactStones1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsSmall02
	{
		simulation = "particles";
		type = "ImpactSandBlow1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsSmall03
	{
		simulation = "particles";
		type = "ImpactSandBlow2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsSmall04
	{
		simulation = "particles";
		type = "ImpactSandBlow3";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsSmall05
	{
		simulation = "particles";
		type = "ImpactSandSmoke1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsSmall06
	{
		simulation = "particles";
		type = "ImpactSandSmoke2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsSmall07
	{
		simulation = "particles";
		type = "ImpactSandSmoke3";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactEffectsBlood
{
	class ImpactEffectsBlood01
	{
		simulation = "particles";
		type = "ImpactEffectsBlood1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactEffectsWater
{
	class ImpactEffectsWater01
	{
		simulation = "particles";
		type = "ImpactEffectsWater1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsWater02
	{
		simulation = "particles";
		type = "ImpactEffectsWater2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsWater03
	{
		simulation = "particles";
		type = "ImpactEffectsWater3";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsWater04
	{
		simulation = "particles";
		type = "ImpactEffectsWater4";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsWater05
	{
		simulation = "particles";
		type = "ImpactEffectsWater5";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsWater06
	{
		simulation = "particles";
		type = "ImpactEffectsWater6";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactEffectsWater07
	{
		simulation = "particles";
		type = "ImpactEffectsWater7";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class ImpactEffectsVehicle
{
	class SparksLight
	{
		simulation = "light";
		type = "SparksLight";
		position[] = {0, 0, 0};

		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class ImpactSparks1
	{
		simulation = "particles";
		type = "ImpactSparks1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactSparks2
	{
		simulation = "particles";
		type = "ImpactSparks2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
	class ImpactCloud
	{
		simulation = "particles";
		type = "ImpactCloud";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class ImpactEffectsObjects
{
	class ImpactCloud
	{
		simulation = "particles";
		type = "ImpactCloud";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};

class BombCrater
{
	class BombSmk1
	{
		simulation = "particles";
		type = "BombSmk1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 0.7;
	};
	class BombSmk2
	{
		simulation = "particles";
		type = "BombSmk2";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 0.7;
	};
	class BombSmk3
	{
		simulation = "particles";
		type = "BombSmk3";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 3;
	};
	class BombStones
	{
		simulation = "particles";
		type = "BombStones";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};

// ********************************************************************
// *********************  EXPLOSIONS EFFECTS  *************************
// ********************************************************************
class ExplosionEffects
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0, 0, 0};

		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class Explosion1
	{
		simulation = "particles";
		type = "ExplosionParticles";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 0.25;
	};
};
class GrenadeExplosion
{
	class Light1
	{
		simulation = "light";
		type = "GrenadeExploLight";
		position[] = {0, 0, 0};
		intensity = 0.01;
		interval = 1;
		lifeTime = 1;
	};
	class GrenadeExp1
	{
		simulation = "particles";
		type = "GrenadeExp1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
};
class ExploAmmoExplosion
{
	class ExploAmmoFlash
	{
		simulation = "particles";
		type = "ExploAmmoFlash";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class BombExplosion
{
	class LightExp
	{
		simulation = "light";
		type = "ExploLight";
		position[] = {0, 0, 0};

		intensity = 0.001;
		interval = 1;
		lifeTime = 0.5;
	};
	class BombExp1
	{
		simulation = "particles";
		type = "BombExp1";
		position[] = {0, 0, 0};

		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};
//		 ********************************************************************
//		 **********************  Simulated EFFECTS  *************************
//		 ********************************************************************
class ExhaustsEffect
{
	class ExhaustsEffect01
	{
		simulation = "particles";
		type = "ExhaustSmoke1";
        };
};
class ExhaustsEffectBig
{
	class ExhaustsEffect01
	{
		simulation = "particles";
		type = "ExhaustSmokeBig1";
        };
};

class LDustEffects
{
	class LeftDust1
	{
		simulation = "particles";
		type = "LeftDust1";
        };
};
class RDustEffects
{
	class RightDust1
	{
		simulation = "particles";
		type = "RightDust1";
        };
};
class RWaterEffects
{
	class RightWater1
	{
		simulation = "particles";
		type = "RightWater1";
        };
};
class LWaterEffects
{
	class LeftWater1
	{
		simulation = "particles";
		type = "LeftWater1";
        };
};

class REngEffects
{
	class RightEng1
	{
		simulation = "particles";
		type = "RightEng1";
        };
};
class LEngEffects
{
	class LeftEng1
	{
		simulation = "particles";
		type = "LeftEng1";
        };
};

class FDustEffects
{
	class TankDust1
	{
		simulation = "particles";
		type = "TankDust1";
        };
        class TankDust2
	{
		simulation = "particles";
		type = "TankDust2";
        };
};

class HeliDust
{
	class HDust1
	{
		simulation = "particles";
		type = "HDust1";
        };
};
class HeliWater
{
	class HWater1
	{
		simulation = "particles";
		type = "HWater1";
        };
};
class DamageSmokeHeli
{
	class DSmoke1
	{
		simulation = "particles";
		type = "DSmoke1";
        };
};
class DamageSmokePlane
{
	class DSmoke2
	{
		simulation = "particles";
		type = "DSmoke2";
        };
};

//		 ********************************************************************
//		 ************************  Other EFFECTS  ***************************
//		 ********************************************************************
class SmallFire
{
	class Light1
	{
		simulation = "light";
		type = "SmallFireLight";
	};
	class sound
	{
		simulation = "sound";
		type = "Fire";
	};
	class Fire1
	{
		simulation = "particles";
		type = "SmallFireF";
	};
	class Smoke1
	{
		simulation = "particles";
		type = "SmallFireS";
	};
};


//	*********************** DESTRUCTION EFFECTS ***********************
class CfgDestructPos
{
  class FuelStationDestr
  {
    timeBeforeHiding = "0.2"; // const. only
    hideDuration = "lifeTime*0.05+0.2";
  };
};




//ToDo: Add fitting sounds
// define environmental sounds
class CfgVehicles
{
	class All
	{
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
				type = "Fire";
			};
			class Fire1
			{
			  simulation = "particles";
			  type = "ObjectDestructionFire";
			  position = "destructionEffect1";

			  intensity = 0.15;
			  interval = 1;
			  lifeTime = 3;
			};
			class Fire2
			{
			  simulation = "particles";
			  type = "ObjectDestructionFire";
			  position = "destructionEffect1";

			  intensity = 0.15;
			  interval = 1;
			  lifeTime = 3;
			};
			class Smoke1
			{
			  simulation = "particles";
			  type = "ObjectDestructionSmoke";
			  position = "destructionEffect1";

			  intensity = 0.15;
			  interval = 1;
			  lifeTime = 3.2;
			};
			class Smoke2
			{
			  simulation = "particles";
			  type = "ObjectDestructionSmoke2";
			  position = "destructionEffect1";

			  intensity = 0.15;
			  interval = 1;
			  lifeTime = 3.4;
			};
			class Smoke3
			{
			  simulation = "particles";
			  type = "ObjectDestructionSmoke3";
			  position = "destructionEffect1";

			  intensity = 0.125;
			  interval = 1;
			  lifeTime = 3.5;
			};
		};
	};
	class Building;
	class NonStrategic: Building
	{
		class DestructionEffects;
	};
	class HouseBase: NonStrategic
	{
		animated=false;
		displayName=$STR_DN_HOUSE;
		model="";
		vehicleClass=Objects;
		nameSound="building";
		simulation = house;
		accuracy=0.20;
		cost=0;
		ladders[]={}; // default no ladder
		armor = 2000;
	};
	class House : HouseBase
	{
		animated=false;
		//scope=private;
		displayName=$STR_DN_HOUSE;
		model="";
		vehicleClass=Objects;
		nameSound="building";
		simulation = house;
		accuracy=0.20;
		cost=0;
		ladders[]={}; // default no ladder
		armor = 2000;

		class DestructionEffects: DestructionEffects
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
			// DestroyPhase1 and DamageAround1 inherited from NonStrategic
		};
	};
	class Ruins : HouseBase
	{
		destrType = DestructNo;
		// we might want different simulation class for ruins
		simulation = house;
	  // no destruction for ruins
		class DestructionEffects
		{
		};
	};

	class ThingEffect;
	class ThingEffectLight;
	class ThingEffectFeather;
	class FxWindGrass1: ThingEffectLight
	{
		scope = protected;
		model = "\ca\data\cl_grass1.p3d";
		displayName = "Internal: FxWindGrass1";

		airRotation = 0.45;
	};
	class FxWindGrass2: ThingEffectLight
	{
		scope = protected;
		model = "\ca\data\cl_grass2.p3d";
		displayName = "Internal: FxWindGrass2";

		airRotation = 0.3;
	};
	class FxWindRock1: ThingEffectLight
	{
		scope = protected;
		model = "\ca\data\cl_rock1.p3d";
		displayName = "Internal: FxWindRock1";

		airFriction2[] = {1, 1, 1};
		airFriction1[] = {0.5, 0.5, 0.5};
		airFriction0[] = {0.05, 0.05, 0.05};

		airRotation = 0.7;

		minHeight = 0.05;
		avgHeight = 0.1;
		maxHeight = 0.15;
	};
	class FxWindLeaf1: ThingEffectLight
	{
		scope = protected;
		model = "\ca\data\cl_leaf.p3d";
		displayName = "Internal: FxWindLeaf1";

		airFriction2[] = {2, 2, 8};
		airFriction1[] = {1, 1, 4};
		airFriction0[] = {0.3, 0.3, 0.1};

		airRotation = 0.35;

		minHeight = 0.3;
		avgHeight = 1.5;
		maxHeight = 3.0;
	};
	class FxWindLeaf2: FxWindLeaf1
	{
		model = "\ca\data\cl_leaf2.p3d";
		displayName = "Internal: FxWindLeaf2";
	};
	class FxWindLeaf3: FxWindLeaf1
	{
		model = "\ca\data\cl_leaf3.p3d";
		displayName = "Internal: FxWindLeaf3";
	};
	class FxWindPollen1: ThingEffectFeather
	{
		scope = protected;
		model = "\ca\data\cl_feathers2.p3d";
		displayName = "Internal: FxWindPollen1";
	};

	class AllVehicles: All
	{
		class NewTurret
		{
			gunnerInAction = "ManActTestDriver";
			gunnerAction = "ManActTestDriver";
			gunBeg = "usti hlavne"; //gunBeg = endpoint of the gun
			gunEnd = "konec hlavne"; //gunEnd = chamber of the gun

			memoryPointGunnerOptics= "gunnerview";

			memoryPointsGetInGunner= "pos gunner";
			memoryPointsGetInGunnerDir= "pos gunner dir";
			memoryPointGun = "kulas";
			selectionFireAnim = "zasleh";
		};
	};
	class Strategic;
	class Thing;
	//Used for displaying stand-alone weapons and items.
	class Library_WeaponHolder: Strategic
	{
		scope = 1;
		model = "\ca\data\library\weaponholder\weaponholder.p3d";
		accuracy = 0.20;
		class TransportMagazines {};
		forceSupply = 1;
		showWeaponCargo = 1;
		transportMaxMagazines = 1e9;
		transportMaxWeapons = 1e9;
		displayName = "";
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		cost = 0;
		armor = 200;
		mapSize = 2.6;
		animated = 0;
		vehicleClass = "Ammo";
		icon = "";
		nameSound = "";
		typicalCargo[] = {};
		destrType = DestructEngine;
	};
	class Platform: Thing
	{
		scope = 1;
		simulation = "house";
		vehicleClass = "OFP2\Library";
		coefInside = 2;
		coefInsideHeur = 4.3;
		displayname =  "Platform";
		model = "\ca\data\Library\Platform\Platform.p3d";
	};
	class Obstacle_Cylinder1: Thing
	{
		scope = 1;
		simulation = "house";
		vehicleClass = "OFP2\Library";
		coefInside = 2;
		coefInsideHeur = 4.3;
		displayname =  "Obstacle - Cylinder 1";
		model = "\ca\data\Library\Obstacle_Cylinder1\Obstacle_Cylinder1.p3d";
	};
	class Obstacle_Jump1: Obstacle_Cylinder1
	{
		displayName = "Obstacle - Jump 1";
		model = "\ca\data\Library\Obstacle_Jump1\Obstacle_Jump1.p3d";
	};
	class RoadCone: Thing
	{
		simulation="thing";
		animated = false;
		mapSize = 0.1;
		displayName=$STR_DN_ROADCONE;
		model = "\ca\data\library\road_cone.p3d";
		icon="\ca\data\library\data\icons\road_cone_CA.paa";
		scope = public;
		nameSound="";
		accuracy=0.2;
		class DestructionEffects {};
	};
	class Obstacle_saddle: NonStrategic
	{
		animated = false;
		vehicleClass="Objects";
		typicalCargo[]={};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		displayName=$STR_DN_OBSTACLE2;
		model = "\ca\data\Library\obstacle_saddle.p3d";
		icon="\ca\data\library\data\icons\obstacle_saddle_CA.paa";
		scope = public;
		nameSound="";
		accuracy=0.2;
		class DestructionEffects {};
	};
	class RampConcrete: NonStrategic
	{
		animated = false;
		vehicleClass="Objects";
		typicalCargo[]={};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		displayName=$STR_DN_RAMPCNCRT;
		model = "\ca\data\library\ramp_concrete.p3d";
		icon="\ca\data\library\data\icons\ramp_concrete_CA.paa";
		scope = public;
		nameSound="";
		accuracy=0.2;
		armor=1000;
		destrType=DestructBuilding;
	};
	class HumpsDirt: NonStrategic
	{
		animated = false;
		vehicleClass="Objects";
		typicalCargo[]={};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		displayName=$STR_DN_HMPSDRT;
		model = "\ca\data\library\humps_dirt.p3d";
		icon="\ca\data\library\data\icons\humps_dirt_CA.paa";
		scope = public;
		nameSound="";
		armor=1000;
		accuracy=0.2;
		destrType=DestructBuilding;
	};
	class Ship;
	class BuoySmall: Ship
	{
		vehicleClass = "Objects";
		maxSpeed = 0;
		fuelCapacity=0;
		hasGunner = 0;
		hasCommander = 0;
		hasDriver = 0;
		weapons[]={};
		magazines[]={};
		irTarget = false;
		cost=100;
		threat[]={0, 0, 0};
		mapSize = 0.1;
		displayName=$STR_DN_BOUYSML;
		model = "\ca\data\library\Buoy_small.p3d";
		icon="\ca\data\library\data\icons\Buoy_small_CA.paa";
		scope = public;
		nameSound="";
		class DestructionEffects {};
		accuracy=0.2;
		camouflage=0.001;
    		audible=0.001;
		armor=50;
		class turrets {};
	};
	class BuoyBig: Ship
	{
		vehicleClass = "Objects";
		maxSpeed = 0;
		fuelCapacity=0;
		hasGunner = 0;
		hasCommander = 0;
		hasDriver = 0;
		weapons[]={};
		magazines[]={};
		irTarget = false;
		cost=100;
		threat[]={0, 0, 0};
		mapSize = 0.1;
		displayName=$STR_DN_BUOY;
		model = "\ca\data\library\Buoy.p3d";
		icon="\ca\data\library\data\icons\Buoy_CA.paa";
		class MarkerLights
    		{
			class WhiteBlinking
			{
			        name = "bily pozicni blik";
			        color[] = {1.0, 1.0, 1.0, 1};
			        ambient[] = {0.1, 0.1, 0.1, 1};
			        brightness = 0.02;
			        blinking = true;
			};
		};
		scope = public;
		nameSound="";
		class DestructionEffects {};
		accuracy=0.2;
		camouflage=0.001;
    		audible=0.001;
		armor=50;
		class turrets {};
	};
	class RoadBarrier_light: NonStrategic
	{
		animated = false;
		vehicleClass="Objects";
		typicalCargo[]={};
		transportAmmo = 0;
		transportRepair = 0;
		transportFuel = 0;
		mapSize = 0.1;
		displayName=$STR_DN_RDBARRIERSML;
		model = "\ca\data\library\RoadBarrier_light.p3d";
		icon="\ca\data\library\data\icons\RoadBarrier_light_CA.paa";
		scope = public;
		nameSound="fence";
		class DestructionEffects {};
		destrType=DestructTree;
		accuracy=0.2;
		cost=0;
		armor=200;
		class MarkerLights
		{
			class YellowBlinking
			{
				name = "zluty pozicni blik";
				color[] = {0.99,0.69,0.17,1.0};
				ambient[] = {0.099,0.069,0.017,1.0};
				brightness = 0.01;
				blinking = true;
			};
		};
	};
	class RoadBarrier_long: RoadBarrier_light
	{
		displayName=$STR_DN_RDBARRIER;
		model = "\ca\data\library\RoadBarrier_long.p3d";
		icon="\ca\data\library\data\icons\RoadBarrier_long_CA.paa";
		mapSize = 0.2;
	};
	class Car;
	class PaperCar: Car
	{
		model = "\ca\data\papAuto";
	};
};


#define TitleTxt 0 // faded text
#define TitleTxtDown 1 // down faded text
#define TitleRsc 2 // resource text
#define TitleObj 3 // object

class CfgCutScenes
{
	access = ReadAndCreate;
	class Refuel
	{
		sound[]={"",0.5,0.2};
		titleType=TitleTxtDown;
		title=$STR_CFG_CUTSCENES_REFUEL;
	};
	class Rearm
	{
		sound[]={"",0.3,1};
		titleType=TitleTxtDown;
		title=$STR_CFG_CUTSCENES_REARM;
	};
	class Repair
	{
		sound[]={"",0.1,1};
		titleType=TitleTxtDown;
		title=$STR_CFG_CUTSCENES_REPAIR;
	};
};

#define CamExternal 0 // linked directly with object
#define CamInterpolated 0 // linked directly with object
#define CamStatic 1 // fixed point in space
#define CamStaticWithZoom 2 // fixed point in space
#define CamChained 3 // fixed point in space
#define CamTerminate 4 // fixed point in space
#define CamInternal 5 // fixed point in space

class CfgCameraEffects
{
	access = ReadAndCreate;
	class Interpolated
	{
		type=CamInterpolated;
		scale=0.1;
		duration=5;
		spline=true; // spline or linear
		show=public;
	};
	class Exact: Interpolated
	{
		scale=-1;
	};
	class Chain
	{
		type=CamChained;
		show=public;
	};

	class Array
	{
		class Terminate
		{
			name=$STR_CFG_CAMEFFECTS_TERMINATE;
			type=CamTerminate;
			show=private;
		};
		class Internal
		{
			name=$STR_CFG_CAMEFFECTS_INTERNAL;
			type=CamInternal;
			show=public;
		};

		class ZoomIn: Interpolated
		{
			name=$STR_CFG_CAMEFFECTS_ZOOMIN;
			file="\ca\data\cam_zoom_in_front";
			scale=0.1;
			duration=5;
		};
		class ZoomInSlow: Interpolated
		{
			name=$STR_CFG_CAMEFFECTS_ZOOMINSLOW;
			file="\ca\data\cam_zoom_in_front";
			scale=0.1;
			duration=15;
		};
		class Around: Interpolated
		{
			name=$STR_CFG_CAMEFFECTS_AROUND;
			file="\ca\data\cam_360";
			duration=10;
			scale=0.3;
		};
		class AroundSlow: Interpolated
		{
			name=$STR_CFG_CAMEFFECTS_AROUNDSLOW;
			file="\ca\data\cam_360";
			duration=20;
			scale=0.3;
		};
		class ZoomAndAround: Chain
		{
			name=$STR_CFG_CAMEFFECTS_ZOOMAROUND;
			chain[]={ZoomIn,Around};
		};
		class AroundAndZoomINSlow: Chain
		{
			name=$STR_CFG_CAMEFFECTS_AROUNDZOOMSLOW;
			chain[]={AroundSlow, ZoomInSlow};
		};
		class ZoomInS: Interpolated
		{
			name=$STR_CFG_CAMEFFECTS_ZOOMINS;
			file="cam_s_zoom_in";
			duration=5;
			scale=1;
			show = private;
		};
		class Fixed: Interpolated
		{
			name=$STR_CFG_CAMEFFECTS_FIXED;
			type=CamStatic;
			duration=10;
		};
		class FixedWithZoom: Fixed
		{
			name=$STR_CFG_CAMEFFECTS_FIXEDZOOM;
			type=CamStaticWithZoom;
			duration=10;
		};
		class External: Fixed
		{
			name=$STR_CFG_CAMEFFECTS_EXTERNAL;
			type=CamExternal;
			duration=5;
			file="";
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyCommander;
	class ProxyDriver;
	class ProxyGunner;
	class ProxyCargo;
	class ProxyPilot: ProxyDriver {};
	class ProxyCommanderOut: ProxyCommander {};
	class ProxyDriverOut: ProxyDriver {};
	class ProxyGunnerOut: ProxyGunner {};
	class ProxyGunner01: ProxyGunner {};
	class ProxyCargoStanding: ProxyCargo {};

	class ProxyBasicMotoDriver: ProxyDriver {};

	class ProxyCargo01: ProxyCargo {};
	class ProxyCargo02: ProxyCargo {};
	class ProxyCargo03: ProxyCargo {};

};
