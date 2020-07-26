// Task1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int number;
	bool flag = false;

	do
	{
		cin >> number;

	} while (number >= 0);

	for (int index = 10; index < 500; index++)
	{
		number = index;
		while (number && !flag)
		{
			int lastElement = number % 10;
			// flag = (lastElement % 2 == 0) ? true : false
			if (lastElement % 2 != 0)
			{
				flag = true;
			}
			number /= 10;
		}

		if (flag)
		{
			cout << "No" << endl;
		}
		else
		{
			cout << "Yes" << endl;
		}

		flag = false;
	}

	return 0;
}
