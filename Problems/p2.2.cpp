// Given the length and breadth of a rectangle. 
//write a program to find whether the area of the rectangle is greater than
//its perimeter.
#include<iostream>
using namespace std;
int main(){
    float l,b;
    cout<<"Enter length ";
    cin>>l;
    cout<<"Enter breadth ";
    cin>>b;
    int area=l*b;
    int pera=2*(l+b);
    // cout<<"\n"<<pera;
    if(area>pera){
        cout<<"Area is greater then perimeter ";
    }else{
        cout<<"Area not greater than perimeter ";
    }
    return 0;

}