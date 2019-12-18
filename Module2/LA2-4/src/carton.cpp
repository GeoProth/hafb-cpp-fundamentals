#include "carton.h"
#include <iostream>
#include <string>
#include <fstream>
// Do not use the static keyword
//const double Carton::kMaxSize = 100;
const double Carton::kMinLength = 6;
const double Carton::kMinWidth = 3;
const double Carton::kMinHeight = 0.25;

//Default constructor
Carton::Carton()
{
    // Constructors have access ot private data members
    width_ = 0.0;
    length_ = 0.0;
    height_ = 0.0;
}
//Over loaded Constructor
Carton::Carton(double len, double wid, double high)
{
    try{
        SetMeasurements(len, wid, high);
    }
    catch(std::out_of_range e)
    {
        std::cout << e.what() << '\n';
        throw;
    }
    
}
// Destructor
Carton::~Carton()
{

}
void Carton::SetMeasurements(double len, double wid, double high)
{
    if(len <= 0 || wid <= 0 || high <= 0)
    {
        throw std::out_of_range("All measurements must be greater than zero");
    }
    else{
        height_ = high;
        width_ = wid;
        length_ = len;
    }
}
//Getters
double Carton::Length()
{
    return length_;
}
double  Carton::Width()
{
    return width_;
}

double  Carton::Height()
{
    return height_;
}
//Setters
void  Carton::Set_Length(double len)
{
    if(len < kMinLength)
    {
        std::string lenWarning = "Length must be greater than " + std::to_string(kMinLength);
        throw std::out_of_range(lenWarning);
    }
    length_ = len;
}
void  Carton::Set_Width(double wid)
{
    if(wid < kMinWidth)
    {
        std::string widWarning = "Width must be greater than " + std::to_string(kMinWidth);
        throw std::out_of_range(widWarning);
    }
     
    width_ = wid;
}
void  Carton::Set_Height(double high)
{
    if(high < kMinHeight)
    {
        std::string highWarning = "Height must be greater than " + std::to_string(kMinHeight);
        throw std::out_of_range(highWarning);
    }
    height_ = high;
}
void Carton::ShowInfo()
{
    std:: cout << "Box height: " << Height() << std::endl;
    std::cout << "Box width: " << Width() << std::endl;
    std::cout << "Box length: " << Length() << std::endl;
    std::cout << "Box Volume: " << Calculate_Volume() << std::endl;
}

double Carton::Calculate_Volume() const
{
    return height_ * width_ * length_;
}
//Capture output in a outStream
void Carton::WriteData(std::ostream &out) const
{
    out << length_ << "," << width_ << "," << height_ << "," << Calculate_Volume() << std::endl;
}