/**
** Series Sum 3 Program
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
        int t;
        scanf("%d", &t);
        for(j = t;j >= 0;j--)
        {
            if(j == 0)
            {
                printf("1\n");
            }
            else if(j == 1)
            {
                printf("2 + ");
            }
            else
            {
                printf("2^%d + ",j);
            }

        }
    }
    return 0;
}
