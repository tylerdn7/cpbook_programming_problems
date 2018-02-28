/**
** L.C.M Program
** Ahasanul Basher Hamza
** Date: 23/02/18
***/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>
#include <ctype.h>

int gcd(int a,int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        int a,b,lcm = 0;
        scanf("%d %d", &a, &b);
        lcm = (a*b) / gcd(a,b);
        printf("LCM = %d\n",lcm);
    }
    return 0;
}
