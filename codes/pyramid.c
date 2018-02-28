/**
** Triangle of * Program
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
        int d,k;
        scanf("%d", &d);
        for(j = 0;j < d;j++)
        {
            for(k = 0;k < d-j-1;k++)
            {
                printf(" ");
            }
            for(k = 0;k < j+1;k++)
            {
                printf("*");
            }
            for(k = 0;k < j;k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
