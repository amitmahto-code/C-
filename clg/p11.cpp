// write a program that create base class cricketer and football. create derived class player that input & display all using multiple inheritance

#include<iostream>
using namespace std;

class football;
class cricketer {
    protected:
        int cid;
        string cname;
        int t_run;
        int t_wicket;
        
        
};
class football {
    protected:
        int fid;
        string fname;
        int t_gol;
   
};



class player:private cricketer, private football{
    public:
        void cri(){
            cout<<"Enter Cricket details\n";
            cout<<"cid:=";
            cin>>cid;
            cout<<"cname:=";
            cin>>cname;
            cout<<"Total_run:=";
            cin>>t_run;
            cout<<"Total_wicket:=";
            cin>>t_wicket;
        }
        void fball(){
            cout<<"Enter football details\n";
            cout<<"cid:=";
            cin>>fid;
            cout<<"football name:=";
            cin>>fname;
            cout<<"Total_gol:=";
            cin>>t_gol;
        }
        
        void display(){
            cout<<"cricketer details\n";
            cout<<"cid = "<<cid;
            cout<<"\ncname = "<<cname;
            cout<<"\nTotal_run:="<<t_run;
            cout<<"\nTotal_wicket:="<<t_wicket;        
            cout<<"\nfootball details\n";
            cout<<"cid = "<<fid;
            cout<<"\nfname = "<<fname;
            cout<<"\nTotal_gol:="<<t_gol;        

        }

};

int main(){
    player p;
    p.cri();
    p.fball();
    p.display();
    return 0;
}