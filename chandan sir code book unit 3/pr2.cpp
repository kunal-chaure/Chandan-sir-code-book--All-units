#include <iostream>

using namespace std;


// Square area
int area(int side)
{
    return side * side;
}


// Rectangle area
int area(int length, int width)
{
    return length * width;
}


// Circle area
double area(double radius)
{
    return 3.14 * radius * radius;
}


int main()
{
    cout << "Square Area: " << area(5) << endl;

    cout << "Rectangle Area: " << area(6, 4) << endl;

    cout << "Circle Area: " << area(2.0) << endl;


    return 0;
}