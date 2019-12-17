#include <array>      //  for array containers
#include <iostream>   //  basic I/O
#include <string>     //  Strings
#include <fstream>    //  file stream

using namespace std;

/**
 * @brief Shows how to define and use an ifstream object to read from a file.
 *
 * We will define ifstream objects and then see some operators
 * and methods that work with these objects.
 *
 * @return int 0 means function exited with success
 */
const int kMaxSize = 24;
int main() {
  // create an ojbect of type ifstream
  std::ifstream in; // input file stream
  // open the file age.txt
  in.open("../age.txt"); // relative path from the executable
  if(in.fail())
  {
    std::cout << "Unable to open file age.txt. \nShutting down\n";
    return 1;
  }
  // read from the age file and store values in an array

  std::array<int, kMaxSize> ages;
  ages.fill(-1); //initialize elements to -1
  int age_size = 0;
  while(in)
  {
    in >> ages[age_size];
    age_size++;
  }
  // print out the values in the array
  for(auto age: ages)
  {
    std::cout << age << std::endl;
  }

  in.close(); // close input file


  // Define an ifstream object and open the file name.txt
  std::ifstream file;

  file.open("../name.txt");
   if(file.fail())
  {
    std::cout << "Unable to open file file.txt. \nShutting down\n";
    return 1;
  }

  std::array<string, kMaxSize> names;
  names.fill("\0");
  int name_size = 0;
  while(name_size < kMaxSize && getline(file, names[name_size]))
  {
    //file >> names[name_size];
    name_size++;
  }
  // print out the valid values in the array

  for(auto name: names)
  {
    std::cout << name << std::endl;
  }

  file.close();
 
  

  // Use a file with mixed values
  // Define an ifstream object and open the file name_age.txt

  std::ifstream name_age;

  name_age.open("../name_age.txt");

 if(name_age.fail())
  {
    std::cout << "Unable to open file name_age.txt. \nShutting down\n";
    return 1;
  }

  // reset age and name arrays
 std::array<string, kMaxSize> names2;
 std::array<int, kMaxSize> ages2;
 names2.fill("\0");
 ages2.fill(0);

 int num_rows = 0;
  // read all the values from the name_age.txt file
 while(num_rows < kMaxSize && name_age >> ages2[num_rows])
{
  name_age.ignore();
  std::getline(name_age, names2[num_rows]);
  num_rows++;
}

 for(int i = 0; i < num_rows; i++)
 {
   std::cout << "Name: " << names2[i] << ", Age: " << ages2[i] << endl;
 }

 


  // print valid elements in the names and ages array


  // print all elements in the names and ages array


  return 0;
}
