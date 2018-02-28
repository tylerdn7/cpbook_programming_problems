/**
** Cake & Tray Program
** Ahasanul Basher Hamza
** Date: 25/02/18
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
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int a,b,c;
        scanf("%d %d %d", &a, &b, &c);
        a *= 2;
        int bigger = (b <= c) ? b : c;
        if(a > bigger)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}
