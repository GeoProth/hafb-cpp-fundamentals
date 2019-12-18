/*
** EPITECH PROJECT, 2019
** hafb-cpp-fundamentals
** File description:
** carton
*/
#pragma once

#include <fstream>
//create first class
class Carton
{
    private:
        double length_;
        double width_;
        double height_;

    public:
        // Static Constants
        //static const double kMaxSize;
        static const double kMinLength;
        static const double kMinWidth;
        static const double kMinHeight;
        //default constructor
        Carton();
        //Over loaded Constructor
        Carton(double len, double wid, double high);
        // Destructor
        ~Carton();
        // Getters
        double Length();
        double Width();
        double Height();
        // Setters
        void Set_Length(double len);
        void Set_Width(double wid);
        void Set_Height(double high);
        // Methods
        void SetMeasurements(double len, double wid, double high);
        void ShowInfo();
        double Calculate_Volume() const;
        void WriteData(std::ostream &out) const;

}; //must have a ";"
