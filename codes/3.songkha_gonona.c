/**
** Number Counting Program
** Ahasanul Basher Hamza
** Date: 22/02/18
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
    for(i = 0;i <= n;i++)
    {
        char *s = malloc(sizeof(char) * 100);
        gets(s);
        char *p,*e;
        p = s;
        long input = 0;
        int count = 0;
        for(;;p = e)
        {
            input = strtol(p, &e, 10);
            if(p == e)
            {
                break;
            }
            count++;
        }
        if(i == 0)
        {
            ;
        }
        else
        {
            printf("%d\n",count);
        }
    }
    return 0;
}
