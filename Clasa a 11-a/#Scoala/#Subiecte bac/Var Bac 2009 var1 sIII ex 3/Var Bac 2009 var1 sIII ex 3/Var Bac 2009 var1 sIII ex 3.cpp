// Var Bac 2009 var1 sIII ex 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int n, a;
	bool ok = false;
	ifstream bac("bac.txt");
	cout << "n = "; cin >> n;
	while (!bac.eof())
	{
		bac >> a;
		if (a % n == 0)
		{
			cout << a << " ";
			ok = true;
		}
	}
	if (ok == false)
		cout << "NU EXISTA\n";
	bac.close();
    return 0;
}

