// BinarySearch.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// Simple solution to search if a value is in a list
int main()
{

	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int left;
	int middle;
	int right;
	int i = 0;
	int n = 10;
	int userValue;

	left = 0;

	right = n - 1;

	cout << "\nEnter a number to see if it is in the list: ";
	cin >> userValue;

	while (left <= right)
	{
		middle = (left + right) / 2;

		if (array[middle] == userValue)
		{
			cout << "The value exists!";
			break;
		}
		else if (array[middle] > userValue)
		{
			right = middle - 1;
		}
		else
		{
			left = middle + 1;
		}
	}

	if (left > right)
	{
		cout << "Value does not exist";
	}


	cin.ignore();
	cin.get();
	return 0;
}
