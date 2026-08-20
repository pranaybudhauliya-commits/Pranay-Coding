// # include <iostream>
// using namespace std;
// int main(){
//          int n;
//          cout<<"Enter n : ";
//          cin>>n;
// //          //Method 1
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << "  ";
//         }
//         int a = 2*i- 1;
//         for (int j = 1; j <= a; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
// }    
//         n -=1;
//     int rows = n;
// for (int i = 1; i <= rows; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {
//         cout << "  ";
//     }

//     int a = 2 * n - 1;

//     for (int j = a; j >= 1; j--)
//     {
//         cout << "* ";
//     }

//     cout << endl;
//     n--;
// }











# include <iostream>
using namespace std;
int main(){
         int n;
         cout<<"Enter n : ";
         cin>>n;
        //Method 2
         //Upper Pyramid
    //     int nsp = n-1, nst = 1;
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
    //     nsp--;
    //     nst += 2;
    //     cout << endl;
    // }


   // Lower Inverted Pyramid
    //     nsp = 1;
    //     nst = 2*n-3;
    // for (int i = 1; i <= n-1; i++)
    // {
    //     for (int j = 1; j <= nsp; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= nst; j++)
    //     {
    //         cout << "* ";
    //     }
    //     nsp++;
    //     nst -= 2;
    //     cout << endl;
    // }






            //Method 3
            int nsp = n-1, nst = 1;
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= nst; j++)
        {
            cout << "* ";
        }
       if(i<n){
         nsp--;
        nst += 2;
       }
       else {
        nsp++;
        nst -= 2;
       }
        cout << endl;
    }
}






