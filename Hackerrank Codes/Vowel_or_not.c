// https://www.hackerrank.com/contests/cpp-week-2-m4/challenges/m1p6l19-c-program-to-check-whether-the-given-character-is-vowel-or-not-
#include<stdio.h>
main()
{
    char a;
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    printf("Character is a vowel");
    else
    printf("Character is not a vowel");
}