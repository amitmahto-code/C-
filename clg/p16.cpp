// create class dist(id, name), taluka(id, name) and village(id,name).input and display all information using multilevel inheritance

#include<iostream>
using namespace std;

class dist
{
    int id;
    string name;
    protected:
        void get(){
            cout<<"Enter disit id : ";
            cin>>id;
            cout<<"Enter dist name : ";
            cin>>name;
        }
        void display(){
            cout<<"Distict Id : "<<id<<endl<<"Distict Name : "<<name<<endl;
        }
    };
    
    class taluka:private dist
    {
        int id;
        string name;
        protected:
        void talukaGet(){
            cout<<"Enter taluka id : ";
            cin>>id;
            cout<<"Enter taluka name : ";
            cin>>name;
            get();
        }
        void talukaDisplay(){
            cout<<"Taluka Id : "<<id<<endl<<"Taluka Name : "<<name<<endl;
            display();      
        }
    };
    
    class village:private taluka
    {
        int id;
        string name;
        public:
        void villageGet(){
            cout<<"Enter Village id : ";
            cin>>id;
            cout<<"Enter Village name : ";
            cin>>name;
            talukaGet();
        }
        void villageDisplay(){
            cout<<endl<<"Village Id : "<<id<<endl<<"Village Name : "<<name<<endl;   
            talukaDisplay();
        }
};

int main()
{
    village v;
    v.villageGet();
    v.villageDisplay();
    return 0;
}