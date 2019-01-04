#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,p,c=1,t,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&k,&p);
        s = k+p;
        while(s>n)
        {
            s = s -n;
        }
        printf("Case %d: %d\n",c,s);
        c++;
    }
}
