// Task19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int ROWS_SIZE = 100;
const int COLS_SIZE = 100;

int main()
{
	// Копиране на матрица

	cout << "rows=";
	int rows;
	cin >> rows;

	cout << "cols=";
	int cols;
	cin >> cols;

	int matrix[ROWS_SIZE][COLS_SIZE];

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cin >> matrix[i][j];
		}
	}

	int helperMatrix[ROWS_SIZE][COLS_SIZE];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			helperMatrix[i][j] = matrix[i][j];
		}
	}

	cout << "Print helper matrix: " << endl;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << helperMatrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
