#include<stdio.h>
int main()
{
    int i,*ptr,n;
    printf("How many elements you want to enter \n ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",(ptr+i));
    }
    for(i=0;i<n;i++)
    {
    printf("%d",*(ptr+i));
    }

   return 0;
}