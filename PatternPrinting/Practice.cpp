#include<iostream>
using namespace std;
int main(){
    float cp;
    cout<<"Enter The Cost Price : ";
    cin>>cp;
   float sp;
    cout<<"Enter The Selling Price : ";
    cin>>sp;
    if(cp>sp){
    cout<<"Loss"<<endl;
    cout<<"The Loss is : "<<cp-sp<<endl;
    }
    else if(cp<sp){
        cout<<"Profit"<<endl;
        cout<<"The Profit is : "<<sp-cp<<endl;
    }
    else
    cout<<"No Profit No loss";
    
}