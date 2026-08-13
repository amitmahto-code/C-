// // Write a program to perform Hierarchical inheritance
// which perform addition , multiplication, division of 2
// nos.
#include <iostream>
using namespace std;
class getNumber
{
protected:
    int num1, num2;
    void getNum()
    {
        cout << "Enter number1 : ";
        cin >> num1;
        cout << "Enter number1 : ";
        cin >> num2;
    }
};

class add : getNumber
{
public:
    void ad()
    {
        getNum();
        cout << "Addition : " << num1 + num2<<endl;
    }
};
class sub : getNumber
{
public:
    void s()
    {
        getNum();
        cout << "Subtraction : " << num1 - num2<<endl;
    }
};
class mul : getNumber
{
public:
    void m()
    {
        getNum();
        cout << "Multiplication : " << num1 * num2<<endl;
    }
};
class divi : getNumber
{
public:
    void d()
    {
        getNum();
        if(num2 == 0){
            cout<<"Division cannot be zero"<<endl;
        }else{
            cout << "Division : " << num1 / num2<<endl;
        }
    }
};

int main()
{
    add a;
    sub sb;
    mul ml;
    divi dv;
    a.ad();
    sb.s();
    ml.m();
    dv.d();
    return 0;
}