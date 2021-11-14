#include<stdio.h>
#include<stdlib.h>
struct node{
    int data; 
    struct node * next;
}*head=NULL,*tail = NULL,*shead = NULL, *stail = NULL;

void insert_at_end(int x){

    struct node *newnode; 
    newnode = (struct node *)malloc(sizeof(struct node)); 
    newnode->data = x; 
    newnode->next = NULL; 
    if(head == NULL){
        head = newnode;
        tail = newnode;  
    }else{
        tail->next = newnode; 
        tail = newnode; 
    }
}
void insert_at_begin(int x){
    struct node *newnode; 
    newnode = (struct node *)malloc(sizeof(struct node)); 
    newnode->data = x; 
    newnode->next = NULL; 
    if(head == NULL){
        head= newnode; 
        tail = newnode; 
    }
    else{
        struct node * temp; 
        temp = head; 
        head = newnode; 
        head->next = temp; 
    }

}
void print(){
    struct node * ptr; 
    ptr = head; 
    while(ptr!=NULL){
        printf("%d->",ptr->data); 
        ptr = ptr->next; 
    }
    printf("\n");
}
void custom_print(){
    struct node * ptr; 
    ptr = shead; 
    while(ptr!=NULL){
        printf("%d->",ptr->data); 
        ptr = ptr->next; 
    }
    printf("\n");
}
int length_of_ll(){
   int l=0;
     struct node * ptr; 
    ptr = head; 
    while(ptr!=NULL){
        ptr = ptr->next;
        l++; 
    }
    return l; 
}
void cusotm_insert_at_end(int x){

    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    if(shead == NULL){
        shead = newnode;
        stail = newnode;
    }else{
        stail->next = newnode;
        stail = newnode;
    }
}
void insert_at_any(int x, int pos){
    int l = length_of_ll();
    if(pos>l){
        printf("Wrong position is given");
        return;
    }
    else{
        struct node *ptr,*temp,*newnode;
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = x;
        int i=0;
        ptr= head;   
        while(pos != i){
            ptr= ptr->next;
            i++; 
        }
        temp = ptr->next; 
        ptr->next = newnode;
        newnode->next = temp; 
    }
}
void delete_from_any(int pos){
    int l = length_of_ll(); 
    if(pos>l){
        printf("Wrong position Is Given"); 
        return; 
    }
    else{
        struct node *ptr; 
        int i=0; 
        ptr = head; 
        while(pos-1 != i){
            ptr=ptr->next; 
            i++; 
        }
        ptr->next = ptr->next->next; 

    }
}
void delete_whole_linkedlist(){
    head = NULL; 
}
void get_nth_node(int pos){
    int l = length_of_ll(); 
     if(pos>l){
        printf("Wrong position Is Given"); 
        return; 
    }
    else{ 
         struct node *ptr; 
        int i=0; 
        ptr = head; 
        while(pos != i){
            ptr=ptr->next; 
            i++; 
        }
        printf("DATA at item %d is : %d\n",i,ptr->data); 
    }
}
void get_nth_node_from_end(int pos){
    int l = length_of_ll(); 
     if(pos>l){
        printf("Wrong position Is Given"); 
        return; 
    }
    else{ 
         struct node *ptr; 
        int i=0; 
        ptr = head; 
        while(l-pos-1 != i){
            ptr=ptr->next; 
            i++; 
        }
        printf("DATA at item %d from the end is : %d\n",pos,ptr->data); 
    }
}
void print_middle_element(){
    int l = length_of_ll(); 
         struct node *ptr; 
        int i=0; 
        ptr = head; 
        while(l/2 != i){
            ptr=ptr->next; 
            i++; 
        }
        printf("Middle Element is : %d\n",ptr->data); 
}
void num_of_times_a_num_occurs(int num){
    int count=0; 
    struct node *ptr; 
    ptr = head; 
    while(ptr!=NULL){
        if(num == ptr->data){
            count++; 
        }
        ptr=ptr->next; 
    }
    printf("%d occurs %d times.",num,count); 
}
void floyds_cycle_finding_algorithm(){
    struct node * slow_p,* fast_p;
    slow_p = head; 
    fast_p = head;  
    int count=0; 
    while(fast_p->next != NULL){
        if(fast_p == slow_p){
            count++;
            if(count > 1){
                struct node * temp; 
                temp = slow_p->next; 
                int ll=1; 
                while(temp!=slow_p){
                    temp = temp->next;
                    ll++; 
                }
                printf("\nA LOOP EXISTS and the length of loop is : %d\n",ll); 
            return; 
            }
        }
        fast_p= fast_p->next->next; 
        slow_p = slow_p->next; 
    }
    printf("\nLoop Doesnt Exists\n"); 
    return ; 
}
void reverse_a_linkedlist(){
    struct node * ptr, *temp,*curr;
    curr = head; 
    temp = curr->next;  
    ptr = NULL; 
    curr->next = ptr; 
    while(temp!=NULL){
        ptr = temp->next;
        temp->next = curr; 
        curr = temp; 
        temp = ptr; 
    }
    head = curr; 
}
void remove_duplicates(){
    struct node *ptr , *ctr;
    int count =0,i=0;  
        cusotm_insert_at_end(10); 
        cusotm_insert_at_end(20); 
        cusotm_insert_at_end(30); 
        cusotm_insert_at_end(40);
        cusotm_insert_at_end(10);
        cusotm_insert_at_end(20);
        cusotm_insert_at_end(10);
        cusotm_insert_at_end(50);
        custom_print(); 
    for(ptr = shead ; ptr->next!=NULL;ptr =ptr->next){
        for(ctr = shead ; ctr->next!=NULL;ptr =ctr->next){
            if(ptr->data == ctr->data){
                count++; 
                if(count>1){
                    delete_from_any(i); 
                }
            }
            i++; 
        }
        i=0; 
    }
    printf("\n"); 
    custom_print(); 
}
int main(){

    insert_at_begin(10);
    insert_at_begin(20);
    insert_at_begin(30);
    insert_at_begin(40);
    insert_at_begin(50);
    insert_at_begin(60);
    print();
    insert_at_end(777);
    print();
    insert_at_any(999,3);
    print();
    delete_from_any(3);
    print();
    delete_whole_linkedlist();
    print();
    printf("\nNewly created ll\n");
    insert_at_end(10);
    insert_at_end(20);
    insert_at_end(30);
    insert_at_end(40);
    insert_at_end(50);
    insert_at_end(60);
    insert_at_end(70);
    print();
    get_nth_node(4);
    get_nth_node_from_end(2);
    print_middle_element();
    insert_at_end(100);
    print();
    print_middle_element();
    insert_at_end(10);
    insert_at_begin(10);
    insert_at_any(10,5); 
    print();  
    num_of_times_a_num_occurs(10);  
    // head->next->next->next->next = head;
    floyds_cycle_finding_algorithm();
    print(); 
    reverse_a_linkedlist();
    print(); 
    delete_whole_linkedlist(); 
    insert_at_end(10);
    insert_at_end(20);
    insert_at_end(30);
    insert_at_end(40);
    insert_at_end(40);
    insert_at_end(30);
    insert_at_end(20);
    insert_at_end(10);
    print(); 
    reverse_a_linkedlist(); 
    print(); 
    remove_duplicates(); 
    return 0; 
}