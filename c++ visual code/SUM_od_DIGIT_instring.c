// https://www.hackerrank.com/contests/cpp-week-2-m4/challenges/m1p6l26-find-the-sum-of-digit-in-a-string-
#include<stdio.h>
main()
{
    int num;
    scanf(" %d ",&num);
    char a[500];
    scanf("%[^\n]%*c",a);
    int i,sum=0,count=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='0'||a[i]=='2'||a[i]=='1'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
        count++;
    }
    int b[count],j=0;printf("The digits present in the string is ");
      for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='0')
        {
            b[j]=0; j++;
            printf("0");
        }
                if(a[i]=='1')
        {
            b[j]=1; j++;
            printf("1");
        }
                if(a[i]=='2')
        {
            b[j]=2; j++;
            printf("2");

        }
                if(a[i]=='3')

        {
            b[j]=3; j++;
            printf("3");

        }
                if(a[i]=='4')
        {
            b[j]=4; j++;
            printf("4");

        }
                if(a[i]=='5')
        {
            b[j]=5; j++;
            printf("5");

        }
                if(a[i]=='6')
        {
            b[j]=6; j++;
            printf("6");

        }
                if(a[i]=='7')
        {
            b[j]=7; j++;
            printf("7");

        }
                if(a[i]=='8')
        {
            b[j]=8; j++;
            printf("8");

        }
                if(a[i]=='9')
        {
            b[j]=9; j++;
            printf("9");

        }
       
        
    }
    int t;
    for(j=0;j<count;j++)
    {
        for(i=0;i<count;i++)
        {
            if(b[i]>b[i+1])
            {
        	t=b[i+1];
			b[i+1]=b[i];
			b[i]=t;
            }
        }
    }

    
    // for(i=0;i<count;i++)
    // {
    //     printf("%d",b[i]);
    // }
    for(i=0;i<count;i++)
    {
        sum=sum+b[i];
    }
    printf("\nThe sum of digits is %d",sum);

}