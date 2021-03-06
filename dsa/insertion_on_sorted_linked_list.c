#include<stdio.h>

struct node{
    int data; 
    struct node * next; 
}; 
struct node * sortlist(struct node * head , int x){
    struct node * curr = head; 
    struct node * temp ;
    temp = (struct node * )malloc(sizeof(struct node)); 
    if(head == NULL){
        return temp; 
    }
    if(head->data >x){
        temp->next = head; 
        temp->data = x; 
        head = temp; 
        return head; 
    }else{
        while(curr->next->data <x && curr!=NULL){
            curr= curr->next ; 
        }
        temp->data = x ; 
        temp ->next = curr->next; 
        curr ->next = temp; 
    }
    return head; 
    
}

int main(){

    struct node * head , * temp, *pos; 
    head = NULL; 
    int k=1; 
    while(k){
        printf("\n Press any key to add more elements or 0 to exit\n");
        scanf("%d",&k); 
        if(k==0){
            break; 
        }
        temp = (struct node * )malloc(sizeof(struct node)); 
        scanf("%d",&temp->data); 
        temp -> next = NULL; 
        if(head == NULL){
            head = temp; 
        }
        else{
            pos = head; 
            while(pos->next!=NULL){
                pos= pos->next ; 
            }
            pos->next = temp; 
        }
    }
    int x; 
    printf("\nEnter the element you want to enter\n"); 
    scanf("%d",&x); 
    head = sortlist(head,x); 
    while(head!=NULL){
        printf("%d , ",head->data);
        head = head->next; 
    }
    return 0; 
}