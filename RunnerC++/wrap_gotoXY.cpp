#include "stdafx.h"
#include <Windows.h>


void gotoXY(int column, int line)
{
	/* #include <Windows.h>
	обертка позиции курсора.
	param: column - позиция курсора в колонке
	param: line - позиция курсора в линии
	*/
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}