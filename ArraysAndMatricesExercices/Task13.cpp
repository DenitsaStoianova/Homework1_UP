// Task13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	// Oбхождане на елементи под главния диагонал
	// по редове, всеки ред отляво надясно

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

	cout << "Elements: ";
	for (int i = 0; i < numOfMatrixElements; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
