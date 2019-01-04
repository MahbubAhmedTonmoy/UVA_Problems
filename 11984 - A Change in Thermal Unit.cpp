#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int t,i;
    float c,d;
    cin >> t;
    for(i=1;i<=t;i++)
        {
            scanf("%f%f",&c,&d);
             c = c + 5.0 / 9.0 * d;
            printf("Case %d: %.2f\n",i,c);
        }

    return 0;
}
