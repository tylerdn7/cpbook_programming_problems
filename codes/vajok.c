/**
** Divider Program
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
        int t;
        scanf("%d", &t);
        int ara[t];
        int p = 0;
        printf("Case %d: ",i+1);
        for(j = 1;j <= t;j++)
        {
            if(t % j == 0)
            {
                ara[p] = j;
                p++;
            }
        }
        for(j = 0; j < p;j++)
        {
            if(j == p-1)
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
