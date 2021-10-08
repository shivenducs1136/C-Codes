#include<bits/stdc++.h>
using namespace std;

struct node{
    int data; 
    node * next; 
    node(int x){
        data = x; 
        next = NULL; 
    }
}; 
node *insert_at_beg(node *head, int x ){

     node * temp = new node(x); 
     temp->next = head;
    //  temp -> data = x;
     return temp ; 

}
void printl(node * head){ 
    while(head!=NULL)
    {
        cout<<head->data<<" "; 
        head = head ->next; 
    }


}
int main(){

   node *head = NULL; 
   head = insert_at_beg(head,30);
   head = insert_at_beg(head,20); 
   head = insert_at_beg(head,10);
   printl(head); 
    return 0; 
}