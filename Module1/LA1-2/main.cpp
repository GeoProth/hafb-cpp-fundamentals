/**
 * @file main.cpp
 * @author Geoff Prothero (GeoProth@github.com)
 * @brief Global vs Local Variables
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
using namespace std;

int global_variable = 1000; //global variable
int main()
{
    int global_variable = 2000;
    cout << "Local " << ::global_variable << endl;
    return 0;
}