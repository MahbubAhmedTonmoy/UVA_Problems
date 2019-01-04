#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    long long int n;
    int sum,m;
    while(cin >> n)
    {

        if(n==0) break;
        sum = 0;
        while(1)
        {
            while(n!=0)
            {
                m = n%10;
                sum += m;
                n = n / 10;
            }
            if(sum/10 == 0)
                break;
            else
            {
                n = sum;
                sum =0;
            }
        }
         cout << sum << endl;
    }
return 0;
}
