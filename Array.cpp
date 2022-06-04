// Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Author: David Glatzl

#include<iostream>
using namespace std;

int main()
{
	float amt[10], totAmt;

	for (int i = 0; i < 9; i++)
	{
		cout << "Enter Amount " << i << " ";
		cin >> amt[i];
	}
	cout << "Total Amount Calculation";
	cout << endl;

	totAmt = 0;

	for (int i = 0; i < 9; i++)
	{
		totAmt = totAmt + amt[i];
	}
	cout << "Total Amount = " << totAmt << endl;
	cout << "Array Content" << endl;

	for (int x = 0; x < 9; x++)
	{
		cout << amt[x] << endl;
	}
	return 0;
}