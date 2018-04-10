/**
** Digit Match Program
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
        char *p = malloc(sizeof(char) * 100);
        scanf("%s %s", s, p);
        int ara[10];
        int ara2[10];
        for(j = 0;j < 10;j++)
        {
            ara[j] = 0;
        }
        for(j = 0;j < 10;j++)
        {
            ara2[j] = 0;
        }
        for(j = 0;j < strlen(s);j++)
        {
            int r = s[j] - 48;
            ++ara[r];
        }
        for(j = 0;j < strlen(p);j++)
        {
            int r = p[j] - 48;
            ++ara2[r];
        }
        int c = 0;
        for(j = 0;j < 10;j++)
        {
            if(ara[j] >= 1 && ara2[j] >= 1)
            {
                printf("%d",j);
                c++;
            }
        }
        if(c == 0)
        {
            printf("N\n");
        }
        else
        {
            printf("\n");
        }
        free(s);
        free(p);
    }
    return 0;
}
