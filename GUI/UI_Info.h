#ifndef UI_INFO_H
#define UI_INFO_H

#include "..\CMUgraphicsLib\CMUgraphics.h"

//User Interface information file.
//This file contains info that is needed by Input and Output classes to
//handle the user interface

enum GUI_MODE	//Graphical user interface mode
{
	MODE_DRAW,	//Drawing mode (startup mode)
	MODE_PLAY,	//Playing mode
};

enum DrawMenuItem //The items of the Draw menu (you should add more items)
{
	//Note: Items are **(ordered)** here as they appear in menu
	//If you want to change the menu items order, change the order here
	ITM_RECT,	//Rectangle item in menu
	ITM_SQUARE,
	ITM_TRIANGLE,
	ITM_HEXAGON,
	ITM_CIRCLE,
	//TODO: Add more items names here
	ITM_SELECTONE,
	ITM_MOVE,
	ITM_DELETE,
	ITM_CLEAR,
	ITM_UNDO,
	ITM_REDO,
	ITM_SAVE,
	ITM_LOAD,
	ITM_CHANGECOLOR,
	ITM_EXIT,	//Exit item

	
	DRAW_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum
	
};

enum PlayMenuItem //The items of the Play menu (you should add more items)
{
	//Note: Items are **(ordered)** here as they appear in menu
	//If you want to change the menu items order, change the order here
	
	//TODO: Add more items names here

	PLAY_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum
	
};

enum ColorPaletteItem
{
	COLOR_BLACK=35,
	COLOR_YELLOW,
	COLOR_ORANGE,
	COLOR_RED,
	COLOR_GREEN,
	COLOR_BLUE,

	colors =6
};





__declspec(selectany) //This line to prevent "redefinition error"

struct UI_Info	//User Interface Info.
{
	GUI_MODE InterfaceMode;
	
	int	width, height,	    //Window width and height
		wx, wy,			//Window starting coordinates
		StatusBarHeight,	//Status Bar Height
		ToolBarHeight,		//Tool Bar Height (distance from top of window to bottom line of toolbar)
		MenuItemWidth,    	//Width of each item in toolbar menu
		ColorPaletteWidthstart,
		ColorPaletteWidthend,
		ColorPaletteHeightstart,
		ColorPaletteHeightend,
		SqrSize,      //Square Size
		HexagonVertices,
		HexagonSize;


	color DrawColor;		//Drawing color
	color FillColor;		//Filling color
	color HighlightColor;	//Highlighting color
	color MsgColor;			//Messages color
	color BkGrndColor;		//Background color
	color StatusBarColor;	//Status bar color
	color ChangeColorPalette;
	int PenWidth;			//width of the pen that draws shapes

	/// Add more members if needed


}UI;	//create a global object UI

#endif