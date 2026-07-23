#include <iostream>
using namespace std;
int main(){
//     int n;
//     cout<<"Enter a Number: ";
//     cin>>n;
//    for(int i= 1; i<=n ; i++)
//     cout<<"Hello PW"<<endl;

// for (int i=1 ; i<=100 ; i++)
// cout<<i<<" ";

// for(int  i=2; i<=100; i += 2)
// cout<<i<<" ";

//other method for this code using % operator

// for(int i=1; i<=100;i++ ){
//     if (i % 2 == 0)
//     cout<<i<<" ";
// }
for(int i=1; i<=100; i++){
    if (i % 3 == 0 && i % 2 != 0) 
    cout<< i << " ";
}

 }