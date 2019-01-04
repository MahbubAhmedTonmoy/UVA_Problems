#include<iostream>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
    int t,a,b,c,i=1;
    cin >> t;
    while(i<=t)
    {
        cin >> a >> b >> c;

        if((b>a && c<a)||(b<a && c>a))
            cout << "Case "<< i <<": "<< a << endl;

        else if((a<b && c>b)||(c<b && a>b))
            cout << "Case "<< i <<": "<< b << endl;

        else if((a<c && b>a)|| (b<c && a>b))
            cout << "Case "<< i <<": " << c << endl;
        else if(a==b && b==c)
            cout << "Case "<< i <<": " << a << endl;
        else if(a==b)
            cout << "Case "<< i <<": " << a << endl;
        else if(b==c)
            cout << "Case "<< i <<": " << b << endl;
        else if(c==a)
            cout << "Case "<< i <<": " << a << endl;
i++;
    }
return 0;
}
