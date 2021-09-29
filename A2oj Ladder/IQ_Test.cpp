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
    int ev=0,odd=0; 
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            ev++; 
        }
        else{
            odd++;
        }
    }

    if(ev==1){
         for(i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<i+1<<endl;
            break; 
        }
    }
    }
    else{
        for(i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout<<i+1<<endl;
            break; 
        }
    }
    }

    return 0;

}