#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <sstream>
using namespace std;

string vector_to_string(vector<int> vec)
{
		ostringstream oss;
		copy(vec.begin(), vec.end(), ostream_iterator<int>(oss));
		return oss.str();
}

string factorial(int factorial) 
{
	if (factorial < 0) 
		return "";
	else 
	{
		vector<int> vec(500, 0);
		vec[0] = 1;
		for (int i = 1; i <= factorial; i++)
		{
			for (int j = 0; j < 499; j++)
			{
				vec[j] *= i;
			}
			for (int j = 0; j < 499; j++)
			{
				if (vec[j] >= 10)
				{
					vec[j + 1] += vec[j] / 10;
					vec[j] %= 10;
				}
			}
		}
		int i = 0;
		string str = vector_to_string(vec);
		reverse(str.begin(), str.end());
		while (str[i] == '0') i++;
		str.erase(str.begin(), str.begin() + i);

		return str;
	}
}

int main()
{
	cout << factorial(25);
}
