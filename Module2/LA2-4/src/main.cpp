#include <iostream>
#include <array>
#include <cstdlib>
#include "carton.h"

const int kMaxSize = 10;
using namespace std;

int main() {
  // create a Carton object using the default constructor
  Carton box;
  box.ShowInfo();

  cout << "Updating dimensions:" << endl;
  box.Set_Height(12.5);
  box.Set_Length(14.3);
  box.Set_Width(8.9);
  box.ShowInfo();
  
  
  // create a Carton object using the other constructor
  cout << "Overloaded Constructor method: " << endl;
  Carton box1(24.5, 15.4, 11.6);
  box1.ShowInfo();

  Carton box2(0,0,0);
  box2.ShowInfo();
  // create an array of Cartons
  array<Carton, kMaxSize> boxes;
  // add some valid elements to the array
  for(int index = 0; index < boxes.size(); index++)
  {
    boxes[index] = Carton(static_cast<double>(rand() % 30) + 1, static_cast<double>(rand() % 30) + 1, static_cast<double>(rand() % 30) + 1);

  // loop through the array
  for(auto box : boxes)
  {
    cout << box.ShowInfo();
  }
  // print out the volume of packages

  //cout << "The Volume of the box is: " << boxes[3].Calculate_Volume() << endl;
  // print out the girth of packages

  // print out the length plus girth of packages

  // check if package is sized to ship

  // define a package that is too big to ship

  // define a package that is too small to ship

  // print if sized to ship

  // write carton data and information

  // read data from file

  // write data to file

  return 0;
}