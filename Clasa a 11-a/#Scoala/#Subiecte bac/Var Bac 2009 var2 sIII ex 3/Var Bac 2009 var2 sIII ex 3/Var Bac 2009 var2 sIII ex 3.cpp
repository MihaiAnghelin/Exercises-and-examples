// Var Bac 2009 var2 sIII ex 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	ifstream nr("NR.TXT");
	int a, i = -1, v[99];
	bool ok = false;
	while (!nr.eof())
	{
		nr >> a;
		if (a > 0) 
		{
			v[++i] = a;
			ok = true;
		}
	}
	for (int h = 0; h < i; h++)
		for (int j = 0; j < i; j++)
			if (v[j] > v[j + 1])
			{
				v[j] = v[j] + v[j + 1];
				v[j + 1] = v[j] - v[j + 1];
				v[j] = v[j] - v[j + 1];
			}
	if (ok == true)
		for (int j = 0; j <= i; j++)
			cout << v[j] << " ";
	else
		cout << "NU EXISTA\n";
	nr.close();
    return 0;
}

