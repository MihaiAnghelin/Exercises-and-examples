#include "pch.h"
#include <iostream>

using namespace std;

void vector(int v[], int n)
{
	n -= 1;
	int h = 0;
	for (int i = 2 * n; i >= 0; i -= 2)
	{
		v[h++] = i;
	}
}

int main()
{
	int vec[20], n = 6;
	vector(vec, n);
	for (int i = 0; i < n; i++)
	{
		cout << vec[i]<< " ";
	}
}