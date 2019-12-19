#include <iostream>
//using namespace std;
#include <array>
#include <algorithm> //for iterators

// Local Prototypes
void fun(int const& value); 


int main()
{
    std::array<int, 3> info = {4, 7, 9};
    std::cout << std::endl;
    std::cout << "First element: " << info.front() << std::endl;
    std::cout << "Last element: " << info.back() << std::endl;
    std::cout << "Size of array: " << info.size() << std::endl;
    std::cout << std::endl;

    for(size_t i = 0; i < info.size(); i++)
    {
        std::cout << "Element: " << i << ": " << info[i] << std::endl;
        std::cout << "Address: " << i << ": " << &info[i] << std::endl;
    }
    
    std::cout << std::endl;

    //iterators
    std::cout << "Loop using iterator notation: (built-in functions for "
                  << "begin & end members of containters" << std::endl;
    
    for(auto iterator = std::begin(info); iterator != std::end(info); ++iterator)
    {
        std::cout << "Address: \t" << "VALUE: " << std::endl; 
        std::cout << iterator << "\t\t" << *iterator << std::endl;
         // this is the VALUE AT the address
    }
    
    // Range based loops or for each loops
    std::cout << "Range based for loop" << std::endl;
    for(const auto& value: info)
    {
        std::cout << value << std::endl;
    }

    // For each loops
    // Functor:  function that acts like an object
    std::cout<<"Using for_each algorithm, using a function or functor" << std::endl;
    std::for_each(std::begin(info), std::end(info), fun); // calls fun function

    //Lambdas 
    std::cout<<"Using for_each Algorithm, using lambdas" << std::endl;
    //lambdas require:  [](){}
    // []: To take any local variables in the scope
    // (): Declare the parameters your function uses
    // {}: declare the body of your function
    std::for_each(std::begin(info), std::end(info), [](int const& value){std::cout<<value<< "\n";});
    
    return 0;
}

// Local function definitions
void fun(int const& value) 
{
    std::cout << value << "\n";
}