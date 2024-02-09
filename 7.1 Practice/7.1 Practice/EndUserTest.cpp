#include "LowScoreDrop.h"
#include <iostream>

using namespace std;

int main()
{
	int test1, test2, test3, test4;

	LowScoreDrop l;
	l.getScore(&test1, &test2, &test3, &test4);
	{
		cout << "What was Test #1: ";
		cin >> test1;
		cout << endl << endl;
		cout << "What was Test #2: ";
		cin >> test2;
		cout << endl << endl;
		cout << "What was Test #3: ";
		cin >> test3;
		cout << endl << endl;
		cout << "What was Test #4: ";
	}
	l.calcAverage(&test1, &test2, &test3, &test4);
	l.findLowest(&test1, &test2, &test3, &test4);

	return 0;
}