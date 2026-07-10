#include <iostream>
using namespace std;

class Employee
{
private:
    int eid;
    char ename[30];
    double salary;

public:
    void get();
    void print();
};

void Employee::get()
{
    cout << "Enter Employee ID   : ";
    cin >> eid;

    cout << "Enter Employee Name : ";
    cin >> ename;

    cout << "Enter Monthly Salary: ";
    cin >> salary;
}

void Employee::print()
{
    if (salary * 12 > 250000)
    {
        cout << "\nEmployee ID      : " << eid
             << "\nEmployee Name    : " << ename
             << "\nMonthly Salary   : " << salary
             << "\nAnnual Salary    : " << salary * 12
             << "\n------------------------------\n";
    }
}

int main()
{
    const int SIZE = 3;
    Employee e[SIZE];

    cout << "Enter Employee Details\n\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Employee " << i + 1 << '\n';
        e[i].get();
        cout << '\n';
    }

    cout << "\nEmployees with Annual Salary > 250000\n";

    for (int i = 0; i < SIZE; i++)
    {
        e[i].print();
    }

    return 0;
}