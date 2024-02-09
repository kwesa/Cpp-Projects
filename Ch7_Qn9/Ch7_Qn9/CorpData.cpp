#include "CorpData.h"
#include <iostream>

using namespace std;

CorpData::CorpData()
{
	 nEast = 0, nWest = 0, nSouth = 0, nNorth = 0, avgS = 4;
}

CorpData::~CorpData()
{
	cout << "Thank you for inputing your sales values! " << endl;
}

// This does the math for the east sales
void CorpData::eastSales(int *e)
{
	(*e) = nEast + (*e);
}

// This does the math for the west sales
void CorpData::westSales(int *w)
{
	(*w) = nWest + (*w);
}

// This does the math for the south sales
void CorpData::southSales(int* s)
{
	(*s) = nSouth + (*s);
}

// This does the math for the north sales
void CorpData::northSales(int* n)
{
	(*n) = nNorth + (*n);
}

// This calculates the average amount of sales 
void CorpData::avgSales(int* e, int* w, int* s, int* n, int* a)
{
	(*a) = ((*e) + (*w) + (*s) + (*n)) / (avgS);

}

void CorpData::totAvg()
{
	//Not sure what i need to put in here!
}


