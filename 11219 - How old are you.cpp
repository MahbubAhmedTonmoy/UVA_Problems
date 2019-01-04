#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int t;
    int j = 1;
    int d1,m1,y1,d2,m2,y2,y;
    cin >> t;
    while(t--)
    {
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);

        y = y1-y2;
        if(m1<m2)
            y--;
        else if(m1==m2)
        {
            if(d1<d2)
                y--;
        }

        if(y < 0)
            cout<< "Case " << "#" << j << ": " << "Invalid birth date" <<endl;
        else if(y > 130)
            cout <<  "Case " << "#" << j << ": "<<"Check birth date" << endl;
        else
            cout  << "Case " << "#" << j << ": "<< y << endl;
        j++;
    }
return 0;
}
