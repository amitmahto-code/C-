// creatte class cricketer with id,name,year of joining.
// create three derived class,Test(total test,run),odi(total odi,run),t20(total matches,run).
// display all info of odi ,test and t20 avg

#include <iostream>
using namespace std;

class cricketer
{
    int id, year;
    string name;

protected:
    void get()
    {
        cout << "Enter cricketer Id : ";
        cin >> id;
        cout << "Enter cricketer name : ";
        cin >> name;
        cout << "Enter yaer of joing : ";
        cin >> year;
    }

    void put()
    {
        cout << "Cricketer Id : " << id << endl
             << "Cricketer name : " << name << endl
             << "Cricketer year : " << year << endl;
    }
};

class test : cricketer
{
    int tot_test, run;

public:
    void tGet()
    {
        get();
        cout << "Enter Total test : ";
        cin >> tot_test;
        cout << "Enter run : ";
        cin >> run;
    }
    void tPut()
    {
        cout<<endl<<"test Details"<<endl;
        put();
        cout << "Total Test : " << tot_test << endl
             << "Run : " << run << endl;
        cout << "Avg : " << run / tot_test << endl;
    }
};

class odi : cricketer
{
    int tot_odi, run;

public:
    void oGet()
    {
        get();
        cout << "Enter Total test : ";
        cin >> tot_odi;
        cout << "Enter run : ";
        cin >> run;
    }
    void oPut()
    {
        cout<<endl<<"odi Details"<<endl;
        put();
        cout << "Total Test : " << tot_odi << endl
             << "Run : " << run << endl;
        cout << "Avg : " << run / tot_odi << endl;
    }
};

class t20 : cricketer
{
    int tot_match, run;

public:
    void ttGet()
    {
        get();
        cout << "Enter Total test : ";
        cin >> tot_match;
        cout << "Enter run : ";
        cin >> run;
    }
    void ttPut()
    {
        cout<<endl<<"t20 Details"<<endl;
        put();
        cout << "Total Test : " << tot_match << endl
             << "Run : " << run << endl;
        cout << "Avg : " << run / tot_match << endl;
    }
};


int main(){
    test t;
    t.tGet();
    t.tPut();

    odi o;
    o.oGet();
    o.oPut();
    
    t20 tt;
    tt.ttGet();
    tt.ttPut();
    
    return 0;

}