#include<stdio.h>
main()
{
    int t,n;
    scanf("%d",&n);
    scanf("%d",&t);
    int a[n],i,j,k;

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(t==a[i])
        {
        printf("%d is founded at position : %d",a[i],i+15);
        break; 
        }
      
    }
      if(i==n) printf("%d is not founded",t);
}