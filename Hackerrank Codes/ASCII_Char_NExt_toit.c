// https://www.hackerrank.com/contests/cpp-week-2-m4-hw-w-2/challenges/m1p6l135-c-program-to-print-the-ascii-value-of-a-given-character-and-character-next-to-it-
#include<stdio.h>
main()
{
    char a;
    scanf("%c",&a);
    printf("%d\n",a);
    printf("%c\n",a+=1);
}