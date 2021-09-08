#include<iostream>
#include<algorithm>
using namespace std; 

bool cmp(int a,int b){
    return a<=b; 
}

int main (){

    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int money,n = sizeof(coins)/sizeof(int); 
    cin>> money ; 

    while(money!=0){
        int lb = lower_bound(coins,coins+n,money,cmp) -coins -1;
    money = money  - coins[lb]; 
    cout<<"Rs."<<coins[lb]<<endl; 

    }
    

    return 0; 
}