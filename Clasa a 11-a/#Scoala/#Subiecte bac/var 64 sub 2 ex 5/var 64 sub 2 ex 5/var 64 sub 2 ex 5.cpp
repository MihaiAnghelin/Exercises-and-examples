// var 64 sub 2 ex 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str[202];
	cin.get(str, 202);
	strcat(str, " ");
	int i = 0, nr = 0, a, b;
	while (str[i] != ' ')
		i++;
	if (strchr("AEIOUaeiou", str[0]) != 0 && strchr("AEIOUaeiou", str[i - 1]) != 0)
		nr++;
	for (i++; i < strlen(str); i++)
	{
		if (str[i] == ' ') 
		{
			a = i;
			while (str[i] != ' ')
				i++;
			if (strchr("AEIOUaeiou", str[a + 1]) != 0 && strchr("AEIOUaeiou", str[i - 1]) != 0)
				nr++;
		}
	}
	if (nr == 0) cout << "NU EXISTA";
	else cout << nr;
}