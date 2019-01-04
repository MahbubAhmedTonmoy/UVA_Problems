#include<stdio.h>
#include<string.h>

int main()
{
    char s[20];
    int n=1;
    while(1)
    {
        scanf("%s",s);

        if(strcmp(s,"*")==0) break;

        printf("Case %d: ",n++);

        if(strcmp(s,"Hajj")==0)  printf("Hajj-e-Akbar\n");
        else if(strcmp(s,"Umrah")==0)  printf("Hajj-e-Asghar\n");

    }
    return 0;
}

