#include "pch.h"
#include <iostream>

using namespace std;

float sum(float v[], int k)
{
	float s = 0;
	for (int i = 0; i <= k; i++)
	{
		s += v[i];
	}
	return s;
}

int main()
{
	int nr, m, n;
	float v[50];
	cout << "Numarul de elemente = "; cin >> nr;
	for (int i = 0; i < nr; i++)
	{
		cout << "v[" << i << "] = ";
		cin >> v[i];
	}
	cout << "Indicele m = "; cin >> m;
	cout << "Indicele n = "; cin >> n;
	cout << "Suma elementelor din intervalul [m, n] este: " << sum(v, n) - sum(v, m) + v[m];
}