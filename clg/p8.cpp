// write a program that create clas prorammer and tester with id, name, salary. create friend function that diaplay all programmer and tester details(individual friend function body)

#include<iostream>
using namespace std;

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
    friend void displayPro(programmer);
    
};

class tester {
    int pid;
    char pname[25];
    int salary;
    public:
        void t(){
            cout<<"Enter programmer id,name,salary:=  ";
            cin>>pid>>pname>>salary;
        }
        friend void displaytest(tester);

};

void displayPro(programmer p){
    cout<<"\nProgrammer detials\n";
    cout<<"ID :"<<p.pid<<endl<<"Name :"<<p.pname<<endl<<"Salary"<<p.salary<<endl;
    
}
void displaytest(tester t){
    cout<<"\nTester detials\n";
    cout<<"ID :"<<t.pid<<endl<<"Name :"<<t.pname<<endl<<"Salary :"<<t.salary<<endl;

}

int main(){
    programmer pp;
    tester tt;
    pp.p();
    tt.t();
    displayPro(pp);
    displaytest(tt);

}