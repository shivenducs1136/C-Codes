#include <stdio.h>
#include <conio.h>
#include <math.h>
void armstrong(int l,int h);
void main()
{
    int x,y;
    printf("enter the value of x and y:");
    scanf("%d%d",&x,&y);
    armstrong(x,y);
    getch();
}
void armstrong(int l,int h)
{
   int i,n,tempt;
   int a,p,sum;
   printf("armstrong number in a given range is:\n");
   for(n=l;n<=h;n++)
   {
        p=n;
       tempt=n;
       sum=0;
        for(i=0;n>0;i++)
                n=n/10;
          while(p>0)
        {
             a=p%10;
             sum=sum*10+pow(a,i);
             p=p/10;
        }
        if(sum==tempt)
             printf("%d\n",sum);
   }
   getch();
}