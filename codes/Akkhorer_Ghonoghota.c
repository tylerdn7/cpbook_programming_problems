/**
** Akkhorer Ghonoghota
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
        char p[2];
        int c = 0;
        scanf(" %[^\n]",s);
        scanf("%s",p);
        for(j = 0;j < strlen(s);j++)
        {
            if(tolower(s[j]) == tolower(p[0]))
            {
                c++;
            }
        }
        if(c > 0)
        {
            printf("Occurrence of '%c' in '%s' = %d\n",p[0],s,c);
        }
        else
        {
            printf("'%c' is not present\n",p[0]);
        }

    }
    return 0;
}
