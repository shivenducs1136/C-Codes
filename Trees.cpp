#include<bits/stdc++.h>
using namespace std; 
struct node{
    int data; 
     node * left; 
     node * right;
    node(int x){
         data = x; 
         left = NULL; 
         right = NULL; 
    }
}; 
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left); 
        cout<<root->data<<" "; 
        inorder(root->right); 
    }
}
void preorder(node *root){
    if(root!=NULL){
        cout<<root->data<<" "; 
        preorder(root->left); 
        preorder(root->right); 
    }
}
void postorder(node *root){
    if(root!=NULL){
        postorder(root->left); 
        postorder(root->right); 
        cout<<root->data<<" "; 
    }
}
int max(int a,int b){
    if(a>b){
        return a; 
    }else{
        return b; 
    }
}
int height(node * root){
    if(root == NULL){
        return 0; 
    }
    else{
        return max(height(root->left),height(root->right))+1; 
    }
}
int size(node *root){
    if(root == NULL){
        return 0; 
    }
    else{
        return size(root->left) + size(root->right) +1 ; 

    }
}
int maximum(node * root,int data){
    if(root->left == NULL && root->right == NULL){
        return root->data; 
    }
    else{
        return max(maximum(root->left,root->left->data),maximum(root->right,root->right->data)); 
    }
}
int main(){
    node * root; 
    root = new node(10); 
    root -> left = new node(20); 
    root ->right = new node(30); 
    root -> right->right = new node(50); 
    root ->right ->left = new node(40);
    cout<<"Inorder : "; 
    inorder(root); 
    cout<<endl;  
    cout<<"Preorder : "; 
    preorder(root);
    cout<<endl;  
    cout<<"Postorder : "; 
    postorder(root); 
    cout<<"Height is :"<<height(root)<<endl; 
    cout<<"Size is :"<<size(root)<<endl; 
    cout<<"Maximum is : "<<maximum(root,root->data); 
    return 0; 
}