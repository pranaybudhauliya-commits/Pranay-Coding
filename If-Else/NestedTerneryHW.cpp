#include <iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter 3 Numbers: ";
cin>>a>>b>>c;
cout << "Greatest = " << ((a > b) ? ((a > c) ? a : c ) : ((b > c) ? b : c));
}