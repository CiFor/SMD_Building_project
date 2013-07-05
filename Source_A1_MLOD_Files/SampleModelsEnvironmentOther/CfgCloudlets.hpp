class CfgCloudlets
{
  access=ReadAndWrite;

  // Ancestor of all cloudlet classes
  class Default	
  {  
    interval[] = {"interval", 0.5, 0.5};		//interval generovani particlu
    circleRadius = 0;					//okruh pro emitaci particlu
    circleVelocity[] = {0, 0, 0};			//sila kruhove emitace 

    particleShape = \ca\cl_basic.p3d;			//tvar / model particlu
    particleFSNtieth = 1;				//rozdeleni poctu snimku na jeden radek animovane textury
    particleFSIndex = 0;				//index pocatecniho radku animace
    particleFSFrameCount = 1;				//pocet snimku animace
    particleFSLoop = 1;					//loopovani animace(0 - false, 1 - true)
    angle = 0;						//uhel natoceni particlu
    angleVar = 0;					//nahodny uhel particlu
    
    animationName = "";					//jmeno animace
    particleType = "Billboard";				//typ particlu(Billboard, Spaceobject)
    timerPeriod = 1;					//interval casovace
    lifeTime[] = {0,1};					//zivotnost particlu
    moveVelocity[] = {0, 0, 0};				//sila vektorove emitace
    rotationVelocity = 1;				//rotace particlu(pouze pri Spaceobject)
    weight = 1;						//hmotnost particlu
    volume = 1;						//objem particlu
    rubbing = 0.05;					//vliv vetru / odpor vzduchu
    size[] = {1,1};					//velikost particlu
    color[] = {{1,1,1,1}};				//barva particlu(r,g,b,a)
    animationSpeed[] = {1};				//rychlost animace(pocet prehrani animace za 1 sec)
    randomDirectionPeriod = 0;				//interval nahodne zmeny smeru
    randomDirectionIntensity = 0;			//intesita nahodne zmeny smeru
    onTimerScript = "";					//casovacem spousteny script
    beforeDestroyScript = "";				//script spousteny pred znicenim particlu
  

    lifeTimeVar = 0;					//variabilita zivotnosti particlu
    positionVar[] = {0, 0, 0};				//nahodna pozice particlu / tvar emitoru
    MoveVelocityVar[] = {0, 0, 0};			//variabilita sily vektorove emitace
    rotationVelocityVar = 0;				//variabilita rotace
    sizeVar = 0;					//variabilita velikosti particlu
    colorVar[] = {0, 0, 0, 0};				//variabilita barvy
    randomDirectionPeriodVar = 0;			//variabilita intervalu nahodne zmeny smeru
    randomDirectionIntensityVar = 0;			//variabilita intesity nahodne zmeny smeru
  };

  class Explosion
  {
    access = ReadAndWrite;
    cloudletDuration="0.1+(random 0.1)";
    cloudletAnimPeriod=0.5;
    cloudletSize="0.5 + (random 0.5)";
    cloudletAlpha="0.05 + (random 0.2)";
    cloudletGrowUp=0.01;
    cloudletFadeIn=0.02;
    cloudletFadeOut=0.2;
    cloudletAccY=2;
    cloudletMinYSpeed= "random 0.5";
    cloudletMaxYSpeed= "0.5 + (random 0.5)";
    cloudletShape="\ca\data\cl_fired";
    cloudletColor[]={0.9,0.7,0.2,0.0};
    interval=0.0005;
    size= "2.5 + (random 0.5)";
    sourceSize= "1 + (random 0.5)";
    timeToLive=0;
    initT=0;
    deltaT=8000;

    class Table
    {
          class T1{maxT=0;		color[]={0.9,0.6,0.2,0.0} ;};
          class T2{maxT=200;	color[]={0.9,0.6,0.3,0.0} ;};
          class T3{maxT=500;	color[]={0.8,0.6,0.3,0.0} ;};
          class T4{maxT=1000;	color[]={0.7,0.5,0.3,0.0} ;};
          class T5{maxT=1800;	color[]={0.6,0.5,0.4,0.0} ;};
          class T6{maxT=2000;	color[]={0.5,0.4,0.4,0.0} ;};
          class T7{maxT=4000;	color[]={0.4,0.4,0.4,0.0} ;};
    };
    initYSpeed="1 + (random 1.5)";
    density="5.6 + (random 0.8)";
   };
   class CraterSmoke1
   {
      access = ReadAndWrite;
      cloudletDuration="0.5+(random 0.2)";
      cloudletAnimPeriod=0.5;
      cloudletSize="0.2 + (random 0.3)";
      cloudletAlpha="0.05 + (random 0.2)";
      cloudletGrowUp=0.1;
      cloudletFadeIn=0.1;
      cloudletFadeOut=2;
      cloudletAccY=5;
      cloudletMinYSpeed=1;
      cloudletMaxYSpeed=1;
      cloudletShape=cloudletSmoke;
      cloudletColor[]={1,1,1,0};
      interval=1;
      size= "1.5 + (random 1)";
      sourceSize= "1 + (random 1)";
      timeToLive=0;
      initT=0;
      deltaT=200;

      class Table
      {
            class T1{maxT=0;	color[]={0.5,0.5,0.5,0.0};};
            class T2{maxT=200;color[]={0.5,0.5,0.5,0.0};};
      };
      initYSpeed="1 + (random 1.5)";
      density="5.6 + (random 0.8)";
      in=0;
      out=0.1;
   };
   class CraterSmoke2
   {
      access = ReadAndWrite;
      cloudletDuration="1 + (random 0.5)";
      cloudletAnimPeriod=0.5;
      cloudletSize="0.2 + (random 0.3)";
      cloudletAlpha="0.05 + (random 0.2)";
      cloudletGrowUp=0.1;
      cloudletFadeIn=0.1;
      cloudletFadeOut=5;
      cloudletAccY=5;
      cloudletMinYSpeed=0.5;
      cloudletMaxYSpeed=0.5;
      cloudletShape=cloudletSmoke;
      cloudletColor[]={1,1,1,0};
      interval=0.1;
      size= "1.5 + (random 1)";
      sourceSize= "1 + (random 1)";
      timeToLive=0;
      initT=0;
      deltaT=8000;

      class Table
      {
            class T1{maxT=0;		color[]={0.88,0.64,0.14,0.0};};
            class T2{maxT=200;	color[]={0.6,0.5,0.2,0.0};};
            class T3{maxT=500;	color[]={0.5,0.4,0.3,0.0};};
            class T4{maxT=1000;	color[]={0.4,0.4,0.3,0.0};};
            class T5{maxT=1800;	color[]={0.3,0.3,0.3,0.0};};
      };
      initYSpeed="1 + (random 1.5)";
      density="5.6 + (random 0.8)";
      in=0;
      out=0.1;
   };
   class CraterSmoke3
   {
      access = ReadAndWrite;
      interval=0.4;
      cloudletAnimPeriod=4;
      cloudletSize="4+(random 4)";
      cloudletAlpha= "(random 0.5)";
      cloudletGrowUp=0.1;
      cloudletFadeIn=0.1;
      cloudletDuration="5 + (random 0.5)";
      cloudletFadeOut=5;
      cloudletAccY="-0.1 + (random 0.5)";
      cloudletMinYSpeed=0.0;
      cloudletMaxYSpeed=0.3;
      cloudletColor[]={1,1,1,0};
      sourceSize= "1 + (random 1)";
      initT=0;
      deltaT=50;
      class Table
      {
         class T0{maxT=0;color[]={0.53,0.52,0.4,0};};
         class T1{maxT=500;color[]={0.53,0.52,0.4,0};};
      };

      cloudletShape=cloudletSmoke;
      density="0.5 + (random 0.1)";
      size="0.3 + (random 0.3)";
      timeToLive="0 + (random 1)";
      in=0;
      out=5;
      initYSpeed=0.5;
   };
  class CraterDustSmall
  {
    access = ReadAndWrite;
    interval = 0.01;
    cloudletSize = 1; // not used
    cloudletAlpha = 0.6;
    cloudletDuration = 0.2;
    cloudletAnimPeriod = 1;
    cloudletGrowUp = 0.1;
    cloudletFadeIn = 0;
    cloudletFadeOut = 0.2;
    cloudletAccY = -3.5;
    cloudletMinYSpeed = -20;
    cloudletMaxYSpeed = 10;
    cloudletColor[] = {0.3, 0.25, 0.2, 0};
    initT = 0;
    deltaT = 0;
    class Table
    {
      class T0 {maxT = 0; color[] = {1, 1, 1, 0};}
    }
    cloudletShape = cloudletDust;
    size = 0.2;
    sourceSize = 0.02;
  };
  class CraterBlood : CraterDustSmall
  {
    access = ReadAndWrite;
    interval = 0.005;
    cloudletAlpha = 0.5;
    cloudletDuration = 0.1;
    cloudletAnimPeriod = 1;
    cloudletGrowUp = 0.3;
    cloudletFadeIn = 0;
    cloudletFadeOut = 0.3;
    cloudletAccY = -1;
    cloudletMinYSpeed = -10;
    cloudletMaxYSpeed = 10;

    cloudletShape = cloudletBlood;
    cloudletColor[] = {0.35, 0.00, 0.05, 0};

    size = 0.15;
    sourceSize = 0.05;
  };
  class CraterWater : CraterDustSmall
  {
    access = ReadAndWrite;
    interval = 0.01;
    cloudletAlpha = 1;
    cloudletDuration = 0.3;
    cloudletAnimPeriod = 1;
    cloudletGrowUp = 0.1;
    cloudletFadeIn = 0;
    cloudletFadeOut = 0.2;
    cloudletAccY = -10;
    cloudletMinYSpeed = -100;
    cloudletMaxYSpeed = 100;

    cloudletShape = cloudletWater;
    cloudletColor[] = {0.95, 0.95, 1, 0};

    size = 0.08;
    sourceSize = 0.1;
  };
  class CraterDustBig : CraterDustSmall
  {
    access = ReadAndWrite;
    cloudletDuration = 2;
    cloudletGrowUp = 0.2;
    cloudletFadeIn = 0.2;
    cloudletFadeOut = 1.5;
    cloudletAccY = -8;
    cloudletMinYSpeed = -20;
    cloudletMaxYSpeed = 10;
  };
  class CloudletsMissile
  {
    access = ReadAndWrite;
    interval=0.003;
    cloudletSize="2 + random 1";
    cloudletAlpha="0.1 + random 0.2";
    cloudletDuration="0.1 + random 0.2";
    cloudletAnimPeriod=1;
    cloudletGrowUp=0.1;
    cloudletFadeIn=0.0;
    cloudletFadeOut="1 + random 0.5";
    cloudletAccY=0;
    cloudletMinYSpeed=-10;
    cloudletMaxYSpeed=10;
    cloudletColor[]={0.6,0.6,0.6,0};
    initT=0;
    deltaT=10;
    class Table
    {
       class T0{maxT=10;color[]={0.6,0.6,0.6,0};};
    };
    cloudletShape = cloudletMissile;
  };
  class CloudletsMissileManual: CloudletsMissile
  {
    cloudletSize = 0.3;
    cloudletAlpha = 0.4;
  };
  class CloudletsDebugTrace: CloudletsMissile
  {
    cloudletSize = 0.02;
    cloudletAlpha = 0.5;
    cloudletDuration = 1.0;
    cloudletColor[] = {0.5, 0.5, 0, 0};
  };
  class CloudletsScud: CloudletsMissile
  {
    cloudletSize = 5;
    cloudletAlpha = 0.5;
    cloudletColor[] = {1, 1, 1, 0};

    cloudletFadeIn = 0;
    cloudletDuration = 1.5;
    cloudletFadeOut = 0.5;

    cloudletGrowUp = 1;

    cloudletAccY = 0;
    cloudletMinYSpeed = -1000;
    cloudletMaxYSpeed = 1000;

    interval = 0.02;
    size = 8.0;
    sourceSize = 1.0;
  };
  class DefaultSmoke
  {
    interval = 0.3; // sometimes overridden by program
    cloudletDuration = 1;
    cloudletAnimPeriod = 3;
    cloudletSize = 1; // sometimes overridden by program
    cloudletAlpha = 1;
    cloudletGrowUp = 0.3;
    cloudletFadeIn = 0.5;
    cloudletFadeOut = 2.0;
    cloudletAccY = 0;
    cloudletMinYSpeed = -10;
    cloudletMaxYSpeed = 10;
    cloudletColor[] = {1, 1, 1, 1};

    initT = 0;
    deltaT = 0;
    class Table {};

    cloudletShape = cloudletSmoke;

    density = 1; // sometimes overridden by program
    size = 1; // sometimes overridden by program
    timeToLive = 30;
    in = 1;
    out = 1;
    initYSpeed = 3.5; // sometimes overridden by program
  };
  class DestructedObjectDust
  {
    interval = 0.15;
    cloudletDuration = 0.5;
    cloudletAnimPeriod = 1;
    cloudletSize = 0.5; // sometimes overridden by program
    cloudletAlpha = 1;
    cloudletGrowUp = 0.4;
    cloudletFadeIn = 0.2;
    cloudletFadeOut = 1.5;
    cloudletAccY = -0.5;
    cloudletMinYSpeed = -1;
    cloudletMaxYSpeed = 1;
    cloudletColor[] = {0.25,0.23,0.16, 1};

    initT = 0;
    deltaT = 0;
    class Table {};

    cloudletShape = cloudletSmoke;

    density = 2;
    size = 0.5; // sometimes overridden by program
    timeToLive = 0.4; // sometimes overridden by program
    in = 0.8; // sometimes overridden by program
    out = 0.8; // sometimes overridden by program
    initYSpeed = 2.5; // sometimes overridden by program
  };
  class DestructedEngineSmoke
  {
    interval = 0.3; // overridden by program
    cloudletDuration = 0.5;
    cloudletAnimPeriod = 3;
    cloudletSize = 1; // overridden by program
    cloudletAlpha = 1;
    cloudletGrowUp = 0.5;
    cloudletFadeIn = 0.5;
    cloudletFadeOut = 3.0;
    cloudletAccY = -0.8;
    cloudletMinYSpeed = 0;
    cloudletMaxYSpeed = 5;
    cloudletColor[] = {0.15, 0.15, 0.10, 1}; // overridden by program

    initT = 0;
    deltaT = 0;
    class Table {};

    cloudletShape = cloudletSmoke;

    density = 1; // overridden by program
    size = 1; // overridden by program
    timeToLive = 6; // overridden by program
    in = 1; // overridden by program
    out = 6; // overridden by program
    initYSpeed = 3.5; // overridden by program
  };

//		 ********************************************************************
//		 ***********************  MISSILE EFFECTS  **************************
//		 ********************************************************************
// MissileManualEffects
	class MissileManualEffects1 : Default
	{
	     interval[] = {"interval", 0.005, 0.005};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\RocketSmoke\RocketSmoke.p3d;
	    particleFSNtieth = 1;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 4};
	    moveVelocity[] = {0, 0, 0};
	    rotationVelocity = 1;
	    weight = 0.05;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {0.5, 7, 15, 25};
	    color[] = {{1,1,1,0.1},{1,1,1,0.01},{1,1,1,0.01},{1,1,1,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0.1;
	    randomDirectionIntensity = 0.5;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0, 0, 0};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
// MissileEffects
	class MissileEffects1 : Default
	{
	     interval[] = {"interval", 0.005, 0.005};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\RocketSmoke\RocketSmoke.p3d;
	    particleFSNtieth = 1;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 4};
	    moveVelocity[] = {0, 0, 0};
	    rotationVelocity = 1;
	    weight = 0.05;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {0.5, 7, 15, 25};
	    color[] = {{1,1,1,0.1},{1,1,1,0.01},{1,1,1,0.01},{1,1,1,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0.1;
	    randomDirectionIntensity = 0.5;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0, 0, 0};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	
//		 ********************************************************************
//		 ************************  CRATER EFFECTS  **************************
//		 ********************************************************************
// ImpactEffectBig
	class ImpactEffectsBig1 : Default
	{
	    interval[] = {"interval", 0.025, 0.025};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 1;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 4};
	    moveVelocity[] = {0, 2.5, 0};
	    rotationVelocity = 1;
	    weight = 0.05;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {{"intensity", 2, 0.0125},{"intensity", 10, 0.0125},{"intensity", 12, 0.0125}};
	    color[] = {{0.1,0.087,0.062,0.7},{1,0.87,0.62,0.05},{1,1,1,0}};
	    animationSpeed[] = {0.7};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {1.5, 2, 1.5};
	    MoveVelocityVar[] = {2, 2.5, 2};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
// ImpactEffectsSmall
	class ImpactStones1 : Default
	{
	   interval[] = {"interval", 0.08, 0.08};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\pstone\pstone.p3d;
	    animationName = "";
	    particleType = "spaceobject";
	    timerPeriod = 0.1;
	    lifeTime[] = {0, 2};
	    moveVelocity[] = {0, {"intensity", 1, 2}, 0};
	    rotationVelocity = 1;
	    weight = 10;
	    volume = 0.1;
	    rubbing = 0;
	    size[] = {0.1};
	    color[] = {{1,1,1,1}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {1, 1.5, 1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.5;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactSandBlow1 : Default
	{
	    interval[] = {"interval", 1, 1};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\CloudletSand\cloudletsand.p3d;
	    particleFSNtieth = 4;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.3};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 0;
	    weight = 1;
	    volume = 1;
	    rubbing = 0;
	    size[] = {0.6,{"intensity", 0, 7}};
	    color[] = {{0.2,0.2,0.15,0.8},{0.2,0.2,0.15,0.5},{0.2,0.2,0.15,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0, 0, 0};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.2;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactSandBlow2 : Default
	{
	      interval[] = {"interval", 1, 1};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\CloudletSand\cloudletsand.p3d;
	    particleFSNtieth = 4;
	    particleFSIndex = 1;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.3};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 0;
	    weight = 0.5;
	    volume = 1;
	    rubbing = 0;
	    size[] = {0.2,{"intensity", 0, 6}};
	    color[] = {{0.06,0.065,0.06,1},{0.06,0.065,0.06,0.7},{0.26,0.26,0.24,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0, 0, 0};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.2;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactSandBlow3 : Default
	{
	    interval[] = {"interval", 1, 1};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\CloudletSand\cloudletsand.p3d;
	    particleFSNtieth = 4;
	    particleFSIndex = 2;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.5};
	    moveVelocity[] = {0, 0, 0};
	    rotationVelocity = 0;
	    weight = 1.275;
	    volume = 1;
	    rubbing = 0;
	    size[] = {0.5,{"intensity", 0, 5}};
	    color[] = {{0.08,0.08,0.08,0.7},{0.08,0.08,0.08,0.7},{0.08,0.08,0.08,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0, 0, 0};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.2;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactSandSmoke1 : Default
	{
	    interval[] = {"interval", 0.15, 0.15};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\CloudletSand\cloudletsand.p3d;
	    particleFSNtieth = 4;
	    particleFSIndex = 3;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.8};
	    moveVelocity[] = {0, 5, 0};
	    rotationVelocity = 0;
	    weight = 0.8;
	    volume = 0.2;
	    rubbing = 0.2;
	    size[] = {0.1,{"intensity", 1, 3}};
	    color[] = {{0.5,0.4,0.35,0.5},{0.75,0.75,0.75,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {1, {"intensity", 1, 6}, 1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.2;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactSandSmoke2 : Default
	{
	    interval[] = {"interval", 0.15, 0.15};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\CloudletSand\cloudletsand.p3d;
	    particleFSNtieth = 4;
	    particleFSIndex = 3;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.8};
	    moveVelocity[] = {0, 5, 0};
	    rotationVelocity = 0;
	    weight = 0.8;
	    volume = 0.2;
	    rubbing = 0.2;
	    size[] = {0.1,{"intensity", 1, 3}};
	    color[] = {{0.3,0.3,0.25,0.5},{0.35,0.3,0.25,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {1, {"intensity", 1, 6}, 1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.2;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactSandSmoke3 : Default
	{
	    interval[] = {"interval", 0.05, 0.05};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\CloudletSand\cloudletsand.p3d;
	    particleFSNtieth = 4;
	    particleFSIndex = 3;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 2.5};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 0;
	    weight = 1.2;
	    volume = 1;
	    rubbing = 0.3;
	    size[] = {0.2,{"intensity", 1, 3}};
	    color[] = {{1,1,1,0.1},{1,1,1,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0.5, {"intensity", 1, 6}, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.2;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
// ImpactEffectsBlood
	class ImpactEffectsBlood1 : Default
	{
	    interval[] = {"interval", 0.05, 0.05};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\blood\blood.p3d;
	    particleFSNtieth = 1;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.5};
	    moveVelocity[] = {0, 0.1, 0};
	    rotationVelocity = 1;
	    weight = 0.15;
	    volume = 0.1;
	    rubbing = 0.05;
	    size[] = {0, 0.3};
	    color[] = {{0.25,0.25,0.25,1},{0.25,0.25,0.25,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0.1, 0.1, 0.1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
// ImpactEffectsWater
	class ImpactEffectsWater1 : Default // water inject high
	{
	    interval[] = {"interval", 1, 1};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\CloudletWater\CloudletWater.p3d;
	    particleFSNtieth = 4;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.5};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 1;
	    weight = 1;
	    volume = 1;
	    rubbing = 0;
	    size[] = {{"intensity", 0, 1}, {"intensity", 0, 4}, {"intensity", 0, 5}};
	    color[] = {{1,1,1,0.8},{1,1,1,0.2},{1,1,1,0.01},{1,1,1,0.01},{1,1,1,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0, 0, 0};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.2;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater2 : Default // Water Inject low
	{
	    interval[] = {"interval", 1, 1};
	    circleRadius = 0.001;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\CloudletWater\CloudletWater.p3d;
	    particleFSNtieth = 4;
	    particleFSIndex = 1;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.4};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 1;
	    weight = 1.5;
	    volume = 1;
	    rubbing = 0;
	    size[] = {0, {"intensity", 0, 4.5}};
	    color[] = {{1,1,1,0.5},{1,1,1,0.5},{1,1,1,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0, 0, 0};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.2;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater3 : Default // Water circle
	{
	    interval[] = {"interval", 0.1, 0.1};
	    circleRadius = 0.01;
	    circleVelocity[] = {0.4, 0, 0.4};

	    particleShape = \Ca\Data\ParticleEffects\CloudletWater\CloudletWater.p3d;
	    particleFSNtieth = 16;
	    particleFSIndex = 8;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.6};
	    moveVelocity[] = {0, 0.1, 0};
	    rotationVelocity = 1;
	    weight = 1.3;
	    volume = 1;
	    rubbing = 0;
	    size[] = {0, {"intensity", 0, 1}};
	    color[] = {{0.9,0.95,1,0.3},{0.9,0.95,1,0.05},{0.9,0.95,1,0.025},{0.8,0.9,1,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.05;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0.1, 0, 0.1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.1;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater4 : Default // fast cloud
	{
	    interval[] = {"interval", 0.1, 0.1};
	    circleRadius = 0.01;
	    circleVelocity[] = {0.05, 1, 0.05};

	    particleShape = \Ca\Data\ParticleEffects\CloudletWater\CloudletWater.p3d;
	    particleFSNtieth = 16;
	    particleFSIndex = 8;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.8};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 1;
	    weight = 2;
	    volume = 0.1;
	    rubbing = 0;
	    size[] = {0, {"intensity", 0, 0.9}, {"intensity", 0, 2}};
	    color[] = {{1,1,1,0.2},{1,1,1,0.1},{1,1,1,0.05},{1,1,1,0.04},{1,1,1,0.03},{1,1,1,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0, 2.5, 0};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.1;
	    colorVar[] = {0, 0, 0, 0.1};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater5 : Default // water clouds long
	{
	    interval[] = {"interval", 0.2, 0.2};
	    circleRadius = 0.01;
	    circleVelocity[] = {0.1, 1, 0.1};

	    particleShape = \Ca\Data\ParticleEffects\CloudletWater\CloudletWater.p3d;
	    particleFSNtieth = 16;
	    particleFSIndex = 8;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 2};
	    moveVelocity[] = {0, 0, 0};
	    rotationVelocity = 1;
	    weight = 1.3;
	    volume = 1;
	    rubbing = 1;
	    size[] = {0, {"intensity", 0, 4}, {"intensity", 0, 7}};
	    color[] = {{1,1,1,0},{1,1,1,0.1},{1,1,1,0.05},{1,1,1,0.05},{1,1,1,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 2, 0};
	    MoveVelocityVar[] = {0, 0, 0};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.3;
	    colorVar[] = {0, 0, 0, 0.1};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater6 : Default // water drop to clouds
	{
	    interval[] = {"interval", 0.1, 0.1};
	    circleRadius = 0.01;
	    circleVelocity[] = {0.1, 1, 0.1};

	    particleShape = \Ca\Data\ParticleEffects\CloudletWater\CloudletWater.p3d;
	    particleFSNtieth = 16;
	    particleFSIndex = 8;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.4};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 1;
	    weight = 2;
	    volume = 0.1;
	    rubbing = 0;
	    size[] = {0, 0.03, 0.03, 0.03, 0.1, 0.3, 0.5, 0.7};
	    color[] = {{1,1,1,0.5},{1,1,1,0.7},{1,1,1,0.05},{1,1,1,0.05},{1,1,1,0.05},{1,1,1,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.05;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 2;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0, 3.5, 0};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.3;
	    colorVar[] = {0, 0, 0, 0.1};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ImpactEffectsWater7 : Default  // water drop
	{
	    interval[] = {"interval", 0.05, 0.05};
	    circleRadius = 0.01;
	    circleVelocity[] = {0.01, 1, 0.01};

	    particleShape = \Ca\Data\ParticleEffects\CloudletWater\CloudletWater.p3d;
	    particleFSNtieth = 16;
	    particleFSIndex = 8;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 1.5};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 1;
	    weight = 2;
	    volume = 1;
	    rubbing = 0.05;
	    size[] = {0, 0.03, 0.02, 0.01, 0.005, 0};
	    color[] = {{1,1,1,0.5},{1,1,1,0.7},{1,1,1,0.7},{1,1,1,0.7},{1,1,1,0.7},{1,1,1,0.7}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.05;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.4;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0, 1.5, 0};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.1;
	    colorVar[] = {0, 0, 0, 0.1};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	
// ImpactVehicle
	  class ImpactSparks1 : Default
	  {
	    interval = 0.015;
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};
	    particleFSNtieth = 1;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    particleFSLoop = 0;
	    
	    angleVar = 360;
	    
	    particleShape = \ca\data\particleeffects\SparksEffect\SparksEffect.p3d;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 3;
	    lifeTime = 0.25;
	    moveVelocity[] = {0, 0, 0};
	    rotationVelocity = 1;
	    weight = 0.5;
	    volume = 0.1;
	    rubbing = 0.0;
	    size[] = {0.12, 0.08, 0.06, 0.04, 0.02, 0};
	    sizeCoef = 1;
	    color[] = {{1,1,1,0.7}};
	    colorCoef[] = {1, 1, 1, 1};
	    animationSpeed[] = {1};
	    animationSpeedCoef = 1;
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	    lifeTimeVar = 0.15;
	    position[] = {0, 0, 0};
	    positionVar[] = {0, 0, 0};
	    moveVelocityVar[] = {2, 2, 2};
	    rotationVelocityVar = 0;
	    //Was {0.1, 0.1}
	    sizeVar = 0.05;
	    colorVar[] = {0.05, 0.05, 0.05, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	  };
	  class ImpactSparks2 : Default
	  {
	    interval = 0.1;
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};
	    particleFSNtieth = 1;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    particleFSLoop = 0;
	    
	    angleVar = 360;
	    
	    particleShape = \ca\data\particleeffects\SparksEffect\SparksEffect.p3d;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 3;
	    lifeTime = 0.05;
	    moveVelocity[] = {0, 0, 0};
	    rotationVelocity = 1;
	    weight = 1.275;
	    volume = 1;
	    rubbing = 0.0;
	    size[] = {0.3, 0};
	    sizeCoef = 1;
	    color[] = {{1,1,1,1}};
	    colorCoef[] = {1, 1, 1, 1};
	    animationSpeed[] = {1};
	    animationSpeedCoef = 1;
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	    lifeTimeVar = 0.05;
	    position[] = {0, 0, 0};
	    positionVar[] = {0, 0, 0};
	    moveVelocityVar[] = {0, 0, 0};
	    rotationVelocityVar = 0;
	    //Was {0.1, 0.1}
	    sizeVar = 0.1;
	    colorVar[] = {0.05, 0.05, 0.05, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	  };
	   class ImpactCloud : Default
	  {
	    interval = 0.05;
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};
	    particleFSNtieth = 8;
	    particleFSIndex = 1;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
	    
	    angleVar = 360;
	    
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 3;
	    lifeTime = 2;
	    moveVelocity[] = {0, 0, 0};
	    rotationVelocity = 1;
	    weight = 1.275;
	    volume = 1;
	    rubbing = 0.0;
	    size[] = {0.3, 1.5};
	    sizeCoef = 1;
	    color[] = {{1,1,1,0.2},{1,1,1,0}};
	    colorCoef[] = {1, 1, 1, 1};
	    animationSpeed[] = {1};
	    animationSpeedCoef = 1;
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	    lifeTimeVar = 0.1;
	    position[] = {0, 0, 0};
	    positionVar[] = {0, 0, 0};
	    moveVelocityVar[] = {0.15, 0.15, 0.15};
	    rotationVelocityVar = 0;
	    //Was {0.1, 0.1}
	    sizeVar = 0.5;
	    colorVar[] = {0.05, 0.05, 0.05, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	  };

//		 ********************************************************************
//		 **********************  EXPLOSIONS EFFECTS  ************************
//		 ********************************************************************
// Explosion Effects / ImpactEffectBig
class ExplosionParticles : Default
	{
	    interval[] = {"interval", 0.01, 0.01};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 4;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.4};
	    moveVelocity[] = {0, 8, 0};
	    rotationVelocity = 1;
	    weight = 2;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {{"intensity", 1.5, 0.0125},{"intensity", 4.5, 0.0125},{"intensity", 7, 0.0125}};
	    color[] = {{1,1,1,0.7},{1,1,1,0.4},{1,1,1,0}};
	    animationSpeed[] = {2.5};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {1, 1, 1};
	    MoveVelocityVar[] = {1, 1, 1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	
	//      ********************************  FuelStationExplosion   ********************************
	class FuelStationExp : Default
	{
	    interval[] = {"interval", 0.001, 0.001};
	    circleRadius = 1;
	    circleVelocity[] = {10, 0, 10};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 4;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 1.0};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 1;
	    weight = 0.052;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {{"intensity", 1.5, 0.0125},{"intensity", 15, 0.0125}};
	    color[] = {{1,1,1,0.7},{0.05,0.05,0.05,0.4},{0,0,0,0}};
	    animationSpeed[] = {1.5};
	    randomDirectionPeriod = 0.5;
	    randomDirectionIntensity = 0.1;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {3, 1, 3};
	    MoveVelocityVar[] = {30, 2.5, 30};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class FuelStationSmk1 : Default
	{
	    interval[] = {"interval", 0.0005, 0.0005};
	    circleRadius = 10;
	    circleVelocity[] = {5, 0, 5};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 1;
	    particleFSFrameCount = 1;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 6};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 1;
	    weight = 0.052;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {{"intensity", 8, 0.0125},{"intensity", 9, 0.0125},{"intensity", 10, 0.0125},{"intensity", 11, 0.0125}};
	    color[] = {{0.1,0.1,0.1,0},{0.1,0.1,0.1,0.4},{0.1,0.1,0.1,0.4},{0.1,0.1,0.1,0.4},{0.1,0.1,0.1,0.3},{0.1,0.1,0.1,0.2},{0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0.05},{0.1,0.1,0.1,0.05},{0.1,0.1,0.1,0}};
	    animationSpeed[] = {1.5};
	    randomDirectionPeriod = 0.1;
	    randomDirectionIntensity = 0.35;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {3, 2, 3};
	    MoveVelocityVar[] = {5, 5, 5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	  class FuelFire1 : Default
	  {
	   interval[] = {"fireInterval", 0.005, 0.005};
	    circleRadius = 1;
	    circleVelocity[] = {0, 0, 0};
	    particleFSNtieth = 8;
	    particleFSIndex = 2;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
	    
	    angleVar = 60;
	    
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 3;
	    lifeTime[] = {0, 0.7};
	    moveVelocity[] = {0, 4, 0};
	    rotationVelocity = 1;
	    weight = 0.05;
	    volume = 0.04;
	    rubbing = 0.05;
	    size[] = {{"intensity", 0.7, 1.25}};
	    color[] = {{1,1,1,0}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,0}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	    lifeTimeVar = 1;
	    positionVar[] = {"2 + 1.1 * intensity", 0.3, "2 + 1.1 * intensity"};
	    moveVelocityVar[] = {0.1, 1.2, 0.1};
	    rotationVelocityVar = 0;
	    //Was {0.1, 0.1}
	    sizeVar = 0.2;
	    colorVar[] = {0.1, 0.1, 0.1, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	  };
	  class FuelSmoke1 : Default
	  {
	    interval[] = {"interval", 0.08, 0.08};
	    circleRadius = 1;
	    circleVelocity[] = {0, 0, 0};
	
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1; 
	    
	    angleVar = 60;
	    
	   
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {{"intensity", 0, 1.25},{"intensity", 5, 1.12}};
	    moveVelocity[] = {0, 3, 0};
	    rotationVelocity = 1;
	    weight = 0.0508;
	    volume = 0.04;
	    rubbing = 0.05;
	    size[] = {{"intensity", 3, 1.25},{"intensity", 8, 1.3},{"intensity", 13.5, 1.4}};
	    color[] = {{0.01,0.01.,0.01,0.8}, {0.2,0.2,0.2,0.5}, {0.2,0.2,0.2,0.4}, {0.2,0.2,0.2,0.2},{0.2,0.2,0.2,0}};
	    animationSpeed[] = {0};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.05;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	   
	
	    lifeTimeVar = 3;
	    positionVar[] = {"0.25 + 1 * intensity", 0.3, "0.25 + 1 * intensity"};
	    MoveVelocityVar[] =  {0.1, 0.1, 0.1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.25;
	    colorVar[] = {0, 0, 0, 0.3};
	    randomDirectionPeriodVar = 0.2;
	    randomDirectionIntensityVar = 0.05;
	  };
	   class FuelSmoke2 : Default
	  {
	    interval[] = {"interval", 0.08, 0.08};
	    circleRadius = 1;
	    circleVelocity[] = {0, 0, 0};
	
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 3;
	    particleFSFrameCount = 1; 
	    
	    angleVar = 0;
	    
	   
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {{"intensity", 0, 1.25},{"intensity", 10, 1.25}};
	    moveVelocity[] = {0, 3, 0};
	    rotationVelocity = 1;
	    weight = 0.0508;
	    volume = 0.04;
	    rubbing = 0.05;
	    size[] = {{"intensity", 3, 1.25},{"intensity", 8, 1.2},{"intensity", 10, 1.2},{"intensity", 15, 1.2}};
	    color[] = {{0.01,0.01.,0.01,0.4}, {0.2,0.2,0.2,0.2}, {0.2,0.2,0.2,0.2},{0.2,0.2,0.2,0.2},{0.2,0.2,0.2,0.2},{0.2,0.2,0.2,0.1},{0.2,0.2,0.2,0}};
	    animationSpeed[] = {0};
	    randomDirectionPeriod = 0.1;
	    randomDirectionIntensity = 0.05;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	   
	
	    lifeTimeVar = 3;
	    positionVar[] = {"0.25 + 1 * intensity", 0.3, "0.25 + 1 * intensity"};
	    MoveVelocityVar[] =  {0.1, 0.1, 0.1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.25;
	    colorVar[] = {0, 0, 0, 0.3};
	    randomDirectionPeriodVar = 0.1;
	    randomDirectionIntensityVar = 0.05;
	  };
	  
	  
	class SmallSmokeFast1 : Default
	{
	    interval[] = {"interval", 0.05, 0.05};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 1;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 4};
	    moveVelocity[] = {0, 5, 0};
	    rotationVelocity = 1;
	    weight = 0.053;
	    volume = 0.04;
	    rubbing = 0.01;
	    size[] = {{"intensity", 2, 0.0125},{"intensity", 12, 0.0125},{"intensity", 15, 0.0125}};
	    color[] = {{1,0.87,0.62,0.7},{1,0.87,0.62,0.2},{1,0.87,0.62,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {1, 2, 1};
	    MoveVelocityVar[] = {0.5, 3, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.5;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	 class SmallSmokeFast2 : Default
	{
	    interval[] = {"interval", 0.05, 0.05};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 4};
	    moveVelocity[] = {0, 5, 0};
	    rotationVelocity = 1;
	    weight = 0.053;
	    volume = 0.04;
	    rubbing = 0.01;
	    size[] = {{"intensity", 2, 0.0125},{"intensity", 12, 0.0125},{"intensity", 15, 0.0125}};
	    color[] = {{1,0.87,0.62,0.7},{1,0.87,0.62,0.2},{1,1,1,0}};
	    animationSpeed[] = {0.1};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {1, 2, 1};
	    MoveVelocityVar[] = {0.5, 3, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.5;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class SmallSmokeSlow1 : Default
	{
	    interval[] = {"interval", 0.05, 0.05};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 1;
	    particleFSFrameCount = 1;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 2};
	    moveVelocity[] = {0, 2.5, 0};
	    rotationVelocity = 1;
	    weight = 0.05;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {{"intensity", 2, 0.0125},{"intensity", 10, 0.0125}};
	    color[] = {{0.1,0.1,0.1,0.7},{0.25,0.25,0.25,0.05},{0.25,0.25,0.25,0}};
	    animationSpeed[] = {0.7};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {0.5, 2, 0.5};
	    MoveVelocityVar[] = {1, 2.5, 1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class SmallSmokeSlow2 : Default
	{
	    interval[] = {"interval", 0.05, 0.05};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 2};
	    moveVelocity[] = {0, 2.5, 0};
	    rotationVelocity = 1;
	    weight = 0.05;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {{"intensity", 2, 0.0125},{"intensity", 10, 0.0125}};
	    color[] = {{0.1,0.1,0.1,0.7},{0.25,0.25,0.25,0.05},{0.25,0.25,0.25,0}};
	    animationSpeed[] = {0.7};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {0.5, 2, 0.5};
	    MoveVelocityVar[] = {1, 2.5, 1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class SmokeBig : Default
	{
	    interval[] = {"interval", 0.025, 0.025};
	    circleRadius = 2;
	    circleVelocity[] = {-0.2, 0, -0.2};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 3;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 4};
	    moveVelocity[] = {0, 5, 0};
	    rotationVelocity = 1;
	    weight = 0.053;
	    volume = 0.04;
	    rubbing = 0.01;
	    size[] = {{"intensity", 2, 0.0125},{"intensity", 6, 0.0125},{"intensity", 11, 0.0125}};
	    color[] = {{0.8,0.67,0.52,0.7},{1,0.9,0.85,0.5},{0.8,0.67,0.52,0}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {0.5, 2, 0.5};
	    MoveVelocityVar[] = {1.5, 3, 1.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class Stones : Default
	{
	    interval[] = {"interval", 0.01, 0.01};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "spaceobject";
	    timerPeriod = 0.1;
	    lifeTime[] = {0, 3};
	    moveVelocity[] = {0, 5, 0};
	    rotationVelocity = 1;
	    weight = 50;
	    volume = 0.01;
	    rubbing = 0;
	    size[] = {0.5};
	    color[] = {{1,1,1,1}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {1, 1, 1};
	    MoveVelocityVar[] = {10, 8, 10};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class SmokeTrails : Default
	{
	    interval[] = {0.15,0.15};
	    circleRadius = 1;
	    circleVelocity[] = {5, 5, 5};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "BillBoard";
	    timerPeriod = 0.085;
	    lifeTime[] = {0, 1};
	    moveVelocity[] = {0, 10, 0};
	    rotationVelocity = 1;
	    weight = 50;
	    volume = 0.01;
	    rubbing = 0;
	    size[] = {0};
	    color[] = {{1,1,1,1}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0.1;
	    randomDirectionIntensity = 0.5;
	    onTimerScript = "\ca\data\ParticleEffects\scripts\SmokeTrail1.sqf";
	    beforeDestroyScript = "";


	    lifeTimeVar = 3;
	    positionVar[] = {0.1, 0, 0.1};
	    MoveVelocityVar[] = {0.5, 5, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class CircleDust : Default
	{
	    interval[] = {"interval", 0.025, 0.025};
	    circleRadius = 0.1;
	    circleVelocity[] = {1.5, 0, 1.5};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 3;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 10};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 1;
	    weight = 0.053;
	    volume = 0.04;
	    rubbing = 0.01;
	    size[] = {{"intensity", 2, 0.0125},{"intensity", 10, 0.0125},{"intensity", 20, 0.0125}};
	    color[] = {{0.08,0.067,0.052,0.01},{0.6,0.5,0.4,0.4},{0.6,0.5,0.4,0.3},{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.1},{0.6,0.5,0.4,0}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0.1;
	    randomDirectionIntensity = 0.05;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {1, 1, 1};
	    MoveVelocityVar[] = {1.5, 0.5, 1.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};

// Grenade Explosion
	class GrenadeExp1 : Default
	{
	    interval[] = {"interval", 0.02, 0.02};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 4;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.3};
	    moveVelocity[] = {0, 6, 0};
	    rotationVelocity = 1;
	    weight = 2;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {{"intensity", 1.5, 0.0125},{"intensity", 3.5, 0.0125},{"intensity", 4, 0.0125}};
	    color[] = {{1,1,1,0.8},{1,1,1,0.2},{1,1,1,0}};
	    animationSpeed[] = {2.5};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0.2, 1, 0.2};
	    MoveVelocityVar[] = {0.7, 1, 0.7};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
// Grenade Crater
	class GrenadeSmoke1 : Default
	{
	    interval[] = {"interval", 0.025, 0.025};
	    circleRadius = 0.5;
	    circleVelocity[] = {1, 0, 1};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 1;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 2};
	    moveVelocity[] = {0, 0.25, 0};
	    rotationVelocity = 1;
	    weight = 0.054;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {{"intensity", 2, 0.0125},{"intensity", 5, 0.0125},{"intensity", 6, 0.0125},{"intensity", 7, 0.0125}};
	    color[] = {{0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0.05},{0.5,0.5,0.5,0}};
	    animationSpeed[] = {2.5};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.2;
	    positionVar[] = {0.5, 0.5, 0.5};
	    MoveVelocityVar[] = {0.5, 0.5, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0.5;
	    randomDirectionIntensityVar = 0.02;
	};
	class GrenadeSmoke2 : Default
	{
	    interval[] = {"interval", 0.025, 0.025};
	    circleRadius = 0.5;
	    circleVelocity[] = {0.75, 0.25, 0.75};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 1.5};
	    moveVelocity[] = {0, 0.5, 0};
	    rotationVelocity = 1;
	    weight = 0.054;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {{"intensity", 2, 0.0125},{"intensity", 5, 0.0125},{"intensity", 6, 0.0125},{"intensity", 7, 0.0125}};
	    color[] = {{0.1,0.1,0.1,0.1},{0.8,0.67,0.52,0.1},{0.8,0.67,0.52,0.1},{0.8,0.67,0.52,0.1},{0.8,0.67,0.52,0.1},{0.8,0.67,0.52,0}};
	    animationSpeed[] = {2.5};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.2;
	    positionVar[] = {0.5, 0.5, 0.5};
	    MoveVelocityVar[] = {0.5, 1.25, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0.5;
	    randomDirectionIntensityVar = 0.02;
	};
	class GrenadeStones1 : Default
	{
	   interval[] = {"interval", 0.005, 0.005};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 7;
	    particleFSFrameCount = 8;
	    particleFSLoop = 1;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 0.1;
	    lifeTime[] = {0, 3};
	    moveVelocity[] = {0, {"intensity", 6, 0.125}, 0};
	    rotationVelocity = 1;
	    weight = 10;
	    volume = 0.1;
	    rubbing = 0;
	    size[] = {0.15};
	    color[] = {{0.2,0.2,0.2,1}};
	    animationSpeed[] = {2};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {7, 5, 7};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.1;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class GrenadeStones2 : Default
	{
	   interval[] = {"interval", 0.00075, 0.00075};
	    circleRadius = 0.1;
	    circleVelocity[] = {2.5, 1, 2.5};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 7;
	    particleFSFrameCount = 8;
	    particleFSLoop = 1;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 0.1;
	    lifeTime[] = {0, 3};
	    moveVelocity[] = {0, {"intensity", 1, 0.125}, 0};
	    rotationVelocity = 1;
	    weight = 10;
	    volume = 0.1;
	    rubbing = 0;
	    size[] = {0.05};
	    color[] = {{0.2,0.2,0.2,1}};
	    animationSpeed[] = {-2};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0.5, 5, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
// Missile Crater
	class MissileCircleDust : Default
	{
	    interval[] = {"interval", 0.001, 0.001};
	    circleRadius = 0.1;
	    circleVelocity[] = {1.5, 0, 1.5};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 3;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 2.5};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 1;
	    weight = 0.053;
	    volume = 0.04;
	    rubbing = 0.01;
	    size[] = {{"intensity", 2, 0.0125},{"intensity", 3, 0.0125},{"intensity", 6, 0.0125}};
	    color[] = {{0.08,0.067,0.052,0.01},{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.2},{0.6,0.5,0.4,0.1},{0.6,0.5,0.4,0}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0.1;
	    randomDirectionIntensity = 0.05;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {1, 1, 1};
	    MoveVelocityVar[] = {0.5, 0.5, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class RocketSmokeTrails : Default
	{
	    interval[] = {10,1};
	    circleRadius = 1;
	    circleVelocity[] = {5, 5, 5};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "BillBoard";
	    timerPeriod = 0.095;
	    lifeTime[] = {0, 2};
	    moveVelocity[] = {0, 10, 0};
	    rotationVelocity = 1;
	    weight = 50;
	    volume = 0.01;
	    rubbing = 0;
	    size[] = {0};
	    color[] = {{1,1,1,1}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0.1;
	    randomDirectionIntensity = 0.5;
	    onTimerScript = "\ca\data\ParticleEffects\scripts\SmokeTrail1.sqf";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {0.1, 0, 0.1};
	    MoveVelocityVar[] = {0.5, 5, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0.5;
	    randomDirectionIntensityVar = 0.5;
	};
//	ShellCrater
	class ShellSmokeTrail1 : Default
	{
	    interval[] = {10,1};
	    circleRadius = 1;
	    circleVelocity[] = {7, 2, 7};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "BillBoard";
	    timerPeriod = 0.065;
	    lifeTime[] = {0, 1.3};
	    moveVelocity[] = {0, 5, 0};
	    rotationVelocity = 1;
	    weight = 200;
	    volume = 0.001;
	    rubbing = 0;
	    size[] = {0};
	    color[] = {{1,1,1,1}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0.1;
	    randomDirectionIntensity = 1;
	    onTimerScript = "\ca\data\ParticleEffects\scripts\SmokeTrail1.sqf";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {0.1, 0, 0.1};
	    MoveVelocityVar[] = {0.5, 1, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0.1;
	    randomDirectionIntensityVar = 1;
	};
	class ShellSmokeTrail2 : Default
	{
	    interval[] = {10,1};
	    circleRadius = 1;
	    circleVelocity[] = {7, 2, 7};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "BillBoard";
	    timerPeriod = 0.065;
	    lifeTime[] = {0, 1.3};
	    moveVelocity[] = {0, 5, 0};
	    rotationVelocity = 1;
	    weight = 200;
	    volume = 0.001;
	    rubbing = 0;
	    size[] = {0};
	    color[] = {{1,1,1,1}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0.1;
	    randomDirectionIntensity = 1;
	    onTimerScript = "\ca\data\ParticleEffects\scripts\SmokeTrail1.sqf";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {0.1, 0, 0.1};
	    MoveVelocityVar[] = {0.5, 1, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0.1;
	    randomDirectionIntensityVar = 1;
	};
	class ShellSmokeTrail3 : Default
	{
	    interval[] = {10,1};
	    circleRadius = 1;
	    circleVelocity[] = {7, 2, 7};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 1;
	    animationName = "";
	    particleType = "BillBoard";
	    timerPeriod = 0.065;
	    lifeTime[] = {0, 1.3};
	    moveVelocity[] = {0, 5, 0};
	    rotationVelocity = 1;
	    weight = 200;
	    volume = 0.001;
	    rubbing = 0;
	    size[] = {0};
	    color[] = {{1,1,1,1}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0.1;
	    randomDirectionIntensity = 1;
	    onTimerScript = "\ca\data\ParticleEffects\scripts\SmokeTrail1.sqf";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0.5;
	    positionVar[] = {0.1, 0, 0.1};
	    MoveVelocityVar[] = {0.5, 1, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0.1;
	    randomDirectionIntensityVar = 1;
	};
	class ShellSmoke : Default
	{
	    interval[] = {"interval", 0.005, 0.005};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 2};
	    moveVelocity[] = {0, 2, 0};
	    rotationVelocity = 1;
	    weight = 0.09;
	    volume = 0.04;
	    rubbing = 0.01;
	    size[] = {{"intensity", 2, 0.0125},{"intensity", 7, 0.0125},{"intensity", 8, 0.0125}};
	    color[] = {{1,0.87,0.62,0.4},{1,0.87,0.62,0.1},{1,1,1,0}};
	    animationSpeed[] = {0.5};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0.25, 0.5, 0.25};
	    MoveVelocityVar[] = {0.5, 7, 0.5};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.5;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ShellStones : Default
	{
	   interval[] = {"interval", 0.005, 0.005};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 7;
	    particleFSFrameCount = 8;
	    particleFSLoop = 1;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 0.1;
	    lifeTime[] = {0, 4};
	    moveVelocity[] = {0, {"intensity", 6, 0.125}, 0};
	    rotationVelocity = 1;
	    weight = 10;
	    volume = 0.01;
	    rubbing = 0;
	    size[] = {0.3};
	    color[] = {{0.2,0.2,0.2,1}};
	    animationSpeed[] = {2};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {10, 8, 10};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.25;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
//	ExploAmmoCrater
	class ExploAmmoSmoke : Default
	{
	    interval[] = {"interval", 0.005, 0.005};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 1};
	    moveVelocity[] = {0, 1, 0};
	    rotationVelocity = 1;
	    weight = 0.09;
	    volume = 0.04;
	    rubbing = 0.01;
	    size[] = {{"intensity", 0.5, 0.0125},{"intensity", 2, 0.0125},{"intensity", 3, 0.0125}};
	    color[] = {{1,0.87,0.62,0.7},{1,0.95,0.92,0.2},{1,1,1,0}};
	    animationSpeed[] = {0.5};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0.01, 0.05, 0.01};
	    MoveVelocityVar[] = {0.1, 4, 0.1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.5;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	class ExploAmmoStones : Default
	{
	   interval[] = {"interval", 0.005, 0.005};
	    circleRadius = 0.05;
	    circleVelocity[] = {1.5, 1, 1.5};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 7;
	    particleFSFrameCount = 8;
	    particleFSLoop = 1;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 0.1;
	    lifeTime[] = {0, 3};
	    moveVelocity[] = {0, {"intensity", 1, 0.125}, 0};
	    rotationVelocity = 1;
	    weight = 10;
	    volume = 0.1;
	    rubbing = 0;
	    size[] = {0.05};
	    color[] = {{0.2,0.2,0.2,1}};
	    animationSpeed[] = {-2};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {0.25, 4, 0.25};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	//	ExploAmmoExplosion
	class ExploAmmoFlash : Default
	{
	    interval[] = {"interval", 0.04, 0.04};
	    circleRadius = 0;
	    circleVelocity[] = {0, 0, 0};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 4;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {0, 0.3};
	    moveVelocity[] = {0, 2, 0};
	    rotationVelocity = 1;
	    weight = 2;
	    volume = 0.04;
	    rubbing = 0.1;
	    size[] = {{"intensity", 0.5, 0.0125},{"intensity", 0.7, 0.0125},{"intensity", 0.8, 0.0125}};
	    color[] = {{1,1,1,0.8},{1,1,1,0.2},{1,1,1,0}};
	    animationSpeed[] = {2.5};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0.05, 0.25, 0.05};
	    MoveVelocityVar[] = {0.15, 0.5, 0.15};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};
	
	// Bomb Explosion
	class BombExp1 : Default
	{
	    interval = 0.001;
	    circleRadius = 1;
	    circleVelocity[] = {-3, 0, -3};
	
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 4;
	    particleFSFrameCount = 7;
	    particleFSLoop = 0;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime = 2;
	    moveVelocity[] = {0, 20, 0};
	    rotationVelocity = 1;
	    weight = 0.1;
	    volume = 0.04;
	    rubbing = 0.025;
	    size[] = {2, 7, 12};
	    color[] = {{1,1,1,0.8},{1,1,1,0.3},{1,1,1,0.3},{1,1,1,0.3},{1,1,1,0}};
	    animationSpeed[] = {1};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.1;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	
	    lifeTimeVar = 0.5;
	    positionVar[] = {2, 2, 2};
	    MoveVelocityVar[] = {0.1, 3, 0.1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.3;
	    colorVar[] = {0.2, 0, 0, 0.3};
	    randomDirectionPeriodVar = 0.2;
	    randomDirectionIntensityVar = 0.05;
	};
	class BombSmk1 : Default
	{
	    interval = 0.008;
	    circleRadius = 3.5;
	    circleVelocity[] = {0.5, 0, 0.5};
	
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 0;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime = 2.5;
	    moveVelocity[] = {0, 7, 0};
	    rotationVelocity = 1;
	    weight = 0.15;
	    volume = 0.04;
	    rubbing = 0.025;
	    size[] = {5, 10};
	    color[] = {{0.1,0.095,0.09,0.7},{0.25,0.22,0.2,0.5},{0.5,0.45,0.4,0.5},{0.5,0.45,0.4,0.4},{0.5,0.45,0.4,0.3},{0.5,0.45,0.4,0.2},{0.5,0.45,0.4,0}};
	    animationSpeed[] = {0.5};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.1;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	
	    lifeTimeVar = 0.5;
	    positionVar[] = {0.2, 0.2, 0.2};
	    MoveVelocityVar[] = {0.1, 10.5, 0.1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.3;
	    colorVar[] = {0, 0, 0, 0.3};
	    randomDirectionPeriodVar = 0.2;
	    randomDirectionIntensityVar = 0.05;
	};
	class BombSmk2 : Default
	{
	    interval = 0.002;
	    circleRadius = 3.5;
	    circleVelocity[] = {10, 0, 10};
	
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 1;
	    particleFSFrameCount = 8;
	    particleFSLoop = 0;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime = 3.5;
	    moveVelocity[] = {0, 0, 0};
	    rotationVelocity = 1;
	    weight = 0.05;
	    volume = 0.04;
	    rubbing = 0.025;
	    size[] = {5, 10};
	    color[] = {{0.1,0.095,0.09,0.7},{0.25,0.22,0.2,0.5},{0.5,0.45,0.4,0.5},{0.5,0.45,0.4,0.4},{0.5,0.45,0.4,0.2},{0.5,0.45,0.4,0.1},{0.5,0.45,0.4,0}};
	    animationSpeed[] = {0.5};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.1;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	
	    lifeTimeVar = 0.5;
	    positionVar[] = {0.2, 0.2, 0.2};
	    MoveVelocityVar[] = {0.1, 0.1, 0.1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.3;
	    colorVar[] = {0, 0, 0, 0.3};
	    randomDirectionPeriodVar = 0.2;
	    randomDirectionIntensityVar = 0.05;
	};
	class BombSmk3 : Default
	{
	    interval = 0.008;
	    circleRadius = 3.5;
	    circleVelocity[] = {9, 0, 9};
	
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 3;
	    particleFSFrameCount = 1;
	    particleFSLoop = 0;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime = 4;
	    moveVelocity[] = {0, 0, 0};
	    rotationVelocity = 1;
	    weight = 0.05;
	    volume = 0.04;
	    rubbing = 0.025;
	    size[] = {10, 15};
	    color[] = {{0.1,0.095,0.09,0.2},{0.25,0.22,0.2,0.2},{0.5,0.45,0.4,0.2},{0.5,0.45,0.4,0.15},{0.5,0.45,0.4,0.1},{0.5,0.45,0.4,0.05},{0.5,0.45,0.4,0}};
	    animationSpeed[] = {0.5};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.1;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	
	    lifeTimeVar = 0.5;
	    positionVar[] = {0.2, 0.2, 0.2};
	    MoveVelocityVar[] = {0.1, 0.1, 0.1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.3;
	    colorVar[] = {0, 0, 0, 0.3};
	    randomDirectionPeriodVar = 0.2;
	    randomDirectionIntensityVar = 0.05;
	};
	class BombStones : Default
	{
	    interval = 0.0025;
	    circleRadius = 0.05;
	    circleVelocity[] = {1.5, 1, 1.5};

	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 7;
	    particleFSFrameCount = 8;
	    particleFSLoop = 1;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 0.1;
	    lifeTime[] = {0, 5};
	    moveVelocity[] = {0, 5, 0};
	    rotationVelocity = 1;
	    weight = 40;
	    volume = 0.1;
	    rubbing = 0;
	    size[] = {0.6};
	    color[] = {{0.2,0.2,0.2,1}};
	    animationSpeed[] = {-2};
	    randomDirectionPeriod = 0;
	    randomDirectionIntensity = 0;
	    onTimerScript = "";
	    beforeDestroyScript = "";


	    lifeTimeVar = 0;
	    positionVar[] = {0, 0, 0};
	    MoveVelocityVar[] = {10, 15, 10};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.35;
	    colorVar[] = {0, 0, 0, 0};
	    randomDirectionPeriodVar = 0;
	    randomDirectionIntensityVar = 0;
	};


//		 ********************************************************************
//		 **********************  FIRE/SMOKE EFFECTS  ************************
//		 ********************************************************************		
  //Cloudlets for vehicle destruction effects.
  class ObjectDestructionSmoke : Default
  {
    interval[] = {"interval", 0.22, 0.22};
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 0;
    particleFSFrameCount = 1;
    particleFSLoop = 0;
    
    angleVar = 180;
    
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime[] = {{"intensity", 0, 1.25},{"intensity", 8, 1.25}};
    moveVelocity[] = {0, 3, 0};
    rotationVelocity = 1;
    weight = 0.0508;
    volume = 0.04;
    rubbing = 0.05;
    size[] = {{"intensity", 2, 1.25},{"intensity", 3, 1.25},{"intensity", 8, 1.25},{"intensity", 15, 1.25}};
    color[] = {{0.01,0.01,0.01,0.3},{0.1,0.1,0.1,0.3},{0.5,0.5,0.5,0.3},{0.5,0.5,0.5,0.2},{0.5,0.5,0.5,0.05},{0.5,0.5,0.5,0.02},{0.5,0.5,0.5,0}};
    animationSpeed[] = {0.06};
    randomDirectionPeriod = 0.4;
    randomDirectionIntensity = 0.09;
    onTimerScript = "";
    beforeDestroyScript = "";
  

    lifeTimeVar = "2.5 + 1.25 * intensity";
    positionVar[] = {"0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity"};
    MoveVelocityVar[] = {0.5, 0.5, 0.5};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.3;
    colorVar[] = {0, 0, 0, 0.3};
    randomDirectionPeriodVar = 0.2;
    randomDirectionIntensityVar = 0.05;
  };

  class ObjectDestructionSmoke2 : Default
  {
    interval[] = {"interval", 0.15, 0.15};
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 1;
    particleFSFrameCount = 1;
    particleFSLoop = 0;
    
    angleVar = 180;
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime[] = {{"intensity", 0, 1.25},{"intensity", 8, 1.25}};
    moveVelocity[] = {0, 3, 0};
    rotationVelocity = 1;
    weight = 0.0508;
    volume = 0.04;
    rubbing = 0.05;
    size[] = {{"intensity", 2.5, 1.25},{"intensity", 3.5, 1.25},{"intensity", 8.5, 1.25},{"intensity", 15, 1.25}};
    color[] = {{0.01,0.01,0.01,0.3},{0.1,0.1,0.1,0.3},{0.6,0.6,0.6,0.3}, {0.6,0.6,0.6,0.2}, {0.6,0.6,0.6,0.05},{0.6,0.6,0.6,0.02},{0.6,0.6,0.6,0}};
    animationSpeed[] = {0.06};
    randomDirectionPeriod = 0.4;
    randomDirectionIntensity = 0.09;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = "2.5 + 1.25 * intensity";
    positionVar[] = {"0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity"};
    MoveVelocityVar[] =  {0.5, 0.5, 0.5};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.5;
    colorVar[] = {0, 0, 0, 0.3};
    randomDirectionPeriodVar = 0.2;
    randomDirectionIntensityVar = 0.05;
  };

  class ObjectDestructionSmoke3 : Default
  {
    interval[] = {"interval", 0.45, 0.45};
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 3;
    particleFSFrameCount = 1; 
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime[] = {{"intensity", 0, 1.25},{"intensity", 18, 1.25}};
    moveVelocity[] = {0, 3, 0};
    rotationVelocity = 1;
    weight = 0.0508;
    volume = 0.04;
    rubbing = 0.05;
    size[] = {{"intensity", 3, 1.25},{"intensity", 8, 1.3},{"intensity", 13.5, 1.4},{"intensity", 33.5, 1.5}};
    color[] = {{0.01,0.01.,0.01,0.9}, {0.2,0.2,0.2,0.9}, {0.5,0.5,0.5,0.4}, {0.6,0.6,0.6,0.1},{0.7,0.7,0.7,0}};
    animationSpeed[] = {0};
    randomDirectionPeriod = 0.4;
    randomDirectionIntensity = 0.09;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = "2.5 + 1.25 * intensity";
    positionVar[] = {"0.5 + 1.25 * intensity", "0.5 + 1.25 * intensity", "0.5 + 1.25 * intensity"};
    MoveVelocityVar[] =  {0.1, 0.1, 0.1};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.25;
    colorVar[] = {0, 0, 0, 0.3};
    randomDirectionPeriodVar = 0.2;
    randomDirectionIntensityVar = 0.05;
  };
  
   class ObjectDestructionFire : Default
  {
   interval[] = {"fireInterval", 0.02, 0.02};
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};
    particleFSNtieth = 8;
    particleFSIndex = 2;
    particleFSFrameCount = 8;
    particleFSLoop = 0;
    
    angleVar = 60;
    
    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 3;
    lifeTime[] = {0, 0.7};
    moveVelocity[] = {0, 4, 0};
    rotationVelocity = 1;
    weight = 0.05;
    volume = 0.04;
    rubbing = 0.05;
    size[] = {{"intensity", 1, 1.25}};
    color[] = {{1,1,1,0}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,0}};
    animationSpeed[] = {1};
    randomDirectionPeriod = 0;
    randomDirectionIntensity = 0;
    onTimerScript = "";
    beforeDestroyScript = "";
  
    lifeTimeVar = 1;
    positionVar[] = {"0.8 + 1.25 * intensity", 0.3, "0.8 + 1.25 * intensity"};
    moveVelocityVar[] = {0.1, 1.2, 0.1};
    rotationVelocityVar = 0;
    //Was {0.1, 0.1}
    sizeVar = 0.5;
    colorVar[] = {0.1, 0.1, 0.1, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
    class ObjectDestructionFire2 : Default
  {
   interval[] = {"fireInterval", 0.02, 0.02};
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};
    particleFSNtieth = 8;
    particleFSIndex = 6;
    particleFSFrameCount = 8;
    particleFSLoop = 0;
    
    angleVar = 60;
    
    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 3;
    lifeTime[] = {0, 0.7};
    moveVelocity[] = {0, 4, 0};
    rotationVelocity = 1;
    weight = 0.05;
    volume = 0.04;
    rubbing = 0.05;
    size[] = {{"intensity", 1, 1.25}};
    color[] = {{1,1,1,0}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,0}};
    animationSpeed[] = {1};
    randomDirectionPeriod = 0;
    randomDirectionIntensity = 0;
    onTimerScript = "";
    beforeDestroyScript = "";
  
    lifeTimeVar = 1;
    positionVar[] = {"0.8 + 1.25 * intensity", 0.3, "0.8 + 1.25 * intensity"};
    moveVelocityVar[] = {0.1, 1.2, 0.1};
    rotationVelocityVar = 0;
    //Was {0.1, 0.1}
    sizeVar = 0.5;
    colorVar[] = {0.1, 0.1, 0.1, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  class ObjectDestructionSparks : Default
  {
    interval[] = {"fireInterval", 0, 1.5};
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = "\ca\data\cl_fire";
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime[] = {"random", 3, 6};
    moveVelocity[] = {0, 0, 0};
    rotationVelocity = 1;
    weight = 0.005;
    volume = 0.0042;
    rubbing = 0.05;
    size[] = {0.02};
    color[] = {{1,1,1,1}, {0,0,0,0}};
    animationSpeed[] = {0, 1};
    randomDirectionPeriod = 0.3;
    randomDirectionIntensity = 0.3;
    onTimerScript = "";
    beforeDestroyScript = "";

    lifeTimeVar = 0.8;
    positionVar[] = {0, 0, 0};
    moveVelocityVar[] = {0.1, 0.1, 0.1};
    rotationVelocityVar = 0;
    //Was {0.01, 0.01}
    sizeVar = 0.01;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  
    // Barel Fire
  class BarelDestructionFire : Default
  {
   interval[] = {"fireInterval", 0.06, 0.06};
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};
    particleFSNtieth = 8;
    particleFSIndex = 2;
    particleFSFrameCount = 8;
    particleFSLoop = 0;
    
    angleVar = 60;
    
    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\FireAnim.p3d;
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 3;
    lifeTime[] = {0, 0.5};
    moveVelocity[] = {0, 2, 0};
    rotationVelocity = 1;
    weight = 0.05;
    volume = 0.04;
    rubbing = 0.05;
    size[] = {{"intensity", 0.7, 1.25}};
    color[] = {{1,1,1,0}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,0}};
    animationSpeed[] = {1};
    randomDirectionPeriod = 0;
    randomDirectionIntensity = 0;
    onTimerScript = "";
    beforeDestroyScript = "";
  
    lifeTimeVar = 0.3;
    positionVar[] = {"0.1 + 1.25 * intensity", 0.3, "0.1 + 1.25 * intensity"};
    moveVelocityVar[] = {0.1, 1.2, 0.1};
    rotationVelocityVar = 0;
    //Was {0.1, 0.1}
    sizeVar = 0.2;
    colorVar[] = {0.1, 0.1, 0.1, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  class BarelDestructionSmoke : Default
  {
    interval[] = {"interval", 0.07, 0.07};
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 1;
    particleFSFrameCount = 1;
    particleFSLoop = 0;
    
    angleVar = 360;
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime[] = {{"intensity", 0, 1.25},{"intensity", 1.5, 1.25}};
    moveVelocity[] = {0, 2, 0};
    rotationVelocity = 1;
    weight = 0.0508;
    volume = 0.04;
    rubbing = 0.05;
    size[] = {{"intensity", 0.3, 1.25},{"intensity", 2, 1.25},{"intensity", 3.5, 1.25}};
    color[] = {{0.01,0.01,0.01,0},{0.1,0.1,0.1,0.7},{0.1,0.1,0.1,0.5}, {0.1,0.1,0.1,0.3}, {0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0.02},{0.1,0.1,0.1,0}};
    animationSpeed[] = {0.06};
    randomDirectionPeriod = 0.4;
    randomDirectionIntensity = 0.09;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = "0.2 + 1.25 * intensity";
    positionVar[] = {"0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity"};
    MoveVelocityVar[] =  {0.05, 0.5, 0.05};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.1;
    colorVar[] = {0, 0, 0, 0.3};
    randomDirectionPeriodVar = 0.2;
    randomDirectionIntensityVar = 0.05;
  };
// small Fire
  class SmallFireF : Default
  {
    interval = 0.06;
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};
    particleFSNtieth = 8;
    particleFSIndex = 2;
    particleFSFrameCount = 8;
    particleFSLoop = 0;
    
    angleVar = 60;
    
    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\FireAnim.p3d;
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 3;
    lifeTime = 0.5;
    moveVelocity[] = {0, 2, 0};
    rotationVelocity = 1;
    weight = 0.05;
    volume = 0.04;
    rubbing = 0.05;
    size[] = {0.7};
    sizeCoef = 1;
    color[] = {{1,1,1,0}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,1}, {1,1,1,0}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {1};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0;
    randomDirectionIntensity = 0;
    onTimerScript = "";
    beforeDestroyScript = "";
  
    lifeTimeVar = 0.3;
    position[] = {0, 0, 0};
    positionVar[] = {0.1, 0.3,0.1};
    moveVelocityVar[] = {0.1, 1.2, 0.1};
    rotationVelocityVar = 0;
    //Was {0.1, 0.1}
    sizeVar = 0.2;
    colorVar[] = {0.1, 0.1, 0.1, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  class SmallFireS : Default
  {
    interval = 0.06;
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 1;
    particleFSFrameCount = 1;
    particleFSLoop = 0;
    
    angleVar = 360;
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 1.5;
    moveVelocity[] = {0, 2, 0};
    rotationVelocity = 1;
    weight = 0.0508;
    volume = 0.04;
    rubbing = 0.05;
    size[] = {0.3, 2, 3.5};
    sizeCoef = 1;
    color[] = {{0.01,0.01,0.01,0},{0.1,0.1,0.1,0.7},{0.1,0.1,0.1,0.5}, {0.1,0.1,0.1,0.3}, {0.1,0.1,0.1,0.1},{0.1,0.1,0.1,0.02},{0.1,0.1,0.1,0}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {0.06};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.4;
    randomDirectionIntensity = 0.09;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0.2;
    position[] = {0, 0, 0};
    positionVar[] = {0.2, 0.2, 0.2};
    MoveVelocityVar[] =  {0.05, 0.5, 0.05};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.1;
    colorVar[] = {0, 0, 0, 0.3};
    randomDirectionPeriodVar = 0.2;
    randomDirectionIntensityVar = 0.05;
  }; 
 
  
    //Cloudlets for House destruction effects.
	  class HouseDestructionSmoke : Default
	  {
	    interval[] = {"interval", 0.009, 0.009};
	    circleRadius = 7;
	    circleVelocity[] = {"1.5 + 1.25 * intensity", 0, "1.5 + 1.25 * intensity"};
	
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 3;
	    particleFSFrameCount = 1;
	    particleFSLoop = 0;
	    
	    angleVar = 0;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {{"intensity", 0, 1.25},{"intensity", 10, 1.25}};
	    moveVelocity[] = {0, 0.05, 0};
	    rotationVelocity = 1;
	    weight = 0.051;
	    volume = 0.04;
	    rubbing = 0.025;
	    size[] = {{"intensity", 4, 1.25},{"intensity", 16, 1.25}};
	    color[] = {{0.1,0.095,0.09,0.7},{0.5,0.45,0.4,0.5},{1,0.95,0.9,0.2},{1,0.95,0.9,0.1},{1,0.95,0.9,0.05},{1,0.95,0.9,0.02},{1,0.95,0.9,0}};
	    animationSpeed[] = {0.06};
	    randomDirectionPeriod = 0.4;
	    randomDirectionIntensity = 0.09;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	
	    lifeTimeVar = "2.5 + 1.25 * intensity";
	    positionVar[] = {"0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity"};
	    MoveVelocityVar[] = {"0.6 + 1.25 * intensity", "0.2 + 1.25 * intensity", "0.6 + 1.25 * intensity"};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.3;
	    colorVar[] = {0, 0, 0, 0.3};
	    randomDirectionPeriodVar = 0.2;
	    randomDirectionIntensityVar = 0.05;
	  };
	  class HouseDestructionSmoke4 : Default
	  {
	    interval[] = {"interval", 0.009, 0.009};
	    circleRadius = 7;
	    circleVelocity[] = {"1.2 + 1.25 * intensity", 0, "1.2 + 1.25 * intensity"};
	
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 1;
	    particleFSFrameCount = 1;
	    particleFSLoop = 0;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {{"intensity", 0, 1.25},{"intensity", 10, 1.25}};
	    moveVelocity[] = {0, 0.05, 0};
	    rotationVelocity = 1;
	    weight = 0.051;
	    volume = 0.04;
	    rubbing = 0.025;
	    size[] = {{"intensity", 4, 1.25},{"intensity", 16, 1.25}};
	    color[] = {{0.1,0.095,0.09,0.7},{0.5,0.45,0.4,0.5},{1,0.95,0.9,0.2},{1,0.95,0.9,0.1},{1,0.95,0.9,0.05},{1,0.95,0.9,0.02},{1,0.95,0.9,0}};
	    animationSpeed[] = {0.06};
	    randomDirectionPeriod = 0.4;
	    randomDirectionIntensity = 0.09;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	
	    lifeTimeVar = "2.5 + 1.25 * intensity";
	    positionVar[] = {"0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity"};
	    MoveVelocityVar[] = {"0.6 + 1.25 * intensity", "0.2 + 1.25 * intensity", "0.6 + 1.25 * intensity"};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.3;
	    colorVar[] = {0, 0, 0, 0.3};
	    randomDirectionPeriodVar = 0.2;
	    randomDirectionIntensityVar = 0.05;
	  };
	  class HouseDestructionSmoke2 : Default
	  {
	    interval[] = {"interval", 0.002, 0.002};
	    circleRadius = 5;
	    circleVelocity[] = {"-0.5 - 1.25 * intensity", 0, "-0.5 - 1.25 * intensity"};
	
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 3;
	    particleFSFrameCount = 1;
	    particleFSLoop = 0;
	    
	    angleVar = 0;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {{"intensity", 0, 1.25},{"intensity", 3, 1.25}};
	    moveVelocity[] = {0, "3 + 1.25 * intensity", 0};
	    rotationVelocity = 1;
	    weight = 0.056;
	    volume = 0.04;
	    rubbing = 0.025;
	    size[] = {{"intensity", 2, 1.25},{"intensity", 12, 1.25}};
	    color[] = {{1,0.8,0.7,0.1},{1,0.8,0.7,0.1},{1,0.8,0.7,0.1},{1,0.8,0.7,0.1},{1,0.8,0.7,0.05},{1,0.8,0.7,0.02},{1,0.8,0.7,0}};
	    animationSpeed[] = {0.06};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	
	    lifeTimeVar = "2.5 + 1.25 * intensity";
	    positionVar[] = {"0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity"};
	    MoveVelocityVar[] = {0.1, "5 + 1.25 * intensity", 0.1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.3;
	    colorVar[] = {0, 0, 0, 0.3};
	    randomDirectionPeriodVar = 0.2;
	    randomDirectionIntensityVar = 0.05;
	  };
	  class HouseDestructionSmoke3 : Default
	  {
	    interval[] = {"interval", 0.002, 0.002};
	    circleRadius = 5;
	    circleVelocity[] = {"-0.5 - 1.25 * intensity", 0, "-0.5 - 1.25 * intensity"};
	
	    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
	    particleFSNtieth = 8;
	    particleFSIndex = 1;
	    particleFSFrameCount = 1;
	    particleFSLoop = 0;
	    
	    angleVar = 360;
	    
	    animationName = "";
	    particleType = "Billboard";
	    timerPeriod = 1;
	    lifeTime[] = {{"intensity", 0, 1.25},{"intensity", 3, 1.25}};
	    moveVelocity[] = {0, "2.75 + 1.25 * intensity", 0};
	    rotationVelocity = 1;
	    weight = 0.056;
	    volume = 0.04;
	    rubbing = 0.025;
	    size[] = {{"intensity", 2, 1.25},{"intensity", 12, 1.25}};
	    color[] = {{0.1,0.08,0.07,0.7},{0.5,0.4,0.35,0.5},{1,0.8,0.7,0.2},{1,0.8,0.7,0.1},{1,0.8,0.7,0.05},{1,0.8,0.7,0.02},{1,0.8,0.7,0}};
	    animationSpeed[] = {0.06};
	    randomDirectionPeriod = 0.2;
	    randomDirectionIntensity = 0.2;
	    onTimerScript = "";
	    beforeDestroyScript = "";
	  
	
	    lifeTimeVar = "2.5 + 1.25 * intensity";
	    positionVar[] = {"0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity", "0.2 + 1.25 * intensity"};
	    MoveVelocityVar[] = {0.1, "5 + 1.25 * intensity", 0.1};
	    rotationVelocityVar = 1;
	    //Was {0.2, 0.2}
	    sizeVar = 0.3;
	    colorVar[] = {0, 0, 0, 0.3};
	    randomDirectionPeriodVar = 0.2;
	    randomDirectionIntensityVar = 0.05;
	  };
	  
//		 ********************************************************************
//		 **********************  Simulated EFFECTS  *************************
//		 ********************************************************************
  class ExhaustSmoke1 : Default
  {
    interval = "0.1 - 0.095 * intensity";
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 3;
    particleFSFrameCount = 1; 
    
    angleVar = 1;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 0.8;
    moveVelocity[] = {"speedX", "speedY", "speedZ"};
    rotationVelocity = 1;
    weight = 1.2;
    volume = 1;
    rubbing = 0.1;
    size[] = {0.15,0.5};
    sizeCoef = 1;
    color[] = {{0.06, 0.06, 0.06, 0.2},{0.6, 0.6, 0.6, 0.1},{0.6, 0.6, 0.6, 0}};
    colorCoef[] = {"1 - damage", "1 - damage", "1 - damage", "intensity * 0.5"};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.05;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0, 0, 0};
    MoveVelocityVar[] =  {0.1, 0.1, 0.1};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.25;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  
  class ExhaustSmokeBig1 : Default
  {
    interval = "0.1 - 0.075 * intensity";
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 3;
    particleFSFrameCount = 1;
    
    angleVar = 1;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 0.8;
    moveVelocity[] = {"speedX", "speedY", "speedZ"};
    rotationVelocity = 1;
    weight = 1.2;
    volume = 1.5;
    rubbing = 0.1;
    size[] = {1, 5};
    sizeCoef = 1;
    color[] = {{0.06, 0.06, 0.06, 0.2},{0.6, 0.6, 0.6, 0.1},{0.6, 0.6, 0.6, 0}};
    colorCoef[] = {"1 - damage", "1 - damage", "1 - damage", "intensity * 1.15"};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.05;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0.2, 0.2, 0.2};
    MoveVelocityVar[] =  {0.1, 0.1, 0.1};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.25;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };


   class LeftDust1 : Default
  {
    interval = "0.20 - 0.17 * density";
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 3;
    particleFSFrameCount = 1; 
    
    angleVar = 0.1;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 2.6;
    moveVelocity[] = {"speedX", "speedY", "speedZ"};
    rotationVelocity = 1;
    weight = 1.3;
    volume = 1;
    rubbing = 0.5;
    size[] = {0.8,3,5,15};
    sizeCoef = 1;
    color[] = {{0.5,0.5,0.5,0},{0.5,0.5,0.5,0.25},{0.5,0.5,0.5,0.25},{0.5,0.5,0.5,0.2},{0.5,0.5,0.5,0.1},{0.5,0.5,0.5,0.05},{0.5,0.5,0.5,0.05},{0.5,0.5,0.5,0}};
    colorCoef[] = {"1 + 0.02 * dustColor","1 - 0.08 * dustColor","1 - 0.34 * dustColor", "5 * density"};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.5;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0.5;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0.1, 0, 0.1};
    MoveVelocityVar[] =  {0.15, 0.15, 0.15};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.25;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  class RightDust1 : Default
  {
      interval = "0.20 - 0.17 * density";
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 3;
    particleFSFrameCount = 1; 
    
    angleVar = 0.1;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 2.6;
    moveVelocity[] = {"speedX", "speedY", "speedZ"};
    rotationVelocity = 1;
    weight = 1.3;
    volume = 1;
    rubbing = 0.5;
    size[] = {0.8,3,5,15};
    sizeCoef = 1;
    color[] = {{0.5,0.5,0.5,0},{0.5,0.5,0.5,0.25},{0.5,0.5,0.5,0.25},{0.5,0.5,0.5,0.2},{0.5,0.5,0.5,0.1},{0.5,0.5,0.5,0.05},{0.5,0.5,0.5,0.05},{0.5,0.5,0.5,0}};
    colorCoef[] = {"1 + 0.02 * dustColor","1 - 0.08 * dustColor","1 - 0.34 * dustColor", "5 * density"};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.5;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0.5;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0.1, 0, 0.1};
    MoveVelocityVar[] =  {0.15, 0.15, 0.15};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.25;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  
  
 class RightWater1 : Default
  {
    interval = "0.05 - 0.045 * density";
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\watereffects\watereffects.p3d;
    particleFSNtieth = 1;
    particleFSIndex = 0;
    particleFSFrameCount = 1; 
    
    angleVar = 360;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 2;
    moveVelocity[] = {"speedX", "speedY + 1", "speedZ"};
    rotationVelocity = 1;
    weight = 2;
    volume = 1;
    rubbing = 0.1;
    size[] = {2,6,8};
    sizeCoef = "size";
    color[] = {{0.7,0.7,0.7,1},{1,1,1,0.0}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.5;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0, 0, 0};
    MoveVelocityVar[] =  {0.5, 1, 0.5};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.5;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  class LeftWater1 : Default
  {
    interval = "0.05 - 0.045 * density";
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\watereffects\watereffects.p3d;
    particleFSNtieth = 1;
    particleFSIndex = 0;
    particleFSFrameCount = 1; 
    
    angleVar = 360;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 2;
    moveVelocity[] = {"speedX", "speedY + 1", "speedZ"};
    rotationVelocity = 1;
    weight = 2;
    volume = 1;
    rubbing = 0.1;
    size[] = {2,6,8};
    sizeCoef = "size";
    color[] = {{0.7,0.7,0.7,1},{1,1,1,0.0}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.5;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0, 0, 0};
    MoveVelocityVar[] =  {0.5, 1, 0.5};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.5;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  
  
  class RightEng1 : Default
  {
    interval = "0.1 - 0.075 * density";
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\watereffects\watereffects.p3d;
    particleFSNtieth = 1;
    particleFSIndex = 0;
    particleFSFrameCount = 1; 
    
    angleVar = 360;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 0.5;
    moveVelocity[] = {"speedX", "speedY + 1", "speedZ"};
    rotationVelocity = 1;
    weight = 1.5;
    volume = 1;
    rubbing = 0.1;
    size[] = {2,6,8};
    sizeCoef = "size+0.5";
    color[] = {{1,1,1,0.5},{1,1,1,0.0}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.5;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0, 0, 0};
    MoveVelocityVar[] =  {0.5, 1, 0.5};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.5;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  class LeftEng1 : Default
  {
    interval = "0.1 - 0.075 * density";
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\watereffects\watereffects.p3d;
    particleFSNtieth = 1;
    particleFSIndex = 0;
    particleFSFrameCount = 1; 
    
    angleVar = 360;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 0.5;
    moveVelocity[] = {"speedX", "speedY + 1", "speedZ"};
    rotationVelocity = 1;
    weight = 1.5;
    volume = 1;
    rubbing = 0.1;
    size[] = {2,6,8};
    sizeCoef = "size+0.5";
    color[] = {{1,1,1,0.5},{1,1,1,0.0}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.5;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0, 0, 0};
    MoveVelocityVar[] =  {0.5, 1, 0.5};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.5;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  
  class TankDust1 : Default
  {
    interval = 0.002;
    circleRadius = 0.5;
    circleVelocity[] = {1, 0, 1};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 3;
    particleFSFrameCount = 1; 
    
    angleVar = 0;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 2.5;
    moveVelocity[] = {"speedX", "speedY", "speedZ"};
    rotationVelocity = 1;
    weight = 1.35;
    volume = 1;
    rubbing = 0.1;
    size[] = {2,10};
    sizeCoef = 1;
    color[] = {{0.5,0.5,0.5,0.5},{0.5,0.5,0.5,0}};
    colorCoef[] = {"1 + 0.02 * dustColor","1 - 0.08 * dustColor","1 - 0.34 * dustColor", 1};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.06;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {6, 0, 6};
    MoveVelocityVar[] =  {0.2, 0.2, 0.2};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 1;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  
  class TankDust2 : Default
  {
    interval = 0.004;
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 3;
    particleFSFrameCount = 1; 
    
    angleVar = 1;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 2;
    moveVelocity[] = {"speedX*2", "speedY", "speedZ*2"};
    rotationVelocity = 1;
    weight = 1.35;
    volume = 1;
    rubbing = 0.1;
    size[] = {2,10};
    sizeCoef = 1;
    color[] = {{0.4,0.4,0.4,0.7},{0.4,0.4,0.4,0}};
    colorCoef[] = {"1 + 0.02 * dustColor","1 - 0.08 * dustColor","1 - 0.34 * dustColor", 1};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.15;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 1;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {1.5, 0.5, 1.5};
    MoveVelocityVar[] =  {0.9, 0.9, 0.9};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 1.5;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  
  class HDust1 : Default
  {
    interval = "0.02 - 0.019 * density";
    circleRadius = 1.5;
    circleVelocity[] = {"speed*0.8", 0, "speed*0.8"};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 3;
    particleFSFrameCount = 1; 
    
    angleVar = 0;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 0.7;
    moveVelocity[] = {0, 0, 0};
    rotationVelocity = 1;
    weight = 1.2;
    volume = 1;
    rubbing = 0.1;
    size[] = {5, 10};
    sizeCoef = 1;
    color[] = {{1,1,0.8,0.0},{1,1,0.8,0.2},{1,1,0.8,0.1},{1,1,0.8,0.08},{1,1,0.8,0.05},{1,1,0.8,0.03},{1,1,0.8,0.01},{1,1,0.8,0.0}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.05;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0, 0, 0};
    MoveVelocityVar[] =  {0.15, 0.15, 0.15};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.25;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  class HWater1 : Default
  {
     interval = "0.02 - 0.019 * density";
    circleRadius = 1.5;
    circleVelocity[] = {"speed*0.8", 0, "speed*0.8"};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 3;
    particleFSFrameCount = 1; 
    
    angleVar = 0;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 1.2;
    moveVelocity[] = {0, 0, 0};
    rotationVelocity = 1;
    weight = 1.2;
    volume = 1;
    rubbing = 0.1;
    size[] = {5, 5, 15};
    sizeCoef = 1;
    color[] = {{0.85,1,1,0.0},{0.85,1,1,0.3},{0.85,1,1,0.2},{0.85,1,1,0.1},{0.85,1,1,0.08},{0.9,1,1,0.05},{0.95,1,1,0.03},{1,1,1,0.0}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.05;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0, 0, 0};
    MoveVelocityVar[] =  {0.15, 0.15, 0.15};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.25;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };



 class DSmoke1 : Default
  {
    interval = "0.1 - 0.09 * speed * damage";
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 3;
    particleFSFrameCount = 1; 
    
    angleVar = 360;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 2.5;
    moveVelocity[] = {0, -10, 0};
    rotationVelocity = 1;
    weight = 3;
    volume = 0.5;
    rubbing = 0.1;
    size[] = {2, 20};
    sizeCoef = 1;
    color[] = {{0.05,0.05,0.05,0.3},{0.1,0.1,0.1,0.05},{0.2,0.2,0.2,0}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.5;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0, 0, 0};
    MoveVelocityVar[] =  {0.15, 0.15, 0.15};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.25;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
  
   class DSmoke2 : Default
  {
    interval = "0.1 - 0.09 * speed * damage";
    circleRadius = 0;
    circleVelocity[] = {0, 0, 0};

    particleShape = \Ca\Data\ParticleEffects\FireAndSmokeAnim\SmokeAnim.p3d;
    particleFSNtieth = 8;
    particleFSIndex = 3;
    particleFSFrameCount = 1; 
    
    angleVar = 360;
    
   
    animationName = "";
    particleType = "Billboard";
    timerPeriod = 1;
    lifeTime = 3.5;
    moveVelocity[] = {0, 0, 0};
    rotationVelocity = 1;
    weight = 3;
    volume = 0.5;
    rubbing = 0.1;
    size[] = {2, 35};
    sizeCoef = 1;
    color[] = {{0.05,0.05,0.05,0.3},{0.1,0.1,0.1,0.05},{0.2,0.2,0.2,0}};
    colorCoef[] = {1, 1, 1, 1};
    animationSpeed[] = {0};
    animationSpeedCoef = 1;
    randomDirectionPeriod = 0.1;
    randomDirectionIntensity = 0.5;
    onTimerScript = "";
    beforeDestroyScript = "";
   

    lifeTimeVar = 0;
    position[] = {"positionX", "positionY", "positionZ"};
    positionVar[] = {0, 0, 0};
    MoveVelocityVar[] =  {0.15, 0.15, 0.15};
    rotationVelocityVar = 1;
    //Was {0.2, 0.2}
    sizeVar = 0.25;
    colorVar[] = {0, 0, 0, 0};
    randomDirectionPeriodVar = 0;
    randomDirectionIntensityVar = 0;
  };
	
	  
	  
};
// gun fire (used in tanks, ships etc.)
class WeaponFireGun
{
  access = ReadAndWrite;
  // single cloudlet parameters
  cloudletDuration = 0.2;   // time to live (not including fades)
  cloudletAnimPeriod = 1.0; // animation speed
  cloudletSize = 1.0;
  cloudletAlpha = 0.6;
  cloudletGrowUp = 0.2;     // grow-up time
  cloudletFadeIn = 0.01;    // fade-in time
  cloudletFadeOut = 1;    // fade-out time
  cloudletAccY = 0;         // vertical acceleration
  cloudletMinYSpeed = -100; // vertical speed range
  cloudletMaxYSpeed = 100;
  cloudletShape = cloudletFire;
  cloudletColor[] = {1, 1, 1, 0};
  // source parameters
  interval = 0.01;
  size = 3;
  sourceSize = 0.5;
  timeToLive = 0;

  initT = 0;
  deltaT = 2250;
  class Table
  {
    class T0 {maxT = 0; 	color[] = {1, 1, 1, 0};}
    class T1 {maxT = 250; 	color[] = {1, 1, 1, 0};}
    class T2 {maxT = 350; 	color[] = {1, 0.9, 0.6, 0};}
    class T3 {maxT = 700; 	color[] = {0.05, 0.05, 0.05, 0};}
    class T4 {maxT = 4200;	color[] = {0, 0, 0, 0};}
  }
};

// machine gun fire (used in tanks, ships etc.)
class WeaponFireMGun : WeaponFireGun
{
  cloudletDuration = 0;     // time to live (not including fades)
  cloudletGrowUp = 0.06;    // grow-up time
  cloudletFadeIn = 0;       // fade-in time
  cloudletFadeOut = 0.12;   // fade-out time

  interval = 0.005;
  size = 0.12;
  sourceSize = 0.01;

  initT = 3200;
  deltaT = -4000;
};

// gun clouds (used in tanks, ships etc.)
class WeaponCloudsGun
{
  access = ReadAndWrite;
  // single cloudlet parameters
  cloudletDuration = 0.3;   // time to live (not including fades)
  cloudletAnimPeriod = 1.0; // animation speed
  cloudletSize = 1.0;
  cloudletAlpha = 0.5;
  cloudletGrowUp = 1;       // grow-up time
  cloudletFadeIn = 0.1;     // fade-in time
  cloudletFadeOut = 1;      // fade-out time
  cloudletAccY = 0.4;       // vertical acceleration
  cloudletMinYSpeed = 0.2;  // vertical speed range
  cloudletMaxYSpeed = 0.8;
  cloudletShape = cloudletClouds;
  cloudletColor[] = {0.8, 0.8, 0.8, 0};
  // source parameters
  interval = 0.05;
  size = 3;
  sourceSize = 0.5;
  timeToLive = 0;

  initT = 0;
  deltaT = 0;
  class Table
  {
    class T0 {maxT = 0; color[] = {0.8, 0.8, 0.8, 0};}
  }
};

// gun clouds (used in tanks, ships etc.)
class WeaponCloudsMGun : WeaponCloudsGun
{
  access = ReadOnlyVerified;

  cloudletGrowUp = 0.1;		// grow-up time
  cloudletFadeIn = 0;		// fade-in time
  cloudletFadeOut = 0.2;	// fade-out time
  cloudletDuration = 0.0;	// time to live (not including fades)

  cloudletColor[] = {1, 1, 1, 0.5};

  cloudletAlpha = 0.3;
  cloudletShape = "\ca\data\cl_basic";

  cloudletAccY = 0;         // vertical acceleration
  cloudletMinYSpeed = -100; // vertical speed range
  cloudletMaxYSpeed = 100;

  interval = 0.033;
  size = 0.5;
  sourceSize = 0.00;
};