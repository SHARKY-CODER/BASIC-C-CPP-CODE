#include<iostream>
using namespace std;

class bank
{
private:
    double balance;

public:
    bank()
    {
        balance = 0;
    }

    void deposit(double amount)
    {
        balance = balance + amount;
    }

    void withdraw(double amount)
    {
        balance = balance - amount;
    }

    void getbalance()
    {
        cout << "Current balance = " << balance << endl;
    }
};

int main()
{
    bank account;

    account.deposit(10000);
    account.withdraw(2500);
    account.getbalance();

    return 0;
}
