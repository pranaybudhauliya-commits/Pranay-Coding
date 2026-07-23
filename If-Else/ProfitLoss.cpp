#include <iostream>
using namespace std;
int main(){
  int cp;
 cout<<"Enter Cost Price: ";
  cin>>cp;
   int sp;
cout<<"Enter Selling Price: ";
    cin>>sp;

    if(cp < sp) cout<<"Profit is "<<sp-cp;
    else if(cp > sp) cout<<"Loss is"<<cp-sp;
   else  cout<<"No Profit, No Loss";

    // if(cp < sp) cout<<"Profit";
    // if(cp == sp) cout<<"No Profit, No Loss";
    // if(cp > sp) cout<<"Loss";

}