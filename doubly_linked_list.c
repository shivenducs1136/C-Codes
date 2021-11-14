#include<stdio.h>

struct node{
    int data; 
    struct node *next; 
    struct node *prev; 
}*head = NULL,*tail=NULL; 
void addelement(int x){
    struct node *temp,*ptr,*temp2; 
    temp = (struct node *)malloc(sizeof(struct node)); 
    temp->data = x; 
    temp->next = NULL; 
    temp->prev = NULL;
    printf("X is -> %d\n",temp->data);
    if(head == NULL){
        head = temp ; 
    }
    else{
        ptr = head; 
        while (ptr->next!=NULL){
            ptr = ptr->next; 
        }
        ptr->next =temp; 
        temp->prev = ptr;
        tail = temp;
        printf("tail -> %d", tail);
    }
    printf("\n"); 
}
void length(){
    struct node *ptr; 
    ptr = head;
    int count=1;  
    while(ptr!=tail){
        count++; 
        ptr=ptr->next; 
    }
    printf("\n Length of linked list is: %d\n",count);  
}
void print(){
    struct node * ptr; 
    ptr = head; 
    printf("head is -> %d\n",head);
    while (ptr!=NULL)
    {
        printf("[%p | ",ptr->prev);
        printf("%d | ",ptr->data); 
        printf("%p ]",ptr->next);
        printf("\n"); 
        ptr = ptr->next; 
    }
}
void printrev(){
    struct node * ptr; 
    ptr = tail; 
    while(ptr!=NULL){ 
         printf("%d -> ",ptr->data);
        ptr = ptr->prev;
    }
}

int main(){
    addelement(10);
    addelement(20);
    addelement(30);
    addelement(40);
    addelement(50);
    length();
    print();
    printf("\n");
    printrev();
    return 0; 
}