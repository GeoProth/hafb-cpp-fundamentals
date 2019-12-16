#include "factor.h"
#include <iostream>
using namespace std;
// Function Definition
void FactorMod3()
{
  int result;
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
