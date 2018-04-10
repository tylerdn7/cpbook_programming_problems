/**
** ASCII addition Program
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
    int i,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        char *s = malloc(sizeof(char) * 100);
        scanf("%s",s);
        int j,sum = 0;
        for(j = 0;j < strlen(s);j++)
        {
            sum+=s[j];
        }
        printf("%d\n",sum);
        free(s);
    }
    return 0;
}
