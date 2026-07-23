#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n;
  cout<<"Enter a Number: ";
  cin>>n;
    for(int i=1;i<=sqrt(n);i++){
       if(n%i==0) { //Factor mil gya
    cout<<i<<" ";
    if(i !=n/i) cout<<n/i<<" ";
    }
}
}