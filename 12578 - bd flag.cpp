#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
using namespace std;

int main()
{
    int t;
    double l,r,w,area,red,green;
    cin >> t;
    while(t--){
    cin >> l;
    r =l/5;
    w = (l*3)/5;
    area = l*w;
    red = M_PI * r*r;
    green = area - red;
    printf("%.2lf %.2lf\n",red,green);
    }
return 0;
}
