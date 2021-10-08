#include<bits/stdc++.h>
using namespace std; 

struct node{
    int data; 
    node * next ; 
    node ( int x){
        data = x; 
        next = NULL; 
    }
}; 

int searchll(node *head , int x, int pos){

    if(head == NULL){
        return -1; 
    }

    if(head->data == x){
        return pos;
    }
    else{
        head = head->next;
        pos += 1;  
        searchll(head,x,pos); 
    }
}

int main(){

    node * head = new node(10);
    node * temp1 = new node(20);
    node * temp2 = new node(30);
    node * temp3 = new node(40);

    head->next = temp1; 
    head->next->next = temp2; 
    head->next->next->next = temp3; 

    int x; 
    cin>>x; 
    int pos = 1; 
    int res =  searchll(head,x,pos);      
    cout<<res<<endl; 

    return 0; 
}