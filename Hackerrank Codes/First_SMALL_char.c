// https://www.hackerrank.com/contests/cpp-week-2-m4/challenges/m1p6l26-find-first-small-letter-in-string
#include<stdio.h>
int main()
{
    int num; int i;
    char a[500],b;
    scanf(" %d ",&num);
    
    scanf("%[^\n]%*c",a);
   
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='a'&&a[i]<='z')
        {
            b=a[i];
            break;
        }
    }
    printf("The first small letter is %c",b);
    return 0;
}