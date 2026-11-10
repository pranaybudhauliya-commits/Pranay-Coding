#include<iostream>
using namespace std;
int Factorial(int x){
    int d,fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact *i;
    }
    return fact;
}
int ncr(int n,int r){
   return Factorial(n)/(Factorial(r)*Factorial(n-r));
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){ //spaces
           cout<<" ";
        }

     for(int j=0;j<=i;j++){
     cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}