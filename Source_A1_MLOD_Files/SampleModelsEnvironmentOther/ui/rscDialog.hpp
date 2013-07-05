//Todo:
//Move displays to other files.

//Template for message boxes (error messages).
class RscMsgBox
{	
	class Background: RscText
	{
		colorBackground[] = CA_UI_background;
	};

	class SubBackground: Background
	{
		colorBackground[] = CA_UI_element_background;
	};


	class Text: RscText
	{
		colorText[] = Color_Black;
		SizeEx = TextSize_small;
	};
	
	class Button : RscButton
	{
  		sizeEx = TextSize_small;		
		h = __EVAL(3 * _ySpacing);
	};
	class ButtonOK : Button
	{
		idc = IDC_OK;
		text = $STR_DISP_OK;
		default = 1;
	};
	class ButtonCancel : Button
	{
		idc = IDC_CANCEL;
		text = $STR_DISP_CANCEL;		
		default = 0;
	};

};

class RscDisplayChannel
{
	class controls
	{
		class Channel: RscText
		{
			x = 0.142; y = 0.691;
			w = 0.129; h = 0.03;
			sizeEx = 0.020;
		};

		class Background: RscText
		{
			x = -10.0; y = 0.8;
			w = 0.25; h = 0.05;
		};

		class Picture: RscPicture
		{
			text = "\ca\ui\textures\mikrak.paa";
			x = -10.01; y = 0.72;
			w = 0.03; h = 0.05;
		};
	};
};
class RscDisplayChat
{
	class controls
	{
		class Background: RscText
		{
			x = 0.142;
			y = 0.720;
			w = 0.46;
			h = 0.027;
			colorBackground[] = {0, 0, 0, 0.5};
			colorText[] = {0, 0, 0, 1};
		};

		class Line: RscEdit
		{
			x = 0.142;
			y = 0.720;
			w = 0.46;
			h = 0.027;
			sizeEx = 0.020;
			text = "";
			colorBackground[] = {0, 0, 0, 0.0};
			colorText[] = {1, 1, 1, 1};
			autocomplete = "general";
		};
	};
};


class RscDisplayVoiceChat
{

	class controls
	{
		class Background;

		class Picture: RscPicture
		{
			text = "\ca\ui\textures\mikrak.paa";
		};
	};
};

