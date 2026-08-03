// using multilevel inheritance , create classes bating, bowling, wicket keeping and cricket. input 5 crickete, display only those cricketer who play more than 200 matches and stumping more than 20

#include<iostream>
using namespace std;

class bat
{
    int run;
    protected:
    void getBat(){
        cout<<"Enter Total run : ";
        cin>>run;
    }

    void displayBat(){
        cout<<"Total run : "<<run<<endl;
    }
};

class bowl:bat
{
    int wicket;
    protected:
    void getBowl(){
        cout<<"Enter wicket : ";
        cin>>wicket;
        getBat();
    }
    
    void displayBowl(){
        cout<<"Total Wicket : "<<wicket<<endl;
        displayBat();
    }

};

class wicket:bowl
{
    protected:
        int stamp;
        void getWicket(){
            cout<<"Enter Total stamp : ";
            cin>>stamp;
            getBowl();
        }

        void displayWicket(){
            cout<<"Total Stamp : "<<stamp<<endl;
            displayBowl();
        }
};

class cricket:wicket
{
    int criId;
    string name;
    int match;
    public:
        void getCri(){
            cout<<"Enter cricketer Id : ";
            cin>>criId;
            cout<<"Enter cricketer name : ";
            cin>>name;
            cout<<"Enter Total match : ";
            cin>>match;
            getWicket();
        }
        void displayCri(){
            if(match > 200 && stamp > 20 ){
                cout<<endl<<"Cricketer Id : "<<criId<<endl<<"Cricketer Name : "<<name<<endl;
                displayWicket();
            }
        }
};

int main()
{
    int i;
    cricket c[2];
    for(i=0; i<2; i++){
        c[i].getCri();
    }
    for(i=0; i<2; i++){
        c[i].displayCri();
    }
    return 0;
}