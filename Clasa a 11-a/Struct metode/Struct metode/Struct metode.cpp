// Struct metode.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

struct vrajitor
{
	int viata;
	int inaltimea;
	int spell_power()
	{
		return viata * inaltimea;
	}
}a;

int main()
{
	a.viata = 5;
	a.inaltimea = 6;
    std::cout << a.spell_power();
}