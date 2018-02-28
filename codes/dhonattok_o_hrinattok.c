/**
** Positive Negative Number Program
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
    int c = 0,d = 0;
    for(i = 0;i < n;i++)
    {
        int t;
        scanf("%d", &t);
        if(t < 0)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    printf("%d %d\n",d,c);
    return 0;
}
