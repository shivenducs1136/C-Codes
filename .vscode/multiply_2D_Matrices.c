#include<stdio.h>
main()
{
    int arr1[50][50],arr2[50][50],n,n2,m1,m2,i,j,k;
    int ans[50][50];
    printf("\nEnter the order of matrix");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
  printf("Enter the order of matrix");
 //   scanf("%d %d",&m1,&m2);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            ans[i][j]=0;
            for(k=0;k<n;k++)
            {
                ans[i][j]=ans[i][j]+arr1[i][k]*arr2[k][j];
            }
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf(" %d ",ans[i][j]);
        }
        printf("\n");
    }

}