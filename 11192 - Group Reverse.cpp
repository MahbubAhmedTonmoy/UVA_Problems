#include<stdio.h>
#include<string.h>
char s[101];
int top = -1;

void push(char c){
    if(top+1 >= 101)
        return;
    s[++top] = c;
}

void pop(){
    if(top == -1)
        return;
    printf("%c",s[top]);
    s[top--] = {'\0'};
}

int main()
{
    int i,j,n,c;
    while(scanf("%d",&n)==1 && n!=0){
        c = 0;
        scanf("%s",&s);

        n = strlen(s)/n;

        for(i=0;s[i];i++){
            if(s[i+1]=='\0' || c != n){
                push(s[i]);
                c++;
            }
            if(s[i+1]=='\0' || c==n){
                while(c--)
                    pop();
                c = 0;
            }
        }
        printf("\n");
    }
    return 0;
}
