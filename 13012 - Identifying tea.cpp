#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
using namespace std;

int main()

{
    int n,a[5],c;
    while(cin >> n)
    {
        c = 0;
        for(int i=0;i<5;i++)
        {
            cin >> a[i];
            if(n==a[i]) c++;
        }
        cout << c << endl;
    }

return 0;
}
