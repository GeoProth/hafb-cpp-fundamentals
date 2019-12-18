#pragma once

class Height
{
    private:
        double inches_;

    public:
        Height(){inches_ = 0;}
        ~Height() {}
        Height(double in) : inches_(in){}
        double Inches() const {return inches_;}
        void Set_Inches(double in) {inches_ = in;}
        
        // Other methods
        friend void print_feet(Height h1);
};