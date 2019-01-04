#include<bits/stdc++.h>
int main()
{
    int diff,n,t,a;
    char s[5];

    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%3s-%4d",s,&n);
        a = 26*26*(s[0]-'A') + 26*(s[1]-'A') + (s[2]-'A');
        ///d=(s[4]-48)*1000+(s[5]-48)*100+(s[6]-48)*10+(s[7]-48);
        diff = abs(a - n);
        if(diff<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
        return 0;
}
