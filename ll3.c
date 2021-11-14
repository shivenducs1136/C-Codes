//  Linked List with custom input without using tail , Insertion at Begining of linked list
#include<stdio.h>
struct node
{
    int data; 
    struct node * next; 
}*head,*ptr,*temp;
void main(){

    int k ;
    head = NULL; 
    ptr = NULL;  
    while(1){
        printf("Press 0 to exit else Press any key");
        scanf("%d",&k); 
        if(k==0) break ; 
        temp = (struct node *)malloc (sizeof(struct node)); 
        scanf("%d",&temp->data); 
        if(head == NULL){
            temp->next = NULL;
            head = temp; 
            ptr = temp; 
        }
        else{
            temp->next = ptr; 
            ptr = temp;
            head = temp;  
        }
    }

     printf("\n"); 
    ptr = head; 
    while (ptr!= NULL ){
        printf("%d ",ptr->data); 
        ptr = ptr->next; 
    }


}
