// Generated by unRap v1.06 by Kegetys

class RscDisplayPublishMissionSelectTags {
	idd = 166;
	onLoad = "[""onLoad"",_this,""RscDisplayPublishMissionSelectTags"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	onUnload = "[""onUnload"",_this,""RscDisplayPublishMissionSelectTags"",'GUI'] call compile preprocessfilelinenumbers ""A3\ui_f\scripts\initDisplay.sqf""";
	
	class controlsBackground {
		class FullscreenBackground : RscText {
			idc = -1;
			x = "SafezoneX";
			y = "SafezoneY";
			w = "SafezoneW";
			h = "SafezoneH";
			colorBackground[] = {0.7, 0.7, 0.7, 0.8};
		};
		
		class TitleBackground : RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.8])"};
			idc = 1080;
			x = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class MainBackground : RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = 1081;
			x = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			y = "SafezoneY + (6.1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "12.8 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
	};
	
	class controls {
		class Title : RscTitle {
			style = 0;
			y = "SafezoneY + (5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1000;
			text = $STR_DISP_TAGS_TITLE;
			x = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "20 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		};
		
		class TextUnused : RscText {
			style = 2;
			y = "SafezoneY + (6.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1001;
			text = $STR_DISP_TAGS_UNUSED;
			x = "10.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "8.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0, 0, 0, 1};
		};
		
		class TextUsed : RscText {
			style = 2;
			y = "SafezoneY + (6.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			idc = 1002;
			text = $STR_DISP_TAGS_USED;
			x = "20.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "8.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			colorBackground[] = {0, 0, 0, 1};
		};
		
		class ButtonAdd : RscActiveText {
			idc = 103;
			style = 48;
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			y = "SafezoneY + (10.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			text = "\A3\Ui_f\data\GUI\RscCommon\RscHTML\arrow_right_ca.paa";
			x = "19.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "Add tag.";
		};
		
		class ButtonRemove : RscActiveText {
			idc = 104;
			style = 48;
			color[] = {1, 1, 1, 0.7};
			colorActive[] = {1, 1, 1, 1};
			y = "SafezoneY + (13 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			text = "\A3\Ui_f\data\GUI\RscCommon\RscHTML\arrow_left_ca.paa";
			x = "19.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "1.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1.5 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "Remove tag.";
		};
		
		class ListUnusedTags : RscListBox {
			idc = 101;
			y = "SafezoneY + (7.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x = "10.2 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "8.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_A3_RscDisplayPublishMissionSelectTags_ListUnusedTags_tooltip";
		};
		
		class ListUsedTags : RscListBox {
			idc = 102;
			y = "SafezoneY + (7.3 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x = "20.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "8.9 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "11 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_A3_RscDisplayPublishMissionSelectTags_ListUsedTags_tooltip";
		};
		
		class ButtonOK : RscButtonMenuOK {
			y = "SafezoneY + (19 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x = "23.75 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_A3_RscDisplayPublishMissionSelectTags_ButtonOK_tooltip";
		};
		
		class ButtonCancel : RscButtonMenuCancel {
			y = "SafezoneY + (19 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))";
			x = "10 * 			(			((safezoneW / safezoneH) min 1.2) / 40) + 			(safezoneX)";
			w = "6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
			h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
			tooltip = "$STR_A3_RscDisplayPublishMissionSelectTags_ButtonCancel_tooltip";
		};
	};
};