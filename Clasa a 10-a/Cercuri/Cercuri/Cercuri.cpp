// Cercuri.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>

using namespace std;

#define PI (3.141592653589793)
#define HALF_PI (1.570796326794897)

class cerc
{
public:
	float x, y;
	float r;
private:
	double arieaprox();
	void arie();
	double lungimeaprox();
	void lungime();
};

double cerc::arieaprox()
{
	return PI * r * r;
}

void cerc::arie()
{
	/*printf("%f.2 * PI", r*r);*/
	cout <<"Arie = "<< r * r << " * PI" << endl;
}

double cerc::lungimeaprox()
{
	return 2 * PI * r;
}

void cerc::lungime()
{
	printf("%f.2 * PI", 2*r);
}

float distanta(cerc A, cerc B)
{
	return sqrt((B.x - A.x)*(B.x - A.x) + (B.y - A.y)*(B.y - A.y));
}

bool intersectie(cerc A, cerc B)
{
	if (distanta(A, B) < (A.r + B.r))
		return 1;
	else return 0;
}

int main()
{
	cerc C1,C2;
	cout << "Coordonate centru C1: " << endl << "x = "; cin >> C1.x; cout << "y = "; cin >> C1.y;
	cout << "Raza cercului: r1 = "; cin >> C1.r;
	cout << "Coordonate centru C2: " << endl << "x = "; cin >> C2.x; cout << "y = "; cin >> C2.y;
	cout << "Raza cercului: r2 = "; cin >> C2.r;
	if (intersectie(C1, C2) == 1)
		cout << "Cercurile se intersecteaza.\n";
	else
		cout << "Cercurile nu se intersecteaza.\n";

    return 0;
}

