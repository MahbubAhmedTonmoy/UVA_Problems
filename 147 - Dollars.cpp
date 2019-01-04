#include<bits/stdc++.h>
using namespace std;

int main()
{
    int coin[] = {5,10,20,50,100,200,500,1000,2000,5000,10000};
    long way[30010];
    memset(way,0,sizeof(way));
    way[0]=1;
    int j;
    for(int i=0;i<11;i++)
    {
        //cout << coin[i] << endl;
        for(int j=coin[i];j<30010;j++)
        {
           way[j] += way[j-coin[i]];
        }
        //cout << way[j] << endl;
    }
    long a,b;
    while(scanf("%ld.%ld",&a,&b))
    {
        long n = a*100+b;
        if(n==0) break;
        printf("%3ld.%2ld%17ld\n",a,b,way[n]);
    }
    return 0;
}
