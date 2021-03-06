// Task10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Транспониране на квадратна матрица:

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

	// трябва да обходим само елементите, които се намират над главния диагонал (без него)
	for (int i = 0; i < numOfMatrixElements - 1; i++)
	{
		for (int j = i + 1; j < numOfMatrixElements; j++)
		{
			int temp = matrix[i][j];
			matrix[i][j] = matrix[j][i];
			matrix[j][i] = temp;
		}
	}

	cout << "Transposed matrix: " << endl;
	for (int i = 0; i < numOfMatrixElements; i++)
	{
		for (int j = 0; j < numOfMatrixElements; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
