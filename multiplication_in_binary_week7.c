#include<stdio.h>
#include<math.h>
main()
{
    int T;
    scanf("%d",&T);
    int a[T];
    int i,j,k,l,sum=0,num,n,res;
    for(i=0;i<T;i++)
    scanf("%d",&a[i]);
    for (i=0;i<T;i++)
    {
        n=a[i];
        num=n%10;
        n=n/10;
        res=pow(2,num);
        sum=sum+res;
    }
}
