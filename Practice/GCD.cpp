#include<iostream>
using namespace std;
int main(){
    int a,b ;
    cout<<"Enter a and b : ";
    cin>>a>>b;
   int min =  (a<b) ? a : b ;
    for(int i = min;i>=1;i--){
         if(a%i==0 && b%i==0){
            cout<<i<<endl;
            break;
         }
         else 
         continue;
    }
    
}