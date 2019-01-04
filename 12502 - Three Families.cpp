#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,t,ans;
    scanf("%d",&t);
    while(t--)
    {
        cin >>a>>b>>c;
        ans = (c*(a+(a-b)))/(a+b);
        cout << ans << endl;
    }
}
