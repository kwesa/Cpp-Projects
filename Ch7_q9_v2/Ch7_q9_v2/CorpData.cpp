#include "CorpData.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

CorpData::CorpData()
{
	int q1[4] = { 0 }, q2[4] = { 0 }, q3[4] = { 0 }, q4[4] = { 0 };	
	
}

CorpData::~CorpData()
{
	cout << "Thank you for inputing your sales!" << endl << endl;
}

void CorpData::compSales(int* qt1, int* qt2, int* qt3, int* qt4, int* e, int* w, int* s, int* n)
{
	cout  << "Input Your Quarterly Sales for each Division: " << endl << endl <<endl;
	system("pause");
	cout << endl << endl;
}

void CorpData::compTotal(int* qt1, int* qt2, int* qt3, int* qt4, int* tot1, int* tot2, int* tot3, int* tot4)
{
	int total = 0;
	for (int i = 0; i < 4; i++)
	{
		(*tot1) = *(qt1 + i) + (*tot1);
	}
	for (int i = 0; i < 4; i++)
	{
		(*tot2) = *(qt2 + i) + (*tot2);
	}
	for (int i = 0; i < 4; i++)
	{
		(*tot3) = *(qt3 + i) + (*tot3);
	}
	for (int i = 0; i < 4; i++)
	{
		(*tot4) = *(qt4 + i) + (*tot4);
	}
	total = total + (*tot1) + (*tot2) + (*tot3) + (*tot4);
	cout << "Total for Quarter 1: " << (*tot1) << endl;
	cout << "Total for Quarter 2: " << (*tot2) << endl;
	cout << "Total for Quarter 3: " << (*tot3) << endl;
	cout << "Total for Quarter 4: " << (*tot4) << endl;
	cout << "Total Sales: " << total << endl << endl;
}

void CorpData::compAvg(int* tot1, int* tot2, int* tot3, int* tot4)
{
	double totAvg = 0.0, q1Avg = 0.0, q2Avg = 0.0, q3Avg = 0.0, q4Avg = 0.0;
	q1Avg = static_cast<double>((*tot1)) / 4;
	q2Avg = static_cast<double>((*tot2)) / 4;
	q3Avg = static_cast<double>((*tot3)) / 4;
	q4Avg = static_cast<double>((*tot4)) / 4;
	totAvg = static_cast <double>(((*tot1) + (*tot2) + (*tot3) + (*tot4)) / 4);

	// this displays the averages
	cout << "The Average for Q1: " << fixed << setprecision(2) << q1Avg << endl;
	cout << "The Average for Q2: " << fixed << setprecision(2) << q2Avg << endl;
	cout << "The Average for Q3: " << fixed << setprecision(2) << q3Avg << endl;
	cout << "The Average for Q4: " << fixed << setprecision(2) << q4Avg << endl;
	cout << "The Average of total quarterly sales: " << fixed << setprecision(2) << totAvg << endl << endl << endl;
}


