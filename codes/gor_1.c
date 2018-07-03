/**
** Average calculation Program
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
        int sum = 0;
        for(j = 0;j < 5;j++)
        {
            int t = 0;
            scanf("%d", &t);
            sum += t;
        }
        printf("%d\n",sum / 5);
    }
    return 0;
}
