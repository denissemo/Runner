#include "stdafx.h"
#include <iostream>
#include <Windows.h>
using namespace std;

void gotoXY(int column, int line);
void field(int c);

void figure(int line1, int line2, int line3)
{
	gotoXY(13, line1);
	cout << " @_@" << endl;
	gotoXY(13, line2);
	cout << "--|--" << endl;
	gotoXY(13, line3);
	cout << " / \\ " << endl;
}


int main()
{
	system("COLOR 09");
	int line;
	cout << "Line?" << endl << '>';
	cin >> line;
	system("cls");
	int count = 0;
	while (true)
	{
		gotoXY(0, line);
		field(count);
		if (GetAsyncKeyState(VK_SPACE))
		{
			figure(line - 6, line - 5, line - 4);
		}
		else
		{
			figure(line - 3, line - 2, line - 1);
		}
		count++;
		system("cls");
	}
	system("pause");
	return 0;
}