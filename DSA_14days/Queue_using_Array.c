// Array Implementation of Queue 
#include<stdio.h>
int q[10] ;
int front = -1, rear = -1;
int flag =0 ; 
void enqueue(int x){

    if(front == 0 && rear == 9 || front - rear == 1){
        printf("OVERFLOW"); 
        return; 
    }
    else if(front == -1){
        front = 0; 
        rear = 0; 
        q[rear]= x; 
    }
    else if(front>0 && rear == 9){
        rear=0; 
        q[rear] = x;

    }
    else{
        rear++;
        q[rear] = x; 
    }
} 
void dequeue(){
    if(front == -1 || rear<front && flag ==1){
        printf("Underflow"); 
        return;
    }
    int x = q[front]; 
    printf("Deleted Element = %d\n",x); 
    if(front == 9){
        front =0; 
        flag = 1; 
    }
    else if(front == rear){
        front = -1; 
        rear = -1; 
    }else{
        front++; 
    }
}

void print(){
    int i; 
    if(front >= 0 && rear <= 9){
        for(i=front;i<=rear;i++){
        printf("%d ",q[i]); 
        }
    }
    else if(front>0 && rear<front){
        for(i = rear ; i <=front ;i++){
            printf("%d ",q[i]); 
        }
    }
    printf("\n"); 
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    print();
    enqueue(999); 
    print(); 
    dequeue(); 
    print();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
     enqueue(100);
    enqueue(200);
    print();
    enqueue(300);
    enqueue(400);
    print();
    enqueue(500);
    enqueue(600);
    print();
    enqueue(700);
     enqueue(150);
    print();
    enqueue(250);
    enqueue(350);
    print();
    enqueue(450);
    enqueue(550);
    print();
    enqueue(650);
    enqueue(750);
    print();
    dequeue();
    dequeue();
    print();
    dequeue();
    dequeue();
    print();   
    dequeue();
    dequeue();
    print();    
    dequeue();
    dequeue();
    print();    
    dequeue();
    dequeue();
    print();    
    dequeue();
    dequeue();
    print();
    return 0; 
}
/*
// Array Implementation of Queue 

#include<stdio.h>
int q[10] ;
int front = -1, rear = -1;

void enqueue(int x){

    if(front == -1 && rear == -1){
        front = 0; 
        rear = 0; 
        q[rear]= x; 
    }
    else if(rear < 10){
        rear++;
        q[rear] = x;

    }
    else{
        printf("Overflow"); 
        return; 
    }
} 
void dequeue(){
    if(front == -1 || front>rear){
        printf("Underflow"); 
        return;
    }
    else if(front<=rear){
        front++; 
    }
}
void print(){
    int i; 
    for(i=front;i<=rear;i++){
        printf("%d ",q[i]); 
    }
    printf("\n"); 
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    print();
    enqueue(999); 
    print(); 
    dequeue(); 
    print();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    print();
    dequeue();
    dequeue();
    print();
    dequeue();
    print();
    return 0; 
}

*/