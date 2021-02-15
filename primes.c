#include<stdio.h>
#include<math.h>
#include"primes.h"

void primes(long num)
{
    while(num%2==0)
    {
        printf("%d ",2);
        num=num/2;
    }

    for(int i=3;i<=sqrt(num);i=i+2)
    {
        while(num%i==0)
        {
            printf("%d ",i);
            num=num/i;
        }
    }

    if(num>2)
    {
        printf("%d ",num);
    }

    printf("\n");
}

