/**
** Volume Program
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
    int i,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        printf("%d\n",a*b*c);
    }
    return 0;
}
