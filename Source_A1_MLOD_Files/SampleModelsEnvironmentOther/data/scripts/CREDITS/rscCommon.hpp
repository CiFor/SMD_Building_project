#define FontMAIN "Zeppelin32"
#define Size_Main_Small 0.027
#define Size_Main_Normal 0.04
#define Size_Text_Default Size_Main_Normal
#define Size_Text_Small Size_Main_Small
#define Color_White {1, 1, 1, 1}
#define Color_Main_Foreground1 Color_White
#define Color_Text_Default Color_Main_Foreground1
#define ST_CENTER 0x02
#define ST_MULTI 16
#define ST_NO_RECT 0x200
#define CT_STATIC 0
#define ReadAndWrite 0



class CfgFontFamilies
{
	class Zeppelin32
	{
		fonts[] =
		{
			"\ca\UIFonts\Data\Fonts\Zeppelin3212",
			"\ca\UIFonts\Data\Fonts\Zeppelin3213",
			"\ca\UIFonts\Data\Fonts\Zeppelin3214",
			"\ca\UIFonts\Data\Fonts\Zeppelin3215",
			"\ca\UIFonts\Data\Fonts\Zeppelin3216",
			"\ca\UIFonts\Data\Fonts\Zeppelin3217",
			"\ca\UIFonts\Data\Fonts\Zeppelin3218",
			"\ca\UIFonts\Data\Fonts\Zeppelin3219",
			"\ca\UIFonts\Data\Fonts\Zeppelin3220",
			"\ca\UIFonts\Data\Fonts\Zeppelin3222", 
			"\ca\UIFonts\Data\Fonts\Zeppelin3228"		
		};
	
	spaceWidth = 0.7;
	spacing = 0.07;
	};
};



class RscText
{
	access = ReadAndWrite;
	type = CT_STATIC;
	idc = -1;
	style = ST_CENTER;
	w = 0.05;
	h = 0.05;
	font = FontMAIN;
	sizeEx = Size_Text_Default;
	colorBackground[] = {0, 0, 0, 0};
	colorText[] = Color_Text_Default;
	text = "";
	
};