#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> vec;

    //Add elements
    vec.push_back(100); //both, front() and back() contain the 100 value
    vec.push_back(200); // front = 100 and back == 200
    cout << "Front of the vector: " << vec.front() << endl;
    cout << "Back of the vector: " << vec.back() << endl;

    vec.push_back(300);
    // iterate over the vector

    cout << "Using index notation" << endl;

    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }
    //Lambdas
    cout << "Using Lambdas: " <<endl;
    std::for_each(begin(vec), end(vec), [](int const& value){cout << value << endl;});
    //vec.pop_back();
    //std::for_each(begin(vec), end(vec), [](int const& value){cout << value << endl;});

    //Define and initialize a vector.  Use {} with comma separated values
    vector<int> vec2(50, -1);
    for(int x : vec2)
    {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}