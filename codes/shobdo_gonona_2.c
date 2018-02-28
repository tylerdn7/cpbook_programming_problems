/**
** Word Counting Program
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
        char s[1000];
        gets(s);
        if(i > 0)
        {
            int count = 0;
            for(j = 0;j < strlen(s);j++)
            {
                if(s[j] == ' ' && isalpha(s[j+1]))
                {
                    count++;
                }
            }
            printf("Count = %d\n",count + 1);
        }
        
    }
    return 0;
}
