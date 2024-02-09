#pragma once
#include "Rectangle.h"
class Carpet
{
private:
	double pricePerSqYd;
	Rectangle size;             // size is an instance of 
	// the Rectangle class
public:
	Carpet() // default constructor
	{
		pricePerSqYd = 0;
	}
	Carpet(double p, Rectangle r);
	
	void setPricePerYd(double p)
	{
		pricePerSqYd = p;
	}

	void setDimensions(double len, double wid);

	double getTotalPrice()
	{
		return (size.getArea() * pricePerSqYd);
	}
};