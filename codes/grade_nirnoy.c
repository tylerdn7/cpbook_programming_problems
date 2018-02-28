/**
** Grade finding Program
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
        int t;
        scanf("%d", &t);
        printf("Case %d: ",i+1);
        if(t >= 80)
        {
            puts("A+");
        }
        else if(t >= 75 && t < 80)
        {
            puts("A");
        }
        else if(t >= 70 && t < 75)
        {
            puts("A-");
        }
        else if(t >= 65 && t < 70)
        {
            puts("B+");
        }
        else if(t >= 60 && t < 65)
        {
            puts("B");
        }
        else if(t >= 55 && t < 60)
        {
            puts("B-");
        }
        else if(t >= 50 && t < 55)
        {
            puts("C");
        }
        else if(t >= 45 && t < 50)
        {
            puts("D");
        }
        else if(t < 45)
        {
            puts("F");
        }
    }
    return 0;
}
