
///n! / (n-r)! * r! combination formula


#include <iostream>
#include<stdio.h>
#include <iomanip>
using namespace std;

///----------function for combination----------///


long double factorial (long double n){  /// input 5

    long double r = 1;
    for (long double i = 2; i <= n; i++)  /// count 2 to 5
    {
        r *= i;                           /// r=r(1)*2= 2 -> r = r(2)*3=6 -> r=r(6)*4=24 -> r=r(24)*5=120
    }
    return r;                             ///return value of r
}


///-------recursive function----------///
int factorial(int n){
    if (n==0) return 1;
    if(n>0) return n*factorial(n-1);
}


int main ()
{
    long double m, n;
    while (cin >> m >> n&&m!=0&&n!=0)
    {
        long double ans = (factorial(m))/(factorial(m-n)*factorial(n));
        cout << m << " things taken " << n << " at a time is " << fixed << setprecision(0) << ans << " exactly." << endl;
    }

}



