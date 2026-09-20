#include <iostream>

using namespace std;


// Base class
class Parent
{
public:

    Parent()
    {
        cout << "Parent constructor" << endl;
    }

    ~Parent()
    {
        cout << "Parent destructor" << endl;
    }
};


// Derived class
        class Child : public Parent
{
public:

         Child()
    {   
        cout << "Child constructor" << endl;
    }   

    ~Child()
    {
                cout << "Child destructor" << endl;
    } 
};


int     main()
{
        Child obj;


    return 0;
}