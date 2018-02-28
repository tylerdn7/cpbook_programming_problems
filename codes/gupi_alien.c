/**
** Gupi Alien Program
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
        float t;
        scanf("%f", &t);
        int f = round(t);
        int count = 0;
        while(f != 0)
        {
            f/=2;
            count++;
        }
        printf("%d days\n",count);
    }
    return 0;
}
