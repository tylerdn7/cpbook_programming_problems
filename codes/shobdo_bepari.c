/**
** Price of words Program
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
    for(i = 0;i <= n;i++)
    {
        char *s = malloc(sizeof(char) * 1000);
        gets(s);
        int c = 0;
        for(j = 0;j < strlen(s);j++)
        {
            if(s[j] == ' ' && isalpha(s[j+1]))
            {
                c++;
            }
        }
        if(i >= 1)
        {
            printf("%d\n",420 *(c+1));
        }
        free(s);
    }
    return 0;
}
