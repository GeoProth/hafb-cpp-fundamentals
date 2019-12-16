/**
 * @file my_array_container.cpp
 * @author GeoProth (you@domain.com)
 * @brief Learn C++ Array container
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <cmath>  // for sqrt() function
#include <iomanip>
#include <array> //array container
using namespace std;



int main()
{
    // To create arrays with library:
    // array<type, numOfElements> name;
    array<double, 5> grades {22.1, 6.9, 11.2, 99, 44.3};

    cout << "Size of array: " << grades.size() << endl;
    for(int i = 0; i < grades.size(); ++i)
    {
        cout << grades[i] << endl;
    }

    cout << "For each loop:  " << endl;
    // For each loop
    for(auto grade : grades)
    {
        cout << grade << endl;
    }
    return 0;
}