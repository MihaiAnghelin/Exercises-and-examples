// Cuvinte mai mari lexicografic decat primul.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b, c="";
	cout << "Introduceti cuvantul: ";
	cin >> a;
	cout << "Introduceti cuvantul: ";
	cin >> b;
	while (b != "stop")
	{
		if (a.compare(b) < 0)
			c += (b + ' ');
		cout << "Introduceti cuvantul: "; cin >> b;
	}
	if (c == "") cout << "Nu exista niciun cuvant mai mare decat primul.";
	else
		cout <<"Cuvintele mai mari decat primul sunt: "<< c;

}