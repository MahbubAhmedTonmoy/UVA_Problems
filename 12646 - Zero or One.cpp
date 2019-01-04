#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        if(a==b && b==c)
            printf("*\n");
        if(a!=b && b==c)
            printf("A\n");
        if(b!=a && a==c)
            printf("B\n");
        if(c!=a && a==b)
            printf("C\n");
    }
    return 0;
}
