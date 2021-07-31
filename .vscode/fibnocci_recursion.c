#include<stdio.h>
int fibb(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fibb(n-1)+fibb(n-2)); 
}
main()
{
    int num,f,res,i;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
    f=fibb(i);
    printf(" %d  ",f);
    }
}