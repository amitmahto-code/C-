// write a program that create base class cricketer and football.
// create derived class player that input 2 players.
// display only those players whose totol run > 5000 and goal > 50
#include<iostream>
using namespace std;

class cricketer
{   
    protected:
        int cid , run;
        char cname[20];
    public:
        void cri(){
            cout<<"Enter cricketer id: ";
            cin>>cid;
            cout<<"Enter cricketer name: ";
            cin>>cname;
            cout<<"Enter crickerter total run: ";
            cin>>run;
        }
    };
    class football
    {   protected:
        int fid , gol;
        char fname[20];
        public:
        void foot(){
            cout<<"Enter football id: ";
            cin>>fid;
            cout<<"Enter football name: ";
            cin>>fname;
            cout<<"Enter football total gole: ";
            cin>>gol;
        }
};

class player:private cricketer,private football
{
    public:
    int pid;
        void ply(){
            cout<<"Enter player id: ";
            cin>>pid;
            cri();
            foot();
        }
        void dsply(){
            if(run>5000 && gol> 50 ){
                cout<<"\npalyer id: "<<pid;
                cout<<"\ncricketer id : "<<cid;
                cout<<"\ncricketer name : "<<cname;
                cout<<"\ncricketer total run : "<<run;
                
                cout<<"\nfootball id : "<<fid;
                cout<<"\nfootball name : "<<fname;
                cout<<"\nfootball total run : "<<gol;
            }
        }

};

int main(){
    int i;
    player p[5];
    for(i =0;i<5;i++){
        p[i].ply();
    }
    for(i =0;i<5;i++){
        p[i].dsply();
    }
    return 0;
}