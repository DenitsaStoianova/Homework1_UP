// Task12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int wellDepth, frogCount = 0, days;
	cin >> wellDepth;

	while (wellDepth != 0)
	{
		wellDepth--;
		frogCount++;
	}

	days = frogCount - 1;
	cout << "After " << days << " days." << endl;

	return 0;
}
