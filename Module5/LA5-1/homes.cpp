#include <iostream>

struct Distance
{
    int feet;
    float inches;
};

struct Room
{
    Distance length;
    Distance Width;
};

struct Home
{
    Room master;
    Room kitchen;
};
// Prototype
void ShowHomeRoom(const Home& h);

int main()
{
    Home house;

    house.kitchen.length.feet = 20;
    house.kitchen.length.inches = 0;
    house.kitchen.Width.feet = 30;
    house.kitchen.Width.inches = 0;

    ShowHomeRoom(house);
    return 0;
}

void ShowHomeRoom(const Home& h)
{
    std::cout << "House Info: " << std::endl;
    std::cout << "Kitchen Dimensions: " << h.kitchen.length.feet << "'-" <<
                                       h.kitchen.length.inches << "\" X "
                                    << h.kitchen.Width.feet << "'-" 
                                    << h.kitchen.Width.inches << "\"" << std::endl;
}