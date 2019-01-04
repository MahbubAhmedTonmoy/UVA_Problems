#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int m,n,ans;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        ans = 0;
        ans = (m*n)-1;
        cout << ans <<endl;
    }
    return 0;

}
