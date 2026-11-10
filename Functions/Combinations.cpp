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
    cout<<"nCr is = ";
    int x = Factorial(n)/(Factorial(r)*Factorial(n-r)); // nCr
    cout<<x<<endl;

}