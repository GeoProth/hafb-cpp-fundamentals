#pragma once

class Distance
{
    private:
        int feet_;
        float inches_;

    public:
        Distance(){feet_ = 0; inches_ = 0;}
        ~Distance(){std::cout << "Bye!" << std::endl;}
        Distance(int ft, float inch) : feet_(ft), inches_(inch){}

        // Getter & Setters
        int Feet() const {return feet_;}
        void Set_Feet(int ft) {feet_ = ft;}

        float Inches()const {return inches_;}
        void Set_Inches(float inch) {inches_ = inch;}

        // Other methods
        void ShowDist() const {std::cout << Feet()<< "'-" << Inches() << "\"" << std::endl;}

};