#include <iostream>
#include <climits>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
   if(n%5==0 && n%3==0) cout<<"Anuj";
else if(n%3==0) cout<<"Sakshi";
  else if(n%5==0) cout<<"Kartikey";
  else cout<<"Hitesh";

// if(n%5!=0 && n%3!=0)cout<<"Hitesh";
// if(n%5==0 && n%3!=0)cout<<"Kartikey";
// if(n%5!=0 && n%3==0)cout<<"Sakshi";
// if(n%5==0 && n%3==0)cout<<"Anuj";

}