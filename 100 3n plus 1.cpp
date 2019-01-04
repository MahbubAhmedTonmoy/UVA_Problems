///for 1->1 j =1 so loop end
///for 2->2 1                                                       == 2 times
///for 3->3 10 5 16 8 4 2 1                                         == 8 times
///for 4->4 2 1                                                     == 3 times
///for 5->5 16 8 4 2 1                                              == 6 times
///for 6->6 3 10 5 16 8 4 2 1                                       == 9 times
///for 7->7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1              == 17 times
///for 8->8 4 2 1                                                   == 4 times
///for 9 ->9 28 14 7 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1     == 20 times
///for 10->10 5 16 8 4 2 1                                          == 7 times


#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,m,n,k,sum,c;

    while(scanf("%d%d",&m,&n)==2)
    {
        sum = 0;
        printf("%d %d ",m,n);

    if(m>n)     /// m=10 n = 1  /// swap ///
    {
        k=n;    /// k = 1
        n = m;  /// n = m = 10
        m =k;   /// m = k =1
    }

    for(i=m;i<=n;i++)  /// 1 to 10
    {
        c = 1;
        j = i;  /// j = m
        while(j>1)  /// loop continue when (j/m > 1)  greater then 1
        {
            if(j %2 == 0)  /// j = even
                j = j/2;
            else
                j = (j*3)+1; /// odd
            c++; /// how time work loop
        }
        if(c>=sum)  /// if c is greater then previous c then sum is change
            sum = c;
    }
    printf("%d\n",sum);
    }
    return 0;
}
