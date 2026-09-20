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
};

 // Student class Person la inherit karto
class Student : public Person
{
private:
    int rollNo;

public:

    Student(string n, int r) : Person(n)
    {
        rollNo = r;
    }

    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};


int main()
{
    Student s1("anil dada", 24);


    s1.showDetails();


      return 0;
    }