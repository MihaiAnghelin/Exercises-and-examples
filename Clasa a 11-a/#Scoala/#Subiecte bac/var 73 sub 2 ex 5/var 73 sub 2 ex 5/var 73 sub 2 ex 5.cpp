// var 73 sub 2 ex 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str[256];
	int nrSpatii = 0, nrCuv = 0;
	cin.get(str, 256);
	if (strchr("aeiou", str[0]) != 0) nrCuv++;
	for (int i = 1; i < strlen(str); i++)
	{
		if (str[i] == ' ')
		{
			nrSpatii++;
			if (strchr("aeiou", str[i+1]) != 0) nrCuv++;
		}
	}
	cout << nrSpatii + 1 << " " << nrCuv;
}