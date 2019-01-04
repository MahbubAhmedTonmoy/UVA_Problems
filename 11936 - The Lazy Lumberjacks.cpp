#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
    int t,a,b,c;
    cin >> t;
    while(t--)
    {
        cin >> a  >> b>>c;
        if(a>=b+c||b>=a+c||c>=a+b)
            cout << "Wrong!!" << endl;
        else
            cout << "OK" << endl;
    }
return 0;
}
