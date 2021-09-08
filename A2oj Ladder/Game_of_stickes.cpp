#include<bits/stdc++.h>
using namespace std; 
int main(){

    int a,b; 
    cin>>a>>b; 

    if(a>b){
        if(b%2==0){
            cout<<"Malvika"; 
        }
        else{
            cout<<"Akshat"; 
        }
    }
    else if(b>a){
        if(a%2==0){
            cout<<"Malvika"; 
        }
        else{
            cout<<"Akshat"; 
        }
    }
    else{
        if(a%2==0){
            cout<<"Malvika"; 
        }
        else{
            cout<<"Akshat"; 
        }
    }

    return 0; 
}