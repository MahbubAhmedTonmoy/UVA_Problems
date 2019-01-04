#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char ch;
    long int c=0;
    while((scanf("%c",&ch))==1)
    {
            if(ch=='"')
            {
                c++;
                if(c%2==1)
                    cout << "``" ;
                else if(c%2==0)
                cout << "''" ;
        }
        else
            cout << ch ;
        }
}

