#ifndef CARS_H_
#define CARS_H_
int HorsePower();  // "nameless, ::" namespace
namespace lamborghini
{
    int HorsePower();
    void cout();
}
namespace porsche
{
    int HorsePower();
}
#endif /* !CARS_H_ */
