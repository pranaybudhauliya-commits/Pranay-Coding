#include<iostream>
using namespace std;
int main(){
    int n,rev = 0;
    cout<<"Enter n : ";
    cin>>n;
    int num = n;
    while(n!=0){
        int d = n%10;
        rev = rev*10+d;
        n = n/10;
    }
    if(num==rev){
        cout<<"Palindrome Number ";
    }
    else
    cout<<"Not Palindrome ";
}