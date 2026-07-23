#include <iostream>
using namespace std;
int main(){
  int n ;
  cout<<"Enter a number: ";
  cin>>n;
// (n%2==0) ? cout<<"Even" : cout<<"odd";
cout<<((n%2==0) ? "Even" : "Odd");
}