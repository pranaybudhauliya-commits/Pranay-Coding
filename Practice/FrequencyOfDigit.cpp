#include<iostream>
using namespace std;
int main(){
    int n,d,freq=0;
    cout<<"Enter n : ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the digit : ";
    cin>>d;
    while(n!=0){
        int r = n%10;
        if(r==d){
           freq++;
        }
        n /=10;
    }
    cout<<"Freq Of Digit "<<d<<" "<<"is : "<<freq<<endl;
}