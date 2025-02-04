#include "pch.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>

using namespace std;

vector<int> string_to_vector(string myString)
{
    vector<int> vec;
    for (size_t i = 0; i < myString.size(); ++i)
    {                                   // This converts the char into an int and pushes it into vec
		vec.push_back(myString[i] - '0');  // The digits will be in the same order as before
    }
    return vec;
}
string vector_to_string(vector<int> vec)
{
	ostringstream oss;
	copy(vec.begin(), vec.end(), ostream_iterator<int>(oss));
	return oss.str();
}

string multiply(string a, string b) {
	if ((a.length()==1 && a[0]=='0')|| (b.length() == 1 && b[0] == '0'))
	{
		return "0";
	}
	else
	{
		vector<int> vecA, vecB, vecC(500, 0);
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		vecA = string_to_vector(a);
		vecB = string_to_vector(b);

		for (int i = 0; i < b.length(); i++)
		{
			for (int j = 0; j < a.length(); j++)
			{
				vecC[j + i] += vecA[j] * vecB[i];
			}
		}
		for (int j = 0; j < 499; j++)
		{
			if (vecC[j] >= 10)
			{
				vecC[j + 1] += vecC[j] / 10;
				vecC[j] %= 10;
			}
		}

	#pragma region Remove the 0s
		int i = 0;
		string str = vector_to_string(vecC);
		reverse(str.begin(), str.end());
		while (str[i] == '0') i++;
		str.erase(str.begin(), str.begin() + i);
#pragma endregion
		return str;
	}
}

int main()
{
	cout << multiply("0", "61");
}