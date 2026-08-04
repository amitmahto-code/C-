// create class book with ic,name . create two derived class. e-book and text-book with price. Input & display information with tree (heriachical) inheritance

#include <iostream>
using namespace std;

class book
{
    int id;
    string name;

protected:
    void get()
    {
        cout << "Enter book id : ";
        cin >> id;
        cout << "Enter book Name : ";
        cin >> name;
    }
    void put()
    {
        cout << "Book id : " << id << endl
             << "Book Name : " << name << endl;
    }
};

class eBook : book
{
    int price;

public:
    void getEbook()
    {
        cout <<endl<< "Enter E-book details" << endl;
        get();
        cout << "Enter price : ";
        cin >> price;
    }
    void putEbook()
    {
        cout <<endl<< "E-book details" << endl;
        put();
        cout << "Price : " << price << endl;
    }
};

class text_book : book
{
    int price;

public:
    void getTbook()
    {
        cout <<endl<< "Enter Text-book details" << endl;
        get();
        cout << "Enter price : ";
        cin >> price;
    }
    void putTbook()
    {
        cout <<endl<< "Text-book details" << endl;
        put();
        cout << "Price : " << price << endl;
    }
};

int main()
{
    eBook e;
    text_book t;
    e.getEbook();
    t.getTbook();
    e.putEbook();
    t.putTbook();
    return 0;
}