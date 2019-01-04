#include<iostream>
#include<stdio.h>
#include<math.h>
#include<string.h>
using namespace std;
int Bigmod(int b,int p,int m)
{
    if(p==0) return 1;
    if(p%2==1)
    {
        int part1 = b%m;
        int part2 = Bigmod(b,p-1,m);
        return (part1*part2)%m;
    }
    else if(p%2==0)
    {
        int test = Bigmod(b,p/2,m);
        return (test*test)%m;
    }
}
int main()
{
    int b,p,m;
    while(cin >> b >> p >> m)
    {
        cout << Bigmod(b,p,m) << endl;
    }

}
