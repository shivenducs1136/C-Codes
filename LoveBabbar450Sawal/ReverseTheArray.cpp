#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    int arr[n]; 
    int i,j,k; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    int low =0, high = n-1;
    while(low<high){
        int c= arr[low] ; 
        arr[low] = arr[high]; 
        arr[high] = c; 
        low++; 
        high--; 
    } 
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";  
    }

    return 0; 
}