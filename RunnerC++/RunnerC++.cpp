#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

void gotoXY(int column, int line);


void figure(int line1, int line2, int line3)
{
	gotoXY(15, line1);
	cout << " @_@" << endl;
	gotoXY(15, line2);
	cout << "--|--" << endl;
	gotoXY(15, line3);
	cout << " / \\ " << endl;
}

void field()
{
	const int len = 119; // length of console
	char str[] = "";
	for (int i = 0; i < len; i++)
	{
		str[i] = '-';
	}
	cout << str << endl;
}

int main()
{
	system("COLOR 09");
	int i = 0;
	int line;
	cout << "Line?" << endl << '>';
	cin >> line;
	system("cls");
	while (true)
	{
		gotoXY(0, line);
		field();
		if (GetAsyncKeyState(VK_SPACE))
		{
			figure(line - 6, line - 5, line - 4);
		}
		else
		{
			figure(line - 3, line - 2, line - 1);
		}
		system("cls");
	}
	system("pause");
	return 0;
}