#include <iostream>
using namespace std;
int main(){
    //10 interations
//  for(int i=19;i<=190;i+=19)
//  cout<<i<<" ";

// Method 2 
// 10 interations
// for(int i= 1;i<=10;i++)
// cout<<i*19<<" ";


// Method 3 Least Preffered
// 172 interations 
// for(int i= 1;i<=190;i++){
//      if(i%19==0) cout<<i<<" ";
// }

int n;
cout<<"Enter a Number: ";
cin>>n;
for(int i= 1;i<=10;i++)
cout<<i*n<<" ";


}