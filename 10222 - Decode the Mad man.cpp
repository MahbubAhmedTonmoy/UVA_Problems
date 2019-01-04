#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[10005];
    int i,l;
    while(gets(a))
    {
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]==']')
                a[i]='p';
            else if(a[i]=='[')
                a[i]='o';
            else if(a[i]=='p' || a[i]=='P')
                a[i]='i';
            else if(a[i]=='o' || a[i]=='O')
                a[i]='u';
            else if(a[i]=='i' || a[i]=='I')
                a[i]='y';
            else if(a[i]=='u' || a[i]=='U')
                a[i]='t';
            else if(a[i]=='y' || a[i]=='Y')
                a[i]='r';
            else if(a[i]=='t' || a[i]=='T')
                a[i]='e';
            else if(a[i]=='r' || a[i]=='R')
                a[i]='w';
            else if(a[i]=='e' || a[i]=='E')
                a[i]='q';

            else if(a[i]=='\'')
                a[i]='l';
            else if(a[i]==';')
                a[i]='k';
            else if(a[i]=='l' || a[i]=='L')
                a[i]='j';
            else if(a[i]=='k' || a[i]=='K')
                a[i]='h';
            else if(a[i]=='j' || a[i]=='J')
                a[i]='g';
            else if(a[i]=='h' || a[i]=='H')
                a[i]='f';
            else if(a[i]=='g' || a[i]=='G')
                a[i]='d';
            else if(a[i]=='f' || a[i]=='F')
                a[i]='s';
            else if(a[i]=='d' || a[i]=='D')
                a[i]='a';

            else if(a[i]=='/')
                a[i]=',';
            else if(a[i]=='.')
                a[i]='m';
            else if(a[i]==',')
                a[i]='n';
            else if(a[i]=='m' || a[i]=='M')
                a[i]='b';
            else if(a[i]=='n' || a[i]=='N')
                a[i]='v';
            else if(a[i]=='b' || a[i]=='B')
                a[i]='c';
            else if(a[i]=='v' || a[i]=='V')
                a[i]='x';
            else if(a[i]=='c' || a[i]=='C')
                a[i]='z';

            else if(a[i]=='=')
                a[i]='0';
            else if(a[i]=='-')
                a[i]='9';
            else if(a[i]=='0')
                a[i]='8';
            else if(a[i]=='9')
                a[i]='7';
            else if(a[i]=='8')
                a[i]='6';
            else if(a[i]=='7')
                a[i]='5';
            else if(a[i]=='6')
                a[i]='4';
            else if(a[i]=='5')
                a[i]='3';
            else if(a[i]=='4')
                a[i]='2';
            else if(a[i]=='3')
                a[i]='1';
            else if(a[i]=='2')
                a[i]='`';
        }
        puts(a);
    }
    return 0;
}





#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char l[200];
int i,n,k,len;
while(gets(l)){
len=strlen(l);
for(i=0;i<len;i++){
switch(l[i]){
case ']': printf("p"); break;
case '[': printf("o"); break;
case 'p':
case 'P': printf("i"); break;
case 'o':
case 'O': printf("u"); break;
case 'i':
case 'I': printf("y"); break;
case 'u':
case 'U': printf("t"); break;
case 'y':
case 'Y': printf("r"); break;
case 't':
case 'T': printf("e"); break;
case 'r':
case 'R': printf("w"); break;
case 'e':
case 'E': printf("q"); break;
case 'w':
case 'W': printf("w"); break;
case 'q':
case 'Q': printf("q"); break;
case '"': printf("l");break;
case ';':
case ':': printf("k"); break;
case 'l':
case 'L': printf("j"); break;
case 'k':
case 'K': printf("h");break;
case 'j':
case 'J': printf("g");break;
case 'h':
case 'H': printf("f");break;
case 'g':
case 'G': printf("d");break;
case 'f':
case 'F': printf("s");break;
case 'd':
case 'D': printf("a");break;
case '/':
case '?': printf(",");break;
case '.':
case '>': printf("m");break;
case ',':
case '<': printf("n");break;
case 'm':
case 'M': printf("b");break;
case 'n':
case 'N': printf("v");break;
case 'b':
case 'B': printf("c");break;
case 'v':
case 'V': printf("x");break;
case 'c':
case 'C': printf("z");break;
case 'x':
case 'X': printf("x");break;
case 'z':
case 'Z': printf("z");break;
case '\'':printf("l");break;
case '=':printf("0");break;
case '-': printf("9");break;
case '0': printf("8");break;
case '9': printf("7");break;
case '8': printf("6");break;
case '7': printf("5");break;
case '6': printf("4");break;
case '5': printf("3");break;
case '4': printf("2");break;
case '3': printf("1");break;
case '2': printf("`");break;
default:printf("%c",l[i]);
}
}
printf("\n");
}
return 0;
}
