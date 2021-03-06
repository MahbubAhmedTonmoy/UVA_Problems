//use string (faster)//
#include<stdio.h>
#include<string.h>

static char stack[256];
static char par[256];
int top;

int main(){
    unsigned n, error;

    scanf("%u", &n);
    getchar();

    while(n--){
        gets(par);

        if(strlen(par) & 1)
            printf("No\n");
        else{
            stack[256] = {'\0'};
            top = -1;
            error = 0;

            for(unsigned i = 0; par[i]; ++i){
                if(par[i] == ' ')
                    continue;

                if(par[i] == '[' || par[i] == '(')
                    stack[++top] = par[i];
                else if((par[i] == ')' && stack[top] == '(') || (par[i] == ']' && stack[top] == '['))
                    --top;
                else{
                    error = 1;
                    break;
                }
            }

            (error==1 || top > -1) ? printf("No\n") : printf("Yes\n");
        }
    }
    return 0;
}


// use stack//https://quickgrid.wordpress.com/2015/02/21/uva-problem-673-parentheses-balance-solution/
