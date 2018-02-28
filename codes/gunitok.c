/**
** Factor Program
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
        int a,b,k = 0;
        scanf("%d %d", &a, &b);
        int *ara = malloc(sizeof(int) * 100);
        for(j = a;j <= b;j++)
        {
            if(j % a == 0)
            {
                ara[k] = j;
                k++;
            }
        }
        printf("Case %d: ",i+1);
        for(j = 0;j < k;j++)
        {
            if(j == k-1)
            {
                printf("%d\n",ara[j]);
            }
            else
            {
                printf("%d ",ara[j]);
            }
        }
        free(ara);
    }
    return 0;
}
