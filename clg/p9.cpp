// write a program that create class programmer and tester with id ,name salary
// create friend function that display all programmer and tester detail(using common friend function body)


#include<iostream>
using namespace std;

class tester;

class programmer 
{
    int pid;
    char pname[25];
    int salary;
    public:
    void p(){
        cout<<"Enter programmer id,name,salary:=  ";
        cin>>pid>>pname>>salary;
    }
    friend void display(programmer p,tester t);
    
};

class tester {
    int id;
    char name[25];
    int salary;
    public:
        void t(){
            cout<<"Enter programmer id,name,salary:=  ";
            cin>>id>>name>>salary;
        }
        friend void display(programmer p ,tester t);

};

void display(programmer p,tester t){
    cout<<"\nProgrammer detials\n";
    cout<<"ID :"<<p.pid<<endl<<"Name :"<<p.pname<<endl<<"Salary"<<p.salary<<endl;
    cout<<"\nTester detials\n";
    cout<<"ID :"<<t.id<<endl<<"Name :"<<t.name<<endl<<"Salary :"<<t.salary<<endl;
    
}

int main()
{
    programmer pp;
    tester tt;
    pp.p();
    tt.t();
    display(pp,tt);

 }