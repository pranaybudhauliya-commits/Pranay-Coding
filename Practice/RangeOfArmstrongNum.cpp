#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter Range  a and b : ";
    cin>>a>>b;
    cout<<"Range of Armstrong  Numbers Between "<<a<<" and "<<b<<" are : ";
    for(int n = a;n<=b;n++){
        int count = 0;
        int num = n;
        int sum = 0;
        int temp = n;
           while(temp!=0){
            count++;
            temp /=10;
           }
           temp=num;
           while(temp!=0){
            int d = temp%10;
            sum = sum + pow(d,count);
            temp /=10;
           }
            if(sum == num){
            cout<<num<<",";
        }
        }
    }