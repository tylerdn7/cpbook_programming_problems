/**
** Magic of a magician Program
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
        int d = 0,c = 0,flag = 0;
        for(j = 0; j < strlen(s); j++)
        {
            if(s[j] == '0')
            {
                d++;
            }
            if(s[j] == '1')
            {
                c++;
            }
            if(d > c)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            puts("MAGIC");
        }
        else
        {
            puts("NORMAL");
        }
    }
    return 0;
}
