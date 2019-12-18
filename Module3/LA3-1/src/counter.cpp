#include <iostream>
#include "counter.h"

Counter Counter::operator ++()  //prefix
{
    //++count_; 
    return Counter(++count_);        
}

Counter Counter::operator ++(int) // postfix
{
    return Counter(count_++);
}