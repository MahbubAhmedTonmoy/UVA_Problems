#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
    long int n,x;
    while(cin >> n)
    {
        if(n==0) break;
        else if(n >= 101)
            x = n-10;
        else if(n<=100)
            x = 91;
           printf("f91(%d) = %d\n",n,x);
    }
return 0;
}
