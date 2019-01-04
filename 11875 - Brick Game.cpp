#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;
int main()
{
    int i,n,a[12],index,t,player;
    scanf("%d",&n);
        t = 1;
        while(n--)
        {
            scanf("%d",&player);
            for(i=0;i<player;i++)
                scanf("%d",&a[i]);
            sort(a,a+i);
            index = player/2;
            printf("Case %d: %d\n",t++,a[index]);
        }

    return 0;
}
