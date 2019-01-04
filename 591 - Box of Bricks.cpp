#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,h[100],i,sum,ave,count,j=1;

    while(scanf("%d",&n)==1 && n!=0){
            sum = 0;
    ave=0;
    count = 0;
    for(i=0;i<n;i++){
        cin >> h[i];
        sum += h[i];
    }
    ave = sum/n;
    for(i=0;i<n;i++){
        if(h[i]>ave)
            count += h[i]- ave;
    }
   printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,count);
   j++;
}
return 0;
}
