/**
** Digit Change Program
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
        for(j = 0;j < strlen(s);j++)
        {
            if(s[j] % 2 == 0)
            {
                s[j]++;
            }
            else
            {
                s[j]--;
            }
        }
        int key = atoi(s);
        printf("%d\n",key);

    }

    return 0;
}
