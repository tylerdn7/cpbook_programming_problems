/**
** Downward number Program
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
    int i,j;
    for(i = 1000;i > 0;i--)
    {

        if(i % 5 == 0 && i < 1000)
        {
            printf("\n%d\t",i);
        }
        else
        {
            printf("%d\t",i);
        }
    }
    return 0;
}
