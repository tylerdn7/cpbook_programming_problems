/**
** Shobdo Shajano
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
        int t;
        scanf("%d", &t);
        char s[t][100];
        for(j = 0;j < t;j++)
        {
            scanf("%s",s[j]);
        }
        char temp[100];
        for(i = 0;i < t;i++)
        {
            for(j = 0;j < t;j++)
            {
                if(strcasecmp(s[i], s[j]) > 0)
                {
                    strcpy(temp,s[i]);
                    strcpy(s[i], s[j]);
                    strcpy(s[j], temp);
                }
            }
        }
        for(j = t-1;j >= 0;j--)
        {
            printf("%s\n",s[j]);
        }
    }

    return 0;
}
