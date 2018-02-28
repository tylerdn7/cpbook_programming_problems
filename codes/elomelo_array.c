/**
** Unsorted Array Program
** Ahasanul Basher Hamza
** Date: 25/02/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

void des(int ara[],int n)
{
    int i,j;
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n-1;j++)
        {
            if(ara[j] < ara[j+1])
            {
                int swap = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = swap;
            }
        }
    }
}
void asce(int ara[],int n)
{
    int i,j;
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < n-1;j++)
        {
            if(ara[j] > ara[j+1])
            {
                int swap = ara[j];
                ara[j] = ara[j+1];
                ara[j+1] = swap;
            }
        }
    }
}
int main()
{
    int i,j,n;
    scanf("%d", &n);
    for(i = 0;i < n;i++)
    {
        int t,c = 0,d = 0;
        scanf("%d", &t);
        int ara[t];
        int ara3[t];
        int ara2[t];
        for(j = 0;j < t;j++)
        {
            scanf("%d", &ara[j]);
            ara3[j] = ara[j];
            ara2[j] = ara[j];
        }
        asce(ara3,t);
        des(ara2,t);
        for(j = 0;j < t;j++)
        {
            if(ara[j] != ara3[j])
            {
                c++;

            }
        }
        for(j = 0;j < t;j++)
        {
            if(ara[j] != ara2[j])
            {
                d++;
            }
        }
        if(c == 0 || d == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
