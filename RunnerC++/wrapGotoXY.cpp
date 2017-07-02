#include "stdafx.h"
#include <Windows.h>

void gotoXY(int column, int line)
{
	/*
	wrap cursor position.
	param: column - column cursor position
	param: line - line cursor position
	*/
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}