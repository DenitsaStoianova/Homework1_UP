// Task04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

void convertNum(int number)
{
	int arr[SIZE];
	int index = 0;

	while (number != 0)
	{
		arr[index] = number % 2;
		number /= 2;
		index++;
	}

	for (int i = index - 1; i >= 0; i--)
	{
		cout << arr[i];
	}
}

void print(int * arr, int size)
{

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " -> ";
		convertNum(arr[i]);
		cout << endl;
	}
}

int main()
{
	cout << "Number of elements: ";
	int numberOfElements;
	cin >> numberOfElements;

	int arr[SIZE];

	for (int i = 0; i < numberOfElements; i++)
	{
		cin >> arr[i];
	}

	print(arr, numberOfElements);

	return 0;
}
