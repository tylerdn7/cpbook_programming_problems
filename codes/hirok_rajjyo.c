/**
** Number Printing Program
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
    int i,t,j;
    scanf("%d", &t);
    for(i = 0;i < t;i++)
    {
        int n,m,k;
        scanf("%d %d", &n,&m);
        for(j = 0;j < n;j++)
        {
            for(k = 0;k <= j;k++)
            {
                printf("%d",m);
            }
            printf("\n");
        }
        for(j = n-1;j>=0;j--)
        {
            for(k =  0;k < j;k++)
            {
                printf("%d",m);
            }
            printf("\n");
        }
    }

    return 0;
}
