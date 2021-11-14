#include <stdio.h>

int main()
{
    int arr[50];
    int n,choice,pos,num;
    int size=0;
    printf("Enter n. of elements i5n original array : ");
    scanf("%d",&n);
    printf("Enter Elements in array : ");
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        size++;
    }
    printf("Enter the position : ");
    scanf("%d",&pos);
    printf("Enter element to insert : ");
    scanf("%d",&num);
    for(int i=n-1;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos] = num; 
    size++;
    printf("Array after Insertion : ");
    for(int i=0;i<=n;i++){
        printf("%d\n",arr[i]);
    }
}