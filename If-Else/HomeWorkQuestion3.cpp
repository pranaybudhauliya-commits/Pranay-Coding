#include <iostream>
using namespace std;
int main(){
  int x;
  cout<<"value of x is: ";
  cin>>x;
  int y;
  cout<<"value of y is: ";
  cin>>y;
if(x>0 && y>0) cout<<"First Quardrant";
else if(x<0 && y>0) cout<<"Second Quadrant";
else if(x<0 && y<0) cout<<"Third Quadrant";
else if(x>0 && y<0) cout<<"Fourth Quardrant";
else cout<<"Point lies on axis";

}