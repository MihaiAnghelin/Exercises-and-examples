// Playing with digits.cpp : Defines the entry point for the console application.
// https://www.codewars.com/kata/playing-with-digits/train/cpp

#include "stdafx.h"
#include<iostream>
#include <math.h>

class DigPow
{
public:
	static int digPow(int n, int p);
};


int main()
{
	DigPow num;
	int a = num.digPow(89, 1);
	std::cout << a;
}

int DigPow::digPow(int n, int p)
{
	int m = n;
	int nr_cif = -1;
	int cif[20];
	int a = 0;
	while (m)
	{
		nr_cif++;
		cif[nr_cif] = m % 10;
		m /= 10;
	}
	for (int i = nr_cif; i >= 0; i--)
		a += pow(cif[i], p++);
	if (a%n == 0)
		return a / n;
	else
		return -1;
}
