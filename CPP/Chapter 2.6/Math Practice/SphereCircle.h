#pragma once 
class SphereCircle
{
    private:
        const double PI = 3.141592654;
    public:
    
        SphereCircle();
        ~SphereCircle();
        double getArea(double radius);
        double getVolume(double radius);
};