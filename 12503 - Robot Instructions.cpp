#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t,n,i,e,b[110],s;
    char a[30];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        s = 0;
        for(i=1;i<=n;i++){
            scanf("%s",a);
            if(strcmp(a,"LEFT")==0){
                s-=1;
                b[i] = -1;
            }
            else if(strcmp(a,"RIGHT")==0){
                s+=1;
                b[i] = 1;
            }
            else{
                scanf("%s%d",a,&e);
                s +=b[e];
                b[i]=b[e];
            }
        }
        printf("%d\n",s);
    }
return 0;
}
