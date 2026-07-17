// write a programmer that create class programmer with id, name, salary.create friend function that display all information of programmer 
#include<iostream>
using namespace std;
class programmer 
{
    int pid;
    char pname[25];
    float salary;
    friend void display(programmer);
    public:
        void g()
        {
            cout<<"\nEnter programmer pid,pname, salart  ";
            cin>>pid>>pname>>salary;
        }
};

void display(programmer p){
    cout<<"\nProgrammer id, name ,salary is  = ";
    cout<<p.pid<<" "<<p.pname<<" "<<p.salary;
};

int main(){
    programmer pp;
    pp.g();
    display(pp);
    return 0;
}
