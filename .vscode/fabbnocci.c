#include<stdio.h>
main()
{
    int i,k,n,n1=0,n2=1,fib;
    scanf("%d",&n);
    printf(" 0");
    for(i=0;i<n-1;i++)
    {
        fib=n1+n2;
        n1=n2;
        n2=fib;
        printf(" %d ",fib);
    }
}