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




int main(){

    node * head = NULL; 
    insert_at_end(head,20); 
    

    return 0; 
}