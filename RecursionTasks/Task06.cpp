// Task07-strLen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int strLen(char * str)
{
	if (str[0] == '\0')
	{
		return 0;
	}

	return 1 + strLen(str + 1);
}

int countSymbol(char * str, char ch)
{
	if (str[0] == '\0')
	{
		return 0;
	}

	if (str[0] == ch)
	{
		return 1 + countSymbol(str + 1, ch);
	}

	return countSymbol(str + 1, ch);
}

int main()
{
	char string[100];
	cin >> string;

	char symbol;
	cin >> symbol;

	cout << strLen(string) << endl;
	cout << countSymbol(string, symbol) << endl;

	return 0;
}
