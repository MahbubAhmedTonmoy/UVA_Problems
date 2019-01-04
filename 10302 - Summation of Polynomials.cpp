#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
     long long int i,n,sum;
    while(cin >> n)
    {
        sum = 0;
        for(i=1;i<=n;i++)
        {
            sum += (i*i*i);
        }

        printf("%lld\n",sum);
    }
return 0;
}
