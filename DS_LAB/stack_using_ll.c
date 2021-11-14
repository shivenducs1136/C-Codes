#include<stdio.h>

struct node{
    int data;
    struct node * next; 
}*head=NULL;

void push(int x){
    struct node *temp,*ptr; 
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    if(head == NULL){
        head = temp; 
    }
    else{
        ptr = head; 
        while(ptr->next != NULL){
            ptr = ptr->next; 
        }
        ptr->next = temp; 
    }
}

void pop(){
    struct node *ptr; 
    ptr = head; 
    while(ptr->next->next!=NULL){

        ptr = ptr->next;

    }
    ptr->next = NULL; 
}

void print(){
    struct node *ptr; 
    ptr = head; 
    while(ptr!=NULL){
        printf("%d->",ptr->data); 
        ptr = ptr->next;
    }
}

int main(){

    push(10);
    push(20);
    push(30);
    push(40);
    print(); 
    printf("\n");  
    pop();
    print(); 
}