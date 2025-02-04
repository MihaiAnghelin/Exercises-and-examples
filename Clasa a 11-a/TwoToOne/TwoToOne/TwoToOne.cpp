// TwoToOne.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class TwoToOne
{
public:
	string s1,s2;
	static string longest(const string &s1, const string &s2)
	{
		string s3 = s1 + s2;
		sort(s3.begin(), s3.end());
		for (int j = 0; j < s3.length(); j++)
		{
			while (s3[j] == s3[j + 1])
				s3.erase(j+1,1);
		}
		return s3;
	}
};

int main()
{
	TwoToOne a;
	a.s1 = "loopingisfunbutdangerous";
	a.s2 = "lessdangerousthancoding";
	cout << a.longest (a.s1, a.s2);
}
