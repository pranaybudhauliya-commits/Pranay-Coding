#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a and b : ";
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    // a = a+b;
    // b = a-b;
    // a = a-b;
    // int temp = a;
    // a = b;
    // b = temp;
    a = (a+b) - (b = a);
    cout<<a<<" "<<b<<endl;
}