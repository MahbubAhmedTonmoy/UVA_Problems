#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i=1; i<=t; i++){
        char w[90];
        int score = 0, ns = 0,j;
        cin >> w;
        for(j=0;w[j]; j++){
            if(w[j] == 'O')
            {
                ns++;
                score = score+ns;
            }
            if(w[j] == 'X') ns = 0;
        }
        cout << score << endl;
    }
    return 0;
}
