  #include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Side a : ";
    cin>>a;
    int b;
    cout<<"Enter Side b : ";
    cin>>b;
    int c;
    cout<<"Enter Side c : ";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        if(a == b && b == c)cout<<"Equilateral Triangle ";
        else if(a ==  b || b == c || c == a ) cout<<"Isosceles Triangle ";
        else cout<<"Scalene Triangle ";
    
    }
   else cout<<"Not a Valid Triangle ";
}