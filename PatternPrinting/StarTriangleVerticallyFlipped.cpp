#include <iostream>
using namespace std;
int main()
{
    
    int n;
    cout << "Enter n : ";
    cin >> n;
    // Method 1
   for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
              cout<<"  ";
        }
            for (int j = 1; j <= i; j++)
        {
              cout<<"* ";
       
    }

           cout << endl;
      }

// Method 2
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if ((i + j) > n)
    //             cout << "* ";
    //         else
    //             cout << "  ";
    //     }
    //     cout << endl;
    // }

}