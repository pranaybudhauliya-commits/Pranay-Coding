#include <iostream>
using namespace std;
int main(){
int i;
cout<<"Enter a number: ";
cin>>i;

// if(i==1) cout<<"Monday";
// else if(i==2) cout<<"Tuesday";
// else if(i==3) cout<<"Wednesday";
//  else if(i==4) cout<<"Thursday";
// else if(i==5) cout<<"Friday";
// else if(i==6) cout<<"Saturday";
// else if(i==7) cout<<"Sunday";
// else cout<<"Invalid day";

switch(i) {
case 1: cout<<"Monday";break;
case 2: cout<<"Tuesday";break;
case 3: cout<<"Wednesday";break;
case 4: cout<<"Thursday";break;
case 5: cout<<"Friday";break;
case 6: cout<<"Saturday";break;
case 7: cout<<"Sunday";break;
default: cout<<"Invalid day";
}


}