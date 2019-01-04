#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
    int a,b,x,y;
    while(cin >>a >> b){

    if( a== -1 && b== -1) break;
    if(a>b || a==b){
    x = ((100-a)+b);
    y = (a-b);
    }
    else if(b>a)
    {
        x = ((100-b)+a);
        y = (b-a);
    }
    if(x<y)
        cout << x << endl;
    else
        cout << y << endl;
 }
return 0;
}

