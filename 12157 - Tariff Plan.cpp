#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,c=1,n,sec,mile,juice;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        int mile=0, juice=0;
        while (n--)
        {
            scanf("%d",&sec);
            mile+=((sec/30)+1)*10;
            juice+=((sec/60)+1)*15;
        }
        printf("Case %d: ",c++);
        if (mile<juice)
            printf("Mile %d\n",mile);
        else if (juice<mile)
            printf("Juice %d\n",juice);
        else
            printf("Mile Juice %d\n",mile);

    }
    return 0;
}
