#include "SearchSortAlgos.h"
#include <iostream>

using namespace std;


/*int SearchSortAlgos::findMidpoint(int x, int y)
{
    x = 0;
    y = 4;
    midpoint = (x + y) / 2;

    return midpoint;
}*/
void SearchSortAlgos::swap(int& x, int& y)
{
    int temp = -1;

    temp = x;
    x = y;
    y = temp;
}

/*int SearchSortAlgos::linearSearch_v1(int key, int* myNumbers, int sizeOfArray)
{
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (*(myNumbers+i) == key)

            return i;
    }

    return -1;
}
int SearchSortAlgos::binarySearch_v1(int key1, int* array, int min, int max)
{

    if (max < min)
    {
        return -2;
    }
    else
    {
        midpoint = findMidpoint(min, max);

        if (array[midpoint] < key1)
        {
            binarySearch_v1(key1, array, midpoint + 1, max);
        }
        else if (array[midpoint] > key1)
        {
            binarySearch_v1(key1, array, min, midpoint - 1);
        }
        else if (array[midpoint] == key1)
        {
            return midpoint;
        }
    }

};*/

void SearchSortAlgos::selectionSort_v1(int* myArray, int n)
{
    int min = -1;
   
    for (int i = 0; i < n - 1; i++)
    {
        min = i;

        for (int j = i + 1; j < n; j++)
        {
            if (*(myArray + j) < *(myArray + min))
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(*(myArray + min), *(myArray + i));
        }
    }
}

void SearchSortAlgos::displayArray(int* myArray, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(myArray+ i) << " ";
    }
    cout << endl << endl;
}
