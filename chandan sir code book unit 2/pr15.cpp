#include <iostream>
#include <string>

using namespace std;


// Base class
class Vehicle
{
protected:
    string regNo;
    double rate;

public:

    Vehicle(string r, double rt)
    {
        regNo = r;
        rate = rt;
    }

    virtual double rent(int days)
    {
        return rate * days;
    }

    virtual void show()
    {
        cout << "Registration: " << regNo << endl;
        cout << "Rate per day: " << rate << endl;
    }
};


// Car class
class Car : public Vehicle
{
private:
    int doors;

public:

    Car(string r, double rt, int d) : Vehicle(r, rt)
    {
        doors = d;
    }

    void show() override
    {
        Vehicle::show();
        cout << "Doors: " << doors << endl;
    }
};


// Bike class
class Bike : public Vehicle
{
private:
    int cc;

public:

    Bike(string r, double rt, int c) : Vehicle(r, rt)
    {
        cc = c;
    }

    double rent(int days) override
    {
        return rate * days * 0.9;
    }

    void show() override
    {
        Vehicle::show();
        cout << "Engine: " << cc << " cc" << endl;
    }
};


int main()
{
    Car c1("MH12AB1234", 2000, 5);
    Bike b1("MH12CD5678", 800, 150);


    cout << "Car Details" << endl;
    c1.show();
    cout << "Rent for 3 days: " << c1.rent(3) << endl;


    cout << endl << "Bike Details" << endl;
    b1.show();
    cout << "Rent for 3 days: " << b1.rent(3) << endl;


    return 0;
}