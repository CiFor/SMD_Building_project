#define ReadAndWrite 0 //! any modifications enabled
#define ReadAndCreate 1 //! only adding new class members is allowed
#define ReadOnly 2 //! no modifications enabled
#define ReadOnlyVerified 3 //! no modifications enabled, CRC test applied

#define private 0
#define protected 1
#define public 2

class CfgPatches
{
	class CASounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {};
	};
};


class CfgRadio
{
	class M01r01
	{
		name = "M01r01";
		sound[] = {"\ca\Sounds\Missions\M01r01.ogg", db+20, 1.0};
		title = $STR_M01r01;
	};
	class M01r02
	{
		name = "M01r02";
		sound[] = {"\ca\Sounds\Missions\M01r02.ogg", db+20, 1.0};
		title = $STR_M01r02;
	};
	class M02r01
	{
		name = "M02r01";
		sound[] = {"\ca\Sounds\Missions\M02r01.ogg", db+20, 1.0};
		title = $STR_M02r01;
	};
	class M02r02
	{
		name = "M02r02";
		sound[] = {"\ca\Sounds\Missions\M02r02.ogg", db+20, 1.0};
		title = $STR_M02r02;
	};
	class M03r01
	{
		name = "M03r01";
		sound[] = {"\ca\Sounds\Missions\M03r01.ogg", db+20, 1.0};
		title = $STR_M03r01;
	};
	class M03r02
	{
		name = "M03r02";
		sound[] = {"\ca\Sounds\Missions\M03r02.ogg", db+20, 1.0};
		title = $STR_M03r02;
	};
	class M03r03
	{
		name = "M03r03";
		sound[] = {"\ca\Sounds\Missions\M03r03.ogg", db+20, 1.0};
		title = $STR_M03r03;
	};

	class M03r04
	{
		name = "M03r04";
		sound[] = {"\ca\Sounds\Missions\M03r04.ogg", db+20, 1.0};
		title = $STR_M03r04;
	};

	class M03r05
	{
		name = "M03r05";
		sound[] = {"\ca\Sounds\Missions\M03r05.ogg", db+20, 1.0};
		title = $STR_M03r05;
	};

	class M03r06
	{
		name = "M03r06";
		sound[] = {"\ca\Sounds\Missions\M03r06.ogg", db+20, 1.0};
		title = $STR_M03r06;
	};

	class M03r07
	{
		name = "M03r07";
		sound[] = {"\ca\Sounds\Missions\M03r07.ogg", db+20, 1.0};
		title = $STR_M03r07;
	};

	class M03r08
	{
		name = "M03r08";
		sound[] = {"\ca\Sounds\Missions\M03r08.ogg", db+20, 1.0};
		title = $STR_M03r08;
	};

	class M03r09
	{
		name = "M03r09";
		sound[] = {"\ca\Sounds\Missions\M03r09.ogg", db+20, 1.0};
		title = $STR_M03r09;
	};

	class M05r01
	{
		name = "M05r01";
		sound[] = {"\ca\Sounds\Missions\M05r01.ogg", db-40, 1.0};
		title = $STR_M05r01;
	};
	class M05r02
	{
		name = "M05r02";
		sound[] = {"\ca\Sounds\Missions\M05r02.ogg", db-40, 1.0};
		title = $STR_M05r02;
	};
	class M05r03
	{
		name = "M05r03";
		sound[] = {"\ca\Sounds\Missions\M05r03.ogg", db-40, 1.0};
		title = $STR_M05r03;
	};
	class M05r04
	{
		name = "M05r04";
		sound[] = {"\ca\Sounds\Missions\M05r04.ogg", db-40, 1.0};
		title = $STR_M05r04;
	};
	class M05r05
	{
		name = "M05r05";
		sound[] = {"\ca\Sounds\Missions\M05r05.ogg", db-40, 1.0};
		title = $STR_M05r05;
	};
	class M06r01
	{
		name = "M06r01";
		sound[] = {"\ca\Sounds\Missions\M06r01.ogg", db+20, 1.0};
		title = $STR_M06r01;
	};
	class M06r02
	{
		name = "M06r02";
		sound[] = {"\ca\Sounds\Missions\M06r02.ogg", db+20, 1.0};
		title = $STR_M06r02;
	};
	class M06r03
	{
		name = "M06r03";
		sound[] = {"\ca\Sounds\Missions\M06r03.ogg", db+20, 1.0};
		title = $STR_M06r03;
	};
	class M07r01
	{
		name = "M07r01";
		sound[] = {"\ca\Sounds\Missions\M07r01.ogg", db-40, 1.0};
		title = $STR_M07r01;
	};
	class M07r02
	{
		name = "M07r02";
		sound[] = {"\ca\Sounds\Missions\M07r02.ogg", db-40, 1.0};
		title = $STR_M07r02;
	};
	class M07r03
	{
		name = "M07r03";
		sound[] = {"\ca\Sounds\Missions\M07r03.ogg", db-40, 1.0};
		title = $STR_M07r03;
	};
	class M07r04
	{
		name = "M07r04";
		sound[] = {"\ca\Sounds\Missions\M07r04.ogg", db-40, 1.0};
		title = $STR_M07r04;
	};
	class M07r05
	{
		name = "M07r05";
		sound[] = {"\ca\Sounds\Missions\M07r05.ogg", db-40, 1.0};
		title = $STR_M07r05;
	};
	class M07r06
	{
		name = "M07r06";
		sound[] = {"\ca\Sounds\Missions\M07r06.ogg", db-40, 1.0};
		title = $STR_M07r06;
	};

	class M09r06
	{
		name = "M09r06";
		sound[] = {"\ca\Sounds\Missions\M09r06.ogg", db-40, 1.0};
		title = $STR_M09r06;
	};
	class M09r01
	{
		name = "M09r01";
		sound[] = {"\ca\Sounds\Missions\M09r01.ogg", db-40, 1.0};
		title = $STR_M09r01;
	};
	class M09r02
	{
		name = "M09r02";
		sound[] = {"\ca\Sounds\Missions\M09r02.ogg", db-40, 1.0};
		title = $STR_M09r02;
	};
	class M09r03
	{
		name = "M09r03";
		sound[] = {"\ca\Sounds\Missions\M09r03.ogg", db-40, 1.0};
		title = $STR_M09r03;
	};
	class M09r04
	{
		name = "M09r04";
		sound[] = {"\ca\Sounds\Missions\M09r04.ogg", db-40, 1.0};
		title = $STR_M09r04;
	};
	class M09r05
	{
		name = "M09r05";
		sound[] = {"\ca\Sounds\Missions\M09r05.ogg", db-40, 1.0};
		title = $STR_M09r05;
	};
	class M10r01
	{
		name = "M10r01";
		sound[] = {"\ca\Sounds\Missions\M10r01.ogg", db-40, 1.0};
		title = $STR_M10r01;
	};
	class M10r02
	{
		name = "M10r02";
		sound[] = {"\ca\Sounds\Missions\M10r02.ogg", db-40, 1.0};
		title = $STR_M10r02;
	};
	class M10r03
	{
		name = "M10r03";
		sound[] = {"\ca\Sounds\Missions\M10r03.ogg", db-40, 1.0};
		title = $STR_M10r03;
	};
	class M10r03A
	{
		name = "M10r03a";
		sound[] = {"\ca\Sounds\Missions\M10r03A.ogg", db-40, 1.0};
		title = $STR_M10r03A;
	};
	class M10r04
	{
		name = "M10r04";
		sound[] = {"\ca\Sounds\Missions\M10r04.ogg", db-40, 1.0};
		title = $STR_M10r04;
	};
	class M10r05
	{
		name = "M10r05";
		sound[] = {"\ca\Sounds\Missions\M10r05.ogg", db-40, 1.0};
		title = $STR_M10r05;
	};

	class M11r01
	{
		name = "M11r01";
		sound[] = {"\ca\Sounds\Missions\M11r01.ogg", db-40, 1.0};
		title = $STR_M11r01;
	};
	class M11r02
	{
		name = "M11r02";
		sound[] = {"\ca\Sounds\Missions\M11r02.ogg", db-40, 1.0};
		title = $STR_M11r02;
	};
	class M11r03
	{
		name = "M11r03";
		sound[] = {"\ca\Sounds\Missions\M11r03.ogg", db-40, 1.0};
		title = $STR_M11r03;
	};
	class M11r04
	{
		name = "M11r04";
		sound[] = {"\ca\Sounds\Missions\M11r04.ogg", db-40, 1.0};
		title = $STR_M11r04;
	};
	class M11r05
	{
		name = "M11r05";
		sound[] = {"\ca\Sounds\Missions\M11r05.ogg", db-40, 1.0};
		title = $STR_M11r05;
	};
	class M11r06
	{
		name = "M11r06";
		sound[] = {"\ca\Sounds\Missions\M11r06.ogg", db-40, 1.0};
		title = $STR_M11r06;
	};
	class M11r07
	{
		name = "M11r07";
		sound[] = {"\ca\Sounds\Missions\M11r07.ogg", db-40, 1.0};
		title = $STR_M11r07;
	};
	class M11r08
	{
		name = "M11r08";
		sound[] = {"\ca\Sounds\Missions\M11r08.ogg", db-40, 1.0};
		title = $STR_M11r08;
	};
	class M11r09
	{
		name = "M11r09";
		sound[] = {"\ca\Sounds\Missions\M11r09.ogg", db-40, 1.0};
		title = $STR_M11r09;
	};
	class M11r10
	{
		name = "M11r10";
		sound[] = {"\ca\Sounds\Missions\M11r10.ogg", db-40, 1.0};
		title = $STR_M11r10;
	};
	class TRr01
	{
		name = "TRr01";
		sound[] = {"\ca\Sounds\Missions\TRr01.ogg", db-40, 1.0};
		title = $STR_TRr01;
	};
	class TRr02
	{
		name = "TRr02";
		sound[] = {"\ca\Sounds\Missions\TRr02.ogg", db-40, 1.0};
		title = $STR_TRr02;
	};
	class TRr03
	{
		name = "TRr03";
		sound[] = {"\ca\Sounds\Missions\TRr03.ogg", db-40, 1.0};
		title = $STR_TRr03;
	};
	class TRr04
	{
		name = "TRr04";
		sound[] = {"\ca\Sounds\Missions\TRr04.ogg", db-40, 1.0};
		title = $STR_TRr04;
	};

	class UNIV_r09
	{
		name = "UNIV_r09";
		sound[] = {"\ca\Sounds\Missions\UNIV_r09.ogg", db-40, 1.0};
		title = $STR_UNIV_r09;
	};

	class UNIV_r20
	{
		name = "UNIV_r20";
		sound[] = {"\ca\Sounds\Missions\UNIV_r20.ogg", db-40, 1.0};
		title = $STR_UNIV_r20;
	};

	class UNIV_r21
	{
		name = "UNIV_r21";
		sound[] = {"\ca\Sounds\Missions\UNIV_r21.ogg", db-40, 1.0};
		title = $STR_UNIV_r21;
	};


};

class CfgSounds
{
	// name, sound
	class M11v01
	{
		name = "";
		sound[] = {"\ca\Sounds\Missions\M11v01.ogg", db, 1.0};
		titles[] = {0, $STR_M11v01};
	};
	class M11v02
	{
		name = "";
		sound[] = {"\ca\Sounds\Missions\M11v02.ogg", db, 1.0};
		titles[] = {0, $STR_M11v02};
	};
	class M11v03
	{
		name = "";
		sound[] = {"\ca\Sounds\Missions\M11v03.ogg", db, 1.0};
		titles[] = {0, $STR_M11v03};
	};
	class M11v04
	{
		name = "";
		sound[] = {"\ca\Sounds\Missions\M11v04.ogg", db, 1.0};
		titles[] = {0, $STR_M11v04};
	};
	class M11v13
	{
		name = "";
		sound[] = {"\ca\Sounds\Missions\M11v13.ogg", db, 1.0};
		titles[] = {0, $STR_M11v13};
	};
	class TRv01
	{
		name = "";
		sound[] = {"\ca\Sounds\Missions\TRv01.ogg", db-40, 1.0};
		titles[] = {0,$STR_TRv01};
	};
	class TRv02
	{
		name = "";
		sound[] = {"\ca\Sounds\Missions\TRv02.ogg", db-40, 1.0};
		titles[] = {0,$STR_TRv02};
	};
	class TRv03
	{
		name = "";
		sound[] = {"\ca\Sounds\Missions\TRv03.ogg", db-40, 1.0};
		titles[] = {0,$STR_TRv03};
	};
	class TRv04
	{
		name = "";
		sound[] = {"\ca\Sounds\Missions\TRv04.ogg", db-40, 1.0};
		titles[] = {0,$STR_TRv04};
	};

	class Alarm
	{
		name = $STR_CFG_SOUNDS_ALARM;
		sound[] = {\ca\Sounds\data\sound\air_raid, 1.0, 1.0};
		titles[] = {};
	};
	class AlarmBell
	{
		name = $STR_CFG_SOUNDS_ALARMBELL;
		sound[] = {\ca\sounds\data\sound\alarm_bells, 1.0, 1.0};
		titles[] = {};
	};

	class Dialogue
	{
		name = $STR_CFG_SOUNDS_ALARM;
		sound[] = {\ca\Sounds\data\sound\people_crowd1, 1.0, 1.0};
		titles[] = {};
	};

	class Explosion1
	{
		name = $STR_CFG_SOUNDS_EXPLOSION1;
		sound[] = {"\ca\Weapons\data\Sound\Explosion_Small_02", 1.0, 1.0};
		titles[] = {};
	};
	class Explosion2
	{
		name = $STR_CFG_SOUNDS_EXPLOSION2;
		sound[] = {"\ca\Weapons\data\Sound\explosion_mega_02_building", 1.0, 1.0};
		titles[] = {};
	};

	class Fountain
	{
		name = $STR_CFG_SOUNDS_FOUNTAIN;
		sound[] = {\ca\Sounds\data\sound\stream, db-80, 1.0};
		titles[] = {};
	};
	class Fire
	{
		name = $STR_CFG_SOUNDS_FIRE;
		sound[] = {\ca\Sounds\data\sound\fire, db-72, 1.0};

		titles[] = {};
	};
	class fanfare
	{
		name = $STR_CFG_SOUNDS_FANFARE;
		sound[] = {\ca\Sounds\data\sound\fanfare, 1.0, 1.0};

		titles[] = {};
	};
	class tune
	{
		name = $STR_CFG_SOUNDS_TUNE;
		sound[] = {\ca\Sounds\data\sound\tune, 1.0, 1.0};

		titles[] = {};
	};


};

class CfgMusic
{
	class ATrack6
	{
		name = "01 Street Combat";
		sound[] = {\ca\Sounds\Music\aa_rock_theme_vi.ogg, db+0, 1.0};
	};
		class ATrack25
	{
		name = "02 Flashpoint Rearmed";
		sound[] = {\ca\Sounds\Music\aa_ofp1_remix2.ogg, db+0, 1.0};
	};
	class ATrack1
	{
		name = "03 Primo In Mortis";
		sound[] = {\ca\Sounds\Music\aa_death_theme_i.ogg, db+0, 1.0};
	};

	class ATrack18
	{
		name = "04 Arma Magna";
		sound[] = {\ca\Sounds\Music\aa_death_08_north.ogg, db+0, 1.0};
	};


	class ATrack3
	{
		name = "05 Dogs Of War";
		sound[] = {\ca\Sounds\Music\aa_rock_theme_iii.ogg, db+0, 1.0};
	};

	class ATrack24
	{
		name = "06 Black Ops";
		sound[] = {\ca\Sounds\Music\aa_ofp1_remix1.ogg, db+0, 1.0};
	};

	class ATrack4
	{
		name = "07 Seventh Company";
		sound[] = {\ca\Sounds\Music\aa_rock_theme_iv.ogg, db+0, 1.0};
	};
	class ATrack5
	{
		name = "08 Field Track";
		sound[] = {\ca\Sounds\Music\aa_rock_theme_v.ogg, db+0, 1.0};
	};

	class ATrack27
	{
		name = "09 Team Bravo";
		sound[] = {\ca\Sounds\Music\aa_rock_theme_iib.ogg, db+0, 1.0};
	};
	class ATrack7
	{
		name = "10 Arma Vera";
		sound[] = {\ca\Sounds\Music\aa_north_island.ogg, db+0, 1.0};
	};

	class ATrack23
	{
		name = "11 Second Assault";
		sound[] = {\ca\Sounds\Music\aa_death_theme_ii.ogg, db+0, 1.0};
	};

	class ATrack8
	{
		name = "12 Paradise On Earth";
		sound[] = {\ca\Sounds\Music\aa_south_island.ogg, db+0, 1.0};
	};

	class ATrack2
	{
		name = "13 Team Alpha";
		sound[] = {\ca\Sounds\Music\aa_rock_theme_iia.ogg, db+0, 1.0};
	};
	class ATrack23b
	{
		name = "14 First Assault";
		sound[] = {\ca\Sounds\Music\aa_death_II.ogg, db+0, 1.0};
	};

	class ATrack9
	{
		name = "Crescendo 1";
		sound[] = {\ca\Sounds\Music\aa_crescendo_ii.ogg, db+0, 1.0};
	};

	class ATrack10
	{
		name = "Crescendo 2";
		sound[] = {\ca\Sounds\Music\aa_crescendo_i.ogg, db+0, 1.0};
	};

	class ATrack11
	{
		name = "Short: Sahrani 1";
		sound[] = {\ca\Sounds\Music\aa_death_01_south.ogg, db+0, 1.0};
	};

	class ATrack12
	{
		name = "Short: Sahrani 2";
		sound[] = {\ca\Sounds\Music\aa_death_02_south.ogg, db+0, 1.0};
	};

	class ATrack13
	{
		name = "Short: Sahrani 3";
		sound[] = {\ca\Sounds\Music\aa_death_03_south.ogg, db+0, 1.0};
	};

	class ATrack14
	{
		name = "Short: Combat";
		sound[] = {\ca\Sounds\Music\aa_death_04_rocktheme_vi.ogg, db+0, 1.0};
	};

	class ATrack15
	{
		name = "Short: Riff";
		sound[] = {\ca\Sounds\Music\aa_death_05_rocktheme_iv.ogg, db+0, 1.0};
	};
	class ATrack16
	{
		name = "Short: Bells";
		sound[] = {\ca\Sounds\Music\aa_death_06_rocktheme_iii.ogg, db+0, 1.0};
	};
	class ATrack17
	{
		name = "Short: Casaulties Of War";
		sound[] = {\ca\Sounds\Music\aa_death_07_rocktheme_iii.ogg, db+0, 1.0};
	};

	class ATrack22
	{
		name = "Short: Street Combat";
		sound[] = {\ca\Sounds\Music\aa_death_12_rocktheme_vi.ogg, db+0, 1.0};
	};

	class ATrack19
	{
		name = "Short: Arma Magna Rock 1";
		sound[] = {\ca\Sounds\Music\aa_death_09_north.ogg, db+0, 1.0};
	};

	class ATrack20
	{
		name = "Short: Arma Magna Rock 2";
		sound[] = {\ca\Sounds\Music\aa_death_10_north.ogg, db+0, 1.0};
	};

	class ATrack21
	{
		name = "Short: Arma Magna";
		sound[] = {\ca\Sounds\Music\aa_death_11_north.ogg, db+0, 1.0};
	};

	class ATrack26
	{
		name = "Semper Fidelis";
		sound[] = {\ca\Sounds\Music\aa_chorus_I.ogg, db+0, 1.0};
	};
};

class CfgSFX
{
	// special
	// sfxfile, vol, frq, probab, min_delay, mid_delay, max_delay
	access = ReadAndCreate;
	// special
	// sfxfile, vol, frq, probab, min_delay, mid_delay, max_delay
	seagull[]={\ca\sounds\gulls1,db-30,1, 1, 0.2, 1, 5};
	class Preview
	{
		// options volume controls
		effect[]={ca\sounds\M16_3_BS_Aa.wss, db0, 1.0};
		speech[]={ca\sounds\readytofire.wss, db0, 1.0};
		music[] ={ca\sounds\music\aa_death_10_north.ogg, db0, 1.0};
	};
	class Church
	{
		smallBell[]={\ca\Buildings\sound\bell1,db-20,1};
		largeBell[]={\ca\Buildings\sound\bell2,db-10,1};
	};
	class CA_AK
	{
		sounds[]={sound1, sound2};
		name = $STR_CFG_SFX_CA_AK;

		sound1[]={\ca\Weapons\Sound\AK74single_2, db-10,1, 0.5, 0,2,5};
		sound2[]={\ca\Weapons\Sound\AK74burst_2, db-10,1, 0.4, 0,1,10};
		empty[]= {"", 0, 0, 0, 1, 5, 20};
	};
	class CA_M16
	{
		sounds[]={sound1, sound2};
		name = $STR_CFG_SFX_CA_M16;

		sound1[]={"ca\weapons\Sound\M16single", db-10,1, 0.5, 0,2,5};
		sound2[]={"ca\weapons\Sound\M16burst", db-10,1, 0.4, 0,1,10};
		empty[]= {"", 0, 0, 0, 1, 5, 20};
	};

	class DestrHouse
	{
	  sounds[] = {DestrHouse1};
	  name = $STR_CFG_SFX_DestrHouse;

	  DestrHouse1[] = {"\ca\BUILDINGS\sound\building2_destroy", db30, 1, 1, 60, 120, 240};
	  empty[]= {"", 0, 0, 0, 1, 5, 20};
	};


	class Fire
	{
	  sounds[] = {fire1};
	  name = $STR_CFG_SFX_FIRE;

	  fire1[] = {"\ca\Sounds\fire", db-60, 1, 1, 0, 0, 0};
	  empty[]= {"", 0, 0, 0, 1, 5, 20};
	};

	class CA_Expl1
	{
		sounds[]={sound1};
		name = $STR_CFG_SFX_CA_EXPL1;

		sound1[]={"ca\weapons\Data\Sound\explosion_large1", db-20,1, 0.5, 0,2,5};
		empty[]= {"", 0, 0, 0, 1, 5, 30};
	};
	class hedgesparrow
	{
		sounds[]={sing1, sing2, sing3, sing4, sing5};
		name = $STR_CFG_SFX_HEDGESPARROW;

		sing1[]={"\ca\Sounds\animals\hedspar1", db-55,1, 0.1, 0,0,0};
		sing2[]={"\ca\Sounds\animals\hedspar2", db-55,1, 0.2, 0,0,0};
		sing3[]={"\ca\Sounds\animals\hedspar3", db-55,1, 0.1, 0,0,0};
		sing4[]={"\ca\Sounds\animals\hedspar4", db-55,1, 0.2, 0,0,0};
		sing5[]={"\ca\Sounds\animals\hedspar5", db-55,1, 0.3, 0,0,0};
		empty[]= {"", 0, 0, 0, 1, 5, 80};
	};
	class skylark
	{
		sounds[]={sing1, sing2, sing3, sing4, sing5, sing6, sing7};
		name = $STR_CFG_SFX_SKYLARK;

		sing1[]={"\ca\Sounds\animals\skylark7", db-45,1, 0.1, 0.2,0.4,1};
		sing2[]={"\ca\Sounds\animals\skylark6", db-45,1, 0.2, 0.2,0.3,1};
		sing3[]={"\ca\Sounds\animals\skylark5", db-45,1, 0.1, 0.1,0.2,1.2};
		sing4[]={"\ca\Sounds\animals\skylark4", db-45,1, 0.2, 0.1,0.2,1.2};
		sing5[]={"\ca\Sounds\animals\skylark3", db-45,1, 0.1, 0.3,0.4,0.75};
		sing6[]={"\ca\Sounds\animals\skylark2", db-45,1, 0.1, 0.2,0.4,0.8};
		sing7[]={"\ca\Sounds\animals\skylark1", db-5,1, 0.1, 0.1,0.5,0.8};
		empty[]= {"", 0, 0, 0, 1, 5, 40};
	};
	class forestlark
	{
		sounds[]={sing1, sing2, sing3, sing4, sing5, sing6};
		name = $STR_CFG_SFX_FORESTLARK;

		sing1[]={"\ca\Sounds\animals\f_lark1", db-55,1, 0.1, 0.0,0.1,0.2};
		sing2[]={"\ca\Sounds\animals\f_lark2", db-55,1, 0.1, 0.0,0.1,0.2};
		sing3[]={"\ca\Sounds\animals\f_lark3", db-55,1, 0.1, 0.0,0.1,0.2};
		sing4[]={"\ca\Sounds\animals\f_lark4", db-55,1, 0.1, 0.0,0.1,0.2};
		sing5[]={"\ca\Sounds\animals\f_lark5", db-55,1, 0.2, 0.0,0.1,0.2};
		sing6[]={"\ca\Sounds\animals\f_lark6", db-55,1, 0.2, 0.0,0.1,0.2};
		sing7[]={"\ca\Sounds\animals\f_lark7", db-55,1, 0.2, 0.0,0.1,0.2};
		empty[]= {"", 0, 0, 0, 1, 5, 40};
	};
	class nightingale
	{
		sounds[]={sing1, sing2, sing3, sing4, sing5, sing6, sing7};
		name = $STR_CFG_SFX_NIGHTINGALE;

		sing1[]={"\ca\Sounds\animals\n_gale1", db-55,1, 0.2, 0.1,0.2,0.3};
		sing2[]={"\ca\Sounds\animals\n_gale2", db-55,1, 0.1, 0.1,0.2,0.3};
		sing3[]={"\ca\Sounds\animals\n_gale3", db-55,1, 0.2, 0.1,0.2,0.3};
		sing4[]={"\ca\Sounds\animals\n_gale4", db-55,1, 0.1, 0.1,0.2,0.3};
		sing5[]={"\ca\Sounds\animals\n_gale5", db-55,1, 0.1, 0.1,0.2,0.3};
		sing6[]={"\ca\Sounds\animals\n_gale6", db-55,1, 0.2, 0.1,0.2,0.3};
		sing7[]={"\ca\Sounds\animals\n_gale7", db-55,1, 0.1, 0.1,0.2,0.3};
		empty[]= {"", 0, 0, 0, 1, 5, 40};
	};
	class jay
	{
		sounds[]={sing1, sing2, sing3, sing4};
		name = $STR_CFG_SFX_JAY;

		sing1[]={"\ca\Sounds\animals\jay1", db-45,1, 0.2, 0.2,0.4,1};
		sing2[]={"\ca\Sounds\animals\jay2", db-45,1, 0.2, 0.2,0.3,1};
		sing3[]={"\ca\Sounds\animals\jay3", db-45,1, 0.2, 0.1,0.2,1.2};
		sing4[]={"\ca\Sounds\animals\jay4", db-45,1, 0.2, 0.1,0.2,1.2};
		empty[]= {"", 0, 0, 0, 8, 20, 40};
	};
	class owl
	{
		sounds[]={sing1, sing2};
		name = $STR_CFG_SFX_OWL;

		sing1[]={"\ca\Sounds\animals\owl2_1", db-50,1, 0.2, 0.0,0.5,1};
		sing2[]={"\ca\Sounds\animals\owl2_2", db-50,1, 0.2, 0.0,0.5,1};
		empty[]= {"", 0, 0, 0, 1, 5, 40};
	};
	class crow2
	{
		sounds[]={sing1, sing2, sing3, sing4, sing5, sing6};
		name = $STR_CFG_SFX_CROW2;

		sing1[]={"\ca\Sounds\animals\crow2_1", db-45,1, 0.1, 0.2,0.4,1};
		sing2[]={"\ca\Sounds\animals\crow2_2", db-45,1, 0.1, 0.2,0.3,1};
		sing3[]={"\ca\Sounds\animals\crow2_3", db-45,1, 0.1, 0.1,0.2,1.2};
		sing4[]={"\ca\Sounds\animals\crow2_4", db-45,1, 0.1, 0.1,0.2,1.2};
		sing5[]={"\ca\Sounds\animals\crow2_5", db-45,1, 0.1, 0.1,0.2,1.2};
		sing6[]={"\ca\Sounds\animals\crow2_6", db-45,1, 0.1, 0.1,0.2,1.2};
		empty[]= {"", 0, 0, 0, 1, 5, 50};
	};
	class frog2
	{
		sounds[]={sing1, sing2, sing3};
		name = $STR_CFG_SFX_FROG2;

		sing1[]={"\ca\Sounds\animals\frog2_1", db-55,1, 0.3, 0.0,0.1,0.2};
		sing2[]={"\ca\Sounds\animals\frog2_2", db-55,1, 0.3, 0.0,0.1,0.2};
		sing3[]={"\ca\Sounds\animals\frog2_3", db-55,1, 0.3, 0.0,0.1,0.2};
		empty[]= {"", 0, 0, 0, 1, 5, 40};
	};
	class SeagullSfx
	{
		sounds[]={seagull1, Seagull2, Seagull3, Seagull4, Seagull5};
		name = $STR_CFG_SFX_SEAGULL;

		seagull1[]={"\ca\Sounds\animals\gulls1", db-45,1, 0.15, 0.1,0.5,5};
		seagull2[]={"\ca\Sounds\animals\gulls2", db-45,1, 0.2, 0.1,0.5,5};
		seagull3[]={"\ca\Sounds\animals\gulls3", db-45,1, 0.15, 0.1,0.5,5};
		seagull4[]={"\ca\Sounds\animals\gulls4", db-45,1, 0.24, 0.1,0.5,5};
		seagull5[]={"\ca\Sounds\animals\gulls5", db-45,1, 0.2, 0.1,0.5,5};
		empty[]= {"", 0, 0, 0, 0.2, 2, 20};
	};
	class StreamSfx
	{
		sounds[]={Stream01};
		name = $STR_DN_STREAM;

		Stream01[]={\ca\Sounds\stream, db-90,1, 1, 1,1,1};
		empty[]= {"", 0, 0, 0, 0, 0, 0};
	};
	class AlarmSfx
	{
		sounds[]={Alarm};
		name = $STR_DN_ALARM;

		Alarm[]={\ca\Sounds\sirena, db-0,1, 1, 0.0,0.0,0.0};
		empty[]= {"", 0, 0, 0, 0, 0, 0};
	};

	class AlarmBellSfx
	{
		sounds[]={Alarmbell};
		name = $STR_CFG_SOUNDS_ALARMBELL;
		Alarmbell[]={\ca\Sounds\data\sound\alarm_bells, db+10,1, 1, 0.0,0.0,0.0};
		empty[]= {"", 0, 0, 0, 0, 0, 0};
	};

	class Cricket1Sfx
	{
		sounds[]={Cricket01};
		name = $STR_DN_CRICKET1;

		Cricket01[]={"\ca\Sounds\animals\cricket01", db-60,1, 0.96, 0.0,0.0,0.0};
		empty[]= {"", 0, 0, 0, 0, 2, 60};
	};
	class Cricket2Sfx
	{
		sounds[]={Cricket01};
		name = $STR_DN_CRICKET2;

		Cricket01[]={"\ca\Sounds\animals\cricket02", db-50,1, 0.97, 0.0,0.0,0.0};
		empty[]= {"", 0, 0, 0, 0, 3, 60};
	};
	class Cricket3Sfx
	{
		sounds[]={Cricket01};
		name = $STR_DN_CRICKET3;

		Cricket01[]={"\ca\Sounds\animals\crickets06", db-60,1, 0.98, 0.0,0.0,0.0};
		empty[]= {"", 0, 0, 0, 0, 6, 60};
	};

	class CricketSfx
	{
		sounds[]={Cricket04};
		name = $STR_DN_CRICKET4;

		Cricket04[]={"\ca\Sounds\animals\crickets04", db-60,1, 1, 0.0,0.0,0.0};
		empty[]= {"", 0, 0, 0, 0, 2, 8};
	};

	class Dialogue
	{
		sounds[]={dialogue};
		name = $STR_DN_DIALOGUE;
		dialogue[] = {\ca\Sounds\data\sound\people_crowd1, db-30, 1, 1, 0, 0, 0};
		empty[]= {"", 0, 0, 0, 0, 0, 0};
	};


	class FrogSfx
	{
		sounds[]={Frog01, Frog02};
		name = $STR_DN_FROG;

		Frog01[]={"\ca\Sounds\animals\frog1_1", db-60.2,1, 0.8, 0.0,0.0,0.0};
		Frog02[]={"\ca\Sounds\animals\frog1_2", db-60,1, 0.1, 0.0,0.0,0.0};
		empty[]= {"", 0, 0, 0, 0.1, 0.5, 12};
	};

	class FrogsSfx
	{
		sounds[]={Frog01};
		name = $STR_DN_FROGS;

		Frog01[]={"\ca\Sounds\animals\frogs", db-60,1, 1, 0.0,0.0,0.0};
		empty[]= {"", 0, 0, 0, 0, 0, 0};
	};

	class OwlSfx
	{
		sounds[]={Owl1, Owl2};
		name = $STR_DN_OWL;

		Owl1[]={"\ca\Sounds\animals\owl1_1", db-60,1, 0.6, 0.1, 0.5, 5};
		Owl2[]={"\ca\Sounds\animals\owl1_2", db-60,1, 0.2, 0.1, 0.5, 5};
		empty[]= {"", 0, 0, 0, 0.5, 2, 12};
	};
	class CowSfx
	{
		sounds[]={moo1, moo2};
		name = $STR_DN_COW;

		moo1[]={"\ca\Sounds\animals\cow_moo01", db-50,1, 0.4, 0.1,0.5,5};
		moo2[]={"\ca\Sounds\animals\cow_moo02", db-50,1, 0.4, 0.1,0.5,5};
		empty[]= {"", 0, 0, 0, 0.1, 0.5, 2};
	};
	class WolfSfx
	{
		sounds[]={wolf1, wolf2, wolf3};
		name = $STR_DN_WOLF;

		wolf1[]={"\ca\Sounds\animals\wolf1", db-50,1, 0.3, 0.1,0.5,5};
		wolf2[]={"\ca\Sounds\animals\wolf2", db-50,1, 0.3, 0.1,0.5,5};
		wolf3[]={"\ca\Sounds\animals\wolf3", db-50,1, 0.3, 0.1,0.5,5};
		empty[]= {"", 0, 0, 0, 0.5, 4, 50};
	};
	class CrowSfx
	{
		sounds[]={crow1, crow2, crow3};
		name = $STR_DN_CROW;

		crow1[]={"\ca\Sounds\animals\crow1_1", db-50,1, 0.2, 0.1,0.5,5};
		crow2[]={"\ca\Sounds\animals\crow1_2", db-50,1, 0.2, 0.1,0.5,5};
		crow3[]={"\ca\Sounds\animals\crow1_3", db-50,1, 0.2, 0.1,0.5,5};
		empty[]= {"", 0, 0, 0, 2, 10, 30};
	};
	class DogSfx
	{
		sounds[]={dog1, dog2, dog3};
		name = $STR_DN_DOG;

		dog1[]={"\ca\Sounds\animals\dog_bark03", db-40,1, 0.3, 0.1,0.5,5};
		dog2[]={"\ca\Sounds\animals\dog_bark04", db-40,1, 0.3, 0.1,0.5,5};
		dog3[]={"\ca\Sounds\animals\dog_bark04", db-40,1, 0.2, 0.1,0.5,5};
		sorrowdog2[]={"\ca\Sounds\animals\dog_bark05", db-40,1, 0.2, 0.1,0.5,5};
		sorrowdog3[]={"\ca\Sounds\animals\dog_yelp02", db-45,1, 0.2, 0.1,0.5,5};
		sorrowdog4[]={"\ca\Sounds\animals\dog_yelp03", db-50,1, 0.2, 0.1,0.5,5};
		empty[]= {"", 0, 0, 0, 0.2, 3, 8};
	};
	class BadDogSfx
	{
		sounds[]={baddog1, baddog2, baddog3};
		name = $STR_DN_BAD_DOG;

		baddog1[]={"\ca\Sounds\animals\dog_bark04", db-37,1, 0.3, 0.1,0.5,5};
		baddog2[]={"\ca\Sounds\animals\dog_bark05", db-37,1, 0.3, 0.1,0.5,5};
		baddog3[]={"\ca\Sounds\animals\dog_maul01", db-35,1, 0.3, 0.1,0.5,5};
		empty[]= {"", 0, 0, 0, 0.1, 2, 5};
	};

	class LittleDogSfx
	{
		sounds[]={littledog1};
		name = $STR_DN_LITTLE_DOG;

		littledog1[]={"\ca\Sounds\animals\dog_bark04", db-55,1, 0.8, 0.1,0.5,5};
		empty[]= {"", 0, 0, 0, 0.2, 3, 8};
	};

	class BirdSingingSfx
	{
		sounds[]={sing1, sing1a, sing2, sing2a, sing3, sing4, sing5, sing6, sing7, sing8, sing9};
		name = $STR_DN_BIRDSING;

		sing1[]={"\ca\Sounds\animals\birdsing01", db-40,1, 0.1, 0.2,0.4,1};
		sing1a[]={"\ca\Sounds\animals\birdsing01", db-45,1, 0.08, 0.2,0.3,1};
		sing2[]={"\ca\Sounds\animals\birdsing02", db-50,1, 0.1, 0.1,0.2,1.2};
		sing2a[]={"\ca\Sounds\animals\birdsing02", db-35,1, 0.08, 0.1,0.2,1.2};
		sing3[]={"\ca\Sounds\animals\birdsing03", db-40,1, 0.08, 0.3,0.4,0.75};
		sing4[]={"\ca\Sounds\animals\birdsing04", db-40,1, 0.08, 0.2,0.4,0.8};
		sing5[]={"\ca\Sounds\animals\birdsing05", db-40,1, 0.08, 0.1,0.5,0.8};
		sing6[]={"\ca\Sounds\animals\birdsing06", db-40,1, 0.08, 0.1,0.3,0.8};
		sing7[]={"\ca\Sounds\animals\birdsing07", db-40,1, 0.08, 0.1,0.6,0.8};
		sing8[]={"\ca\Sounds\animals\birdsing08", db-45,1, 0.08, 0.1,0.6,0.8};
		sing9[]={"\ca\Sounds\animals\birdsing09", db-45,1, 0.08, 0.1,0.6,0.8};
		empty[]= {"", 0, 0, 0, 1, 5, 80};
	};

	class CockSfx
	{
		sounds[]={cock};
		name = $STR_DN_COCK;

		cock[]={"\ca\Sounds\animals\cock", db-40, 1, 0.5, 0.1,0.5,5};
		empty[]= {"", 0, 0, 0, 1, 30, 90};
	};
	class ChickenSfx
	{
		sounds[]={chicken1, chicken2};
		name = $STR_DN_CHICKEN;

		chicken1[]={"\ca\Sounds\animals\chicken01", db-50,1, 0.3, 0.1,0.5,5};
		chicken2[]={"\ca\Sounds\animals\chicken02", db-50,1, 0.3, 0.1,0.5,5};
		empty[]= {"", 0, 0, 0, 1, 20, 60};
	};
	class FunMusicSfx
	{
		sounds[]={music1};
		name = 'Music';

		music1[]={\ca\Sounds\Fun_music, db-50,1, 1, 0,0,0};
		empty[]= {"", 0, 0, 0, 0, 0, 0};
	};
};

class CfgEnvSounds
{
	class Default // editor - sounds from landscape
	{
		name = $STR_CFG_ENVSOUNDS_DEFAULT;
		sound[]={"$DEFAULT$",0,1};
		soundNight[]={"$DEFAULT$",0,1};
	};
	class Rain // rain
	{
		name = $STR_DN_RAIN;
		sound[]={"\ca\Sounds\Env\hard_rain01",db-25,1};
		soundNight[]={"\ca\Sounds\Env\hard_rain02",db-15,1};
	};
	class Sea // sea
	{
		name = $STR_DN_SEA;
		sound[]={"\ca\Sounds\Env\wave_break_01",db-60,1};
		soundNight[]={"\ca\Sounds\Env\wave_break_02",db-65,1};
	};
	class Meadows // default - no trees, no sea, no hills ...
	{
		name = $STR_DN_MEADOWS;
		sound[]={"\ca\Sounds\Animals\crickets06",db-45,1};
		soundNight[]={"\ca\Sounds\Animals\crickets04",db-45,1};
	};
	class MeadowsNight // default - no trees, no sea, no hills ...
	{
		name = $STR_DN_MEADOWS;
		sound[]={"\ca\Sounds\Animals\crickets03",db-45,1};
	};
	class Trees // trees
	{
		name = $STR_DN_TREES;
		sound[]={"\ca\Sounds\Env\treesbirds",db-65,1};
		soundNight[]={"\ca\Sounds\Animals\crickets04",db-45,1};
	};
	class TreesNight // trees
	{
		name = $STR_DN_TREES;
		sound[]={"\ca\Sounds\Animals\crickets03",db-55,1};
	};

	class Hills // hills > 250m
	{
		name = $STR_DN_HILLS;
		sound[]={"\ca\Sounds\Env\wind_day",db-45,1};
		soundNight[]={"\ca\Sounds\Env\wind_night",db-55,1};
	};
	class Wind
	{
		name = $STR_DN_WIND;
		sound[]={,db-75,1};
	};
	class Combat // desinger effect
	{
		name = $STR_CFG_ENVSOUNDS_COMBAT;
		sound[]={"\ca\Sounds\Env\battle1",db-45,1};
		soundNight[]={"\ca\Sounds\Env\battle2",db-40,1};
	};
};


class CfgVehicles
{
	class Sound
	{
		scope=private;
		side = -1;
		animated = false;
		vehicleClass = Sounds;
		icon = \ca\data\data\vlajka;
		mapSize = 10;
	};
	class Owl : Sound
	{
		scope = public;
		sound = OwlSfx;
		displayName = $STR_DN_OWL;
	};
	class Stream : Sound
	{
		scope = public;
		sound = StreamSfx;
		displayName = $STR_DN_STREAM;
	};
	class Frog : Sound
	{
		scope = public;
		sound = FrogSfx;
		displayName = $STR_DN_FROG;
	};
	class Frogs : Sound
	{
		scope = public;
		sound = FrogsSfx;
		displayName = $STR_DN_FROGS;
	};
	class Alarm : Sound
	{
		scope = public;
		sound = AlarmSfx;
		displayName = $STR_DN_ALARM;
	};
	class BirdSinging: Sound
	{
		scope = public;
		sound = BirdSingingSfx;
		displayName = $STR_DN_BIRDSING;
	};
	class Crickets1: Sound
	{
		scope = public;
		sound = Cricket1Sfx;
		displayName = $STR_DN_CRICKET1;
	};
	class Crickets2: Sound
	{
		scope = public;
		sound = Cricket2Sfx;
		displayName = $STR_DN_CRICKET2;
	};
	class Crickets3: Sound
	{
		scope = public;
		sound = Cricket3Sfx;
		displayName = $STR_DN_CRICKET3;
	};
	class Crickets4: Sound
	{
		scope = public;
		sound = CricketSfx;
		displayName = $STR_DN_CRICKET4;
	};
	class Chicken: Sound
	{
		scope = public;
		sound = ChickenSfx;
		displayName = $STR_DN_CHICKEN;
	};
	class Cock: Sound
	{
		scope = public;
		sound = CockSfx;
		displayName = $STR_DN_COCK;
	};
	class Cow: Sound
	{
		scope = public;
		sound = CowSfx;
		displayName = $STR_DN_COW;
	};
	class Crow: Sound
	{
		scope = public;
		sound = CrowSfx;
		displayName = $STR_DN_CROW;
	};
	class Wolf: Sound
	{
		scope = public;
		sound = WolfSfx;
		displayName = $STR_DN_WOLF;
	};

	class Dog: Sound
	{
		scope = public;
		sound = DogSfx;
		displayName = $STR_DN_DOG;
	};
	class BadDog: Sound
	{
		scope = public;
		sound = BadDogSfx;
		displayName = $STR_DN_BAD_DOG;
	};
	class SorrowDog: Sound
	{
		scope = public;
		sound = SorrowDogSfx;
		displayName = $STR_DN_SORROW_DOG;
	};
	class LittleDog: Sound
	{
		scope = public;
		sound = LittleDogSfx;
		displayName = $STR_DN_LITTLE_DOG;
	};
	class Music: Sound
	{
		scope = public;
		sound = FunMusicSfx;
		displayName = $STR_DN_MUSIC;
	};
};