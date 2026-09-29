#include <iostream>

using namespace std;


// Same function name, different parameters
int sum(int a, int b)
{
    return a + b;
}

double sum(double a, double b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}


int main()
{
    cout << "Two integers: " << sum(15, 25) << endl;

    cout << "Two doubles: " << sum(3.5, 4.2) << endl;

    cout << "Three integers: " << sum(10, 20, 30) << endl;


    return 0;
}