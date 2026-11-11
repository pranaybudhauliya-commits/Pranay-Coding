// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a Number : ";
// cin>>n;
// int count = 0;
//if(n==0) count++;
// while(n != 0){
//     n /= 10;
//     count++;
// }

// cout<<count;

// }


// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a Number : ";
// cin>>n;
// int sum = 0;
// while(n != 0){
//     int lastdigit = n%10;
//     sum += lastdigit;
//     n /= 10;

// }

// cout<<sum;

// }


// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a Number : ";
// cin>>n;
// int rev = 0;
// while(n != 0){
//     rev *= 10;
//     rev += (n%10);
//     n /= 10;
// }

// cout<<rev;

// }

// #include <iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter a Number : ";
// cin>>n;
// long long fact = 1;
// for(int i=2;i<=n;i++){
//     fact *= i;

// }

// cout<<fact;

// }



#include <iostream>
using namespace std;
int main(){
int a;
cout<<"Enter Base: ";
cin>>a;
int b;
cout<<"Enter Power: ";
cin>>b;
int ans = 1;
for(int i=1;i<=b;i++){
    ans *=a;
    if(a == 1) break;
}
if( a == 0 && b == 0) cout<<"Indeterminant Form";
else cout<<ans;

}








