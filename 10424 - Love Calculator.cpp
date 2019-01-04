#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    char a1[30], a2[30];
    int s1,s2,a,b,i;
    float ans;
    int l1,l2;
    while(gets(a1))
    {
        gets(a2);
        l1 = strlen(a1);
        l2 = strlen(a2);
        s1= 0;
        for(i=0;i<l1;i++)
        {
            if(a1[i]>='a' && a1[i]<='z')
                s1+=a1[i]-96;
            else if(a1[i]>='A' && a1[i]<='Z')
                s1 += a1[i]-64;
        }
        a = 0;
        while(s1!= 0)
        {
            a += s1%10;
            s1/=10;
        }
             if(a>9)
        {
            s1 = a;
            a = 0;
            while(s1!=0)
            {
                a += s1%10;
                s1/=10;
            }

        }


        s2= 0;
        for(i=0;i<l2;i++)
        {
            if(a2[i] >= 'a' && a2[i]<='z')
                s2 += a2[i]-96;
            else if(a2[i] >= 'A' && a2[i]<='Z')
                s2 += a2[i]-64;
        }
        b = 0;
        while(s2!= 0)
        {
            b += s2%10;
            s2/=10;
        }
        if(b>9)
        {
            s2 = b;
            b = 0;
            while(s2!=0)
            {
                b += s2%10;
                s2/=10;
            }

        }
        if(a>b)
            ans = (float)b*100/(float)a;
        else
            ans = (float)a*100/(float)b;
        printf("%.2lf %%\n",ans);
    }
    return 0;
}


