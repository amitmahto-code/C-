// take positive integer input and tell if it is a three digit number or not 

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Number:";
    cin>>a;
    if(a>99 && a<1000){
        cout<<"Yes it is three digit number\n";
    }else{
        cout<<"it not three digit number";
    }
    return 0;
}

