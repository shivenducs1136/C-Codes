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
    int brr[101]={0}; 
    for(i=0;i<n;i++){
        brr[arr[i]]++ ; 
    }
    int l=0; 
    for(i=0;i<101;i++){
     if(brr[i]>l){
         l = brr[i]; 
     } 
    }
    cout<<n-l<<endl; 


    return 0; 
}