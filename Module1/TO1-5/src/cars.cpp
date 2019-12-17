#include <iostream>
#include "cars.h"

int HorsePower() // "standard" namespace
{
    return 150;
}
// using namespace lamborghini;
int lamborghini::HorsePower()
{
    return 760;
}
void lamborghini::cout()
{
    std::cout << "I am a Lambo" << std::endl;
}

// using namespace porsche;
int porsche::HorsePower()
{
    return 900;
}