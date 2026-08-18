// #include <iostream>
// using namespace std;
// int main(){
//     int m,n;
//     cout<<"Enter Rows and Columns :";
//     cin>>m>>n;
//     for(int i=1;i<=m;i++){
//         for(int j=1;j<=n;j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n :";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n :";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << (char)(j+64) << " ";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n :";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout <<  " *" << " ";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n :";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n :";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int m, n;
//     cout << "Enter Rows and Columns : ";
//     cin >> m >> n;
//     for (int i = 1; i <= m; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == 1 || i == m || j == 1 || j == n)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     int mid = (n / 2 + 1);
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (i == mid || j == mid)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }
//         cout<<endl;
//     }
// }



// Odd Number Triangle Method 2
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int a = 1;
    // WAP to print first n odd numbers
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }
}