#include<stdio.h>

struct node
{
    int data; 
    struct node * next; 
};

struct node * insert_at_end(struct node* start,int x){

    struct node *temp = (struct node *)malloc(sizeof(struct node)); 
    start->next = temp;
    temp->data = x; 
    temp -> next = NULL; 
    return temp; 

}

struct node * printll(struct node * start){

    printf("%d \n",start->data); 
    return start->next; 
}

int main(){

    struct node *ptr,*head,*temp; 
    printf("Enter the number of elements you want to enter : "); 
    int n; 
    ptr = head; 
    scanf("%d",&n);
    int i,j,k; 
    for(i=0;i<n;i++){
        scanf("%d",&k); 
        ptr = insert_at_end(ptr,k); 
    }

    ptr = head; 

    printf("Printing Linked List \n"); 
    for(i=0;i<n;i++){
       ptr = printll(ptr); 
    }


    return 0; 
}