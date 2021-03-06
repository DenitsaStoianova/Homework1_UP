// Task5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Задача за съществуване:
	// дали десетичният запис на цяло число n съдържа цифрата k

	int number, digit;
	cin >> number >> digit;

	bool flagForDigit = false;
	do
	{
		int lastDigit = number % 10;
		if (lastDigit == digit)
		{
			flagForDigit = true;
		}
		number /= 10;

	} while (number && !flagForDigit);

	cout << (flagForDigit ? "Yes" : "No") << endl;

	return 0;
}
