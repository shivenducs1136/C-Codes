// https://www.hackerrank.com/contests/cpp-week-3-m4/challenges/m1p6l110-c-program-to-count-the-number-of-characters-in-a-given-string-
#include<stdio.h>
int main()
{
    int i,count=0;
    char a[500];
    gets(a);
    // scanf(" %[^n]%*c ",a);
    for(i=0;a[i]!='\0';i++)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}