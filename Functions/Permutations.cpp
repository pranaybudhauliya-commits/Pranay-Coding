#include<iostream>
using namespace std;
int Factorial(int n){
    int d,fact = 1;
    for(int i=2;i<=n;i++){
        fact = fact *i;
    }
    return fact;
}
int main(){
    int n,r;
    cout<<"Enter n and r : ";
    cin>>n>>r;
    cout<<"nPr is = ";
     int y = Factorial(n)/Factorial(n-r); //nPr
     cout<<y;

}