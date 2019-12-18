#include <iostream>
#include "distance.h"
using namespace std;

// Main Function
int main() 
{
  Distance dist(5, 3.2);
  cout << "Distance: " << endl;
  dist.ShowDist();
  return 0;
}