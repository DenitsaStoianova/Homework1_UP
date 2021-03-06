// Task07-SecondMatrix.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

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

	int secondMatrix[SIZE][SIZE];
	int maxElements[5];

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			for (int k = 0; k < 5; k++) 
			{
				maxElements[k] = 0;
			}

			if (matrix[i][j] < matrix[i - 1][j] && i - 1 >= 0)
			{
				maxElements[0] = matrix[i - 1][j];
			}

			if (matrix[i][j] < matrix[i + 1][j] && i + 1 < size)
			{
				maxElements[1] = matrix[i + 1][j];
			}

			if (matrix[i][j] < matrix[i][j - 1] && j - 1 <= 0)
			{
				maxElements[2] = matrix[i][j - 1];
			}

			if (matrix[i][j] < matrix[i][j + 1] && j + 1 < size)
			{
				maxElements[3] = matrix[i][j + 1];
			}

			//else 
			maxElements[4] = matrix[i][j];

			int biggestInMaxElements = maxElements[0];
			for (int k = 0; k < 5; k++)
			{
				if (biggestInMaxElements < maxElements[k])
				{
					biggestInMaxElements = maxElements[k];
				}
			}

			secondMatrix[i][j] = biggestInMaxElements;
		}
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << secondMatrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
