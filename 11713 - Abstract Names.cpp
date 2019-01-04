#include<bits/stdc++.h>

#define N 36
static char s[N];
static char t[N];

static char Ts[N];
static char Tt[N];
int main()
{
    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        gets(s);
        gets(t);

        /// If their length is not the same then output is no.
        if(strlen(s) != strlen(t))
        {
            printf("No\n");
            continue;
        }
        /// Reset memory.
        int j = 0, k = 0;
        memset(Ts, 0, sizeof Ts);
        memset(Tt, 0, sizeof Tt);

        /// Remove vowels from the first string.///
        for(int i=0;s[i]; i++)
        {
            if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                continue;
            else
                Ts[j++] = s[i];
        }

        /// Remove vowels from the second string.///
        for(int i=0;s[i]; i++)
        {
            if(t[i]=='a' || t[i] == 'e' || t[i] == 'i' || t[i] == 'o' || t[i] == 'u')
                continue;
            else
                Tt[k++] = t[i];
        }

        ///after removing vowel string compeer///
        if(strcmp(Ts,Tt)==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
return 0;
}
