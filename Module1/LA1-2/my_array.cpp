
/**
 * @file my_array.cpp
 * @author your name (you@domain.com)
 * @brief learn about C-Style arrays and c++ array container
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

const int kMaxNum = 5;

int main()
{
    // C-Style
    // Array notation: type name[elements];
    // To access elements; use Index notation: begins at 0
    int grades[kMaxNum] = {10, 20, 30, 10, 50}; // an array of 5 integers
    float avg = 0;
    int sum = 0;
    cout << "Enter your exam grades" << endl;
    for(int num = 0; num < kMaxNum; ++num)
    {
        cout << "Enter grade " << num + 1 << ": ";
        cin >> grades[num]; //access each element using []
        sum += grades[num];
    }
    // Cast or change variable type from  integer to float to preserve fraction
    // static_cast<type>(variable)
    avg = static_cast<float>(sum)/kMaxNum;

    cout << "Your grade Average is: " << avg << endl;

    // 2D Arrays:  tpe name[row][col]
    int bi_array[3][5] = { 
        {2, 4, 6, 11, 67},
        {4, 5, 22, 33, 99},
        {89, 33, 22, 11, 0}
    };

    for(int row = 0; row < 3; ++row)
    {
        for(int col = 0; col < 5; ++col)
        {
            cout << "Element: [" << row << "]" << "[" << col << "]" 
            " = " << bi_array[row][col] << endl;
        }
    }
    return 0;
}