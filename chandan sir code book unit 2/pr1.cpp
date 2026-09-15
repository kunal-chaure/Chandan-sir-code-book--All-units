#include <iostream>
#include <string>

using namespace std;



//  Person ha base class aahe
class Person
{
protected:
        string name;

public:

    // Name set karnyasathi constructor
             Person(string n)
    {
        name = n;
    }


    // Person cha name display karto
    void showName()
    {
        cout << "Name: " << name << endl;
    }
};

//  Student class, Person class la inherit karto
class Student : public Person
{
private:

    int rollNo;


public:

                 // Student cha name ani roll number set karto
    Student(string n, int r) : Person(n)
    {
        rollNo = r;
    }


    // Student chi information show karto
    void showStudent()
    {
        showName();       // Base class madhla function call
            cout << "Roll Number: " << rollNo << endl;
    }       
};
int main()
{

    // Student cha object create kela
    Student s1("kunal", 68);


    // Student chi information display keli
         s1.showStudent();


    return 0;
}