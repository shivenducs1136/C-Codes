#include<stdio.h>
main()
{
	int n,sum=0;
	int arr[n];
	int i,j,k;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
	for(j=0;j<n;j++)
	{
		sum=sum+arr[j];
	}
	
	printf("%d",sum);
	
}