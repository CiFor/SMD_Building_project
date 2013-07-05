#define SPEED_STATIC 1e10
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		Dummy_Cargo = "Dummy_Cargo";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	#define AnimPath \ca\wheeled\Data\Anim
	class States
	{
		class KIA_Dummy_Cargo: DefaultDie
		{
			actions = DeadActions;
			file= AnimPath\KIA_Skodovka_Cargo01;
			speed=SPEED_STATIC;
			terminal = 1;
			soundEnabled=0;
		};
		class Crew;
		class Dummy_Cargo: Crew
		{
			file= AnimPath\Skodovka_Cargo01;
			connectTo[]={KIA_Dummy_Cargo,1};
		};
	};
	#undef AnimPath
};