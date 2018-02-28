/**
** Character Identifier Program
** Ahasanul Basher Hamza
** Date: 27/02/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int i,n,j;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        getchar();
        char ch;
        scanf("%c", &ch);
        if(isdigit(ch))
        {
            printf("Numerical Digit\n");
        }
        else if(isalpha(ch))
        {
            if(isupper(ch))
            {
                printf("Uppercase Character\n");
            }
            else if(islower(ch))
            {
                printf("Lowercase Character\n");
            }
        }
        else
        {
            printf("Special Character\n");
        }
    }

    return 0;
}
