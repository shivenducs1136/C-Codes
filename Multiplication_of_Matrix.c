#include<stdio.h>
main()
{
    int m1,n1,m2,n2,i;
    printf("Enetr row and column for 1st matrix");
    scanf("%d %d",&m1,&n1);
      int a[m1][n1],b[m2][n2],c[m1][n2],
    int i,j;
   printf("Enter 1st Matrix");
    for(i=0;i<m1;i++)
    {
        for(j=0;j<n1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     printf("\nEnetr row and column for 2nd matrix");
    scanf("%d %d",&m2,&n2);
        for(i=0;i<m2;i++)
    {
        for(j=0;j<n2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

         for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
        }
    }
    int sum=0,k;
if(n1==m2)
{

for(i=0;i<m1;i++)
{
    for(j=0;j<n2;j++)
    {
        for(k=0;k<m2;k++)
        {
            sum=sum+a[i][k]*b[k][j];

        }
        c[i][j]=sum;
        sum=0;
    }   
}
for(i=0;i<m1;i++)
{
    for(j=0;j<n2;j++)
    {
        printf("%d",c[i][j]);
    }   
    printf("\n");
}

}
else
printf("ERROR");
      
}