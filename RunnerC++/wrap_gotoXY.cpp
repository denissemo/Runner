#include "stdafx.h"
#include <Windows.h>


void gotoXY(int column, int line)
{
	/* #include <Windows.h>
	������� ������� �������.
	param: column - ������� ������� � �������
	param: line - ������� ������� � �����
	*/
	COORD coord;
	coord.X = column;
	coord.Y = line;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}