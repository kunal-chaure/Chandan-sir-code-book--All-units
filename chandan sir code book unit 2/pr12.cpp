#include <iostream>
#include <string>

using namespace std;


// Base class
class Person
{
protected:
    string name;

public:

    Person(string n)
    {
        name = n;
    }

    void showName()
    {
        cout << "Name: " << name << endl;
    }
};


// Virtual inheritance
class Student : virtual public Person
{
public:

    Student() : Person("Unknown")
    {
    }
};


class Employee : virtual public Person
{
public:

    Employee() : Person("Unknown")
    {
    }
};


// Diamond inheritance solve karnyasathi virtual use kele
class Assistant : public Student, public Employee
{
public:

    Assistant(string n)
        : Person(n), Student(), Employee()
    {
    }
};


int main()
{
    Assistant a1("abhishek");

    a1.showName();


    return 0;
}