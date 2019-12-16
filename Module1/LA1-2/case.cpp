#include <iostream>
using namespace std;
int main()
{
    char code;
    cout << "Enter the specification code: ";
    cin >> code;

    // == operator to compare values
    // when comparing characters use single ticks ' '

    // if(code == 'S')
    // {
    //     cout << "the item is space exploration grade." << endl;
    // }

    switch(code)
    {       
        case 's':
        case 'S': cout << "The item is space exploration grade." << endl;
        break;
        case 'm':
        case 'M': cout << "the item is Military grade." << endl;
        break;
        case 'c':
        case 'C': cout << "The item is commercial grade." << endl;
        break;
        default:    
            cout << "The item is not supported." << endl;
        
    }

    return 0;
}