#include<stdio.h>
#include<string.h>
main()
{
    char a[50]="Kanpur";
    char b[50]="kanagpur";
   // strcpy(a,b);
    xstrcpy(a,b);
    puts(a);
}
xstrcpy(char *p,char *q)
{
   // int a=0;
    while(*p!='\0')
    {
            *p=*q;
            p++;
            q++;
    }
}