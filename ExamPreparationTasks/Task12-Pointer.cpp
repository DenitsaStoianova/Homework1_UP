// Task12-Pointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int *findFirstPositive(int * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			return arr + i;
		}
	}
	return NULL;
}

const int SIZE = 100;

int main()
{
	// указател към първия положителен елемент в даден масив (или NULL/nullptr)

	int numOfEl;
	cin >> numOfEl;

	int arr[SIZE];

	for (int i = 0; i < numOfEl; i++)
	{
		cin >> arr[i];
	}

	cout << findFirstPositive(arr, numOfEl) << endl;

	return 0;
}
