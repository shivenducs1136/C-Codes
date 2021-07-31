// https://www.hackerrank.com/contests/cpp-week-1-m4-hw-w-1/challenges/m1p6l115-c-program-to-find-whether-the-given-string-is-a-palindrome-or-not-
#include<stdio.h>
#include<string.h>
main()
{
    char a[500];
    int l,i,j,k,flag=0;
    scanf("%[^\n]%*c",a);
    l=strlen(a);
    for(i=0;i<=l;i++)
    {
        if(a[i]==a[l-i-1])
        flag=1;
        else {
            flag=0;
            break;
        }
    }
    if(flag==1) printf("String is a palindrome");
     if(flag==0) printf("String is not a palindrome");
}