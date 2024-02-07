#include "SphereCircle.h"
#include <iostream> 
#include <iomanip>
#include <cmath> 
using namespace std;

double SphereCircle::getArea(double radius)
{
    double area; 

    area = PI * pow(radius, 2);

    return area; 
}
double SphereCircle::getVolume(double radius)
{  
    double volume;

    volume = (4.0/3.0) * PI * pow(radius, 3);

    return volume; 
}