#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int a[1000],n,t;
    int j = 1;
    cin >> t;
    while(t--)
    {
      int h=0,l=0;
      cin >> n;
      for(int i=0;i<n;i++)
      {
          cin >> a[i];
      }
      for(int i=1;i<n;i++){
          if(a[i]< a[i-1])
            h=h+1;
          if(a[i-1]<a[i])
            l=l+1;
      }
          cout << "Case " << j << ": " << l << " "<< h << endl;
          j++;

    }
return 0;
}

