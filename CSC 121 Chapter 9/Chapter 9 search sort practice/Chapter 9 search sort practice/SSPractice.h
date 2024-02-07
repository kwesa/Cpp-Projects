#pragma once
class SSPractice
{
private:
	int midpoint = 0;
	int x = 0, y = 4;
	int findMidpoint(int x, int y);
	void swap(int& a, int& b);

public:
	
	int linearSearch_v2(int key, int* array, int SIZE);
	int binarySearch_v2(int key, int *array, int min, int max);
	void selectionSort_v2(int* array, int SIZE);
	void bubbleSort_v2(int* array, int SIZE);
	void displayArray(int* array, int SIZE);

};