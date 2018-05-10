/**
** Dabar Board E Rajar Chal
** Ahasanul Basher Hamza
** Date: 10/03/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

int main()
{
    int i,n;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int a1,b1,a2,b2;
        scanf("%d %d %d %d", &a1, &b1, &a2, &b2);
        int a = abs(a1 - a2);
        int b = abs(b1 - b2);
        int st = 0;
        if(a >= b)
        {
            st = a;
        }
        else
        {
            st = b;
        }
        printf("Case %d: %d\n",i+1,st);
    }
    return 0;
}
