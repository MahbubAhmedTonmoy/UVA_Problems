#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int j = 1;
    while(t--)
    {
        int i,a,n,max=0;
        cin >> n ;
        for( i=0; i<n;i++)
        {
            cin >> a;

            if(a>max)
            max = a;
        }

            cout << "Case " << j << ": "<< max << endl;
j++;
    }
return 0;
}
