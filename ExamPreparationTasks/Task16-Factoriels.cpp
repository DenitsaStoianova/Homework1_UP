// Task16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int fact(int num)
{
	int fact = 1;
	for (int i = 1; i <= num; i++)
	{
		fact *= i;
	}

	return fact;
}

int sumOfFact(double num)
{
	int sum = 0;
	for (int i = 0; fact(i) <= num; i++)
	{
		sum += fact(i);
	}

	return sum;
}

void printMatrix(double matrix[][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i >= j)
			{
				matrix[i][j] = sumOfFact(matrix[i][j]);
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	double matrix[3][3];

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> matrix[i][j];
		}
	}

	printMatrix(matrix);

	return 0;
}
