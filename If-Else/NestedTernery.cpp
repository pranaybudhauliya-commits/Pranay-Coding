#include <iostream>
using namespace std;
int main(){
 int x = 2;
 int y = (x <= 23) ? (x > 12) ? x-4 : x*4 : (x < 12) ? x/4 : x+4 ;
 cout<<y;
}