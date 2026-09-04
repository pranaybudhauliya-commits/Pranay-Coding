#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int a = 1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=n;j++){
           cout<<i<<" ";
        }
        cout<<endl;
        a++;
    }
}