#include<stdio.h>

struct node{
    int data; 
    struct node *next;
}; 
struct node *add_at_begining(struct node * start , int x){
    struct node * temp; 
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x; 
    temp->next = start; 
    start = temp; 
    return start;
}
struct node * printll(struct node * start){

    printf("%d \n",start->data); 
    return start->next; 
}


int main(){

    struct node *head,*temp,*ptr; 
    int n;

    printf("Enter the number of elements you want to enter"); 
    scanf("%d",&n); 
    printf("\n");
    int i,a; 
    for(i=0;i<n;i++){
        scanf("%d",&a); 
      head = add_at_begining(head,a);       
    } 
        ptr = head; 
    printf("Printing Linked List \n"); 
    for(i=0;i<n;i++){
       ptr = printll(ptr); 
    }

    return 0; 
}