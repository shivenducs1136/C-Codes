// https://www.hackerrank.com/contests/cpp-week-1-m4-hw-w-1/challenges/m1p6l113-c-program-to-covert-a-string-to-lowercase-to-uppercase-and-vice-versa-
#include<stdio.h>
#include<string.h>
main()
{
    char a[500],b[500];
    int i=0,j,k;
    scanf("%[^\n]%*c",a);
    strcpy(b,a);
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]>='A' && b[i]<='Z')
        b[i]=b[i]+32;
    }
    for(i=0;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
    printf("\n");
   for(i=0;b[i]!='\0';i++)
    {
        if(b[i]>='a'&&b[i]<='z')
        b[i]=b[i]-32;
    }
    for(i=0;b[i]!='\0';i++)
    {
        printf("%c",b[i]);
    }
}