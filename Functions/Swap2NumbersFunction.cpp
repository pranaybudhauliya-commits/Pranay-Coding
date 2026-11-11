#include<iostream>
using namespace std;
void swap(int& a,int& b ){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 5,b = 14;
    swap(a,b); //built in Function
    cout<<a<<" "<<b<<endl;
}