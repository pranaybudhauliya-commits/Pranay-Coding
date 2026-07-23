 #include <iostream>
#include <climits>
using namespace std;
int main(){
  int a,b,c;
  cout<<"Enter 3 numbers: ";
  cin>>a>>b>>c;
  if(a+b>c && a+c>b && b+c>a) cout<<"It is a Triangle";
  else cout<<"Not a Triangle";


}