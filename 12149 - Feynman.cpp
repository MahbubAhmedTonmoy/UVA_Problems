#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
int n,i;
while(scanf("%d",&n)==1 && n!=0)
{
unsigned long long s,sum=0;
for(i=1;i<=n;i++)
{
    s=i*i;
    sum=sum+s;
}
printf("%llu\n",sum);
}
return 0;
}
