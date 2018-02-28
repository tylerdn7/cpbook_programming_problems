/**
** Triangle Love Program
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
        int a,b;
        scanf("%d %d",&a,&b);
        printf("Case %d: %d\n",i+1,a*b);
    }
    return 0;
}
