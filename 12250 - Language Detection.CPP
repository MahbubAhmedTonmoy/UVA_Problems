#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;

int main()
{
    int n=1;
    char c[20];


    while(true){
    cin >> c;
    if(strcmp(c,"#")==0) break;

    if(strcmp(c,"HELLO")==0)
        cout << "Case " << n <<": " << "ENGLISH" << endl;
    else if(strcmp(c,"HOLA")==0)
        cout << "Case " << n <<": " << "SPANISH" << endl;
    else if(strcmp(c,"HALLO")==0)
        cout << "Case " << n <<": " << "GERMAN" << endl;
    else if(strcmp(c,"BONJOUR")==0)
        cout << "Case " << n <<": " << "FRENCH" << endl;
    else if(strcmp(c,"CIAO")==0)
        cout << "Case " << n <<": " << "ITALIAN" << endl;
    else if(strcmp(c,"ZDRAVSTVUJTE")==0)
        cout << "Case " << n <<": " << "RUSSIAN" << endl;
    else
         cout << "Case " << n <<": " << "UNKNOWN" << endl;
    n++;
    }
return 0;
}
