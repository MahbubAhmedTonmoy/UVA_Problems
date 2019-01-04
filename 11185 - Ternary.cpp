#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
    int n,m,ternary[100],i;

    while(scanf("%d",&n)==1){
        if(n < 0) break;
    for(i=0; ;i++)
    {
        m = n%3;
        ternary[i] =m;
        n = n/3;
        if(n==0) break;

    }
    for(int j=i;j>=0;j--)
    {
        cout << ternary[j];
    }
    cout << endl;
    }
return 0;
}
