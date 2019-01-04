#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

int main()
{
    char a[101][101];
    char b[16][10] = {"Happy", "birthday", "to", "you", "Happy", "birthday", "to", "you", "Happy", "birthday", "to", "Rujia", "Happy", "birthday", "to", "you",};
    int n,i,j,f,k;

    scanf("%d",&n);
    j = 0;
    k = 0;
    for(i=0;i<n;i++){
        scanf("%s",a[i]);
    }

    if(n<16) f= 16;
    else if(f<32) f =32;
    else if(f<48) f =48;
    else if(f<64) f =64;
    else if(f<80) f =80;
    else if(f<96) f =96;
    else f = 100;

    for(i=0;i<f;i++){
        printf("%s: %s\n",a[j++],b[k++]);
        if(j==n) j =0;
        if(k==16) k =0;
    }
    return 0;
}
