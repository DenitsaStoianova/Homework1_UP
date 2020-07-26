// Task17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int myStrLen(char * str)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	return count;
}

void myStrCat(char * left, char * right)
{
	int index = myStrLen(left);

	int i;
	for (i = 0; right[i] != '\0'; i++)
	{
		left[index + i] = right[i];
	}

	left[index + i] = '\0';
}

void myStrCpy(char * first, char * second)
{
	int i;
	for (i = 0; second[i] != '\0'; i++)
	{
		first[i] = second[i];
	}

	first[i] = '\0';
}

int main()
{
	char string1[100];
	cin >> string1;

	char string2[100];
	cin >> string2;

	return 0;
}
