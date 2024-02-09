#include "CorpData.h"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;
int main()
{
		int eSales = 0, wSales = 0, sSales = 0, nSales = 0;
		int q1Tot = 0, q2Tot = 0, q3Tot = 0, q4Tot = 0;
		int q1[4] = { 0 }, q2[4] = { 0 }, q3[4] = { 0 }, q4[4] = { 0 };
		int *qt1 = new int[4];
		int *qt2 = new int[4];
		int *qt3 = new int[4];
		int *qt4 = new int[4]; 
		int size1 = (sizeof(qt1) / sizeof(qt1[0]));
		int size2 = (sizeof(qt2) / sizeof(qt2[0]));
		int size3 = (sizeof(qt3) / sizeof(qt3[0]));
		int size4 = (sizeof(qt4) / sizeof(qt4[0]));
		string sales = "sales.dat";
		

	CorpData c;
	fstream oFile(sales, ios::out | ios::binary);

	c.compSales(qt1, qt2, qt3, qt4, &eSales, &wSales, &sSales, &nSales);
		{
			int i = 0;
			do
			{
				if (i == 0)
				{
					cout << "Sales for Q1_D1: ";
					cin >> eSales;
					qt1[0] = eSales;
				
					cout << "Sales for Q1_D2: ";
					cin >> wSales;
					qt1[1] = wSales;

					cout << "Sales for Q1_D3: ";
					cin >> sSales;
					qt1[2] = sSales;

					cout << "Sales for Q1_D4: ";
					cin >> nSales;
					qt1[3] = nSales;
					cout << endl;
					i++;
				}
				else if (i == 1)
				{
					cout << "Sales for Q2_D1: ";
					cin >> eSales;
					qt2[0] = eSales;

					cout << "Sales for Q2_D2: ";
					cin >> wSales;
					qt2[1] = wSales;

					cout << "Sales for Q2_D3: ";
					cin >> sSales;
					qt2[2] = sSales;

					cout << "Sales for Q2_D4: ";
					cin >> nSales;
					qt2[3] = nSales;
					cout << endl;
					i++;
				}
				else if (i == 2)
				{
					cout << "Sales for Q3_D1: ";
					cin >> eSales;
					qt3[0] = eSales;

					cout << "Sales for Q3_D2: ";
					cin >> wSales;
					qt3[1] = wSales;

					cout << "Sales for Q3_D3: ";
					cin >> sSales;
					qt3[2] = sSales;

					cout << "Sales for Q3_D4: ";
					cin >> nSales;
					qt3[3] = nSales;
					cout << endl;
					i++;
				}
				else if (i == 3)
				{
					cout << "Sales for Q4_D1: ";
					cin >> eSales;
					qt4[0] = eSales;

					cout << "Sales for Q4_D2: ";
					cin >> wSales;
					qt4[1] = wSales;

					cout << "Sales for Q4_D3: ";
					cin >> sSales;
					qt4[2] = sSales;
			

					cout << "Sales for Q4_D4: ";
					cin >> nSales;
					qt4[3] = nSales;
					
					cout << endl;
					i++;
				}
			} while (i != 4);
		}
		oFile.write(reinterpret_cast<char*>(qt1,qt2,qt3,qt4), size1+size2+size3+size4);
		oFile.close();
		c.compTotal(qt1,qt2,qt3,qt4, &q1Tot, &q2Tot, &q3Tot, &q4Tot);
		c.compAvg(&q1Tot, &q2Tot, &q3Tot, &q4Tot);

	return 0; 
}