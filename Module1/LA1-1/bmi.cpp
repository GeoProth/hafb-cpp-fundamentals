#include <iostream>
using namespace std;

//Constants
const float kMeterToInches = 39.37;
const float kKiloToPound = 2.204;
const int kBMIImperial = 703;
const float kLowBMILimit = 18.5;
const float kHighBMILimit = 24.9;

int main()
{
    // calculate Body Mass Index:  weight(KG) / [Height(m)]^2
    // Floating point vairables: float, double
    float height = 0;
    float weight = 0, bmi = 0;

    cout << "Enter your Height: ";
    cin >> height;

    cout << "Enter your Weight: ";
    cin >> weight;

    bmi = weight / (height * height);

    cout << "Your BMI is: " << bmi << "\n";

    weight = weight * kKiloToPound; //
    height = height * kMeterToInches;
    bmi = (weight * kBMIImperial)/(height * height);
    cout << "Your BMI (imperial) is: " << bmi << endl;

    // Task:  Print if they are in the "good" range: BMI is in the 18.5 to 24.9
    if(bmi > kLowBMILimit && bmi < kHighBMILimit)
    {
        cout << "Your BMI " << bmi << "is good" << endl;
    }
    else
    {
        cout << "Your BMI " << bmi << " is not good bro" << endl;
    }
    

    cout << "Thank you for using BMI program." << endl;

    return 0;
}