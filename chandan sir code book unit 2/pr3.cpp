#include <iostream>

using namespace std;


// Base class
class Parent
{
public:

    void display()
    {
        cout << "Parent class function" << endl;
    }
};



// Public inheritance
class ChildPublic : public Parent
{
};



// Private inheritance
class ChildPrivate : private Parent
{
public:

    void accessFunction()
    {
        display();
    }
};



int main()
{

    ChildPublic obj1;

    obj1.display();


    cout << endl;


    ChildPrivate obj2;

    obj2.accessFunction();


    // obj2.display();   // Error: private inheritance


    return 0;
}