// Task09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int countDigits(char * str)
{
	if (str[0] == '\0')
	{
		return 0;
	}

	if ((int)str[0] >= 48 && (int)str[0] <= 57)
	{
		return 1 + countDigits(str + 1);
	}

	return countDigits(str + 1);
}

int main()
{
	char string[SIZE];
	cin >> string;

	cout << "Digits count is: " << countDigits(string) << endl;

	return 0;
}
