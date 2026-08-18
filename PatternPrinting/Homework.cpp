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




#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n :";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}