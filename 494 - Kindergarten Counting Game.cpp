#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int count,i,w;
    char c[1000];
    while(gets(c)){
        count=0;
        w = 1;

        for( i=0;c[i] != '\0';i++)
        {
            if((c[i] >= 'a' && c[i] <= 'z') ||
                (c[i] >= 'A' && c[i] <= 'Z'))
            {
                if(w)
                    count++;
                w = 0;
            }
            else
                w =1 ;
        }

        cout << count << endl;

}
return 0;
}
