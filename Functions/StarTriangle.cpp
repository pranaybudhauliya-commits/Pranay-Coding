#include <iostream>
using namespace std;
void starTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter 3 NUmbers ";
    cin >> a >> b >> c;
    starTriangle(a);
    starTriangle(b);
    starTriangle(c);
}