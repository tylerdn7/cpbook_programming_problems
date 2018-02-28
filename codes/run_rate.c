/**
** Run Rate Program
** Ahasanul Basher Hamza
** Date: 24/02/18
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
        float over = (float)c / 6;
        over = 50.00 - over;
        float curr = (float)b / over;
        a++;
        float req = a - b;
        req = req / (50.00- (float)over);
        printf("%.2f %.2f\n",curr,req);
    }
    return 0;
}
