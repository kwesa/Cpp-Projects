#include "SearchSortAlgos.h"
#include <iostream>
using namespace std; 

int main()
{
	SearchSortAlgos s;

	const int SIZE = 5;
	int count = 5;
	//int n[SIZE] = { 1, 4, 5, 8, 9 };
	//int n1[SIZE] = { 12,45,8,2,9 };
	int* n = new int[count];
	*(n+0) = 5;
	*(n+1) = 8;
	*(n+2) = 1;
	*(n+3) = 4;
	*(n+4) = 7;
	//int nToFind = -1;
	//int num = -1;
	//int located = -1;
	//int min = 0;
	//int max = 4;
	
	/*cout << "Would you like to find a number in array:";
	cin >> num;
	do
	{
	cout << "Enter number to find: ";
	cin >> nToFind;

	located = s.linearSearch_v1(nToFind, n, SIZE);

	cout << "Array to be searched: ";

	for (int i = 0; i < SIZE; i++)
	{
		cout << n[i] << " ";
	}
	cout << endl; 

	if (located != -1)
	{
		cout << nToFind << " Found at index: " << located << endl;
	}
	else
	{
		cout << nToFind << " Not found in array!" << endl;
	}
	
	
		cout << "Array to be searched: ";
		for (int i = 0; i < SIZE; i++)
		{
			cout << n[i] << " ";
		}

		located = s.binarySearch_v1(nToFind, n, min, max);

		if (located == -2)
		{
			cout << endl << nToFind << "\nNot found in array: " << endl;
		}
		else if (located != nToFind)
		{
			cout << endl << nToFind << " Found at index: " << located << endl;
		}
	} while (num != -1);*/


	cout << "Unsorted array (original): " << endl; 

	s.displayArray(n, count);

	s.selectionSort_v1(n, count);
	
	cout << "Sorted array: " << endl;

	s.displayArray(n, count);

	cout << endl; 

	return 0;
}