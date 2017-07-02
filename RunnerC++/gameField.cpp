#include "stdafx.h"
#include <iostream>
using namespace std;

void field(int c)
{
	// c - counter
	char line_1[] = "= = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = ";
	char line_2[] = " = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =";
	if (c % 2 == 0)
	{
		cout << line_1 << endl;
	}
	else
	{
		cout << line_2 << endl;
	}
}