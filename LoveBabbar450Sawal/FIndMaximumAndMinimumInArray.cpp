#include<bits/stdc++.h>
using namespace std; 
int main(){

    int n ;
    cin>>n; 
    int arr[n]; 
    int i;
    for(i = 0 ; i<n;i++){
        cin>>arr[i]; 
    }
    int d = arr[0]; 
    for(i=0;i<n;i++){
        if(d>arr[i]){
            d= arr[i];
        }
    }
    cout<<d<<" is the Minimum Of array "<<endl; 
      d = arr[0]; 
    for(i=0;i<n;i++){
        if(d<arr[i]){
            d= arr[i];
        }
    }
    cout<<d<<" is the Maximum Of array "<<endl; 
    
    return 0; 
}