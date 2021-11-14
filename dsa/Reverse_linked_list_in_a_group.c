#include<stdio.h>

struct node{
    int data; 
    struct node * next; 
}*head=NULL;

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
struct node * reverse(struct node * head2, struct node * tail){
    struct node* curr=head2;
    struct node * prev = NULL; 
    while (curr!=tail)
    {
        struct node * next = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = next; 
    }
    head = prev;
    return head;
}
void printLL(struct node * he,struct node * tail){
    struct node *ptr; 
    ptr = he; 
    while(ptr!=tail){
        printf("%d->",ptr->data); 
        printf("ptr->data = %d , ptr ->next = %d\n", ptr->data,ptr->next);
        ptr = ptr->next; 
    }
    printf("ptr->data , ptr ->next = %d\n",ptr->next);

}
int main(){

    int l = 1;
    while(l){
        scanf("%d",&l);
        if(l==0){
            break;
        }
        int x; 
        scanf("%d",&x); 
        addelement(x); 
    } 
    int k ;
    scanf("%d",&k); 
    struct node *head2 = head,*tail2 = NULL,* tail =NULL; 
    for(int i =1;i<=k;i++){
        head2=head2->next; 
    }   
    head = reverse(head,head2);  
    head2 = reverse(head2,tail); 
    head2->next = head; 
    printLL(head,tail); 

    return 0; 
}