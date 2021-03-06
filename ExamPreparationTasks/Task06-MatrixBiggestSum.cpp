// Task06-MatrixBiggestSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int findMaxRowSumIndex(int matrix[][SIZE], int size)
{
	int currentRowSum;
	int maxRowSumIndex = 0;
	int maxRowSum = 0;

	for (int i = 0; i < size; i++)
	{
		currentRowSum = 0;
		for (int j = 0; j < size; j++)
		{
			currentRowSum += matrix[i][j];

			//setting initial values, only on first iteration
			if (i == 0)
			{
				maxRowSum = currentRowSum;
				maxRowSumIndex = i;
			}
			else
			{
				if (currentRowSum > maxRowSum)
				{
					maxRowSum = currentRowSum;
					maxRowSumIndex = i;
				}
			}
		}
	}
	return maxRowSumIndex + 1;
}

int findMaxColSumIndex(int matrix[][SIZE], int size)
{
	int currentColSum;
	int maxColSumIndex = 0;
	int maxColSum = 0;

	for (int j = 0; j < size; j++)
	{
		currentColSum = 0;
		for (int i = 0; i < size; i++)
		{
			currentColSum += matrix[i][j];


			//setting initial values, only on first iteration
			if (i == 0)
			{
				maxColSum = currentColSum;
				maxColSumIndex = i;
			}
			else
			{
				if (currentColSum > maxColSum)
				{
					maxColSum = currentColSum;
					maxColSumIndex = i;
				}
			}
		}
	}
	return maxColSumIndex + 1;
}

int main()
{
	cout << "Enter matrix size: ";
	int size;
	cin >> size;

	int matrix[SIZE][SIZE];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cout << "Row with max sum: " << findMaxRowSumIndex(matrix, size) << endl;
	cout << "Col with max sum: " << findMaxColSumIndex(matrix, size) << endl;

	return 0;
}
