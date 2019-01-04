#include<stdio.h>
int main()
{
    int t,i=1,j,max;
    int ranks[10];
    char name[10][100];
    scanf("%d",&t);
    while(t--)
    {
        max = 0;

        for(j=0;j<10;j++)
        {
           scanf("%s %d",&name[j],&ranks[j]);
            if(ranks[j]>max)
                max = ranks[j];

        }
        printf("Case #%d:\n",i);

        for(j=0;j<10;j++)
        {
            if(ranks[j]==max)
              printf("%s\n",name[j]);
            }
            i++;
        }

return 0;
}

