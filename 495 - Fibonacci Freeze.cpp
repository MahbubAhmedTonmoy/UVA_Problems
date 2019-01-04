#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;

int fib(int n)
{
    int a = 0,b=1,c,i;
    if(n==0) return a;
    for(int i=2;i<=n;i++)
    {
        c = a+b;
        a = b;
        b = c;
    }
    return b;
}


int main()
{
    int n;
   while(scanf("%d",&n)!=EOF){

        printf("The Fibonacci number for %d is %d\n",n,fib(n));
   }
    return 0;
}
