// https://www.hackerrank.com/contests/cpp-week-1-m4/challenges/m1p6l110-c-program-to-count-the-number-of-characters-in-a-given-string-
#include<stdio.h>
main()
{
    char a[500];
    gets(a);
    int i=0,j=0,k;
    while(a[i]!='\0')
    {
    i++;j++;
    }
    // printf("%d",j);
    i=0;
        while(a[i]!='\0')
    {
        printf("%c",a[(j-1)-i]);
    i++;
    }
    
}