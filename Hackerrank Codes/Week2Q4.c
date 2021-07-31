#include<stdio.h>
main()
{
    int L,i=0,j=0,k,count=0;
    scanf("%d ",&L);
    char str[L];
int a[L];
gets(str);
while(str[i]!='\0')
{
    if((str[i]>=48)&&(str[i]<=57))
    {
        a[j]=str[i]-48;
        j++;
    }
    i++;
}
k=j-1;
    j=0;
    printf("The digits present in the string is ");
    for(j=0;j<=k;j++)
    {
        printf("%d",a[j]);
    }
    printf("\n");
    for(j=0;j<=k;j++)
    {
        count+=a[j];
    }
    printf("The sum of digits is %d",count);
    
}