class CfgWorlds
{
	initWorld = "Intro";
	demoWorld = "Intro";
	class DefaultClutter;
	class DefaultWorld
	{
		class Weather
		{
			class Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
			};
		};
	};
	class CAWorld : DefaultWorld
	{
		class Weather: Weather
		{
		/// various parameters depending on "overcast" variable
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					sky = "ca\data\data\sky_clear_sky.paa";
          skyR = "ca\data\data\sky_clear_lco.paa";
				};
				class Weather2: Weather2
				{
					sky = "ca\data\data\sky_semicloudy_sky.paa";
          skyR = "ca\data\data\sky_semicloudy_lco.paa";
				};
				class Weather3: Weather3
				{
					sky = "ca\data\data\sky_cloudy_sky.paa";
          skyR = "ca\data\data\sky_cloudy_lco.paa";
				};
				class Weather4: Weather4
				{
					sky = "ca\data\data\sky_mostlycloudy_sky.paa";
          skyR = "ca\data\data\sky_mostlycloudy_lco.paa";
				};
				class Weather5: Weather5
				{
					sky = "ca\data\data\sky_overcast_sky.paa";
          skyR = "ca\data\data\sky_overcast_lco.paa";
				};
			};
			class ThunderboltNorm
			{
				model = \ca\data\blesk1.p3d;
				soundNear[]={\ca\sounds\data\sound\thundershort,db+40,1};
				soundFar[]={\ca\sounds\data\sound\thunderlong2,db+30,1};
			};
			class ThunderboltHeavy
			{
				model = \ca\data\blesk2.p3d;
				soundNear[]={\ca\sounds\data\sound\thunderhard,db+40,1};
				soundFar[]={\ca\sounds\data\sound\thunder,db+50,1};
			};
		};
		class Rain
		{
			texture = "ca\data\data\rain_ca.01.paa";
			raindrop = \ca\data\raindrop.p3d;
			speed = 1;
			levels[] = {8, 2};
		};
		skyTexture = "ca\data\data\sky_semicloudy_sky.paa";
    skyTextureR = "ca\data\data\sky_semicloudy_lco.paa";
		seaTexture = "ca\data\seatexture_co.paa";
		clouds[] = {ca\data\mrak1.p3d,ca\data\mrak2.p3d,ca\data\mrak3.p3d,ca\data\mrak4.p3d};
		skyObject = ca\data\obloha.p3d;
		starsObject = ca\data\stars.p3d;
		horizontObject = ca\data\horizont.p3d;
		haloObject = ca\data\sunhalo.p3d;
		sunObject = ca\data\sun.p3d;
		rainbowObject = ca\data\rainbow.p3d;
		moonObject = ca\data\moon.p3d;
	};
};