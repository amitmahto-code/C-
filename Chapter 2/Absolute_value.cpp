// takle integer input and print the absolute value of that intger
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter  number ";
    cin>>n;
    if(n>=0){
        cout<<n;
    }
    else{
        cout<<-n;
    }
}