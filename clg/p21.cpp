// Write a menu driven program to use string functions. (strcmp,
// strcat, strlen, strrev, strcpy)
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char name1[20];
    char name2[20];
    int n;
    cout << "1.Compare two string" << endl;
    cout << "2.add two string" << endl;
    cout << "3.lenght of string" << endl;
    cout << "4.reverse order" << endl;
    cout << "5.copy string" << endl;
    cout << "6.Exit" << endl;
    do
    {
        cout << "Enter choices: ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Enter your 1st string" << endl;
            cin >> name1;
            cout << "Enter your 2nd string" << endl;
            cin >> name2;
            if (strcmp(name1, name2) == 0)
            {
                cout << "both string same" << endl;
            }
            else
            {
                cout << "Both string are different" << endl;
            }
            break;
        case 2:
            cout << "Enter your 1st string" << endl;
            cin >> name1;
            cout << "Enter your 2nd string" << endl;
            cin >> name2;
            cout<<"Added two String: "<<strcat(name1,name2)<<endl;
            break;
        
        case 3:
            cout << "Enter your string" << endl;
            cin >> name1;
            cout<<"Length of string: "<<strlen(name1)<<endl;
            break;
        case 4:   
            cout << "Enter your string" << endl;
            cin >> name1;
            cout<<"String reverse: "<<strrev(name1)<<endl;
            break;
        case 5:
            cout << "Enter your string" << endl;
            cin >> name1;
            char copy[20];
            strcpy(copy,name1);
            cout<<"Copied string: "<<copy<<endl;
            break;
        case 6:
            cout<<"Exit";
            break;
        
        default:
            cout<<"Enter a vaild number"<<endl;
            break;
        }
    } while (n != 6);
}