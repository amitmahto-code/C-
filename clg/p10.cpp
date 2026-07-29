#include<iostream>
using namespace std;
class bca
{
    protected:
        float tbca;
        float fbca;
        void gbca(){
            cout<<"enter bca student deatils= ";
            cin>>tbca>>fbca;
        }
};

class bba {
    protected:
        float tbba;
        float fbba;
        void gbba(){
            cout<<"\n Enter bba student details= ";
            cin>>tbba>>fbba;
        }
};
class bcom {
    protected:
        float tbcom;
        float fbcom;
        void gbcom(){
            cout<<"\n Enter bcom student details= ";
            cin>>tbcom>>fbcom;
        }
};

class nlcpas:private bca,private bba,private bcom
{
    public:
    void gross()
    {
        gbca();
        gbba();
        gbcom();
        float ttbca,ttbba,ttbcom;
        ttbca = tbca+fbca;
        ttbba = tbba+fbba;
        ttbcom = tbcom+fbcom;
        float gross = (ttbca + ttbba + ttbcom);
        cout<<"BBA = "<<ttbba;
        cout<<"\nBCA = "<<ttbca;
        cout<<"\nBCOM = "<<ttbcom;
        cout<<"\nTOTAL = "<<gross;
    }
};

int main(){
    nlcpas n;
    n.gross();
    return 0;
}