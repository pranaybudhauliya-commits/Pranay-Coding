#include <iostream>
using namespace std;
int main()
{
    //Method 1
    int n;
    cout << "Enter n : ";
    cin >> n;
    int rows = n;
    for (int i = 1; i <= rows; i++)
    {
        int a = 2 * n - 1;
        for (int j = a; j >= 1; j--)
        {

            cout << "* ";
        }
        cout << endl;
        for (int j = 1; j <= i; j++)
        {

            cout << "  ";
        }
        n--;
    }




// #include <iostream>
// using namespace std;

// int main()
// {
//     //Method 2
//     int n;
//     cout << "Enter n : ";
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i - 1; j++)
//         {
//             cout << "  ";
//         }

//         int a = 2 * (n - i) + 1;

//         for (int j = 1; j <= a; j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }





        // Method 3
    //     int nst = 2*n-1, nsp = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= nsp; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= nst; j++)
    //     {
    //         cout << "* ";
    //     }
    //     nst -= 2;
    //     nsp++;
    //     cout << endl;
    // }








}