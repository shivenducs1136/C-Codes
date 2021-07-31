#include"stdio.h"
main()
{
    FILE *f1,*f2;
    char c;
    f1=fopen("abc.c","r");
    f2=fopen("arm.c","a");
    while((c=getc(f1))!=EOF)
    printf("%c",c);
    
    //fclose(f1);
    //fclose(f2);
}