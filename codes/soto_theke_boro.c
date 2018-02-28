/**
** Max Min Program
** Ahasanul Basher Hamza
** Date: 23/02/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        int ara[3],k;
        for(j = 0;j < 3;j++)
        {
            scanf("%d", &ara[j]);
        }
        for(j = 0;j < 3;j++)
        {
            for(k = 0;k < 2;k++)
            {
                if(ara[k] > ara[k + 1])
                {
                    int swap = ara[k];
                    ara[k] = ara[k+1];
                    ara[k+1] = swap;
                }
            }
        }
        printf("Case %d: ",i+1);
        for(j = 0;j < 3;j++)
        {
            if(j == 2)
            {
                printf("%d\n",ara[j]);
            }
            else
            {
                printf("%d ",ara[j]);
            }
        }
    }
    return 0;
}
