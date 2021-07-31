#include<stdio.h>
#include<string.h>
main()
{
    char a[50],l;
    gets(a);
    l=len(a);
    printf("%d",l);
}
len(char *p)
{
    int a=0;
    while(*p!='\0')
    {
        a++;
        p++;
    }
    return a;
}