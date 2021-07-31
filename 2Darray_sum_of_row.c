#include<stdio.h>
main()
{
    int a[3][3];
    int i,j,sumr=0,sumc=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sumr=sumr+a[i][j];
        }
        printf("Sum of %d row is : %d",i,sumr);
    }
    printf("\n");
        for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sumc=sumc+a[j][i];
        }
        printf("Sum of %d column is : %d",j,sumc);
    }
}