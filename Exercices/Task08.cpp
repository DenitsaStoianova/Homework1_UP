// Task8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	// Дали цифрите на едно естествено число образуват строго нарастваща редица:

	int number;
	cin >> number;

	bool flag = true;

	while (number >= 10 && flag)
	{
		if (number % 10 <= number / 10 % 10)
		{
			flag = false;
		}

		number /= 10;
	}

	cout << (flag ? "Yes" : "No") << endl;
	return 0;
}
