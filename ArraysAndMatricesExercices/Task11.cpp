// Task11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Oбхождане на елементи над главния диагонал, включително и него

	cout << "Number of matrix elements: ";
	int numOfMatrixElements;
	cin >> numOfMatrixElements;

	int matrix[SIZE][SIZE];

	for (int i = 0; i < numOfMatrixElements; i++)
	{
		for (int j = 0; j < numOfMatrixElements; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cout << "Elements: " << endl;
	for (int i = 0; i < numOfMatrixElements; i++)
	{
		for (int j = i; j < numOfMatrixElements; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
