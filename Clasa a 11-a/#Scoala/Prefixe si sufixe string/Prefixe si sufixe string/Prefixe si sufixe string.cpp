// Prefixe si sufixe string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	cout << "Introduceti textul:\n";
	getline(cin,a);
	for (int i = 0; i < a.length(); i++)
	{
		for (int j = 0; j <= i; j++)
			cout << a[j];
		cout << endl;
	}
	for (int i = 0; i <= a.length(); i++)
	{
		for (int j = a.length()-i; j < a.length(); j++)
			cout << a[j];
		cout << endl;
	}
}