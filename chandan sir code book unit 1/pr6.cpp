#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void show() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;

    s1.name = "kunal";
    s1.age = 20;

    s1.show();

    return 0;
}