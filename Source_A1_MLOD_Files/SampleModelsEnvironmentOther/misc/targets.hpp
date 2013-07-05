	class Target: Strategic
	{
		//--
		scope = protected;

		destrType=DestructTree;
		side = TCivilian;
		icon="\Ca\misc\data\icons\i_terc_CA.paa";
		mapSize = 2;
		nameSound="target";
		model = "\ca\Misc\terc";
		accuracy=0.20;

		cost=0;
		armor=10;
	};
	class TargetE : Target
	{
		scope = public;
		vehicleClass = "Objects";
		displayName = $STR_DN_TARGET_EAST;
		accuracy = 1000;
		mapSize = 0.8;
	};
	class TargetTraining : NonStrategic
	{
		model="\ca\Misc\terc";
		icon="\Ca\misc\data\icons\i_terc_CA.paa";
		mapSize = 2;
		side=TCivilian;
		armor=15;
		cost=0;
		scope=public;
		displayName=$STR_DN_TARGET;
		nameSound="target2";
		accuracy=0.25;
		memoryPointSupply = "";
		class DestructionEffects;
	};
	class TargetGrenade : TargetTraining
	{
		scope=public;
		displayName=$STR_DN_ARMORED_TARGET;
		model="\ca\Misc\drevtank";
		icon="\Ca\misc\data\icons\i_Drewtank_CA.paa";
		mapSize = 10;
		vehicleClass="Objects";

		side=TEast;
		armor=60;
		cost=0;

		nameSound="armoredtarget";
		accuracy = 1000;

		//Added some fuel to trigger the destruction effect.
		transportFuel = 300;
		irTarget=1;
		destrType = 6; //DestructDefault
		alwaysTarget = 1;
		animated = 0;
		class DestructionEffects: DestructionEffects
		{
			class Ruin1
			{
				simulation = ruin;
				type=\CA\misc\Drevtank_ruin.p3d;
				position="";
				intensity = 1;
				interval = 1;
				lifeTime = 1;
			};
		};
	};
	class Ruins;
	class Land_drevtank_ruin: Ruins
	{
		model="\ca\Misc\drevtank_ruin";
	};
	class TargetEpopup : TargetTraining
	{
		vehicleClass="Objects";
		model="\ca\Misc\Terc_Postava";
		icon="\Ca\misc\data\icons\i_terc_CA.paa";
		mapSize = 2;
		side=TEast;
		armor=60;
		cost=0;
		scope=public;
		displayName=$STR_DN_POPUP_TARGET_EAST;
		nameSound="target2";
		accuracy = 0.3;
		destrType=DestructEngine;
		class AnimationSources
		{
			class terc {animPeriod = 1;};
		};
		class EventHandlers
		{
			hit = "[(_this select 0)] exec ""ca\misc\scripts\PopUpTarget.sqs""";
		};
	};
