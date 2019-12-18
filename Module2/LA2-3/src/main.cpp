#include <array>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/**
 * @brief Shows how to define and use an ofstream object to write to a file.
 *
 * We will define ofstream objects and then see some of the operators
 * and functions that work with these objects.
 *
 * @return int 0 means function exited with success
 */
int main() {
  // arrays that contain data
  const int kMaxSize = 20;
  array<int, kMaxSize> commute_minutes = {22, 51, 63, 12, 17, 93, 45,
                                          18, 66, 45, 43, 77, 38, 43,
                                          52, 21, 8,  19, 7,  14};

  array<int, kMaxSize> commute_miles = {8,  22, 28, 2,  4,  62, 15, 6, 42, 28,
                                        16, 43, 27, 18, 41, 8,  3,  5, 2,  4};

  array<string, kMaxSize> towns = {
      "Bountiful",    "Centerville",        "Clinton",       "South Weber",
      "West Point",   "Cottonwood Heights", "Murray",        "Salt Lake City",
      "South Jordan", "West Jordan",        "American Fork", "Lindon",
      "Payson",       "Pleasant Grove",     "Spanish Fork",  "Harrissville",
      "Ogden",        "Pleasant View",      "Riverdale",     "South Ogden"};

  array<string, kMaxSize> names = {
      "Walter", "Chris", "Stan",   "Mary",  "Shelly", "Kim",  "Kelly",
      "George", "Sam",   "Walter", "Ann",   "Laura",  "Paul", "Phillip",
      "Susan",  "Hal",   "Olivia", "Polly", "Roy",    "Scott"};

  // create a variable of type ofstream
  std::ofstream commute_File_Out;
  // open the file commute.txt
  commute_File_Out.open("../commute.csv");
  if(commute_File_Out.fail())
  {
    std::cout << "Unabel to open file commute.csv to write. \nShutting down\n";
    return 1;
  }

  // write commute_minutes and commute_miles to the file commute.txt
  for(int index = 0; index < kMaxSize; ++index)
  {
    std::cout << commute_minutes[index] << ", " << commute_miles[index] << endl;
    commute_File_Out << commute_minutes[index] << ", " << commute_miles[index] << endl;
    
  }

  commute_File_Out.close();
  // create a variable of type ofstream and open the file town.txt

  std::ofstream town_out;

  town_out.open("../town.csv");
  if(town_out.fail())
  {
    std::cout << "Unable to open town file to write to.  \nShutting down\n";
    return 1;
  }

  // write the towns to the file town.txt
  for(int index = 0; index < kMaxSize; ++index)
  {
    std::cout << towns[index] << endl;
    town_out << towns[index] << endl;
    
  }

  town_out.close();

  // create a variable of type ofstream and open the file commute_data.txt

  std::ofstream commute_data_out;
  commute_data_out.open("../commute_data.csv");
  if(commute_data_out.fail())
  {
    std::cout << "Unable to open commute data file to write to. \nShutting this shit down\n";
    return 1;
  }
   // write commute_minutes, commute_miles, and towns to the file commute.txt
   commute_data_out << "Minutes, " << "Miles, " << "miles/hr, " << "name, " << "Town" << endl;
   for(int index = 0; index < kMaxSize; ++index)
  {
    std::cout << commute_minutes[index] << ", " << commute_miles[index] << ", " << (float)commute_miles[index]/(commute_minutes[index]*60) << ", " << names[index] << ", " 
    << towns[index] << endl;

    commute_data_out << commute_minutes[index] << ", " << commute_miles[index] << ", " << (float)commute_miles[index]/(commute_minutes[index]*60) << ", " << names[index] << ", " 
    << towns[index] << endl;
  }

  commute_data_out.close();

  // do computations and add labeling to data before writing to file

  // write a report to the commute_report.txt file. Include name, town,
  // commute_minutes, commute_miles, and average minutes per mile to the file
  // commute.txt

  return 0;
}
