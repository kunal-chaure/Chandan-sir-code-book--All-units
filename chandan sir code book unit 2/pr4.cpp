#include <iostream>
#include <string>

using namespace std;


// Person base class
class Person
{
protected:
    string name;

public:
    Person(string n)
    {
        name = n;
    }

    void showPerson()
    {
        cout << "Name: " << name << endl;
    }
};


// Employee inherits Person
class Employee : public Person
{
protected:
    int id;

public:
    Employee(string n, int i) : Person(n)
    {
        id = i;
    }

    void showEmployee()
    {
        cout << "Employee ID: " << id << endl;
    }
};


// Manager inherits Employee
class Manager : public Employee
{
private:
    int team;

public:
     Manager(string n, int i, int t) : Employee(n, i)
    {
        team = t;
    }

    void showManager()
    {
              showPerson();
        showEmployee();
            cout << "Team Size: " << team << endl;
    }
};


int main()
{
      Manager m1("kunal", 68, 8);

    m1.showManager();

    return 0;
}