// Task07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Да се вмъкне елемент на указана позиция

	cout << "Number of array elements: ";
	int numOfElements;
	cin >> numOfElements;

	int arr[SIZE];

	for (int i = 0; i < numOfElements; i++)
	{
		cin >> arr[i];
	}

	int index;
	cout << "Index of element to add: ";
	cin >> index;

	int elementToAdd;
	cout << "Value of element to add: ";
	cin >> elementToAdd;

	// трябва да се обхожда наляво
	for (int i = numOfElements; i >= index; i--)
	{
		arr[i + 1] = arr[i];
	}

	// вмъкване на елемента
	arr[index] = elementToAdd;

	cout << "Array with added element: ";
	for (int i = 0; i <= numOfElements; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}
