/**
** Moulik Songkha
** Ahasanul Basher Hamza
** Date: 23/03/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

int is_prime(int n)
{
     int i;
     if(n < 2)
     {
         return 0;
     }
     for(i = 2;i < n;i++)
     {
         if(n % i == 0)
         {
             return 0;
         }
     }
     return 1;
}
int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int a,b,c = 0;
        scanf("%d %d", &a, &b);
        for(j = a;j <= b;j++)
        {
            if(is_prime(j) == 1)
            {
                c++;
            }
        }
        printf("%d\n",c);
    }

    return 0;
}
