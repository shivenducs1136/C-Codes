#include<stdio.h>
main()
{
  int n[5];
  int i;
  for(i=0;i<5;i++)
  scanf("%d",&n[i]);
  //n  for(i=0;i<5;i++)
    dis(&n);
}
dis(int *x)
{int i;
for(i=5;i>0;i--)
    printf("%d ",x[i]);
}