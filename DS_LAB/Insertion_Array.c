#include<stdio.h>

void insert_at_beg(int n,int arr[] ,int inser){
    int i; 
    for(i = n; i>=0;i-- ){
        if(i-1>=0)
        arr[i] = arr[i-1]; 
    }
    arr[0] = inser; 
     for(i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}
void insert_at_end(int n,int arr[] ,int inser){
    arr[n] = inser; 
    int i; 
     for(i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}
void insert_at_par(int n,int arr[] ,int inser,int index){
    int i; 
    for(i=n;i>=index;i--){
        arr[i] = arr[i-1]; 
    }
    arr[index] = inser;  
}
int main(){

    int n , index, inser;
     scanf("%d%d%d" ,&n,&index,&inser); 
     int arr[n+1],brr[n+1],crr[n+1];
    int i,j; 
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        brr[i] = arr[i];
        crr[i] = arr[i];
    }
     printf("At Begining : \n");
    insert_at_beg(n,crr,inser); 
    printf("\n");
    printf("At End : \n");
    insert_at_end(n,brr,inser); 
    printf("\n");
    printf("At Particular : \n");
    insert_at_par(n+1,arr,inser,index); 

    for(i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0; 
}