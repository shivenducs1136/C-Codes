#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,t;
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int beg=0,end=(n-1),mid;
    mid=(beg+end)/2;
    while(t!=a[mid] && beg<=end )
 {
  if(t>a[mid])
    {
        beg=mid+1;
    }
    else
    {
        end=mid-1;
    }
    mid=(beg+end)/2;
}
if(t==a[mid])
printf("Number is Found at position : %d",mid+1);
else 
printf("Number is NOT found");
}