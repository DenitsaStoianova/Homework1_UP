// Task06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

double findAverageSum(int num1, int num2)
{
	return (num1 + num2) / 2;
}

int findIndex(double * arr, int size)
{
	int index = -1;
	for (int i = 0; i < size; i++)
	{
		if (i == 0)
		{
			if (arr[0] == arr[1] / 2)
			{
				index = i;
			}
		}
		else if (findAverageSum(arr[i - 1], arr[i + 1]) == arr[i])
		{
			index = i;
		}
		else if (i == size - 1)
		{
			if (arr[size - 1] == arr[size - 2] / 2)
			{
				index = i;
			}
		}
		
	}

	return index;
}

const int SIZE = 100;

int main()
{
	cout << "Number of elements: ";
	int numberOfElements;
	cin >> numberOfElements;

	double arr[SIZE];

	for (int i = 0; i < numberOfElements; i++)
	{
		cin >> arr[i];
	}

	cout << findIndex(arr, numberOfElements) << endl;

	return 0;
}
