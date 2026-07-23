#include <iostream>
using namespace std;
int main(){

    // for(int i=1; i<=100; i++){
    // if (i % 3 == 0 && i % 2 != 0) 
    // cout<< i << " ";
    // }

    // Method 2

// for(int i=3; i<=100;i+=6 ){
    
//      cout<<i<<" ";
// }

// Method 3 but not best

for(int i=1; i<=100; i++){
    if (i % 3 == 0 && i % 2 == 1) 
    cout<< i << " ";
    }

}