#include<stdio.h>
main()
{
    int n,i,j,k=1,sum=0;
    scanf("%d",&n);
   while(n!=0)
	{
		j=n%2;
		sum=sum+k*j;
		k=k*10;
		n=n/2;
	}
    printf("%d",sum);
}