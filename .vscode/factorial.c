#include<stdio.h>
main()
{
   long long int fact=1,num,i;
    scanf("%lld",&num);
    for ( i = 1; i <= num ; i++)
    {
        fact=fact*i;
    }
    printf("%lld",fact);
    
}