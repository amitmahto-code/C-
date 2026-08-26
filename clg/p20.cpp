// Write a C++ program to overload the area() function to calculate the area of a square, rectangle, and circle.

#include<iostream>
using namespace std;

class areaa
{
    public:
    void area(int a){
        cout<<"Area of Square: "<<a*a<<endl;
    }
    void area(int w ,int l){
        cout<<"Area of rectangle: "<<w*l<<endl;
    }
    void area(float r, float pi = 3.14){
        cout<<"Area of Circle: "<<r*r*pi<<endl;
    }
};

int main()
{
    areaa a;
    a.area(5);
    a.area(5,4);
    a.area(4.5f);
}