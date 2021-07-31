// https://www.hackerrank.com/contests/cpp-week-2-m4-hw-w-2/challenges/m1p6l140-c-program-to-remove-all-the-common-characters-from-second-string-/problem
#include<stdio.h>
#include<string.h>
int main()
{
    char a[500],b[500];
    int i,j,k,sum=0,flag=0;
    int l1,l2;    
    // scanf("%[^/n]%*c",a);
    // scanf("%[^/n]%*c",b);
    gets(a);
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<=l1;i++)
    {
        for(j=0;j<=l2;j++)
        {
            if(a[i]==b[j])
            {
                b[j]='1';
            }
        }
    }
    for(j=0;j<=l2;j++)
    {
        if(b[j]!='1')
        printf("%c",b[j]);
    }
    return 0;
}