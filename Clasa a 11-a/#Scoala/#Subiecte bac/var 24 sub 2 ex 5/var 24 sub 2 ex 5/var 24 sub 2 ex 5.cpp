
// var 24 sub 2 ex 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b, c="";
	getline(cin, a);
	getline(cin, b);
	int i = 1;
	while (a[a.length() - i] == b[b.length() - i])
	{
		c += a[a.length() - i++];
		if (a.length() < i || b.length() < i) break;
	}
	reverse(c.begin(), c.end());
	if (c == "") cout << "NU EXISTA";
	else cout << c;
}