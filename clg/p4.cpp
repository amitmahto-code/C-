#include<iostream>
using namespace std;

class student{
        int roll;
    public:
        student(int r){
            roll=r;
            cout<<roll<<endl;
        }
};

int main(){
    student s1(11),s2(112);
    return 0;
}