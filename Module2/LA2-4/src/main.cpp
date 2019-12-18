#include <iostream>
#include <array>
#include <cstdlib>
#include "carton.h"
#include "carton_fileio.h"


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

  //Carton box2(0,0,0);
 // box2.ShowInfo();
  // create an array of Cartons
  array<Carton, kMaxArraySize> boxes;
  // print out the volume of packages
  boxes[0] = Carton(12, 41, 52);

  //Read data from file
  string message;
  int record_size = 0;

  message = ReadDataFormatFromFile("../carton_data.txt", boxes, record_size);
  cout << "\nMessage: " << message << "\nrecords loaded: " << record_size << endl;

  cout << "\nPrinting Array: " << endl;

  for(auto box = 0; box < record_size; ++box)
  { 
    cout << "Box " << box + 1 << ": " << endl;
    boxes[box].ShowInfo();
  }

  WriteDataToFile("../carton_data.csv", boxes, record_size);
  

  return 0;
}