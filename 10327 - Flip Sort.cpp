#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
    int a[1050],n,i,j,t,c;
    while(scanf("%d",&n)==1)
        {
            for(i=0;i<n;i++)
            {
                 cin >> a[i];
            }

            c = 0;

            for(i=1; i<n; i++)
            {
                for(j=n-1; j>=i; j--)
                {
                    if(a[j-1] > a[j])
                    {
                        t = a[j-1];
                        a[j-1] = a[j];
                        a[j] = t;
                        c=c+1;
                    }
                }
            }
    printf("Minimum exchange operations : %d\n",c);
}
    return 0;
}
