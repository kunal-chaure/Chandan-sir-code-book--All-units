#include <iostream>

using namespace std;


// Account class
class Account
{
private:
    double balance;

    friend class Checker;

public:

    Account(double amount)
    {
        balance = amount;
    }
};


// Friend class
class Checker
{
public:

    void check(const Account& acc)
    {
        // Friend class mule private data access karta yeto
        cout << "Account Balance: " << acc.balance << endl;
    }
};


int main()
{
    Account acc(5000);

    Checker c1;

    c1.check(acc);


    return 0;
}