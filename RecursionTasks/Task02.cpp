// Task02-factoriel.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int fact(int n)
{
	if (n > 1)
	{
		return n * fact(n - 1);
	}
	else
	{
		return 1;
	}
}

int main()
{
	int num;
	cin >> num;

	cout << "Factoriel: " << fact(num) << endl;

	return 0;
}
