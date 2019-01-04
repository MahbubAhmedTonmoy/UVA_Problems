#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
     long int n,s,k,ans,di,re,dire;
    while(cin >> n >> k)  /** ans = n+(n-1)/(k-1)**/
    {
        s = n;
        ans = 0;
        while(s>=k)
            {
                di = s/k; /**divided**/
                re = s%k; /** remainder**/
                s = di + re;
                ans = ans + di;
            }
        printf("%d\n",n+ans);
    }
return 0;
}
