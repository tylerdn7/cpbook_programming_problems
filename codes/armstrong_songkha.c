/**
** Armstrong Number Program
** Ahasanul Basher Hamza
** Date: 25/02/18
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
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int t;
        scanf("%d", &t);
        int sum = 0;
        int p = t;
        while(t != 0)
        {
            int k = t % 10;
            sum += (k*k*k);
            t /= 10;
        }
        if(sum != p)
        {
            printf("%d is not an armstrong number!\n",p);
        }
        else
        {
            printf("%d is an armstrong number!\n",p);
        }
    }
    return 0;
}
