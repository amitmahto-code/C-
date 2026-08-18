#include <iostream>
using namespace std;

class demo
{
public:
    demo(string name = "Amit")
    {
        cout << "hello " << name;
    }
    demo(int rollno)
    {
        cout << "Hello Rollno " << rollno << endl;
    }
};

int main()
{
    demo d(23);
    demo dd;
    return 0;
}