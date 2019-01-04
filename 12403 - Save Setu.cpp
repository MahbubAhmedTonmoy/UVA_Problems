#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c[20];
    int t,d;
    long long total=0;
    cin >> t;
    while(t--)
    {
        cin >> c;
       if(strcmp(c,"donate")==0)
       {
           cin >> d;
           total +=d;
       }
       else
        cout << total << endl;
    }
return 0;
}

