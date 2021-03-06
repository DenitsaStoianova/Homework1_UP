// Task06.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Да се изтрие елемент от масив по зададен индекс 
	// (елементите след него да се избутат наляво)

	cout << "Number of array elements: ";
	int numOfElements;
	cin >> numOfElements;

	int arr[SIZE];

	for (int i = 0; i < numOfElements; i++)
	{
		cin >> arr[i];
	}

	int index;
	cout << "Index to delete: ";
	cin >> index;

	// преместване на елементите след въведения индекс наляво 
	for (int i = index; i < numOfElements - 1; i++)
	{
		arr[i] = arr[i + 1];
	}

	cout << "Array with deleted element: ";
	for (int i = 0; i < numOfElements - 1; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
