#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s
        int M,A,R,G,I,T;
        M=0,A=0,R=0,G=0,I=0,T=0;
        int l = strlen(s);
        for(int i=0;i<l;i++)
        {
            if(s[i]=='M') M++;
            else if(s[i]=='A') A++;
            else if(s[i]=='R') R++;
            else if(s[i]=='G') G++;
            else if(s[i]=='I') I++;
            else if(s[i]=='T') T++;
        }
        int pizza = 0;
        while(1)
        {
            if(!(M>=1 && A>=3 && R>=2 && G>=1 && I>=1 && T>=1) break;
            else
            pizza++;
            M--;G--;A--;I--;T--;R--;
        }
        cout << pizza << endl;
    }
    return 0;
}
