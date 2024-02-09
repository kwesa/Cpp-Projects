// This program nests one class inside another. It has a class
// with a member variable that is an instance of another class. 
#include "Carpet.h"
#include "Rectangle.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// ************** Client Program *****************
int main()
{
	ifstream iFile("data.txt");
	ofstream oFile("answers.txt");
	Carpet purchase;
	Carpet newCarpet;
	Rectangle r;					// This variable is a Carpet object
	double pricePerYd;
	double length =0 ;
	double width = 0;

	cout << fixed << showpoint << setprecision(2);
	cout << "The price for new carpet is: $" << newCarpet.getTotalPrice() << endl << endl; 

	if (!iFile)
	{
		cout << "File doesn't exist!\n";
		exit(-1);
	}
	
	int i = 0;
	while (!iFile.eof())
	{
		iFile >> pricePerYd >> length >> width;

		purchase.setDimensions(length, width);
		purchase.setPricePerYd(pricePerYd);

		cout << "Carpet " << i + 1 << ": \n";
		cout << "---------";
		cout << "\nThe total price of my new " << length << " x " << width
			<< " carpet is $" << purchase.getTotalPrice() << endl;

		oFile << "Carpet " << i + 1 << ": \n";
		oFile << "---------";
		oFile << "\nThe total price of my new " << length << " x " << width
			<< " carpet is $" << purchase.getTotalPrice() << endl;
		i++;
	}
	oFile.close();
	iFile.close();

	

	return 0;
}
