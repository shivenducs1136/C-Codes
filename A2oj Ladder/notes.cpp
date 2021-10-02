#include<bits/stdc++.h>
using namespace std; 
int main(){

    int v,n; 
    cin>>v>>n; 
    int i,j,k; 
    int arr[n],count=0; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
        if(v%arr[i]==0){
            count++; 
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i!=j){
                int sum = arr[i] + arr[j]; 

                if(v%sum ==0 ){
                    count++; 
                }
            }
        }
    }
    cout<<count-1<<endl; 

    return 0; 
}