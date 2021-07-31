// https://www.hackerrank.com/contests/cpp-week-2-m4-hw-w-2/challenges/m1p6l137-c-program-to-reverse-a-number-and-then-print-in-words-in-separate-digits-format-
#include<stdio.h>
void english(int n)
{
         if(n==0) printf("Zero  ");
    else if(n==1) printf("One  ");
    else if(n==2) printf("Two  ");
    else if(n==3) printf("Three  ");
    else if(n==4) printf("Four  ");
    else if(n==5) printf("Five  ");
    else if(n==6) printf("Six  ");
    else if(n==7) printf("Seven  ");
    else if(n==8) printf("Eight  ");
    else if(n==9) printf("Nine  ");
}
main()
{
    int num;
    int n1,sum=0;
    scanf("%d",&num);
    while(num!=0)
    {
        n1=num%10;
        sum=sum*10+n1;
        english(n1);
        num=num/10;
    }
    
}