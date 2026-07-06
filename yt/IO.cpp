#include<iostream>
#include<string>
using namespace std;

int main(){
    char name[10];
    char address[50];
    int mob;

    cout<<"Bio data program \n";

    cout<<"Enter your name \n";
    cin>>name;

    cout<<"Enter your Address \n";
    cin>>address;

    cout<<"Enter your Mobile Number\n";
    cin>>mob;

    cout<<"\nDisplay Bio Data\n"<<name<<"\n"<<address<<"\n"<<mob;

    return 0;
}