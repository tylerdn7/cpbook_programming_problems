/**
** Cloth decide Program
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
        int d;
        scanf("%d", &d);
        if(d % 2 != 0)
        {
            puts("blue");
        }
        else
        {
            puts("red");
        }
    }
    return 0;
}
