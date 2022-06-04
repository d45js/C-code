// Bubblesort Algorithm.cpp 
// Author David Glatzl

#include <iostream>

using namespace std;

const int MAXSIZE = 10;

void bubbleSort(int arr[], int size);
void swap(int& x, int& y);

int main()
{
	int nums[] = { 1, 7, 5, 3, 15, 11, 13, 17, 21, 19 };
	int k;

	cout << "BEFORE SORT: ";
	for (k = 0; k < MAXSIZE; k++)
		cout << nums[k] << " ";

	bubbleSort(nums, MAXSIZE);

	cout << endl << endl;
	cout << "AFTER SORT: ";
	for (k = 0; k < MAXSIZE; k++)
		cout << nums[k] << " ";

	cout << endl << endl << endl;

	system("PAUSE");
	return 0;
} // end main()

void bubbleSort(int arr[], int size)
{
	int last = size - 2;
	int isChanged = 1;

	while (last >= 0 && isChanged)
	{
		isChanged = 0;

		for (int k = 0; k <= last; k++)
			if (arr[k] < arr[k + 1])
			{
				swap(arr[k], arr[k + 1]);
				isChanged = 1;
			}
		last--;
	}
}// end bubbleSort()

void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}// end swap()