#include <iostream>
using namespace std;
int main(){
    int n,d,f;
    cout<<"Enter number : ";
    cin>>n;
    cout<<"Enter A Digit : ";
    cin>>d;
    int freq = 0;
    while(n!=0){
        f = n%10;
        n = n/10;
        if(f == d){
            freq++;
            
        }
    }
    cout<<d<<"  "<<"Occurs"<<" "<<freq<<" "<<"Times";
}