#include <iostream>
#include <string>

using namespace std;


// Employee ha base class aahe
class Employee
{
protected:
    string name;


public:// Employee cha name store karnyasathi constructor
    Employee(string n)
    {
        name = n;
    }
};// Developer class Employee la inherit karto
class Developer : public Employee
{
private:

    string programmingLanguage;


public:
                 // Developer cha name ani language set karto
    Developer(string n, string lang) : Employee(n)
    {
        programmingLanguage = lang;
    }


          // Developer chi information display karto
    void showDetails()
    {
        cout << "Developer: " << name << endl;

        cout << "Programming Language: " 
             << programmingLanguage << endl;
    }
};



int main()
{

// Developer cha object create kela
    Developer d1("kunal", "C++");

      // Developer chi details display keli
    d1.showDetails();


    return 0;
}