#include<iostream>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;
int a[105];
int main()
{
    int t,p,i,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);

            p = a[n-1]-a[0];


        cout << p*2 << endl;

    }
return 0;
}

