#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a Number: ";
  cin>>n;
  bool flag = false;//false means prime
    for(int i=2;i*i<=n;i++){
    if(n%i == 0){ //Factor mil gya except 1 and n
      // cout<<i<<" ";
     flag = true;
      break;
       }  

    }
    if(n==1) cout<<"Neither Prime nor Composite";
    else if(flag==true) cout<<"Composite number";
    else cout<<"Prime number";
}