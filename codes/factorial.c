/**
** Factorial Program
** Ahasanul Basher Hamza
** Date: 23/02/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

long long fact(long long n)
{
    if(n < 1)
    {
        return 1;
    }
    else
    {
        return n*(fact(n-1));
    }
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        long long t;
        scanf("%lld", &t);
        printf("%lld\n",fact(t));
    }
    return 0;
}
