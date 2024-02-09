#include "Carpet.h"
#include "Rectangle.h"


Carpet::Carpet(double p, Rectangle r)
{
	pricePerSqYd = p;
	r.getArea();
}

void Carpet::setDimensions(double len, double wid)
{
	size.setLength(len / 3);   // Convert feet to yards
	size.setWidth(wid / 3);
}