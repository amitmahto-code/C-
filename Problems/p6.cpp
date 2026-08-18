// Write a C++ program to create a Customer class (customer
// name), an Account class (account number, balance), and a
// derived class Bank to display customer account information
// using multiple inheritance

#include <iostream>
using namespace std;

class customer
{
    string cname;

protected:
    void get()
    {
        cout << "Enter Customer name : ";
        cin >> cname;
    }
    void diply()
    {
        cout << endl
             << "Customer Name : " << cname << endl;
    }
};

class account
{
    long long accountNumber;
    long long balance;

protected:
    void getDetails()
    {
        cout << "Enter Account number : ";
        cin >> accountNumber;
        cout << "Enter Balance : ";
        cin >> balance;
    }
    void details()
    {
        cout << "Account number : " << accountNumber << endl;
        cout << "balance : " << balance;
    }
};

class bank : account, customer
{
public:
    void accountinfo()
    {
        get();
        getDetails();
    }
    void displayinfo()
    {
        diply();
        details();
    }
};

int main()
{
    bank bnk;
    bnk.accountinfo();
    bnk.displayinfo();
    return 0;
}