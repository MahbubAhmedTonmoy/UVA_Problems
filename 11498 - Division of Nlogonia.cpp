#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    long int k,m,n,x,y,i;
    while(scanf("%d",&k)==1)
    {
        if(k==0) break;

        scanf("%ld%ld",&m,&n);
        for(i=0;i<k;i++)
        {
            scanf("%ld%ld",&x,&y);

            if(m==x || n==y) printf("divisa\n");
            if(m<x && n<y) printf("NE\n");
            if(m>x && n<y) printf("NO\n");
            if(m>x && n>y) printf("SO\n");
            if(m<x && n>y) printf("SE\n");
        }
    }
    return 0;
}
