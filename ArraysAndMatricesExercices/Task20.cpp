// Task20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

const int SIZE = 100;

int main()
{
	int numOfEl;
	cin >> numOfEl;

	int arr[SIZE];

	for (int i = 0; i < numOfEl; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < numOfEl; i++)
	{
		bool flag = true;
		while (arr[i] != 0)
		{
			if (arr[i] % 10 < arr[i] / 10 % 10)
			{
				flag = false;
				break;
			}
			arr[i] /= 10;
		}
		cout << (flag ? "Yes" : "No") << endl;
	}

	return 0;
}
