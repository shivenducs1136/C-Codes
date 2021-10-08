#include<bits/stdc++.h>
using namespace std;

    struct node{
        int data; 
        node *next; 
        node(int x){
            x = data; 
            next = NULL; 
        }
    }; 

int main(){

    int a,n,i;
    cout<<"Enter the number of elements you want to enter"<<endl; 
    cin>>n;

    node *ptr; 
    for(i=0;i<n;i++){
        cin>>a; 
        ptr = new node(a); 
        ptr -> next  
    } 




    return 0; 
}