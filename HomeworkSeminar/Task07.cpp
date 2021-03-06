// Task07.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int num, year;
	cin >> num >> year;

	if (num >= 1 && num <= 12)
	{

		bool year4 = year % 4 == 0;
		bool year100 = year % 100 == 0;
		bool year400 = year % 400 == 0;

		bool isYearLeap = (year4 && !year100) || year400;

		switch (num)
		{
		case 1: 
			cout << "January " << 31 << " days" << endl;
			break;
		case 2:
			cout << "February " << 28 + isYearLeap << " days" << endl;
			break;
		case 3:
			cout << "March " << 31 << " days" << endl;
			break;
		case 4:
			cout << "April " << 30 << " days" << endl;
			break;
		case 5:
			cout << "May " << 31 << " days" << endl;
			break;
		case 6:
			cout << "June " << 30 << " days" << endl;
			break;
		case 7:
			cout << "July " << 31 << " days" << endl;
			break;
		case 8: 
			cout << "August " << 31 << " days" << endl;
			break;
		case 9:
			cout << "September " << 30 << " days" << endl;
			break;
		case 10:
			cout << "Ostober " << 31 << " days" << endl;
			break;
		case 11:
			cout << "November " << 30 << " days" << endl;
			break;
		case 12:
			cout << "December " << 31 << " days" << endl;
			break;
		default:
			cout << "Invalid input!" << endl;
			break;
		}
	}
	else
	{
		cout << "Number must be in the range [1..12]!" << endl;
	}

	return 0;
}
