#include<bits/stdc++.h>
using namespace std;


int f(int n,int B){

    if(n==1){
        return 0; 
    }
    else 
    return 1+ f(n/B,B); 

}

int main(){

    cout<<f(216,7);
    
    return 0; 
}