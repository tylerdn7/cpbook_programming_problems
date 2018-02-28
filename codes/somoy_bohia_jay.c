/**
** Time Counting Program
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
        int t,year=0,month=0,day=0,hour=0,min=0,seco=0;
        scanf("%d", &t);
        while(t >= 31104000)
        {
            t-=31104000;
            year++;
        }
        while(t >= 2592000)
        {
            t-=2592000;
            month++;
        }
        while(t >= 86400)
        {
            t-=86400;
            day++;
        }
        while(t >= 3600)
        {
            t-=3600;
            hour++;
        }
        while(t >= 60)
        {
            t-=60;
            min++;
        }
        while(t >= 1)
        {
            t-=1;
            seco++;
        }
        printf("Case %d:",i+1);
        if(year > 1)
        {
            printf(" %d years",year);
        }
        else if(year == 1)
        {
            printf(" %d year",year);
        }
        if(month > 1)
        {
            printf(" %d months",month);
        }
        else if(month == 1)
        {
            printf(" %d month",month);
        }
        if(day > 1)
        {
            printf(" %d days",day);
        }
        else if(day == 1)
        {
            printf(" %d day",day);
        }
        if(hour > 1)
        {
            printf(" %d hours",hour);
        }
        else if(hour == 1)
        {
            printf(" %d hour",hour);
        }
        if(min > 1)
        {
            printf(" %d minutes",min);
        }
        else if(min == 1)
        {
            printf(" %d minute",min);
        }
        if(seco > 1)
        {
            printf(" %d seconds",seco);
        }
        else if(seco == 1)
        {
            printf(" %d second",seco);
        }
        printf("\n");
    }
    return 0;
}
