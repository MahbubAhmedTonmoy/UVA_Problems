#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
    int t,j=1,a,b,c,d,e,f,g,h,s1,s2,s3,s4;
    cin>>t;
    while(t--)
    {
        scanf("%d:%d %d:%d",&a,&b,&c,&d);
        scanf("%d:%d %d:%d",&e,&f,&g,&h);
        s1 = a*60+b;
        s2 = c*60+d;
        s3 = e*60+f;
        s4 = g*60+h;

        if(s3>s2 || s1>s4)
            cout << "Case " << j << ": " << "Hits Meeting"<<endl;
        else
            cout << "Case " << j << ": " << "Mrs Meeting"<<endl;
        j++;


    }

return 0;
}
