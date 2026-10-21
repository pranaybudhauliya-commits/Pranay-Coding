#include <iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"Enter number : ";
    cin>>n;
    int even = 0;
    int odd = 0;
    while(n!=0){
        d = n%10;
        n = n/10;
        if(d%2==0){
            even++;
        }
        else
        odd++;
    }
    cout<<"Odd Digits = "<<" "<<odd<<endl;
    cout<<"Even Digits = "<<" "<<even<<endl;
}