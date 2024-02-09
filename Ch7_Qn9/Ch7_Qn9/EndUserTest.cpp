#include "CorpData.h"
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	// main will ask the user how many sales per group and display the average

	int EAST = 0, WEST = 0, SOUTH = 0, NORTH = 0, avgS = 4, totS = 0, totSale = 0, totAvg = 0, finAvg, i = 0;

	CorpData c;
	do
	{
		c.eastSales(&EAST);
		{
			cout << "What were East's sales?: ";
			cin >> EAST;	
		}
		c.westSales(&WEST);
		{
			cout << "What were West's sales?: ";
			cin >> WEST;
		}
		c.southSales(&SOUTH);
		{
			cout << "What were South's sales?: ";
			cin >> SOUTH;
		}
		c.northSales(&NORTH);
		{
			cout << "What were North's sales?: ";
			cin >> NORTH;
			cout << endl;
		}
		c.avgSales(&EAST, &WEST, &SOUTH, &NORTH, &avgS);
		{

			cout << "Average Sales: " << avgS << endl  <<endl;

			totAvg = totAvg + avgS;
			i++;
		}
	
	} while (i != 4);
			// this will calculate the total average of all 
		c.totAvg();
		{
			finAvg = totAvg / 4;
			cout << "The Quarterly average is: " << finAvg << endl << endl;
		}
	return 0;
}