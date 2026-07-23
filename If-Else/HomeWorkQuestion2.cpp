#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter 3 numbers: ";
cin>>a>>b>>c;
if(a<b && a<c) cout<<"a is the least number";
else if(b<a && b<c) cout<<"b is the least number";
else cout<<"c is the least number";
}