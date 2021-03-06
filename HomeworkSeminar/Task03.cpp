// Task03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int number, digit, sumOfPowers = 0, count = 0;
	cin >> number;
	
	int numberForCheck = number;
	
	int numberCopy = number;
	while (numberCopy != 0)
	{ 	
		numberCopy /= 10;
		++count;
	}

	while (number)
	{
		digit = number % 10;
		sumOfPowers += pow(digit, count);
		number /= 10;
	}

	if (sumOfPowers == numberForCheck)
	{
		cout << "is narcissistic" << endl;
	}
	else
	{
		cout << "is not narcsisstic" << endl;
	}

	return 0;
}
