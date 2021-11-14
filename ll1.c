// Linked List with custom input without using tail , Insertion at end of linked list
#include<stdio.h>
struct node
{
    int data; 
    struct node * next; 
}*head,*tail;

void main(){

    struct node * temp,*ptr; 
    int k; 
    head = NULL; 
    while(k){
        printf("Press 1 to enter new node, Press 0 to exit : "); 
        scanf("%d",&k);
        if(k==0){
            break; 
        }
        else{
            temp = (struct node *)malloc(sizeof(struct node));
            scanf("%d",&temp->data); 
            temp->next = NULL ; 
            if(head == NULL){
                head = temp; 
            }
            else{
                ptr = head; 
                while (ptr->next!=NULL)
                {
                    ptr = ptr->next; 
                }
                ptr->next = temp;
            }
        }
    }
    ptr = head; 
    while(ptr != NULL){
        printf("%d , ",ptr->data); 
         ptr = ptr->next;        
    }
}