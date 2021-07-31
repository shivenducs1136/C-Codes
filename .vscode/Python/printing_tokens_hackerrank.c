#include<stdio.h>
main()
{
    char sen[1000];
    int i,j,k;
    gets(sen);
    i=0;
    while(sen[i]!='\0')
    {
        if(sen[i]=' ')
        {
            printf("\n");
        }
        printf("%c",sen[i]);
    }
}