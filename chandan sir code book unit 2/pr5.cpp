#include <iostream>
#include <string>

using namespace std;


// Base class
class Vehicle
{
protected:
    string regNo;

public:

    Vehicle(string r)
    {
        regNo = r;
    }

    void start()
    {
        cout << "Vehicle " << regNo << " started" << endl;
    }
};


// Car inherits Vehicle
class Car : public Vehicle
{
public:

    Car(string r) : Vehicle(r)
    {
    }

    void openBoot()
    {
        cout << "Car boot opened" << endl;
    }
};


// Bike also inherits Vehicle
class Bike : public Vehicle
{
public:

    Bike(string r) : Vehicle(r)
    {
    }

    void helmetReminder()
    {
        cout << "Please wear a helmet" << endl;
    }
};


int main()
{
    Car c1("MH12AB1234");
    Bike b1("MH12CD5678");


    c1.start();
    c1.openBoot();

    b1.start();
     b1.helmetReminder();


    return 0;
            }