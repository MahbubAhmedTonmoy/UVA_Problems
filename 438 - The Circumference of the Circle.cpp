#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x1,x2,x3,y1,y2,y3;

    while(scanf("%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3)==6){

    /// distance between two point
    double a = sqrt(pow(x1-x2, 2)+ pow(y1-y2,2));
    double b = sqrt(pow(x2-x3, 2)+ pow(y2-y3,2));
    double c = sqrt(pow(x3-x1, 2)+ pow(y3-y1,2));

    /// semi perimeter, s =(a+b+c)/2

    double S = (a+b+c)/2;

    ///Area using heron's formula

    double A = sqrt(S*(S-a)*(S-b)*(S-c));

    /// diameter

    double D = (a*b*c)/ (2*A);

    double C = D*3.141592653589793;

    printf("%.2lf\n",C);
}
}
