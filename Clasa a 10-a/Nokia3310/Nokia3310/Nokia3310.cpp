// Nokia3310.cpp : Defines the entry point for the console application.
//https://www.codewars.com/kata/mr-safetys-treasures/train/cpp

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

string unlock(string str)
{
	string str2=str;
	for (int i = 0; i < str.length(); i++)
	{
		switch (str[i])
		{
		case 'a':
		case 'A':
		case 'b':
		case 'B':
		case 'c':
		case 'C':
			str2[i] = '2';
			break;
		case 'd':
		case 'D':
		case 'e':
		case 'E':
		case 'f':
		case 'F':
			str2[i] = '3';
			break;
		case 'g':
		case 'G':
		case 'h':
		case 'H':
		case 'i':
		case 'I':
			str2[i] = '4';
			break;
		case 'j':
		case 'J':
		case 'k':
		case 'K':
		case 'l':
		case 'L':
			str2[i] = '5';
			break;
		case 'm':
		case 'M':
		case 'n':
		case 'N':
		case 'o':
		case 'O':
			str2[i] = '6';
			break;
		case 'p':
		case 'P':
		case 'q':
		case 'Q':
		case 'r':
		case 'R':
		case 's':
		case 'S':
			str2[i] = '7';
			break;
		case 't':
		case 'T':
		case 'u':
		case 'U':
		case 'v':
		case 'V':
			str2[i] = '8';
			break;
		case 'w':
		case 'W':
		case 'y':
		case 'Y':
		case 'x':
		case 'X':
		case 'z':
		case 'Z':
			str2[i] = '9';
			break;
		}
	}
	return str2;
}

int main()
{
	string a = "Nokia";
	cout<<unlock(a);
	
}

