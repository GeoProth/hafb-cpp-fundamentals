#include <iostream>
using namespace std;
int main()
{
    //variables
    int age; //signed integer
    //cout:  output
    cout << "Hello World" << endl;
    cout << "Wildcats " << "WSU " << "Ogden" << endl;

    //cin: system/user input
    //cout << "What is your age? ";
    //cin >> age;
    //cout << "You are " << age << " Years old" << endl;

    //sizeof(): get the size of the variable
    cout << "Integers are: " << sizeof(int) << " Bytes." << endl;
    cout << "Min Integer value: " << INT32_MIN << "\n"
            "Max Integer value: " << INT32_MAX << " Bytes." << endl;
    return 0;
}