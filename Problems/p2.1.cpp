// take positive integer inoput and tell ig it is divisible by 5 or not 
#include<iostream>
using namespace std ;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    if(num%5==0){
        cout<<"yes";
    }
    else{
        cout<<"not";
    }
    return 0;
}