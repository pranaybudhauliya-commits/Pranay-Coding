#include <iostream>
using namespace std;
int main(){
  float x ;
  cout<<"Enter a Real no. ";
  cin>>x;
  int y = (int)x;
  if(x==y) cout<<"INTEGER";
  else cout<<"NOT AN INTEGER";
}