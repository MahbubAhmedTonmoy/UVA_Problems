#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
    long int n,ans;
    while(cin >> n)
    {
        if(n<0) break;

        ans = ((n*(n+1))/2)+1;
        cout << ans << endl;
    }
    return 0;
}
/***
while(cin >> n){
a=0;
b=1;
for(i=0;i<5;i++)
{
    c=b+a;
    a =a+1;
    b =c;}
    cout << c << endl;

}***/
