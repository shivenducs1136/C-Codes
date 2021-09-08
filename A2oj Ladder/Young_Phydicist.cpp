#include<bits/stdc++.h>
using namespace std; 

bool sum(int arr[],int n){

    int sum =0 , i; 
    for(i=0;i<n;i++){
        sum = sum + arr[i]; 
    }

    if(sum == 0){
        return true; 
    }
    else{
        return false; 
    }

}

int main(){

    int n ; 
    cin>>n;
    int x[n],y[n],z[n]; 
    int i,j,k; 
    for(i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i]; 
    }
    if(sum(x,n) &&sum(y,n) &&sum(z,n) ){
        cout<<"YES"<<endl; 
    }
    else{
        cout<<"NO"<<endl; 
    }
    return 0; 
}