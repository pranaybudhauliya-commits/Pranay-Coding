#include <iostream>
using namespace std;
void minOfTwo(int a, int b){ // 2 numbers ko receive karega and unka min print karega
    if(a<b) cout<<a<<" is smaller"<<endl;
    else cout<<b<<" is smaller"<<endl;
}
// isTareekeKoHumCamelCaseKehteHai
int main(){
    minOfTwo(71,34);
}