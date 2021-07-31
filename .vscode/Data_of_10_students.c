#include<stdio.h>
main()
{
    struct st 
    {
        char name[20];
        int roll;
        float marks;
    };
    struct st b[10];
    int i,j,k,l,n;
        printf("Enter no of students \n");    
    scanf("%d",&n);
        printf("Enter name roll number marks \n");    
    for(i=0;i<n;i++)
    {
    
        scanf("%s %d %sf",b[i].name,&b[i].roll,&b[i].marks);
    }
        printf("Entered name roll number marks \n");
        for(i=0;i<n;i++)
    {
     
        printf("%s, %d, %f\n",b[i].name,b[i].roll,b[i].marks);
    }
}