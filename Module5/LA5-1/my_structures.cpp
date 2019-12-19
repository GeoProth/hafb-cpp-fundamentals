#include <iostream>
using namespace std;

struct Part
{
   int model_number;
   int part_number;
   float cost;
};

struct Car
{
   Part doors;
   Part windows;
   Part tires;
};
// Local Prototypes

int main()
{
   Part p1;

   p1.model_number = 6244;
   p1.part_number = 373;
   p1.cost = 45.90;

   std::cout << "Model: " << p1.model_number << "\tPart: " << p1.part_number << "\tCost: " << p1.cost << endl;
   
   Part p2 = {6277, 781, 32.10}; // declare and initialize
   std::cout << "Model: " << p2.model_number << "\tPart: " << p2.part_number << "\tCost: " << p2.cost << endl;
   
   //Part p3;
   //p3 = p2;
   //std::cout << "Model: " << p3.model_number << "\tPart: " << p3.part_number << "\tCost: " << p3.cost << endl;
   
   Car sedan;
   sedan.doors.part_number = 101;
   sedan.windows.model_number = 7001;
   sedan.tires.cost = 89.99;

   

   return 0;
}
