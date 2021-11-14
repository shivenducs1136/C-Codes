#include<stdio.h>

struct node{
    int data; 
    struct node * next; 
}*head;

void addelement(int x){

    struct node * temp,*ptr; 
    temp = (struct node *)malloc(sizeof(struct node)); 
    temp->data = x; 
    temp->next = NULL; 
    if(head==NULL){
        head = temp; 
    }
    else{
        ptr = head; 
            while (ptr->next != NULL)
        {
            ptr = ptr->next; 
        }
        ptr->next = temp; 
    }

}
void pop(){
    struct node *ptr; 
    ptr = head; 
    while (ptr->next->next != NULL){
        ptr = ptr -> next ; 
    }
    ptr->next=NULL; 
}
void reverse(){
    
    struct node *curr = head; 
    struct node * prev = NULL; 
    while(curr!=NULL){
        struct node * next = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = next; 
    }
    head = prev;
}

void printLL(){
    struct node *ptr; 
    ptr = head; 
    while(ptr!=NULL){
        printf("%d->",ptr->data); 
        ptr = ptr->next; 
    }
}
void remove_duplicates(){
    struct node * ptr ; 
    ptr = head; 
    while(ptr->)
}
int main(){
    int k=1 ; 
    while(k){
        printf("Press 1 to PUSH or Press 0 to exit\n"); 
        scanf("%d",&k); 
        if(k==0){
            break; 
        }
        int x; 
        printf("Enter value to pushed : "); 
        scanf("%d",&x);
        addelement(x);
    }
    printLL();
    printf("\n");
    reverse(); 
    printLL(); 



    return 0; 
}