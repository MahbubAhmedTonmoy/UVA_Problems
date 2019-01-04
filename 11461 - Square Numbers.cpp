#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
long int x,sqr,i,n1,n2;
while(scanf("%ld%ld",&n1,&n2)==2)
       {
           if(n1==0 &&n2==0)break;
           sqr=0;

           for(i=sqrt(n1);i<=sqrt(n2);i++)              //for(i=a;i<=b;i++)
              {                                  //c = sqrt(i);
                     x=pow(i,2);                  //if(c*c==i) count++
                     if(x>=n1&&x<=n2) sqr++;
                     if(x>n2)break;
             }
         printf("%ld\n",sqr);
       }
return 0;
  }
