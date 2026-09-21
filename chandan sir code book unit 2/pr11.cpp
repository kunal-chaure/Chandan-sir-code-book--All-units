#include <iostream>

using namespace std;


// Abstract class
class Shape
{
public:

    virtual double area() = 0;
};


// Rectangle class
class Rectangle : public Shape
{
private:
    double length, width;

public:

    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    double area() override
    {
        return length * width;
    }
};


// Circle class
class Circle : public Shape
{
private:
    double radius;

public:

    Circle(double r)
    {
        radius = r;
    }

    double area() override
    {
        return 3.14 * radius * radius;
    }
};


int main()
{
    Rectangle r1(51, 3);
    Circle c1(21);


    cout << "Rectangle Area: " << r1.area() << endl;

    cout << "Circle Area: " << c1.area() << endl;


    return 0;
}