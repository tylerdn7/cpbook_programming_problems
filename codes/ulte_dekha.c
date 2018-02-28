/**
** Reverse String Program
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
    for(i = 0;i <= n;i++)
    {
        char *s = malloc(sizeof(char) * 1000);
        gets(s);
        if(i > 0)
        {
            for(j = strlen(s) - 1;j >= 0;j--)
            {
                printf("%c",s[j]);
            }
            printf("\n");
        }
        free(s);
    }
    return 0;
}
