#include <iostream>
#include "factor.h"
using namespace std;

int main()
{
  FactorMod3();

  FactorModX(5);

  FactorModXRange(3, 100);

  unsigned int result = GetFactorModXRange(3, 100);

  cout << "Result from Get Mod is: " << result << endl;
 
  return 0; 
}