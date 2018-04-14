/**
** Khoj the search - 2
** Ahasanul Basher Hamza
** Date: 20/03/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    int q = 0;
    while(q < n)
    {
        char s[128],p[128];
        scanf("%s %s", s,p);

        int len1 = strlen(s);
        int len2 = strlen(p);
        int j,k,index = 0;
        for(i = 0;i < len1;i++)
        {
            if(s[i] == p[0])
            {
                for(j = i,k = 0;k < len2;k++,j++)
                {
                    if(s[j] != p[k])
                    {
                        break;
                    }
                }
                if(k == len2)
                {
                    index++;
                }
            }
        }

            printf("%d\n",index);
        q++;
    }
    return 0;
}
