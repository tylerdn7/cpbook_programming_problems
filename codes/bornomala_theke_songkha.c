/**
** Alphabet To Number Program
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
    for(i = 0;i < n;i++)
    {
        char *s = malloc(sizeof(char) * 100);
        scanf("%s",s);
        for(j = 0;j < strlen(s);j++)
        {
            if(isupper(s[j]))
            {
                printf("%d",(s[j] - 'A') + 1);
            }
            else if(islower(s[j]))
            {
                printf("%d",(s[j] - 'a') + 1);
            }
        }
        printf("\n");
        free(s);
    }
    return 0;
}
