/**
** 100 Factorial
** Ahasanul Basher Hamza
** Date: 20/03/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

int min(int a,int b)
{
    if(a > b)
    {
        return b;
    }
    return a;
}

int main()
{
    int t,j;
    scanf("%d", &t);
    for(j = 0;j < t;j++)
    {
        int n,i;
        scanf("%d", &n);
        int sum1 = 0;
        for(i = 1;i <= n;i++)
        {
            int g = pow(2,i);
            if(g <= n)
            {
                sum1 += (n / g);
            }

        }
        int sum2 = 0;
        for(i = 1;i <= n;i++)
        {
            int g = pow(5,i);
            if(g <= n)
            {
                sum2 += (n / g);
            }

        }
        int res = min(sum1,sum2);
        printf("%d\n",res);
    }

    return 0;
}
