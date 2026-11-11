#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b ;
    cout<<"Enter Range  a and b : ";
    cin>>a>>b;
    cout<<"Range of Prime Numbers Between "<<a<<" and "<<b<<" are : ";
    for(int n=a;n<=b;n++){
        int count = 0;
        if(n==1)
        continue;
         for(int i = 2;i<=sqrt(n);i++){
            if(n%i==0){
                count++;
            }
         }
         if(count == 0){
            cout<<n<<",";
         }
    }
}