#include<stdio.h>
main()
{
    char a[50];
    printf("Enter the string\n");
    //scanf("%s",a); // it does not accept multi word string.
    gets(a);
    puts(a);
    printf("\n\n %s",a);
}