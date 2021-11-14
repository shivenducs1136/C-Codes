#include<stdio.h>
int main(){

    int *ptr; 
    printf("%d",sizeof(ptr));
    printf("\n"); 
    ptr= (int*)malloc(sizeof(int)*6);
    printf("%d",sizeof(ptr));   
    
    return 0; 
}