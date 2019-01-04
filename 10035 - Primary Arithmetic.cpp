#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    long long int a,b,c,d,sum,carry;
    while(scanf("%lld %lld",&a,&b)==2)
    {

        if(a==0 && b==0) break;
        sum = 0;
        carry = 0;

        while(a>0||b>0)
        {
            c= a%10;
            a = a/10;
            d = b%10;
            b = b/10;
            sum = c+d+sum;

            if(sum>9)
            {
                carry++;
                sum= sum/10;
            }
            else{
                sum = 0;
            }
        }


    if(carry==0)
        printf("No carry operation.\n");
    else if(carry==1)
        printf("1 carry operation.\n");
    else
        printf("%d carry operations.\n",carry);
    }
    return 0;
    }
