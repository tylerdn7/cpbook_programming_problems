/**
** Digital Triangle Program
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
        int a,b,k;
        scanf("%d %d", &a, &b);
        printf("Case %d:",i+1);
        for(j = 0;j <= b;j++)
        {
            for(k = 0;k < j;k++)
            {
                printf("%d",a);
            }
            printf("\n");
        }
    }
    return 0;
}
