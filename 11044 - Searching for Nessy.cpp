#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,w,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&w,&c);
        printf("%d\n",(w/3)*(c/3));
    }
    return 0;
}
