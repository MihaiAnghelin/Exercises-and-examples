// N=suma de K nr (35_pag41_mov).cpp : Defines the entry point for the console application.

// Se citesc k si n numere naturale. Daca este posibil, sa se scrie n ca suma de k numere naturale distincte,
// altfel sa se afiseze "IMPOSIBIL".

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cout << "n = "; cin >> n;
	cout << "k = "; cin >> k;
//	int	s = ((k - 2)*(k - 1)) / 2;
//	int	ultim = n - ((k - 2)*(k - 1)) / 2;
	if (n - ((k - 2)*(k - 1)) / 2 > ((k - 2)*(k - 1)) / 2)
	{
		cout << "n = ";
		for (int i = 0; i < k - 1; i++)
		{
			cout << i << " + ";
		}
		cout << n - ((k - 2)*(k - 1)) / 2 << "\n";
	}
	else
		cout << "IMPOSIBIL\n";
    return 0;
}

