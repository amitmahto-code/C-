//if cost price and selling price of an item is input through the keybord
//write a program to determine whether the seller has made profit or incurred loss 
// no profit no loss. also determine how much profit the made or loss he incurred.

#include<iostream>
using namespace std;
int main(){
    int cp,sp,x;
    cout<<"Enter cost price ";
    cin>>cp;
    cout<<"Enter Selling price ";
    cin>>sp;

    if(cp<sp){
        cout<<"They made profit "<<sp-cp;
    }
    else if(cp>sp){
        cout<<"They made loss "<<cp-sp;
    }
    else{
        cout<<"No Profit No loss ";
    }
    return 0;
}