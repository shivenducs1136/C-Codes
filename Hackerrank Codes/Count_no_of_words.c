// https://www.hackerrank.com/contests/cpp-week-2-m4/challenges/m1p6l18-count-number-of-words
#include<stdio.h>
int main(){
    int num,i,count=1;
    char a[500];
    scanf(" %d ",&num);
    scanf("%[^\n]%*c",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        count++;
    }
    printf("The number of words = %d",count);
    return 0;
}