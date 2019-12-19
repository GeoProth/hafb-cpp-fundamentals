#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance d1(5, 24.5);
  cout << "Distace d1: " << endl;
  d1.ShowDist();

  Distance d2(10, 8.5);
  cout << "Distace d2: " << endl;
  d2.ShowDist();
  Distance d3;

  d3 = d1 + d2;
  cout << "Distace d3: " << endl;
  d3.ShowDist();

  Distance d4;
  cout << "Distace d4: " << endl;
  d4 =  d1 + d2 + d3;
  d4.ShowDist();

  cout << "Distance d4 with operator << overload" << endl;
  cout << d4 << endl;

  d4 = d4 - d2;
  cout << "d4 after subtraction" << endl;
  cout << d4 << endl;

  //operator ==
  cout << "Testing == operator overload" << endl;
  if(d1 == d2)
  {
    cout << "d1 is equal to d2" << endl;
  }
  else{
    cout << "d1 is NOT equal to d2" << endl;
  }
  // less than operator
  Distance d5(10, 5.6);
  Distance d6(10, 6.0);
  cout << "Testing < operator overload" << endl;
  if(d5 < d6)
  {
    cout << "d5 is Less than to d6" << endl;
  }
  else{
    cout << "d5 is Greater than to d6" << endl;
  }


  return 0;
}
