#include <iostream>
#pragma once


class Distance
{
    private:
        int feet_;
        float inches_;

    public:
        Distance(){feet_ = 0; inches_ = 0;}
        ~Distance(){}
        Distance(int ft, float inch) : feet_(ft), inches_(inch){}

        // Getter & Setters
        int Feet() const {return feet_;}
        void Set_Feet(int ft) {feet_ = ft;}

        float Inches()const {return inches_;}
        void Set_Inches(float inch) {inches_ = inch;}

        // Other methods
        void ShowDist() const {std::cout << Feet()<< "'-" << Inches() << "\"" << std::endl;}

        // Operations
        Distance operator+(Distance d2) const;
        
        friend std::ostream &operator<<(std::ostream &os, const Distance &dist)
        {
            os << dist.feet_ << "'-" << dist.inches_ << "\"";
            return os;
        }
      
        //Task 1: create the - operator
        // Task 2: create an update_distance() function

        Distance operator-(Distance dist) const;
        void update_distance(int ft, float in);
        // == operator
        bool operator==(Distance dist) const;
        //  less than operator
        bool operator<(Distance dist) const;


};