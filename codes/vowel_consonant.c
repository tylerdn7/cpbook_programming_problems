/**
** Vowel & Consonant Program
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
        char *s = malloc(sizeof(char) * 100);
        gets(s);
        char *t = malloc(sizeof(char) * 100);
        char *p = malloc(sizeof(char) * 100);
        if(i > 0)
        {
            int k,l;
            for(j = 0,k = 0,l = 0;j < strlen(s);j++)
            {
                if(s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'o' || s[j] == 'O' || s[j] == 'i' || s[j] == 'I' || s[j] == 'u' || s[j] == 'U')
                {
                    t[k] = s[j];
                    k++;
                }
                else if(s[j] != ' ')
                {
                    p[l] = s[j];
                    l++;
                }
            }
            t[k] = '\0';
            p[l] = '\0';
            printf("%s\n%s\n",t,p);
        }
        free(s);
        free(t);
        free(p);
    }
    return 0;
}
