#include<stdio.h>
main()
{
    int num ,sum=0, i,j,k;
    scanf("%d",&num);
    j=num;
    while(num!=0)
    {
        k=num%10;
        sum=sum+k*k*k;
        num=num/10;
    }
    if(sum==j)printf("Armstrong");
    else printf("NOT Armstrong");
}