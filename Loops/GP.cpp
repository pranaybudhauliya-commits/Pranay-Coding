#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Terms: ";
    cin>>n;


//  1,2,4,8....
// int a = 1, r = 2;
//     for(int i=1;i<=n;i++){
//         cout<<a<<" ";//n times loop chalega
//      a *=r;
// }

// 2 , 6 , 18 , 54...
int a = 2, r = 3;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";//n times loop chalega
     a *=r;
}


}