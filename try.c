#include<stdio.h>
main()
{
	int arr[9],freq[9];
	int i,j,k,l,count=0;
	for(i=1;i<=9;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=9;i++)
	{
		printf("%d\n",i);
			count=0;
		for(j=1;j<=9;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				//printf("%d\n",count);
				i=j;
			}
		}
		//printf("%d\n",arr[i]);
		printf("frequency of %d is %d",arr[i],count);
	
		if(i!=9)
		printf(" and ");
		
	}
}











/*#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in arrar");
    scanf("%d",&n);
    int i,j,flag=0,l,arr[n],count=1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("You enterd This Array\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("Search : \n");
    scanf("%d",&l);
    //Using Sequential / Linear search.
    for(i=0;i<n;i++)
    {
        if(l==arr[i])
        {
            flag=1;
            printf("Number is Founded at  %d %d number of times",i,count);
            count++;
        }

    }
    if(flag==0)
    printf("Not Found");
    return 0;
}
*/