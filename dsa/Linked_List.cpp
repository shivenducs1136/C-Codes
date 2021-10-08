#include<bits/stdc++.h>
using namespace std; 

    struct Node    {
        
        int data; 
        Node *next; 
        Node(int x){
            data = x; 
            next = NULL; 
        }

    };
void printlist(Node *head){

    Node *curr = head; 
    while(curr!=NULL){
        cout<<(curr->data)<<" "; 
        curr = curr -> next ; 
    }

}
void printr(Node *head){
    if(head == NULL){
        return ; 
    }
    cout<<head->data<<" "; 
    printr(head->next); 
}
int main(){


     Node * head = new Node(10); 
     Node * temp1 = new Node(20); 
     Node * temp2 = new Node(30); 
     Node * temp3 = new Node(40); 

    head-> next = temp1 ; 
    head-> next->next = temp2 ; 
    head-> next->next->next = temp3 ; 
    printlist(head); 
    cout<<endl<<"Via recursion "<<endl; 
    printr(head); 
    return 0; 
}