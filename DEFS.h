#ifndef DEFS_H
#define DEFS_H

#include "CMUgraphicsLib\CMUgraphics.h"

//This file contains some global constants and definitions to be used in the project.
enum ActionType //The actions supported (you can add more if needed)
{
	DRAW_RECT,		//Draw Rectangle
	DRAW_TRI,
	DRAW_CIRCLE,
	DRAW_HEXAGON,
	DRAW_SQUARE,
	EXIT,			//Exit
	SwitchtoDrawMode,	//Switch interface to Draw mode
	SwitchtoPlayMode, //Switch interface to Play mode
	EMPTY,			//A click on empty place in the toolbar
	DRAWING_AREA,	//A click on the drawing area
	STATUS,   //A click on the status bar
	ChangeFillingColour,
	ChangeDrawingColour,
	Black,
	Red,
	Blue,
	Green,
	Yellow,
	Orange,
	MoveFigure,
	DeleteFigure,
	Undo,
	Redo,
	Reset,
	StartRecording,
	StopRecording,
	PlayRecording,
	Save,
	Load,
	PickbyFigure,
	PickbyColour,
	PickbyFigure_colour,
	EXITT,
	Selectt,
	none,
};

struct Point	//To be used for figures points
{
	int x, y;
};

struct GfxInfo	//Graphical info of each figure (you may add more members)
{
	color DrawClr;	//Draw color of the figure
	color FillClr;	//Fill color of the figure
	bool isFilled;	//Figure Filled or not
	int BorderWdth;	//Width of figure borders

};

#endif