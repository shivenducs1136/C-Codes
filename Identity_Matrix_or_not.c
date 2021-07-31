#include<stdio.h>
main()
{
    int a[3][3];
    int i,j,sumr=0,x=1;
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
           if(i==j && a[i][j]!=1)
           x=0;
           if(i!=j && a[i][j]!=0)
           x=0;
        }
    }
    if(x==1) printf("Identity");
if(x==0) printf("NOT Identity");
}