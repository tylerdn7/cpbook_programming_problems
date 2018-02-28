/**
** Average Calculation 2 Program
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
        int t = 0;
        float sum = 0;
        scanf("%d",&t);
        for(j = 0;j < t;j++)
        {
            int m = 0;
            scanf("%d", &m);
            sum+=m;
        }
        printf("%.2f\n",sum/t);
    }
    return 0;
}
