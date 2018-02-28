/**
** Alternate Element Program
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
        for(j = 0;j < t;j++)
        {
            scanf("%d", &ara[j]);
        }
        printf("Set %d: ",i+1);
        for(j = 0;j < t;j+=2)
        {
            if(j == t-1)
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
