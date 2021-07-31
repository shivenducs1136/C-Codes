#include<stdio.h>

void arra(int *a[], int  *n)
{

for(int i=0;i<*n;i++)
{
    printf("%d ",*a[i]);
}

}

int main()
{
int x;
scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }

    arra(arr,x);
}