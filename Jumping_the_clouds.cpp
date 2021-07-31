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
    int count0=0,count1=0; 
    for(i=0;i<n;i++){
     if(arr[i]==0){
         count0++; 
     }
     if(arr[i]==1){
         count1++; 
     }

    }
    int res = count0/2 + count1 ; 
    cout<<res<<endl; 
    

    return 0; 
}