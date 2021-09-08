#include<bits/stdc++.h>
using namespace std;

void deletethis(int arr[],int n,int element){
    int idx; 

    for(int i=0;i<n;i++){
        if(element == arr[i]){
            idx=i; 
            break; 
        }
    }
    for(int i=idx;i<n;i++){
        if(i+1<n)
        arr[i] = arr[i+1]; 
    }
}


int main(){


    int n,ele; 
    cin>>n>>ele; 
    int arr[n]; 
    int i; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    
    deletethis(arr,n,ele); 

    for(i=0;i<n-1;i++){
        cout<<arr[i]<<" " ; 
    }
    return 0; 
}