#include<bits/stdc++.h>
using namespace std;



int main(){

    int n; 
    cin>>n; 
    int arr[n],brr[n]; 
    int i,j,k; 

    for(i=0;i<n;i++){

        cin>>arr[i]; 
        brr[i] = arr[i]; 
    }

    sort(arr,arr+n); 

    for(i=0;i<n;i++){
        
        for(j=0;j<n;j++){
            if(arr[i] == brr[j]){
                cout<<j+1<<" ";
                break; 
            }
        }

    }

    return 0; 
}