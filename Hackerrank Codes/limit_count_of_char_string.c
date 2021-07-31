// https://www.hackerrank.com/contests/cpp-week-1-m4/challenges/m1p6l126-c-program-to-limit-the-count-of-characters-entered-by-user-
#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    char a[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        scanf(" %c",&a[i]);
    }
   for(i=0;i<n;i++)
    {
        printf("%c",a[i]);
    }
}