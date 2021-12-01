// Kth Minimum ELEMENT
#include<bits/stdc++.h>
using namespace std; 
int main(){ 

    int n; 
    cin>>n; 
    int arr[n];
    int i,j; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    int k ;
    cin>>k;
    int l = k; 
    int d; 
    while(k--){
    d = arr[0]; 
    for(i=0;i<n;i++){
        if(d>arr[i]){
            d= arr[i];
        }
    }
    for(i=0;i<n;i++){
        if(d==arr[i]){
            arr[i] = INT_MAX; 
        }
    }
    }
    cout<<d<<" is the "<<l<<"th Minimum Of array "<<endl; 
    return 0; 
}