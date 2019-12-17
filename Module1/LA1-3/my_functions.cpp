#include <iostream>
#include "my_functions.h"
#include <cmath>
#include <array>
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
void UpdateStep(int &step) // pass by reference (not a new copy) address of variable is passed
{
  cout << "Current step: " << step << endl;
  //step++
  // step = step + 1

  step += 1;
  cout << "New step: " << step << endl;
}
/**
 * @brief return maximum number
 * 
 * @param num1 
 * @param num2 
 * @return int 
 */
int Max(int num1, int num2)
{
  return num1 > num2 ? num1 : num2;
}

int Max10(const std::array<int, 10> &nums)
{

  int max = nums[0];
  for (auto num : nums)
  {
    if (max <= num)
    {
      max = num;
    }
  }
  return max;
}

void ClearElements(std::array<int, 10> &arr)
{
  fill(arr.begin(), arr.end(), 0);
}
