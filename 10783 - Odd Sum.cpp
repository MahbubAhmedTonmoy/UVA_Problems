#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int t;
    int j = 1;
    int a,b,sum;
    cin >> t;
    while(t--)
    {
        cin>>a>>b;
        sum = 0;
        for(int i=a;i<=b;i++)
        {
            if(i%2==1)
                sum +=i;
        }
            cout  << "Case " << j << ": "<< sum << endl;
        j++;
    }
return 0;
}

