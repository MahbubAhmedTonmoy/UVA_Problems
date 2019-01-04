#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n,t,c;
    for(t=1; ;t++){
    scanf("%d",&n);
    if(n<0) break;
    c =0;
    n = n - 1;
        while(n>0)
        {
            n = n/2;
            c += 1;
        }

    printf("Case %d: %d\n",t,c);
    }
}
