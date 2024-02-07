#include "SSPractice.h"
#include <iostream>
using namespace std;

int SSPractice::findMidpoint(int x, int y)
{ 
	
	midpoint = (x + y) / 2;

	return midpoint;
}

void SSPractice::swap(int& a, int& b)
{
	int temp = -1;
	temp = a; 
	a = b;
	b = temp; 
}

int SSPractice::linearSearch_v2(int key, int* array, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (*(array+i) == key)
		{
			return i;
		}
	}
	return -1;
}

int SSPractice::binarySearch_v2(int key, int* array, int min, int max)
{
	if (min > max)
	{
		return -2;
	}
	else
	{
		midpoint = findMidpoint(min, max);
		if (array[midpoint] < key)
		{
			binarySearch_v2(key, array, midpoint + 1, max);
		}
		else if (array[midpoint] > key)
		{
			binarySearch_v2(key, array, min, midpoint - 1);
		}
		else if (array[midpoint] == key)
		{
			return midpoint;
		}
	}
}
void SSPractice::selectionSort_v2(int* array, int n)
{
	int min = -1;
	for (int i = 0; i < n - 1; i++)
	{
		min = i; 
		for (int j = i + 1; j < n; j++)
		{
			if (*(array + j) < *(array + min))
			{
				min = j; 
			}
		}
		if (min != i)
		{
			swap(*(array + min), *(array + i));
		}
	}
}
void SSPractice::bubbleSort_v2(int* array, int SIZE)
{
	bool flag;
	for (int i = 1; i < SIZE - 1; i++) 
	{
		flag = false;
		for (int j = 0; j < SIZE - i; j++) 
		{
			if (*(array+j) > (*(array+j+1)))
			{
				swap(*(array + j), *(array + j + 1));
				flag = true;
			}
		}
		if (flag == false)
		{
			break;
		}
	}
}
void SSPractice::displayArray(int* array, int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << *(array + i) << " ";
	}
	cout << endl;
};
