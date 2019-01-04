#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char c[10];
    int n;
    cin >> n;
    while(n--)
    {
        cin >> c;
        if(strlen(c)==5)
            cout << "3" << endl;
        else if(c[0]=='t'&& c[1]=='w' || c[0]=='t'&& c[2]=='o' || c[1]=='w'&& c[2]=='o')
            cout << "2" << endl;
        else
            cout << "1" << endl;
    }
return 0;
}

