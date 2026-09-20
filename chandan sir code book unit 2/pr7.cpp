#include <iostream>
using namespace std;


// Academic class
class Academic
{
public:

    void display()
    {
        cout << "Academic information" << endl;
        }
};


// Sports class
class Sports
    {
public:

    void display()
    {
            cout << "Sports information" << endl;
    }
};


// Student inherits both classes
    class Student : public Academic, public Sports
{
public:

    void showAll()
    {
        Academic::display();
         Sports::display();
    }
};


int main()
{
    Student s1;


    s1.Academic::display();
        s1.Sports::display();

         s1.showAll();


    return 0;
}