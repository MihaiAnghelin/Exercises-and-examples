// ex 2 pag 38 IX-X.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int a, b, c, delta;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	delta = b * b - 4 * a*c;
	if (delta >= 0)
	{
		cout << "x1 = " << float((-1)*b + sqrt(delta)) / (2 * a)<<endl;
		cout << "x2 = " << float((-1)*b - sqrt(delta)) / (2 * a)<<endl;
	}
	else
	{
		cout << "x1 = " << setprecision(2) << fixed << float((-1)*b) / (2 * a) << " + i*" << sqrt((-1)*delta) / (2 * a) << endl;
		cout << "x1 = " << setprecision(2) << fixed << float((-1)*b) / (2 * a) << " - i*" << sqrt((-1)*delta) / (2 * a) << endl;
	}
}

