// take positive integer input and tell if it is divisible by 3 and 5;
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(num%5==0 && num%3==0){
        cout<<"Yes it divisible by 3 and 5 ";
    }else{
        cout<<"not";
    }
    return 0;
}