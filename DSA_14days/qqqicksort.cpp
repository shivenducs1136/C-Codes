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
    cout<<"You ENTERED"<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    } 
    cout<<endl; 
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            if(arr[i]<=arr[i+1] && (i+1)<n){
                j = arr[i]; 
                arr[i] = arr[i+1]; 
                arr[i+1] = j; 
            }
        }
    }
    cout<<"Sorted Array "<<endl ; 
    for(i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    } 
    return 0; 
}