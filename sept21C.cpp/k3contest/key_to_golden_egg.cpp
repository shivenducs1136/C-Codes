#include<bits/stdc++.h>
using namespace std; 

int sum(int n){
    int summon =0; 
    int i=0; 
    int t,n1 = n; 
    while(n1>0){
        t = n1%10; 
        summon = t + summon ; 
        n1 = n1/10; 
    }
    return summon ; 
}

int main(){

    int a,b,summer=0; 
    cin>>a>>b; 
    for(int i =a ; i<= b;i++){

        summer = summer + sum(i); 

    }
    cout<<summer<<endl; 
    return 0; 
}