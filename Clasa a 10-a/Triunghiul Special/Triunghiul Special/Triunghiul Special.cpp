// Triunghiul Special.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void metoda1(int a, int b);
void metoda2(int a, int b);


int main()
{
	int m, n, nr,ok;
	
	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;
	do
	{
		cout << "Introduceti metoda: "; cin >> nr;
		switch (nr)
		{
		case 1:
			ok = 1; metoda1(m, n);
			break;
		case 2:
			ok = 1; metoda2(m, n);
			break;
		default: cout << "Introduceti 1 sau 2!" << endl << endl << endl; ok = 0;
			system("PAUSE"); //Pausing the screen until user hits a key
			system("cls"); //clear screen
		}
	} while (ok == 0);
	

    return 0;
}

void metoda1(int a, int b)
{
	int h = 1;
	for (int i = 0; i <= a; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << h << " ";
			h++;
			if (h == 10) h = 1;
		}
		cout << endl;
	}
	cout << endl;
}
void metoda2(int a, int b)
{
	int h = 9;
	for (int i = a; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << h << " ";
			h--;
			if (h == 0) h = 9;
		}
		cout << endl;
	}
	cout << endl;
}



