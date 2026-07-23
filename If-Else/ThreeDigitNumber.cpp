#include <iostream>
#include <climits>
using namespace std;
int main(){
 int n;
 cout<<"Enter the number: ";
 cin>>n;
if(n>=100){
    if(n<=999)  cout<<"3 Digit number";
    else cout<<"not a 3 Digit number";

}
else cout<<"not a 3 Digit number";



//  if(n >= 100 && n <=  999) cout<<"3 Digit number"; //and can also used in c++ instead of &&
//  else cout<<"not a 3 Digit number";


}