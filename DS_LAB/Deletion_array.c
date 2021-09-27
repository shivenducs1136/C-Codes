#include<stdio.h>
void delete_begin(int brr[],int n){
    for(int i =0; i< n-1; i++){
        if(i+1<n)
        brr[i] = brr[i+1];
        printf("%d ",brr[i]); 
    }

}
void delete_end(int crr[],int n){
    for(int i =0; i< n-1; i++){
        printf("%d ",crr[i]); 
    }
}
int main(){

    int n , delete;
     scanf("%d %d" ,&n,&delete); 
      int arr[n],brr[n],crr[n];
    int i,j; 
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
         brr[i] = arr[i];
        crr[i] = arr[i];
    }
    int indec; 
    for(i=0;i<n;i++){
        if(arr[i] == delete){
            indec = i; 
        }
    }

    for(i=indec;i<n;i++){
        if(i+1<n)
        arr[i] = arr[i+1]; 
    }
    printf("\nAt Begining \n"); 
    delete_begin(brr, n); 
    printf("\nAt End \n"); 
    delete_end(crr,n); 
    printf("\nAt Particular \n");
    for(i = 0 ;i< n-1;i++){
        printf("%d ",arr[i]); 
    }
    return 0; 
}