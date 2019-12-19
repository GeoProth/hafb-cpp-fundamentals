// countpp3.cpp
// increment counter variable with ++ operator
// uses unnamed temporary object
#include <iostream>
using namespace std;
#include "distance.h"

Distance Distance::operator +(Distance rhs) const
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

