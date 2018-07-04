/**
** Shongkha Biporjoy
** Ahasanul Basher Hamza
** Date: 23/03/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int n,i,j;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int t;
        scanf("%d", &t);
        int p = 0;
        while(t!=0)
        {
            int k = t % 10;
            p = p * 10 + k;
            t /= 10;
        }
        printf("%d\n",p);
    }

    return 0;
}
