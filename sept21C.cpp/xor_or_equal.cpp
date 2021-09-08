#include<bits/stdc++.h>
using namespace std; 

bool search(int arr[],int n,int k){
    int i; 
    for(i=0;i<n;i++){
        if(arr[i] == k ){
            return true; 
        }
    }
    return false; 
}


int main(){

    int t;
    cin>>t; 
    while(t--){
        int n,x;
        cin>>n>>x; 
        int arr[n];
        int i,j,k; 
        for(i=0;i<n;i++){
            cin>>arr[i]; 
        }

        for(i=0;i<n;i++){

            if(search(arr,n,arr[i]^x)){
                
            }

        }


    }

    return 0; 
}