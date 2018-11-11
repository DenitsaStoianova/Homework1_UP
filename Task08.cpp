// Task08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number, lastDigit, numDigitsCounter = 0, firstNumber, reversedNumber = 0;
	
	do
	{
		cin >> number;

	} while (number < 10 || number > 30000);

	firstNumber = number;

	do
	{
		lastDigit = number % 10;
		reversedNumber = (reversedNumber * 10) + lastDigit;
		number /= 10;

	} while (number != 0);

	if (reversedNumber == firstNumber)
	{
		cout << "Is a palindrome!" << endl;
	}
	else
	{
		cout << "Is not a palindrome!" << endl;
	}


	return 0;
}
