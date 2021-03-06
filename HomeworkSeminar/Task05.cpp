// Task05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num1, num2, sumOfDivisors = 0, countPrimeNumbers = 0;
	cin >> num1 >> num2;

	for (int i = num1; i <= num2; i++)
	{
		int numberCopy = i;
		for (int divisor = 1; divisor < numberCopy; divisor++)
		{
			if (numberCopy % divisor == 0)
			{
				sumOfDivisors += divisor;
			}
		}

		bool isPrimeFlag = true;
		for (int j = 2; j <= numberCopy / 2; j++)
		{
			if (numberCopy % j == 0)
			{
				isPrimeFlag = false;			
				break;
			}
		}

		if (isPrimeFlag)
		{			
			countPrimeNumbers++;
		}
				
	}

	cout << countPrimeNumbers << endl;

	return 0;
}
