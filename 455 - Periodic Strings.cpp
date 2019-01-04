#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    int l,c,t;
    string s;
    scanf("%d",&t);
    while(t--){
            c=0;
        cin >> s;
        l = s.length();
        for(int i=0;i<=l-1;i++)
        {
            if(s[i]==s[i+i])
                c++;
        }
        printf("%d\n",c);
}
return 0;
}
