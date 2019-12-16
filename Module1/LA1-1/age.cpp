/**
 * @file age.cpp
 * @author Geoff Prothero
 * @brief 
 * @version 0.1
 * @date 2019-12-16
 * 
 * @copyright Copyright (c) 2019
 * 
 */

#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    //Task display rights by age:
    //1) If you are under 18, your must go to school
    //2) If you are over 18, you can vote
    //3) If you are over 21, you can buy alcohol
    //4) If you are over 65, you can retire.
/**
    switch(true)
    {
        case (age < 18): cout << "You should be in shcool" << endl;
        break;
        case (age >= 18 && age < 21): cout << "You can vote" << endl;
        break;
        case (age > 21): cout << "You can buy alcohol" << endl;
        break;
        default: cout << "You are old" << endl;
        break;
    }
    **/
    return 0;
}