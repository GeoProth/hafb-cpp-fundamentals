#include "factor.h"
#include <iostream>
using namespace std;
/**
 * @brief Calculate the number of instances divisible by 3 in the range
 *        1 through 30
 * 
 */
// Function Definition
void FactorMod3()
{
  
  // algorithm
   unsigned int count = 0;

  for(unsigned int x = 1; x <= 30; ++x)
  {
    if (x % 3 == 0)
    {
      count++;
    }
  }

  cout << "Result is: " << count << endl;
}

/**
 * @brief Calculate the number of instances divisible 
 * by input paramter in the range 1 through 30
 * 
 * @param mod_number : the divisible number
 */
void FactorModX(int mod_number)
{
  // algorithm
   unsigned int count = 0;

  for(unsigned int x = 1; x <= 30; ++x)
  {
    if (x % mod_number == 0)
    {
      count++;
    }
  }

  cout << "Result is: " << count << endl;
}

void FactorModXRange(int mod_number, int range)
{
  // algorithm
   unsigned int count = 0;

  for(unsigned int x = 1; x <= range; ++x)
  {
    if (x % mod_number == 0)
    {
      count++;
    }
  }

  cout << "Result is: " << count << endl;
}

/**
 * @brief Get the Factor Mod X Range object
 * 
 * @param mod_number : modulus number
 * @param max_range : maximum range
 * @return unsigned int : number of instances
 */
unsigned int GetFactorModXRange(int mod_number, int max_range)
{

  // algorithm
   unsigned int count = 0;

  for(unsigned int x = 1; x <= max_range; ++x)
  {
    if (x % mod_number == 0)
    {
      count++;
    }
  }
  return count;
}