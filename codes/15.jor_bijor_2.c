/**
** Even Odd Program
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
        char *s = malloc(sizeof(char) * 100);
        scanf("%s",s);
        if(s[strlen(s) - 1] % 2  ==0)
        {
            puts("even");
        }
        else
        {
            puts("odd");
        }
    }
    return 0;
}
