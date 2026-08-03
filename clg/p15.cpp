// create class personal(age,pin),professional(sal,exp)and employee(id,name).input and display all information using multilevel inheritance
#include<iostream>
using namespace std;

class personal
{
    int age,pin;
    protected:
        void p_get(){
            cout<<"Enter age : ";
            cin>>age;
            cout<<"Enter pin : ";
            cin>>pin;
        }
        void p_display(){
            cout<<"Age : "<<age<<endl<<"Pin : "<<pin<<endl;
        }

};

class professional:private personal
{
    int sal,exp;
    protected:
        void pr_get(){
            p_get();
            cout<<"Enter salary : ";
            cin>>sal;
            cout<<"Enter exp : ";
            cin>>exp;
        }

        void pr_display(){
            p_display();
            cout<<"Salary : "<<sal<<endl<<"exp : "<<exp;
        }
};


class emp : private professional
{
    int id;
    string name;

    public:
        void empGet(){
            cout<<"Enter emp id : ";
            cin>>id;
            cout<<"Enter emp name : ";
            cin>>name;
            pr_get();
        }
        void empDisplay(){
            cout<<"Emp id : "<<id<<endl<<"Name : "<<name<<endl;
            pr_display();
        }
};

int main()
{
    emp e;
    e.empGet();
    e.empDisplay();
    return 0;
}