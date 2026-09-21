#include <iostream>

using namespace std;


// Base class
class Vehicle
{
public:

    virtual void move()
    {
        cout << "Vehicle is moving" << endl;
    }
};


// Car class
class Car : public Vehicle
{
public:

    void move() override
    {
        cout << "Car moves on roads" << endl;
    }
};


// Bike class
class Bike : public Vehicle
{
public:

    void move() override
    {
        cout << "Bike moves on roadsss" << endl;
    }
};


int main()
{
    Car c1;
    Bike b1;


    c1.move();
    b1.move();


    return 0;
}