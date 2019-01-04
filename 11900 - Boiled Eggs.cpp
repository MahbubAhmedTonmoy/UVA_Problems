#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int i,n,p,q,a[1000],t,c=1,count,sum;
    scanf("%d",&t);
    while(c<=t)
    {
        count = 0;
        sum = 0;
        scanf("%d%d%d",&n,&p,&q);
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n && i<=p;i++)
        {
            sum += a[i];
            if(sum > q) break;
            count++;
        }

        printf("Case %d: %d\n",c,count);

        c++;
    }
}
