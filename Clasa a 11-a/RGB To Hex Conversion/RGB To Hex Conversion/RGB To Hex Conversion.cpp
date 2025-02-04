#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class RGBToHex
{
public:
	
	static string b10_to_b16(int num)
	{
		if (num == 0) return "00";
		else {
			string d = "0123456789ABCDEF", res;
			while (num > 0) {
				res += d[num % 16];
				num /= 16;
			}
			if (res.length() == 1) res += "0";
			reverse(res.begin(), res.end());
			return res;
		}
	}
	static string rgb(int r, int g, int b)
	{
			if (r > 255) r = 255;
			if (r < 0) r = 0;
			if (g > 255) g = 255;
			if (g < 0) g = 0;
			if (b > 255) b = 255;
			if (b < 0) b = 0;
			return b10_to_b16(r) + b10_to_b16(g) + b10_to_b16(b);
	}

};

int main()
{
	RGBToHex a;
	cout << a.rgb(0, 0, 0);
}