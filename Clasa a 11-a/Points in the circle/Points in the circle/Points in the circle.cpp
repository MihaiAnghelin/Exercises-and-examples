//You have the radius of a circle with the center in point (0,0).
//
//Write a function that calculates the number of points in the circle where(x, y) - the cartesian coordinates of the points - are integers.
//
//Example: for radius = 2 the result should be 13.
//
//	0 <= radius <= 1000

#include "pch.h"
#include <iostream>

using namespace std;

int pointsNumber(int radius)
{
	/*bool ok = false;
	int r = 5, a1 = 1, a2 = 3;
	for (int i = 2; i <= radius; i++) {
		if (ok == false) {
			r += 4 + 4 * a1;
			ok = true;
			a1 += a2;
		}
		else
		{
			r += 4 + 4 * a2;
			ok = false;
			a2 += a1;
		}
	}
	return r;*/
	return (radius * 2 + 1)*(radius * 2 + 1) - 4 * (radius * 2 - 1);
}

int main()
{
	int raza;
	cout << "Introduceti raza: "; cin >> raza;
	cout << "Exista " << pointsNumber(raza) << " puncte in interiorul cercului de raza " << raza << ".";
}
