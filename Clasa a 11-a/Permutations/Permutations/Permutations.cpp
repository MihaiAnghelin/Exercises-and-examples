#include "pch.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int x[30], n, m;
void shift(string &str)
{
	str += str[str.length() - 1];
	for (int i = str.length() - 2; i > 0; i--)
	{
		str[i] = str[i - 1];
	}
}

void init(int k)
{
	x[k] = 0;
}
int exista(int k)
{
	return (x[k] < n);
}
bool valid(int k)
{
	bool ev = true;
	for (int i = 1; i < k; i++)
	{
		if (x[i] == x[k])
			ev = false;
	}
	return ev;
}
bool solutie(int k)
{
	return (k == n);

}
string tipar(string str)
{
	string str2 = "";
	for (int i = 1; i <= n; i++)
		str2 += str[x[i]];
	return str2;
}
vector<string> permutations(string str)
{
	vector<string> vec;
	shift(str);
	int k = 1;
	init(k);
	while (k > 0)
	{
		if (exista(k))
		{
			x[k]++;
			if (valid(k))
			{
				if (solutie(k))
				{
					vec.push_back(tipar(str));
				}
				else
				{
					k++;
					init(k);
				}
			}
		}
		else
		{
			k--;
		}
	}
	return vec;
}
int main()
{
	string str;
	cin >> str;
	n = str.length();
	vector<string> vec = permutations(str);
	int j = 1;
	for (string i : vec)
	{
		cout << i << "     " << j++ << endl;
	}
}