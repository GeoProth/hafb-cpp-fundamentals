#include "containers.h"
#include "csvstream.h"
#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>

void Load_Data(std::vector<Data> &data, const std::string &input_file)
{
    csvstream csvinput(input_file);
    std::map<std::string, std::string> row;
    Data temp;
    while(csvinput >> row)
    {
        temp.id = stoi(row["id"]);
        temp.name = row["name"];
        temp.animal = row["animal"];
        data.push_back(temp);
    }

    
}