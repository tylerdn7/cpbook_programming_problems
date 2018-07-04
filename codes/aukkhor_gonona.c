/**
** Aukkhor Gonona
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
        char s[1000];
        int c = 0;
        int r[132];
        for(j = 65;j < 132;j++)
        {
            r[j] = 0;
        }
        scanf(" %[^\n]",s);
        for(j = 0;j < strlen(s);j++)
        {
            ++r[s[j]];
        }
        for(j = 65;j < 132;j++)
        {
            if(r[j] != 0)
            {
                printf("%c = %d\n",j,r[j]);
            }
        }
        printf("\n");
    }

    return 0;
}
