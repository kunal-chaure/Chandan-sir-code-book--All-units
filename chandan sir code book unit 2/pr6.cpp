#include <iostream>

using namespace std;


// Academic class
class Academic
{
protected:
    int marks;

public:

    Academic(int m)
    {
        marks = m;
    }

    void showAcademic()
    {
        cout << "Academic Marks: " << marks << endl;
    }
};


// Sports class
class Sports
{
protected:
    int sports;

public:

    Sports(int s)
         {
        sports = s;
    }

        void showSports()
    {
        cout << "Sports Marks: " << sports << endl;
    }
};


// Student inherits both classes
class Student : public Academic, public Sports
{
public:

    Student(int a, int s) : Academic(a), Sports(s)
    {
    }

    void showTotal()
    {
        cout << "Total Marks: " << marks + sports << endl;
    }
};


int main()
{
    Student s1(80, 15);


    s1.showAcademic();
         s1.showSports();
    s1.showTotal();


    return 0;
}