// Task01.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

double fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}

void test(int n)
{
	cout << "Before: " << n << endl;

	if (n > 0)
	{
		test(n - 1);
	}

	cout << "After: " << n << endl;
}

int main()
{
	int num;
	cin >> num;

	cout << fib(num) << endl;

	test(num);

	return 0;
}
