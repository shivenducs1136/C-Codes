#include<stdio.h>
struct node{
    int data; 
    struct node * next; 
} *head = NULL; 
void enqueue(int x){
     struct node * newnode,* ptr; 
     newnode = (struct node *)malloc(sizeof(struct node)); 
     newnode->data = x;
     newnode->next = NULL; 
     if(head == NULL){
         head = newnode; 
     }
     else{
         ptr = head; 
         while(ptr->next != NULL){
             ptr = ptr->next; 
         }
         ptr->next= newnode; 
     }
}
void dequeue(){
    struct node *ptr; 
    ptr = head; 
    if(ptr->next != NULL){
        printf("\nDeleted element is %d\n",head->data); 
        head = head->next; 
    }
    else{
        printf("\nUNDERFLOW\n");
        return ;  
    }
}
void reverse(){
    struct node * curr = head; 
    struct node * prev = NULL; 
    while(curr!=NULL){
        struct node * nexty = curr->next; 
        curr->next = prev; 
        prev = curr;
        curr = nexty;  
    }
    head = prev; 
}
void print(){
    struct node * ptr; 
    ptr = head; 
    if(ptr ->next == NULL){
        return; 
    }
    while(ptr != NULL){
        printf("%d ",ptr->data); 
        ptr = ptr->next; 
    }
    printf("\n"); 
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    print();
    dequeue();
    print();
    dequeue();
    print();
    dequeue();
    print();
    dequeue();
    print();
    dequeue();
    print();
    dequeue();
    print();
    dequeue();
    print();
    dequeue();
    print();
    dequeue();
    print();
    dequeue();
    print();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    enqueue(80);
    enqueue(90);
    print();
    reverse(); 
    print();
    return 0; 
}