#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,d,sum = 0,count = 0;
    cout<<"Enter n : ";
    cin>>n;
    int num = n;
    while(n!=0){
        count++;
        n /=10;
    }
    n = num;
    while(n!=0){
        d = n%10;
        sum = sum + pow(d,count);
        n /=10; 
    }
    if(sum==num){
        cout<<"Armstrong Number ";
    }
    else
    cout<<"Not an Armstrong Number ";

    
}