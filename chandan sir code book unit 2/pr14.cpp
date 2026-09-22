#include <iostream>
#include <string>

using namespace std;


// Outer class
class College
{
public:

    // Inner / nested class
    class Department
    {
    private:
        string deptName;

    public:

        Department(string name)
        {
            deptName = name;
        }

        void show()
        {
            cout << "Department: " << deptName << endl;
        }
    };
};


int main()
{
    College::Department d1("Artificial Intelligence and Data Science");


    d1.show();


    return 0;
}