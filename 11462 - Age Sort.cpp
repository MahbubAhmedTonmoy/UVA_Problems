#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
long int a[2000001],i,n;
int main()
{

    while(scanf("%ld",&n)==1){
            if(n==0) break;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    sort(a,a+i);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
        if(i < n-1)
            printf(" ");
    }
    printf("\n");
}
return 0;
}
