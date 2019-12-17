#include "age.h"
#include <iostream>
using namespace std;

void ByReferenceAgeIn5Years(int& age)
{
    age += 5;
}

int CurrentAge(int age)
{
    return age;
}