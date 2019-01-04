#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int t,r,s[505],median,ans;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&r);
        for(int i=0;i<r;i++)
        {
            scanf("%d",&s[i]);
        }
        sort(s,s+r);
        median = s[r/2];
        //cout<< median << endl;
        /** if(r%2==0)
        {
            d=r/2;
            med=a[d];
        }
        else
        {
            d=(r/2)+1;
            med=a[d];
        }**/
        ans = 0;
        for(int i=0;i<r;i++)
        {
             ans += abs(median-s[i]);
        }

        printf("%d\n",ans);
    }
}
