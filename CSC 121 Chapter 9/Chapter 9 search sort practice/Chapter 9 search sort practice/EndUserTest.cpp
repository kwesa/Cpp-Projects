#include "SSPractice.h"
#include <iostream>
using namespace std;

int main()
{
	SSPractice s;

	const int SIZE = 5; 
	int startStop, nToFind = 0, located = -1, min =0, max=4;
	int* n = new int[SIZE];
	int* m = new int[SIZE];
	int* o = new int[SIZE];
	*(n + 0) = 5;
	*(n + 1) = 8;
	*(n + 2) = 1;
	*(n + 3) = 4;
	*(n + 4) = 7;
	*(m + 0) = 1;
	*(m + 1) = 4;
	*(m + 2) = 5;
	*(m + 3) = 7;
	*(m + 4) = 8;
	*(o + 0) = 5;
	*(o + 1) = 8;
	*(o + 2) = 1;
	*(o + 3) = 4;
	*(o+ 4) = 7;
	cout << "This program is meant to demonstrate searching and sorting Algorithms" << endl;
	system("pause");
	do
	{
		cout << "Options: " << endl
			<< "1. Linear Search " << endl
			<< "2. Binary Search " << endl
			<< "3. Selection Sort " << endl
			<< "4. Bubble Sort " << endl
			<< "-1. Quit " << endl;
		cout << "Make a selection: ";
		cin >> startStop;
		cout << endl << endl;

		if (startStop == 1)
		{
			cout << " You chose Linear Search. " << endl;
			cout << "The Array: ";
			s.displayArray(n, SIZE);
			cout << endl << "What number are you trying to find: ";
			cin >> nToFind;
			located = s.linearSearch_v2(nToFind, n, SIZE);
			if (located != -1)
			{
				cout << nToFind << " Found at index: " << located << endl << endl;
			}
			if (located == -1)
			{
				cout << endl << nToFind << " Not found in array: " << endl << endl;
			}
						
		}
		if (startStop == 2)
		{
			cout << "You chose Binary Search. " << endl;
			cout << "The Array: ";
			s.displayArray(m, SIZE);
			cout << endl << "What number are trying to find: ";
			cin >> nToFind;
			located = s.binarySearch_v2(nToFind, m, min, max);
			if (located == -2)
			{
				cout << endl << nToFind << "Not found in array: " << endl << endl;
			}
			else if (located != nToFind)
			{
				cout << endl << nToFind << " Found at index: " << located << endl << endl;
			}

		}
		if (startStop == 3)
		{
			cout << "You chose Selection Sort. " << endl;
			cout << "Before sort: ";
			s.displayArray(n, SIZE);
			cout << endl;
			s.selectionSort_v2(n,SIZE);
			cout << "After sort: ";
			s.displayArray(n, SIZE);
			cout << endl;
			
		}
		if (startStop == 4)
		{
			cout << "You chose Bubble Sort. " << endl;
			cout << "Before sort: ";
			s.displayArray(o, SIZE);
			cout << endl;
			s.bubbleSort_v2(o,SIZE);
			cout << "After sort: ";
			s.displayArray(o, SIZE);
			cout << endl; 
		}

	} while (startStop != -1);

	return 0;
}