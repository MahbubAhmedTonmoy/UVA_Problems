#include<iostream>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    int t,n,ans;
    cin >> t;
    while(t--)
    {
        cin >> n;

        ans = abs((((((n*63)+7492)*5)-498)/10)%10);

        cout << ans << endl;

    }
return 0;
}
