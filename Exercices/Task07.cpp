// Task6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Задачи "за всяко":
    // Проверка дали естествено число е просто

	int number;
	cin >> number;

	bool isPrimeFlag = true;
	for (int i = 2; i <= number / 2; i++)
	{
		if (number % i == 0)
		{
			isPrimeFlag = false;
			break;
		}
	}

	cout << (isPrimeFlag ? "Yes" : "No") << endl;

	return 0;
}



