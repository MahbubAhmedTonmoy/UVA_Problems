#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int t,i,a[10];
    int max,min;
     cout << "Lumberjacks:" <<endl;
    cin >> t;
    while(t--)
    {

        int small=0,big=0;

        for(i=0;i<10;i++){
            cin >> a[i];
        }
        for(i=0;i<9;i++)
            {
                if(a[i] < a[i+1])
                    small++;

                if(a[i]>a[i+1])
                    big++;
            }
            if(small==9)
                cout << "Ordered" << endl;
            else if(big==9)
                cout << "Ordered" << endl;
            else
                cout << "Unordered" << endl;

    }
return 0;
}

