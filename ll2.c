// Linked List with custom input with using tail
#include<stdio.h>
struct node
{
    int data; 
    struct node * next; 
}*head,  * tail ;
int main(){
    head == NULL; 
    tail == NULL;
    struct node * temp,*ptr,*itr; 
    int k,count =1,idx=1 , del;  
    while(1){
        printf("Press any key data, or press 0 to exit : "); 
        scanf("%d",&k);
        if(k==0) break ; 
         temp = (struct node *)malloc(sizeof(struct node));
         scanf("%d",&temp->data); 
         temp->next = NULL; 
         if(head == NULL){
             head = temp;
             tail = temp;  
         }
         else{
            tail->next = temp;
            tail = temp;  
         }
         count++ ; 
    }
    printf("\n"); 
    ptr = head; 
    while (ptr!= tail->next ){
        printf("%d ",ptr->data); 
        ptr = ptr->next; 
    }
    printf("\n  Total number of nodes you entered : %d",count); 
    printf("\n"); 
    printf("Enter the position of Node you want to delete : "); 
    scanf("%d",&del); 
    ptr = head; 
    itr = ptr->next; 
    while (ptr != tail->next)
    {
        if(idx == del- 1 ){
        ptr->next = itr->next ; 
        break; 
        }
        ptr = ptr->next; 
        itr= itr->next; 
        idx++; 
    }
 printf("\n"); 
    printf("Linked list after that item deleted : "); 
    ptr = head; 
    while (ptr!= tail->next ){
        printf("%d ",ptr->data); 
        ptr = ptr->next; 
    }
    
    return 0; 

}   