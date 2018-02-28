/**
** Find Vowel Program
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
        int count = 0;
        if(i > 0)
        {
            for(j = 0;j < strlen(s);j++)
            {
                if(s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'o' || s[j] == 'O' || s[j] == 'i' || s[j] == 'I' || s[j] == 'u' || s[j] == 'U')
                {
                    count++;
                }
            }
            printf("Number of vowels = %d\n",count);
        }
    }
    return 0;
}
