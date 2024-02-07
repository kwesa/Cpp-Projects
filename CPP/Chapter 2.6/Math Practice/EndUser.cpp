#include "SphereCircle.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    SphereCircle s;

    double radius; 

    cout << "This program is designed to take a given radius, and out put area and volume!" << endl; 
    cout << endl; 
    cout << "What is the radius?";
    cin >> radius; 
    
   cout << "The area of the circle is: " << fixed << setprecision(3) << s.getArea(radius) << endl; 
   cout << "The volume of the sphere is: " << fixed << setprecision(3) << s.getVolume(radius) << endl; 

    return 0; 
}