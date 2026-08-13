// Write a program to use pointer to character array

#include<iostream>
using namespace std;

int main(){
    char name[10];
    char *ptr;
    cout<<"Enter char: ";
    cin>>name;
    ptr = name;
    cout<<ptr;
    return 0;
}