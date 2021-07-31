#include<stdio.h>
#include<string.h>
main()
{
    char a[500];
    int l,i,j,k,flag=0;
    scanf("%[^\n]%*c",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==a[l-i])
        flag=1;
        else flag=0;
    }
    if(flag==1) printf("String is a palindrome");
     if(flag==0) printf("String is not a palindrome");
}