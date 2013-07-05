class CfgGroups
{
	class West
	{
		name = $STR_WEST;
		class Armored
		{
			name = $STR_CFG_XBOX_GRP_ARMOR_PLATOONS;

			class M1Platoon
			{
				name = $STR_CFG_XBOX_GRP_ARMOR_M1A1;
				
				class Unit0
				{
					side = TWest;
					vehicle = "M1Abrams";
					rank = "CAPTAIN";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TWest;
					vehicle = "M1Abrams";
					rank = "Lieutnant";
					position[] = {-20, 0, 0};
				};
				class Unit2
				{
					side = TWest;
					vehicle = "M1Abrams";
					rank = "Lieutnant";
					position[] = {20, 0, 0};
				};
				class Unit3
				{
					side = TWest;
					vehicle = "M1Abrams";
					rank = "Corporal";
					position[] = {40, 0, 0};
				};
			};
		};

		class Infantry
		{
			name = $STR_CFG_XBOX_GRP_INFANTRY_SQUADS;

			class BasicInfantry
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_BASIC;

				class Unit0
				{
					side = TWest;
					vehicle = "SquadleaderW";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TWest;
					vehicle = "TeamLeaderW";
					rank = "CORPORAL";
					position[] = {3, 0, 0};
				};
				class Unit2
				{
					side = TWest;
					vehicle = "SoldierWG";
					rank = "Private";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TWest;
					vehicle = "SoldierWAR";
					rank = "Private";
					position[] = {7,0,0};
				};
				class Unit4
				{
					side = TWest;
					vehicle = "SoldierWAT";
					rank = "Private";
					position[] = {9,0,0};
				};
				class Unit5
				{
					side = TWest;
					vehicle = "TeamLeaderW";
					rank = "CORPORAL";
					position[] = {11,0,0};
				};
				class Unit6
				{
					side = TWest;
					vehicle = "SoldierWG";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7
				{
					side = TWest;
					vehicle = "SoldierWAR";
					rank = "Private";
					position[] = {15,0, 0};
				};
				class Unit8
				{
					side = TWest;
					vehicle = "SoldierWSniper";
					rank = "Private";
					position[] = {17,0, 0};
				};
			};
			class NormalInfantry
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_HEAVY;

				class Unit0
				{
					side = TWest;
					vehicle = "SquadleaderW";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TWest;
					vehicle = "SoldierWMG";
					rank = "CORPORAL";
					position[] = {3, 0, 0};
				};
				class Unit2
				{
					side = TWest;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TWest;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {7,0,0};
				};
				class Unit4
				{
					side = TWest;
					vehicle = "SoldierWMG";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5
				{
					side = TWest;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6
				{
					side = TWest;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {13,0,0};
				};
			};

      class SpecialInfantry
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_SPECIAL;
			
				class Unit0
				{
					side = TWest;
					vehicle = "SoldierWSaboteurAssault";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
        class Unit1
				{
					side = TWest;
					vehicle = "SoldierWSaboteurPipe";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2
				{
					side = TWest;
					vehicle = "SoldierWSaboteurPipe";
					rank = "CORPORAL";
					position[] = {5, 0, 0};
				};        
				class Unit3
				{
					side = TWest;
					vehicle = "SoldierWSaboteurMarksman";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
			};

			class MotorizedPatrol
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_MOTORIZED;

				class Unit0
				{
					side = TWest;
					vehicle = "SquadleaderW";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TWest;
					vehicle = "HMMWV50";
					rank = "CORPORAL";
					position[] = {-5, 0, 0};
				};
				class Unit2
				{
					side = TWest;
					vehicle = "SoldierWMG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TWest;
					vehicle = "SoldierWG";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
			};
			class MechanizedInfantry
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_MECHANIZED;

				class Unit0
				{
					side = TWest;
					vehicle = "SquadleaderW";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TWest;
					vehicle = "Stryker_TOW";
					rank = "CORPORAL";
					position[] = {-5, 0, 0};
				};
				class Unit2
				{
					side = TWest;
					vehicle = "SoldierWMedic";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TWest;
					vehicle = "SoldierWMG";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4
				{
					side = TWest;
					vehicle = "SoldierWAT";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5
				{
					side = TWest;
					vehicle = "SoldierWG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6
				{
					side = TWest;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7
				{
					side = TWest;
					vehicle = "SoldierWB";
					rank = "Private";
					position[] = {15,0, 0};
				};
			};
		};
		class Air
		{
			name = $STR_CFG_XBOX_GRP_AIR_SQUADRONS;
			
			class AttackSquadron
			{
				name = $STR_CFG_XBOX_GRP_AIR_ATTACK;
				
				class Unit0
				{
					side = TWest;
					vehicle = "AH1W";
					rank = "CAPTAIN";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TWest;
					vehicle = "AH1W";
					rank = "Lieutnant";
					position[] = {-20, 0, 0};
				};
				class Unit2
				{
					side = TWest;
					vehicle = "AH1W";
					rank = "Lieutnant";
					position[] = {20, 0, 0};
				};
				class Unit3
				{
					side = TWest;
					vehicle = "AH1W";
					rank = "Corporal";
					position[] = {40, 0, 0};
				};
			};
      class TransportSquadron
      {
 				name = $STR_CFG_XBOX_GRP_AIR_TRANSPORT;
				
				class Unit0
				{
					side = TWest;
					vehicle = "UH60MG";
					rank = "CAPTAIN";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TWest;
					vehicle = "UH60MG";
					rank = "Lieutnant";
					position[] = {-20, 0, 0};
				};
				class Unit2
				{
					side = TWest;
					vehicle = "UH60";
					rank = "Lieutnant";
					position[] = {20, 0, 0};
				};
				class Unit3
				{
					side = TWest;
					vehicle = "UH60";
					rank = "Corporal";
					position[] = {40, 0, 0};
				};       
      };
		};
	};

	class East
	{
		name = $STR_EAST;
		class Armored
		{
			name = $STR_CFG_XBOX_GRP_ARMOR_PLATOONS;

			class T72Platoon
			{
				name = $STR_CFG_GRP_T72PLATOON;
				class Unit0
				{
					side = TEast;
					vehicle = "T72";
					rank = "CAPTAIN";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TEast;
					vehicle = "T72";
					rank = "Lieutnant";
					position[] = {-20, 0, 0};
				};
				class Unit2
				{
					side = TEast;
					vehicle = "T72";
					rank = "Lieutnant";
					position[] = {20, 0, 0};
				};
				class Unit3
				{
					side = TEast;
					vehicle = "T72";
					rank = "Corporal";
					position[] = {40, 0, 0};
				};
			};
		};

		class Infantry
		{
			name = $STR_CFG_XBOX_GRP_INFANTRY_SQUADS;

			class BasicInfantry
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_BASIC;

				class Unit0
				{
					side = TEast;
					vehicle = "SquadleaderE";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TEast;
					vehicle = "TeamLeaderE";
					rank = "CORPORAL";
					position[] = {3, 0, 0};
				};
				class Unit2
				{
					side = TEast;
					vehicle = "SoldierEG";
					rank = "Private";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TEast;
					vehicle = "SoldierEMG";
					rank = "Private";
					position[] = {7,0,0};
				};
				class Unit4
				{
					side = TEast;
					vehicle = "SoldierEAT";
					rank = "Private";
					position[] = {9,0,0};
				};
				class Unit5
				{
					side = TEast;
					vehicle = "TeamLeaderE";
					rank = "CORPORAL";
					position[] = {11,0,0};
				};
				class Unit6
				{
					side = TEast;
					vehicle = "SoldierEG";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7
				{
					side = TEast;
					vehicle = "SoldierEMG";
					rank = "Private";
					position[] = {15,0, 0};
				};
				class Unit8
				{
					side = TEast;
					vehicle = "SoldierESniper";
					rank = "Private";
					position[] = {17,0, 0};
				};
			};
			class NormalInfantry
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_HEAVY;

				class Unit0
				{
					side = TEast;
					vehicle = "SquadleaderE";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TEast;
					vehicle = "SoldierEMG";
					rank = "CORPORAL";
					position[] = {3, 0, 0};
				};
				class Unit2
				{
					side = TEast;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TEast;
					vehicle = "SoldierEMG";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4
				{
					side = TEast;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {9,0,0};
				};
				class Unit5
				{
					side = TEast;
					vehicle = "SoldierEAT";
					rank = "CORPORAL";
					position[] = {11,0,0};
				};
				class Unit6
				{
					side = TEast;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {13,0,0};
				};
			};
      class SpecialInfantry
      {
        name = $STR_CFG_XBOX_GRP_SQUAD_SPECIAL;
        
				class Unit0
				{
					side = TEast;
					vehicle = "SoldierESaboteurPipe";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TEast;
					vehicle = "SoldierESaboteurBizon";
					rank = "CORPORAL";
					position[] = {3,0,0};
				};
				class Unit2
				{
					side = TEast;
					vehicle = "SoldierESaboteurBizon";
					rank = "CORPORAL";
					position[] = {5, 0, 0};
				};        
				class Unit3
				{
					side = TEast;
					vehicle = "SoldierESaboteurMarksman";
					rank = "Corporal";
					position[] = {7,0,0};
				};
      };

			class MotorizedPatrol
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_MOTORIZED;

				class Unit0
				{
					side = TEast;
					vehicle = "SquadleaderE";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TEast;
					vehicle = "UAZMG";
					rank = "CORPORAL";
					position[] = {-5, 0, 0};
				};
				class Unit2
				{
					side = TEast;
					vehicle = "SoldierEMG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TEast;
					vehicle = "SoldierEG";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
			};
			class MechanizedInfantry
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_MECHANIZED;

				class Unit0
				{
					side = TEast;
					vehicle = "SquadleaderE";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TEast;
					vehicle = "BMP2";
					rank = "CORPORAL";
					position[] = {-5, 0, 0};
				};
				class Unit2
				{
					side = TEast;
					vehicle = "SoldierEG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TEast;
					vehicle = "SoldierEB";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4
				{
					side = TEast;
					vehicle = "SoldierEAT";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5
				{
					side = TEast;
					vehicle = "SoldierEMG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6
				{
					side = TEast;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7
				{
					side = TEast;
					vehicle = "SoldierEB";
					rank = "Private";
					position[] = {15,0, 0};
				};
			};
		};
		class Air
		{
			name = $STR_CFG_XBOX_GRP_AIR_SQUADRONS;
			
			class AttackSquadron
			{
				name = $STR_CFG_XBOX_GRP_AIR_ATTACK;
				
				class Unit0
				{
					side = TEast;
					vehicle = "Ka50";
					rank = "CAPTAIN";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TEast;
					vehicle = "Ka50";
					rank = "Lieutnant";
					position[] = {-20, 0, 0};
				};
				class Unit2
				{
					side = TEast;
					vehicle = "Ka50";
					rank = "Lieutnant";
					position[] = {20, 0, 0};
				};
				class Unit3
				{
					side = TEast;
					vehicle = "Ka50";
					rank = "Corporal";
					position[] = {40, 0, 0};
				};
			};
      class TransportSquadron
      {
 				name = $STR_CFG_XBOX_GRP_AIR_TRANSPORT;
				
				class Unit0
				{
					side = TWest;
					vehicle = "Mi17_MG";
					rank = "CAPTAIN";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TWest;
					vehicle = "Mi17_MG";
					rank = "Lieutnant";
					position[] = {-20, 0, 0};
				};
				class Unit2
				{
					side = TWest;
					vehicle = "Mi17_MG";
					rank = "Lieutnant";
					position[] = {20, 0, 0};
				};
				class Unit3
				{
					side = TWest;
					vehicle = "Mi17_MG";
					rank = "Corporal";
					position[] = {40, 0, 0};
				};       
      };
		};
	};

  class Guerrila
	{
		name = $STR_GUERRILA;
		class Infantry
		{
			name = $STR_CFG_XBOX_GRP_INFANTRY_SQUADS;

			class BasicInfantry
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_BASIC;

				class Unit0
				{
					side = TGuerrila;
					vehicle = "SquadleaderG";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TGuerrila;
					vehicle = "TeamLeaderG";
					rank = "CORPORAL";
					position[] = {3, 0, 0};
				};
				class Unit2
				{
					side = TGuerrila;
					vehicle = "SoldierGMG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TGuerrila;
					vehicle = "SoldierGG";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4
				{
					side = TGuerrila;
					vehicle = "SoldierGAT";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5
				{
					side = TGuerrila;
					vehicle = "SoldierGMG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6
				{
					side = TGuerrila;
					vehicle = "SoldierGB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7
				{
					side = TGuerrila;
					vehicle = "SoldierGB";
					rank = "Private";
					position[] = {15,0, 0};
				};
				class Unit8
				{
					side = TGuerrila;
					vehicle = "SoldierGB";
					rank = "Private";
					position[] = {17,0, 0};
				};
			};
			class NormalInfantry
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_HEAVY;

				class Unit0
				{
					side = TGuerrila;
					vehicle = "SquadleaderG";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TGuerrila;
					vehicle = "SoldierGMG";
					rank = "CORPORAL";
					position[] = {3, 0, 0};
				};
				class Unit2
				{
					side = TGuerrila;
					vehicle = "SoldierGAA";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TGuerrila;
					vehicle = "SoldierGAT";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4
				{
					side = TGuerrila;
					vehicle = "SoldierGAT";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5
				{
					side = TGuerrila;
					vehicle = "SoldierGB";
					rank = "Private";
					position[] = {11,0,0};
				};
			};
			class MotorizedPatrol
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_MOTORIZED;

				class Unit0
				{
					side = TGuerrila;
					vehicle = "SquadleaderG";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TGuerrila;
					vehicle = "LandroverMG";
					rank = "CORPORAL";
					position[] = {-5, 0, 0};
				};
				class Unit2
				{
					side = TGuerrila;
					vehicle = "SoldierGMG";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TGuerrila;
					vehicle = "SoldierGG";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
			};
			class MechanizedInfantry
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_MECHANIZED;

				class Unit0
				{
					side = TGuerrila;
					vehicle = "SquadleaderG";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TGuerrila;
					vehicle = "M113";
					rank = "CORPORAL";
					position[] = {-5, 0, 0};
				};
				class Unit2
				{
					side = TGuerrila;
					vehicle = "SoldierGMedic";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TGuerrila;
					vehicle = "SoldierGMG";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4
				{
					side = TGuerrila;
					vehicle = "SoldierGAT";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5
				{
					side = TGuerrila;
					vehicle = "SoldierGG";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6
				{
					side = TGuerrila;
					vehicle = "SoldierGB";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7
				{
					side = TGuerrila;
					vehicle = "SoldierGB";
					rank = "Private";
					position[] = {15,0, 0};
				};
			};
		};
	};

  class Civilian
	{
		name = $STR_CIVILIAN;

		class Infantry
		{
			name = $STR_CFG_XBOX_GRP_INFANTRY_SQUADS;

			class Crowd
			{
				name = $STR_CFG_XBOX_GRP_SQUAD_CROWD;

				class Unit0
				{
					side = TCivilian;
					vehicle = "Civilian4";
					rank = "Sergeant";
					position[] = {0, +5, 0};
				};
				class Unit1
				{
					side = TCivilian;
					vehicle = "Civilian15";
					rank = "CORPORAL";
					position[] = {3, 0, 0};
				};
				class Unit2
				{
					side = TCivilian;
					vehicle = "Civilian19";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit3
				{
					side = TCivilian;
					vehicle = "Civilian13";
					rank = "CORPORAL";
					position[] = {7,0,0};
				};
				class Unit4
				{
					side = TCivilian;
					vehicle = "Civilian3";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit5
				{
					side = TCivilian;
					vehicle = "Civilian17";
					rank = "Private";
					position[] = {11,0,0};
				};
				class Unit6
				{
					side = TCivilian;
					vehicle = "Civilian21";
					rank = "Private";
					position[] = {13,0,0};
				};
				class Unit7
				{
					side = TCivilian;
					vehicle = "Civilian10";
					rank = "Private";
					position[] = {15,0, 0};
				};
				class Unit8
				{
					side = TCivilian;
					vehicle = "Civilian7";
					rank = "Private";
					position[] = {17,0, 0};
				};
			};
		};
	};
};