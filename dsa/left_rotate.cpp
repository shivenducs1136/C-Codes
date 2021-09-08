#include<bits/stdc++.h>
using namespace std;

int leftrotate(int arr[],int n){

    int i,t=arr[0]; 
    for(i=0;i<n;i++){

        if(i!=n-1){
        arr[i] = arr[i+1]; 
        }
        else{
            arr[n-1] = t; 
        }

    }

    return 0; 

}

int main(){

    int n; 
    cin>>n; 
    int arr[n]; 
    int i,j; 
    for(i=0;i<n;i++){

        cin>>arr[i]; 

    }

    leftrotate(arr, n ); 

    for(i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }

    return 0 ; 
}