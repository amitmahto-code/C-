// print roll no and name id default parameter as static value and calculate marks of two subjects in parameterized constroctor

#include<iostream>
using namespace std;

class stud
{
    int rollno;
    string sname;
    int tmarks;

    public:
        stud(int r =101, string n= "amit"){
            rollno = r;
            sname = n;
            cout<<"student roll no: "<<rollno;
            cout<<"\nstudent name : "<<sname;
        }
        stud(int m1,int m2){
            tmarks=m1+m2;
            cout<<"\ntotal marks: "<<tmarks;
        }


};

int main(){
    
    stud s;
    stud s1(50,50);
    
    return 0;

}