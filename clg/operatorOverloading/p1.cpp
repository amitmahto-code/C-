#include<iostream>
using namespace std;

class space
{
    int a,b,c;
public:
    void getdata(int x,int y,int z);
    void display();
    void operator-();
};
void space :: getdata(int x,int y,int z)
{
    a = x ;
    b = y;
    c = z;
}
void space :: display()
{
    cout<<"A:"<<a<<"B:"<<b<<"C:"<<c<<endl;
}
void space :: operator-()
{
    a = -a;
    b = -b;
    c = -c;
}

int main()
{
    space S;
    S.getdata(10,-20,30);
    cout<<"S : ";
    S.display();

    -S;
    cout<<"-S : ";
    S.display();
    return 0;
}