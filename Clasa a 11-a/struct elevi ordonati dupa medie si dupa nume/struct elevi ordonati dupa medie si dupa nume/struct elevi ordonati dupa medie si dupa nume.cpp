#include "pch.h"
#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

struct Elev
{
	int n[5];
	int notaTeza;
	float medie;
	char nume[15], prenume[15];
	Elev()
	{
		n[0] = 0;
		n[1] = 0;
		n[2] = 0;
		n[3] = 0;
		n[4] = 0;
	}
};

int main()
{
	Elev v[30], aux;

#pragma region Citire
	
	int n;
	cout << "Introduceti numarul de elevi din clasa: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nume elev " << i + 1 << ": ";
		cin >> v[i].nume;
		cout << "Preume: ";
		cin >> v[i].prenume;
		cout << "Nr de note: ";
		int nrNote, sum = 0;
		cin >> nrNote;
		for (int j = 0; j < nrNote; j++)
		{
			cout << "Nota " << j+1 << ": ";
			cin >> v[i].n[j];
			sum += v[i].n[j];

		}
		cout << "Nota din teza: ";
		cin >> v[i].notaTeza;
		v[i].medie = ((sum / 5) * 3 + v[i].notaTeza) / 4;
	}
#pragma endregion

#pragma region Bubblesort dupa medie
	for (int i = 0; i < n-1; i++) {
		for (int j = i; j < n - 1; j++)
		{
			if (v[j].medie < v[j + 1].medie) {
				aux = v[j];
				v[j] = v[j + 1];
				v[j + 1] = aux;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << v[i].nume << " " << v[i].prenume << " " << v[i].medie<<endl;
	}
#pragma endregion
	

	// SORTARE ALFABETICA NUME/PRENUME + TRATARE CAZ 2 PRENUME


}

