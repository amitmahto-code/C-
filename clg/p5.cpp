#include<iostream>
using namespace std;
 class test {
    public:
        test(int a){
            cout<<"\n Param con with 1 int ";
        }
        test(){
            cout<<"\n param 0, Default con";
        }
        test(int a,int b){
            cout<<"\n param con with 2 int";

        }
 };

 int main(){
    test t;
    test t2(1);
    test t3(1,2);
    return 0;

 }