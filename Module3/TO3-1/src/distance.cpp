// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
using namespace std;
#include "distance.h"

Distance Distance::operator+(Distance rhs) const
{
    int ft = feet_ + rhs.feet_;
    float inch = inches_ + rhs.inches_;
    
    while(inch >= 12.0)
    {
        inch -= 12.0;
        ft++;
    }

    return Distance(ft, inch);
}

Distance Distance::operator-(Distance dist) const
{
    int ft = feet_ - dist.feet_;
    float inch = inches_ - dist.inches_;

    if(inches_ < dist.inches_)
    {        
        
        ft--;
        inch = (inches_ + 12) - dist.inches_;
        
    }
    return Distance(ft, inch);
}

void Distance::update_distance(int ft, float in)
        {
            Set_Feet(ft);
            Set_Inches(in);
        }


