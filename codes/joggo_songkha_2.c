/**
** Perfect Number Program
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
    long long int ara[7] = {6,28,496,8128,33550336,8589869056,137438691328};
    int n,i,j;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        long long int t,flag = 0;
        scanf("%lld", &t);
        for(j = 0;j < 7;j++)
        {
            if(ara[j] <= t)
            {
                printf("%lld\n",ara[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
