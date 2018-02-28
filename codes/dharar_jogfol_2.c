/**
** Series Sum 2 Program
** Ahasanul Basher Hamza
** Date: 23/02/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

long long int fact(long long int n)
{
    if(n < 2)
    {
        return 1;
    }
    else
    {
        return n * (fact(n-1));
    }
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        long long int a;
        scanf("%lld", &a);
        double sum = 0;
        for(j = 1;j <= a;j++)
        {
            sum = sum + (double) ((double)j / (double)fact(j));
        }
        printf("%.4lf\n",sum);
    }
    return 0;
}
