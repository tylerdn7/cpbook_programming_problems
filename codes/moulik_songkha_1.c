/**
** Prime Number_1 Program
** Ahasanul Basher Hamza
** Date: 23/02/18
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
    int i,j,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        int c = 0;
        for(j = 0;j < 10;j++)
        {
            int t;
            scanf("%d", &t);
            if(is_prime(t) == 1)
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
