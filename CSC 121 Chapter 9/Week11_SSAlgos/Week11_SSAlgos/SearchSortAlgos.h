#pragma once

class SearchSortAlgos
{
private:
	//int midpoint=0;
	//int x = 0;
	//int y = 4;
	//int findMidpoint(int x, int y);
	void swap(int& x, int& y);

public:

	//int linearSearch_v1(int key, int* myNumbers, int sizeOfArray);
	//int binarySearch_v1(int key1, int* array, int min, int max);
	void selectionSort_v1(int* myArray, int sizeOfArray);
	void displayArray(int* myArray, int n);
};