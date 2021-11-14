#include<stdio.h>
int sorted(int a[],int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i]<a[i-1])
        {
       
            return 0;
        }
        
    }
    return 1;
    
}
int main()
{
    int i,n;
    printf("enter the number of elements\n");
    scanf("%d",&n);

    printf("enter the elements\n");
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]); 
    }
    for (int i = 0; i < n; i++)
    {
        if (sorted(a,n))
        {
            printf("sorted\n");

        }
        else
        {
            printf("not sorted\n");

        }
        return 0;
    }
    
}