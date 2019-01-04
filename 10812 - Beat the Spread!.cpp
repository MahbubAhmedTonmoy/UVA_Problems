#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,t;
    cin >> t;
    while(t--){
    cin >> a >> b;
    if(a>=b && (a+b)%2==0)
    {
        c = (a+b)/2;
        d = (a-b)/2;
        cout << c << " " << d << endl;
    }
    else
        cout << "impossible" << endl;
    }
    return 0;

}
