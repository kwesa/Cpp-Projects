#pragma once
#include "Carpet.h"
class Rectangle
{
private:
	double length;
	double width;
public:
	Rectangle() // default constructor
	{
		length = 0;
		width = 0;
	}
	Rectangle(double len, double w) // default constructor
	{
		length = len;
		width = w;
	}
	void setLength(double len)
	{
		length = len;
	}

	void setWidth(double wid)
	{
		width = wid;
	}

	double getLength()
	{
		return length;
	}

	double getWidth()
	{
		return width;
	}

	double getArea()
	{
		return length * width;
	}
};