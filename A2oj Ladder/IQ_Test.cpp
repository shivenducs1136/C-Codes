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
    int ocount=0,ecount=0;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            ecount++; 
        }
        if(arr[i]!=0){
            ocount++; 
        }
    }
    if(ecount>1){
        for(i=0;i<n;i++){
            if( arr[i] %2!=0 ){
                cout<<i+1<<endl; 
                break;
            }
    }
    }
    if(ocount>1){
        for(i=0;i<n;i++){
            if( arr[i] %2==0 ){
                cout<<i+1<<endl; 
                break;
            }
    }
    }

    return 0;

}