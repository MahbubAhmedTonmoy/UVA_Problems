#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int t,n=1;
    cin >>t;
    while (t--)
    {
        int h,l,w;
        cin >> h >> l >> w;
        if(h<=20 && l <=20 && w <=20)
            cout << "Case " << n <<": " << "good" << endl;
        else
            cout << "Case " << n <<": " << "bad" << endl;
        n++;
    }
return 0;
}
