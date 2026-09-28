#include <iostream>
#include <string>

using namespace std;


// Base class
class Employee
{
protected:
    int id;
    string name;

public:

    Employee(int i, string n)
    {
        id = i;
        name = n;
    }

    virtual double salary() = 0;

    void showDetails()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};


// Permanent employee
class Permanent : public Employee
{
private:
    double basic, allowance;

public:

    Permanent(int i, string n, double b, double a)
        : Employee(i, n)
    {
        basic = b;
        allowance = a;
    }

    double salary() override
    {
        return basic + allowance;
    }
};


// Contract employee
class Contract : public Employee
{
private:
    double rate;
    int hours;

public:

    Contract(int i, string n, double r, int h)
        : Employee(i, n)
    {
        rate = r;
        hours = h;
    }

    double salary() override
    {
        return rate * hours;
    }
};


// Common function for both employee types
void paySlip(Employee& e)
{
    e.showDetails();
    cout << "Salary: " << e.salary() << endl << endl;
}


int main()
{
    Permanent p1(101, "Abhi", 40000, 8000);

    Contract c1(102, "kunal", 500, 80);


    paySlip(p1);
    paySlip(c1);


    return 0;
}