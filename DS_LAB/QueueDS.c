#include<stdio.h>
#define MAX 20
int Q[MAX];
int front=-1, rear = -1;  
void enqueue(int x){

    if(rear>MAX){
        printf("Queue Overflow"); 
        return; 
    }
    if(front == -1 && rear == -1){
        front++; 
        rear++; 
        Q[rear] = x; 
    }
    else{
        rear++; 
        Q[rear ] = x; 
    }
    return ; 
}  
void dequeue(){

    if(front== MAX){
        printf("Queue Underflow"); 
        return; 
    }
    else{
        front++; 
    }

}

void print(){
    for(int i = front ; i<=rear;i++){
        printf("%d->",Q[i]); 
    }    
    printf("\n"); 
}

int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50); 
    print();
    dequeue(); 
    print();
    dequeue();
    print(); 
    return 0; 
}