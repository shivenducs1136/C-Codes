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

struct node * insert_at_end(struct node* start,int x){

    struct node *temp = (struct node *)malloc(sizeof(struct node)); 
    start->next = temp;
    temp->data = x; 
    temp -> next = NULL; 
    return temp; 

}
struct node * printll(struct node * start){

    printf("%d \n",start->data); 
    return start->next; 
}


struct node * insert_at_middle(struct node * head, int position){
    struct node *newNode;
newNode = malloc(sizeof(struct node));
newNode->data = 4;

struct node *temp = head;

for(int i=2; i < position; i++) {
  if(temp->next != NULL) {
    temp = temp->next;
  }
}
newNode->next = temp->next;
temp->next = newNode;
}

struct node * delete_node(struct node * head){
    struct node* temp = head;
while(temp->next->next!=NULL){
  temp = temp->next;
}
temp->next = NULL;
}
struct node * delete_from_front(struct node * head){
    head = head->next;
}

struct node * delete_from_middle(struct node * head, int position){
    
    struct node* temp = head;
    for(int i=2; i< position; i++) {
  if(temp->next!=NULL) {
    temp = temp->next;
  }
}

temp->next = temp->next->next;
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