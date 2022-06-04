// ArraySortUser.cpp : This file contains the 'main' function. Program execution begins and ends there.
// File: ArrayUser.cpp
// a pgm that sorts an array and asks the user to find an element by calling the index number.
// Author: David Glatzl

#include<iostream>

using namespace std;

const int MAXSIZE = 10;

void sortArr(int arg[], int size);
void swap(int& x, int& y);
int findIndex(int x[]);

int main()
{
	int num[10] = { 45, 9, 23, 100, 90, 6, 86, 17, 3, 5 };
	int i;
	int index;

	cout << endl;
	cout << "The elements in the array before they are sorted: ";
	for (i = 0; i < MAXSIZE; ++i)
		cout << num[i] << " ";

	sortArr(num, MAXSIZE);

	cout << endl << endl;
	cout << "After the elements are sorted: ";
	for (i = 0; i < MAXSIZE; ++i)
		cout << num[i] << " ";

	cout << endl << endl;

	for (i = 0; i < 1; ++i)
	{
		cout << "Enter any number within the array: ";
		cin >> num[i];
	}

	index = findIndex(num);

	cout << endl;
	cout << "The index for the element you entered is: " << num[index] << endl;
	cout << endl;
	return 0;
}

void sortArr(int arg[], int size)
{
	int last = size - 1;
	int isChanged = 1;

	while (last >= 0 && isChanged)
	{
		isChanged = 0;

		for (int i = 0; i <= last; ++i)
			if (arg[i] < arg[i - 1])
			{
				swap(arg[i], arg[i - 1]);
				isChanged = 1;
			}
		last--;
	}
}

void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}

int findIndex(int x[])
{
	int i = 0;
	for (i = 0; i < 10; ++i)
	{
		if (x[i] == 3)
		{
			x[i] = 0;
			break;
		}
		if (x[i] == 5)
		{
			x[i] = 1;
			break;
		}
		if (x[i] == 6)
		{
			x[i] = 2;
			break;
		}
		if (x[i] == 9)
		{
			x[i] = 3;
			break;
		}
		if (x[i] == 17)
		{
			x[i] = 4;
			break;
		}
		if (x[i] == 23)
		{
			x[i] = 5;
			break;
		}
		if (x[i] == 45)
		{
			x[i] = 6;
			break;
		}
		if (x[i] == 86)
		{
			x[i] = 7;
			break;
		}
		if (x[i] == 90)
		{
			x[i] = 8;
			break;
		}
		if (x[i] == 100)
		{
			x[i] = 9;
			break;
		}
	}
	return 0;
}