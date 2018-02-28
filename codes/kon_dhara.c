/**
** Progression Program
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
    int n,i;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int a,b,c;
        scanf("%d %d %d", &a,&b,&c);
        printf("Case %d: ",i+1);
        double res1 = (double)b/(double)a;
        double res2 = (double)c/(double)b;
        if((b-a) == (c-b) && res1 == res2)
        {
            printf("Both\n");
        }
        else if((b-a) == (c-b))
        {
            printf("Arithmetic Progression\n");
        }
        else if(res1 == res2)
        {
            printf("Geometric Progression\n");
        }
        else
        {
            printf("None\n");
        }
    }
    return 0;
}