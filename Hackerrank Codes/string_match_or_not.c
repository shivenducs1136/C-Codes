// https://www.hackerrank.com/contests/cpp-week-1-m4-hw-w-1/challenges/m1p6l130-c-program-to-check-whether-all-the-characters-of-first-string-matches-to-all-the-characters-of-second-string-
#include<stdio.h>
#include<string.h>
main()
{
    char a[500],b[500];
    int i=0,flag=0,l;
    scanf("%[^\n]%*c",a);
    scanf("%[^\n]%*c",b);
    if(strlen(a)==strlen(b))
    {
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]==b[i])
            {
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
    }
    else flag=0;
    if(flag==1) printf("Strings match");
    if(flag==0) printf("Strings doesn't Match");
}
