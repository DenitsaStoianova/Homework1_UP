// Task03-ArrPairs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int sumOfDivisors(int num)
{
	int sum = 0;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}

	return sum;
}

const int SIZE = 100;

int main()
{
	cout << "Enter number of elements: ";
	int numOfEl;
	cin >> numOfEl;

	int arr[SIZE];

	for (int i = 0; i < numOfEl * 2; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < numOfEl * 2 - 1; i += 2)
	{
		int sum1 = sumOfDivisors(arr[i]);
		int sum2 = sumOfDivisors(arr[i + 1]);

		if (sum1 == arr[i + 1] && sum2 == arr[i])
		{
			cout << "Are Amicable pairs!" << endl;
		}
		else
		{
			cout << "Are NOT Amicable pairs!" << endl;
		}
	}

	return 0;
}
