/**
** Digit Counting Program
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
        int t;
        j = 0;
        scanf("%d", &t);
        if(t == 0)
        {
            j++;
        }
        while(t != 0)
        {
            int k = t % 10;
            t /= 10;
            j++;
        }
        printf("%d\n",j);

    }
    return 0;
}
