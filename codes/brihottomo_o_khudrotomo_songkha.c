/**
** Max Min Program
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
        int t,max = 0,min = pow(2,31)-1;
        for(j = 0;j < 5;j++)
        {
            scanf("%d", &t);
            if(t >= max)
            {
                max = t;
            }
            if(t <= min)
            {
                min = t;
            }
        }
        printf("%d %d\n",max,min);
    }
    return 0;
}
