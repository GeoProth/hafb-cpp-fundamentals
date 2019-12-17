#include <iostream>
#include <array>
#include "my_functions.h"
using namespace std;

// Main Function
int main()
{
  int number1 = 5, number2 = 10;
  cout << "The sum of " << number1 << " and " << number2 <<
      " is: " << Sum(number1, number2) << endl;

  cout << "Number before UpdateStep() " << number1 << endl;
  UpdateStep(number1);
  cout << "Number after UpdateStep() " << number1 << endl;

  cout << "The greater number between " << number1 << " and " << number2 << " is: " << Max(number1, number2) << endl;

  array<int, 10> temps = {-12, 70, 0, 32, 89, 45, 62, 88, 10, 22};

  cout << "The Max Temperature in Temps is: " << Max10(temps) << endl;

  ClearElements(temps);
  
  for(int i = 0; i < temps.size(); i++)
  {
    cout << temps[i] << " ";
  }
  
  return 0;
}
