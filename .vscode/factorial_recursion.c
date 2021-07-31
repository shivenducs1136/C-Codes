#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return n;
    else 
    return(fact(n-1)*n);
}
main()
{
    int num , factorial, t;
    printf("Enter the number \n");
    scanf("%d",&num);
    factorial=fact(num);
    printf("%d is the factorial",factorial);
}