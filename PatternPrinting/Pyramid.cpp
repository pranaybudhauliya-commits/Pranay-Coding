#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    //Method 1
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     int a = 2 * i - 1;
    //     for (int j = 1; j <= a; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }









        // Method 2
    //     for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n - i; j++)
    //     {
    //         cout << "  "; //spaces
    //     }
    //     for (int j = 1; j <= 2*i-1; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }







        //Method 3 (nsp,nst)
        int nsp = n-1, nst = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
        nsp--;
        nst += 2;
        cout << endl;
    }





}

