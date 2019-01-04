#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;

int main()
{

    long int N,B,H,W,p,a,cost,i,j,t;
    while(scanf("%ld%ld%ld%ld",&N,&B,&H,&W)==4)
    {
        cost = 9999999;
        for(i=0;i<H;i++)
        {
            cin >> p;
            for(j=0;j<W;j++)
            {
                cin >> a;
                t = 0;
                if(a>=N)
                {
                        t = N*p;
                        if(cost > t )
                            cost = t ;
                }
            }
        }
        if(cost > B)
            cout << "stay home" << endl;
        else
            cout << cost << endl;

    }
return 0;
}
