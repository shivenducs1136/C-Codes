// https://www.hackerrank.com/contests/cpp-week-1-m4-hw-w-1/challenges/m1p6l133-c-program-to-check-whether-the-given-string-is-an-anagram-or-not-/problem
#include<stdio.h>
#include<string.h>
main()
{
    char a[500],b[500];
    int i,j,l1,l2,flag=0;
    scanf("%[^\n]%*c",a);
    scanf("%[^\n]%*c",b);
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(a[i]!=b[j])
            {
                flag=1;
                break;
            }
            else flag=0;
        }
    }
    if (flag==1) printf("String is not an anagram");
    if (flag==0) printf("String is an anagram");
}