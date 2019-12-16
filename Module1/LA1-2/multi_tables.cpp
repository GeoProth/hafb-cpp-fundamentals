
/**
 * @file multi_tables.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <cmath>  // for sqrt() function
#include <iomanip>
using namespace std;

const int kMax = 10;

int main()
{
    int number;
    cout << "Enter a value to print multiplication tables: ";
    cin >> number;
    cout << setiosflags(ios::showpoint);
   for(int num1 = 1; num1 <= number; ++num1) //rows
   {
       for(int num2 = 1; num2 <= kMax; ++num2) // columns
       {
           cout << setw(5) << num1 * num2;
       }
        
        cout << "\n";
   }
    return 0;
}