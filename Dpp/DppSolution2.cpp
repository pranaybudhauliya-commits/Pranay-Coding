// # include <iostream>
//  using namespace std ;
//  int main () {
//  int a = 5, b = 10;
//  if( a == b ) {
//  cout << " Equal matches " << a << endl ;
//  } else {
//  cout << "Not equal " << a << endl ;
//  }
//  return 0;
//  }

// # include <iostream>
//  using namespace std ;
//  int main () {
//  int a = 5, b = 10;
//  if( a = b ) {
//  cout << " Equal matches " << a << endl ;
//  } else {
//  cout << "Not equal " << a << endl ;
//  }
//  return 0;
//  }

//  #include<iostream>
//  using namespace std;
//  int main(){
//  int num =-7;
//  if (num >= 0) {
//  cout << "Inside Positive block" << endl; 
// } else { cout << "Inside Negative block" << endl;
//  }
//  return 0;
//  }


// #include<iostream>
//  using namespace std;
//  int main(){
//  int x = 0, y = 5;
//  if(x != 0 && (y = y + 10) > 10) {
//  cout << "Inside if branch" << endl;
//  }
//  cout << "x = " << x << ", y = " << y << endl;
//  return 0;
//  }


// #include<iostream>
//  using namespace std;
//  int main(){
//  int p = 1, q = 20;
//  if(p == 1 || (q = q + 5) > 25) {
//  cout << "First branch hit" << endl;
//  }
//  cout << "p = " << p << ", q = " << q << endl;
//  return 0;
//  }

// #include<iostream>
//  using namespace std;
//  int main(){
//  int marks = 45;
//  bool pass = (marks >= 40) ? true : false;
//  int bonus = pass ? 5 : 0;
//  cout << "Pass status: " << pass << ", Bonus: " << bonus << endl;
//  return 0;
//  }


//  #include<iostream>
//  using namespace std;
//  int main(){
//  int x = 12, y = 8;
//  int max_val = (x > y) ? x : y;
//  cout << "Maximum value is " << max_val << endl;
//  return 0;
//  }

//  #include<iostream>
//  using namespace std;
//  int main(){
//  int code = 2;
//  switch(code) {
//  case 1: cout << "Alpha" << endl;
//  case 2: cout << "Beta" << endl;
//  case 3: cout << "Gamma" << endl;
//  break;
//  default: cout << "Omega" << endl;
//  }
//  return 0;
//  }

// #include<iostream>
//  using namespace std;
//  int main(){
//  int val = 65;
//  switch(val) {
//  case 'A': cout << "Character match A" << endl; break; //ye code glt h kyuki a is undefined
//  case 65: cout << "Integer match 65" << endl; break;
//  default: cout << "No match found" << endl;
//  }
//  return 0;
//  }


//  #include<iostream>
//  using namespace std;
//  int main(){
// int a = 0, b = 0;
// if (a++ && ++b) {
// cout << "Condition standard check true" << endl;
// }
// cout << "a = " << a << ", b = " << b << endl;
// return 0;
//  }



// Method 1 ***
// #include<iostream>
//  using namespace std;
//  int main(){
//     int a ;
//     cout<<"Enter value of a: ";
//     cin>>a;
//     int b;
//     cout<<"Enter value of b: ";
//     cin>>b;
//     if (a == 0 || b == 0 ) cout<<"Zero";
//    else if(a*b > 0 ) cout<<"Output is Positive ";
//     else cout<<"Output is Negative ";
//  }

// Method 2 *****
// #include<iostream>
//  using namespace std;
//  int main(){
// int a ;
//      cout<<"Enter value of a: ";
//     cin>>a;
//      int b;
//      cout<<"Enter value of b: ";
//      cin>>b;
//  if(a == 0 || b == 0)
//     cout<<"Zero";

// else if((a > 0 && b > 0) || (a < 0 && b < 0))
//     cout<<"Positive";

// else
//     cout<<"Negative";
//  }


// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a Number :";
//     cin>>n;
//     if(n <= 0)
//     cout << "Enter positive number";
//    else if(n % 15 == 0) cout<<" Divisible by both 3 and 5 ";
//     else cout<<"Not Divisible by both 3 and 5 ";
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n, S;

//     cout<<"Enter no. of sides of Polygon: ";
//     cin>>n;

//     cout<<"Enter sum of interior angles: ";
//     cin>>S;

//     int formula = (n-2)*180;

//     if(S == formula)
//         cout<<"Valid Polygon";
//     else
//         cout<<"Invalid Polygon";

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
// int a,b;
// cout<<"Enter two Numbers : ";
// cin>>a>>b;
//  if(a %2 == 1 && b %2 == 1)  cout<<"Both are Odd ";
// else if(a %2== 1 || b %2 == 1) cout<<"One is Odd ";
// else cout<<"None is Odd ";
// }


// #include <iostream>
// using namespace std;
// int main(){
// int code;
// cout<<"Enter month number : ";
// cin>>code;
// switch (code){
//     case 1 : cout<<"January";
//     break;
//     case 2 : cout<<"Februrary";
//     break;
//     case 3 : cout<<"March";
//     break;
//     case 4 : cout<<"April";
//     break;
//     case 5 : cout<<"May";
//     break;
//     case 6 : cout<<"june";
//     break;
//     case 7 : cout<<"july";
//     break;
//     case 8 : cout<<"August";
//     break;
//     case 9 : cout<<"September";
//     break;
//     case 10 : cout<<"October";
//     break;
//     case 11 : cout<<"November";
//     break;
//     case 12 : cout<<"December";
//     break;
//     default : cout<<"Error ";
// }
// }



// #include <iostream>
// using namespace std;
// int main(){
// char Alpha;
// cout<<"Enter a Character : ";
// cin>>Alpha;
// if( Alpha>=65 && Alpha<=90) cout<<"Uppercase Alphabet ";
// else if(Alpha>=97 && Alpha<=122) cout<<"Lowercase Alphabet ";
// else if(Alpha>=48 && Alpha<=57) cout<<"Numerical value ";
// else cout<<"Other Symbolic term ";
    
// }



// #include <iostream>
// using namespace std;
// int main(){
//     int year;
//     cout<<"Enter Year : ";
//     cin>>year;
//     if( year%400 == 0) cout<<"Leap Year";
//     else if(year%100 == 0) cout<<"Not a Leap Year";
//     else if(year%4 == 0) cout<<"Leap Year ";
//     else cout<<"Not a Leap Year ";
// }


//     #include <iostream>
// using namespace std;
// int main(){
//    float x1,y1;
//    cout<<"Enter First Coordinates :";
//    cin>>x1>>y1;
//    float x2,y2;
//    cout<<"Enter Second Coordinates : ";
//    cin>>x2>>y2;
//    float x3,y3;
//    cout<<"Enter Third Coordinates : ";
//    cin>>x3>>y3;
//     if((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1)) cout<<"Points are Collinear ";
//     else cout<<"Points are not Collinear ";
// }


//     #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cout<<"Enter Side a : ";
//     cin>>a;
//     int b;
//     cout<<"Enter Side b : ";
//     cin>>b;
//     int c;
//     cout<<"Enter Side c : ";
//     cin>>c;
//     if(a+b>c && b+c>a && c+a>b){
//         if(a == b && b == c)cout<<"Equilateral Triangle ";
//         else if(a ==  b || b == c || c == a ) cout<<"Isosceles Triangle ";
//         else cout<<"Scalene Triangle ";
    
//     }
//    else cout<<"Not a Valid Triangle ";
// }


    #include <iostream>
using namespace std;
int main(){
    int unit;
    cout<<"Enter units :";
    cin>>unit;

    float bill;

    if(unit <= 100)
    bill = unit * 1.5 ;

    else if(unit >= 101 && unit<= 300 )
    bill = 100 * 1.5 + (unit-100) * 2.5 ;

    else 
    bill = 100 * 1.5 + 200 * 2.5 + (unit - 300) * 4 ;
    bill = bill + bill * 15/100;
    cout<<"Total bill : " << bill;
}