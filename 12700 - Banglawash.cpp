#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,B,T,A,W;
    char ch;
    cin >> t;
    for(int i=1;i<=t;i++)
    {
        cin >> n;
        B=T=A=W=0;
        for(int j=0;j<n;j++)
        {
            cin >> ch;
            if(ch == 'W') W++;
            else if(ch == 'B') B++;
            else if(ch == 'T') T++;
            else if(ch == 'A') A++;
        }
        if(B == n || (B+A) == n && n!=A)
            cout << "Case " << t << ": BANGLAWASH" << endl;
        else if(W == n || (W+A) == n && n!=A)
            cout << "Case " << t << ": WHITEWASH" << endl;
        else if(B == W && n!=A)
            cout << "Case " << t << ": DRAW " << W << " " << T << endl;
        else if(B > W)
            cout << "Case " << t << ": BANGLADESH " << B << " - " << W << endl;
        else if(B < W)
            cout << "Case " << t << ": WWW " << W << " - " << B << endl;
        else if(A == n)
            cout << "Case " << t << ": ABANDONED" << endl;
    }
    return 0;
}
