// https://www.hackerrank.com/contests/cpp-week-1-m4/challenges/m1p6l134-c-program-to-print-the-ascii-values-of-all-the-character-in-a-given-string-
#include<stdio.h>
main()
{
    char a[500];
    gets(a);
    int n,i=0;
    while(a[i]!='\0')
    {
        // j++;
        i++;
    }
    n=i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}