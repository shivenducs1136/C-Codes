#include<stdio.h>
main()
{
    int long long x,y,f1=1,f2=2,f3,co=0,T,i;
    scanf("%lld",&T);
    i=1;
    while(i<=T)
    {
        scanf("%lld %lld",&x,&y);
        do
        {
            f3=f1+f2;
            f1=f2;
            f2=f3;
            if(f3>=x)
            {
                co++;
            }

        } while (f3<=y);
        printf("%lld\n",co-1);
        i++;
        co=0;
        f1=1;
        f2=2;
    }
    
}










































/*#include<stdio.h>
main()
{
    long int o=0,T;
    scanf("%ld",&T);
    while(o<T)
    {
    long long int count=0;
    long long int f1=1,f2=0;
    long long int res,i,l,x1,x2;
    scanf("%lld %lld",&x1,&x2);
    for(i=0;i<=x2;i++)
    {
        
        
        res=f1+f2;
        if(x1<res&&res<x2)
        {
            count++;
      printf("%lld ",res);
        }
        f1=f2;
        f2=res;
    }
  printf("%lld",count);
    o++;
}
}*/