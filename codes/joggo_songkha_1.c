/**
** Perfect Number Program
** Ahasanul Basher Hamza
** Date: 27/02/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>



int main()
{
    const long long int ara[8] = {6, 28, 496, 8128, 33550336, 8589869056, 137438691328, 2305843008139952128};
    int n,i,j;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        long long int t,flag = 0;
        scanf("%lld", &t);
        for(j = 0;j < 8;j++)
        {
            if(ara[j] == t)
            {
                flag = 1;
            }
        }
        if(flag == 1)
        {
            printf("YES, %lld is a perfect number!\n",t);
        }
        else
        {
            printf("NO, %lld is not a perfect number!\n",t);
        }
    }

    return 0;
}
