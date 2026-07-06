#include<iostream>
using namespace std;
class employee{
    private:
        int e_no;
        char e_name[20];
        float salary;
    public:
        void getdata()
        {
            cout<<"enter your e_no:\n";
            cin>>e_no;
            cout<<"enter e_name:\n";
            cin>>e_name;
            cout<<"enter e_salary:\n";
            cin>>salary;
        }
        void printdata()
        {
            cout<<"Employee information"<<endl;
            cout<<"e_no:"<<e_no<<endl;
            cout<<"e_name:" << e_name<<endl;
            cout<<"e_salary:" << salary<<endl;
        }

}e1;

int main(){
    e1.getdata();
    e1.printdata();
    return 0;
}
