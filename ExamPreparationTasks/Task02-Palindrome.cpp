// Task02-Palindrome.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int digitsCount(int number)
{
	int count = 0;

	while (number != 0)
	{
		count++;
		number /= 10;
	}

	return count;
}

int reverseNum(int num)
{
	int reversed = 0;

	while (num != 0)
	{
		reversed = reversed * 10 + num % 10;
		num /= 10;
	}

	return reversed;
}

bool isPalindrome(int num)
{
	int digits = digitsCount(num);
	int reversedNum = reverseNum(num);

	for (int i = 0; i < digits; i++)
	{
		if ((num / (int)pow(10, i)) % 10 != (reversedNum / (int)pow(10, i)) % 10)
		{
			return false;
		}
	}

	return true;
}

const int SIZE = 100;

int main()
{
	cout << "Enter number of elements: ";
	int numberOfElements;
	cin >> numberOfElements;

	int arr[SIZE];

	for (int i = 0; i < numberOfElements; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < numberOfElements; i++)
	{
		int reversed = reverseNum(arr[i]);
		int number = reversed + arr[i];

		if (isPalindrome(number))
		{
			cout << number << "is palindrome!" << endl;
		}
	}

	return 0;
}
