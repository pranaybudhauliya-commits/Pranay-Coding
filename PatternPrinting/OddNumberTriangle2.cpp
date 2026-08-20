#include <iostream>
using namespace std;
int main()
{
    // Method 1
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = 2 * i - 1;
        for (int j = 1; j <= a; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     // Method 2
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int stars = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= stars; j++)
//         {
//             cout << "* ";
//         }
//         stars += 2;
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     //Method 3
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2 * i - 1; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }
