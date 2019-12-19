

#include <iostream>
#include <map>
#include <string>

int main()
{
    // Maps are a key->value pair elements
    // key is UNIQUE
    // unordered
    std::map<int, std::string> info;

    // To add elements to the map, use inser(), which takes a pair of key->value
    // to make key-value pair, us make_pair() built-in function

    info.insert(std::make_pair(1, "Waldo Weber"));
    info.insert(std::make_pair(2, "Utah Jazz"));
    info.insert(std::make_pair(3, "Tony Tiger"));
    info.insert(std::make_pair(4, "Hill AFB"));
    info.insert(std::make_pair(10, "Key Value"));

    std::cout << "Size of the map: " << info.size() << std::endl;
    // Find key value

    auto pos = info.find(1);
    if(pos != info.end())
    {
        std::cout << "Found! The key is " << pos->first
                << ", and the value is " << pos->second << std::endl;
    }

      // Iterate over the set
    std::cout << "Using Iterator: " << std::endl;
    for(auto it = std::begin(info); it != std::end(info); ++it)
    {
        std::cout << it->first << " " << it->second << "\t";
    }
        std::cout << std::endl;

    //Range based
    std::cout << "Range based" << std::endl;
    for(std::pair<int, std::string> element : info)
    {
        std::cout << element.first << " " << element.second << "\t";
    }
        std::cout << std::endl;

    
    return 0;
}