// Task12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Най-малката цифра на дадено число:

	int number;
	cin >> number;

	int minDigit = number % 10;
	while (number != 0)
	{
		int currentLastDigit = number % 10;
		if (currentLastDigit < minDigit)
		{
			minDigit = currentLastDigit;
		}
		number /= 10;
	}

	cout << "Min digit: " << minDigit << endl;
	return 0;
}
