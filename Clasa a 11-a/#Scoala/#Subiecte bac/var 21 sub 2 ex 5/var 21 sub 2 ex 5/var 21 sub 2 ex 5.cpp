// var 21 sub 2 ex 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	getline(cin, str);
	for (int i = 0; i < str.length() - 1; i++)
		if (str[i] == str[i + 1] && str[i] != '*')
			cout << str[i] << str[i + 1] << endl;
}
