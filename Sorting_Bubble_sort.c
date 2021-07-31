#include<stdio.h>
main()
{
	int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[n];
	int i,k,j,t,l;
	printf("Enter the ARRAY : \n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered ARRAY : \n");
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	for(j=1;j<=n;j++)
	{
	for(i=1;i<=n;i++)
	{
		if(a[i]>a[i+1])
		{
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;
		}
	}

	//if(j==n)
	{
printf("\nAfter sorting in Ascending Order\n");	
for(k=1;k<=n;k++)
	{
		
		printf("%d ",a[k]);
	}
	}}
}