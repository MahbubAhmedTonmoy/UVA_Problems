#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        int M,A,R,G,I,T;
        M=0,A=0,R=0,G=0,I=0,T=0;
        int l = s.length();
        for(i=0;i<l;i++)
        {
            if(s[i]=='M') M++;
            else if(s[i]=='A') A++;
            else if(s[i]=='R') R++;
            else if(s[i]=='G') G++;
            else if(s[i]=='I') I++;
            else if(s[i]=='T') T++;
        }
        int pizza = 700;

        A/=3;
        R/=2;
        if(M<pizza) pizza = M;
        if(A<pizza) pizza = A;
        if(R<pizza) pizza = R;
        if(G<pizza) pizza = G;
        if(I<pizza) pizza = I;
        if(T<pizza) pizza = T;
        cout << pizza << endl;
    }
    return 0;
}
