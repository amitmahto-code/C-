// program that create two class mark(m1,m2,m3) and stud (sid,name). using single inheritance input 5 students. display only those students who pass in all subjects.

#include<iostream>
using namespace std;

class mark
{
    protected:
        int m1,m2,m3;

        void get()
        {
            cout<<"Enter student marks"<<endl;
            cin>>m1>>m2>>m3;
        }
       void display(){
            cout<<"marks1 = "<<m1<<endl<<"marks2 = "<<m2<<endl<<"marks3 = "<<m3;
       }

};

class stud:private mark
{
    protected:
        int sid;
        string name;
    public:
        void getinput(){
            cout<<"Enter student details\n";
            cout<<"Enter student sid : ";
            cin>>sid;
            cout<<"Enter student name : ";
            cin>>name;
            get();
        }

        void displayy(){   
            if(m1>33 && m2>33 && m3>33){
                cout<<"\nstudent sid : "<<sid<<endl<<"student name: "<<name<<endl; 
                display();           
            }
        }
};

int main(){
    int i;
    stud s[5];
    for(i=0;i<5;i++){
        s[i].getinput();
    }
    for(i=0;i<5;i++){
        s[i].displayy();
    }

    return 0;
}