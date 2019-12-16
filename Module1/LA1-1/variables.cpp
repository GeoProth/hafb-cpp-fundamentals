#include <iostream>
using namespace std;

int main()
{
    cout << "\nData Type  Bytes"
         << "\n---------  ----"
         << "\nint          " << sizeof(int) //integer
         << "\nchar         " << sizeof(char) //characters 1 byte
         << "\nlong         " << sizeof(long)// long integers
         << "\nbool         " << sizeof(bool) //boolean
         <<endl;
    return 0;
}