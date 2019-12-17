#include <iostream>
#include "my_functions.h"
using namespace std;

// Function Definition
int Sum(int num1, int num2) // pass both parameters by value(Make a new copy)
{
  return num1 + num2;
}

/**
 * @brief Increments the value of step by 1
 * 
 * @param step : current step value
 */
void UpdateStep(int& step) // pass by reference (not a new copy) address of variable is passed
{
    cout << "Current step: " << step << endl;
    //step++
    // step = step + 1

    step+= 1;
    cout << "New step: " << step << endl;
}

