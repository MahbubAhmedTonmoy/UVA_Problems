#include<bits/stdc++.h>

using namespace std;
int main()
{
    unsigned long long n;
    while(scanf("%lld",&n)!=EOF)
    {
        printf("%lld\n",((n-1)+(unsigned long long)log2(n-1)));
    }
    return 0;
}
