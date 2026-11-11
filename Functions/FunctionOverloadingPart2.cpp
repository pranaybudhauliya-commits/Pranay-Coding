#include<iostream>
using namespace std;
void fun(int x){
    cout<<"Hi"<<endl;
}
void fun(double x){
    cout<<"Good Morning"<<endl;
}
void fun(char x){
    cout<<"Jai Shree Ram "<<endl;
}
int main(){
    fun('a');
}