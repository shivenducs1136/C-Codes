#include<bits/stdc++.h>
using namespace std; 
int main(){

    int n; 
    cin>>n; 
    int arr[n]; 
    for(int i=0; i< n; i++){
        cin>>arr[i]; 
    }
    for(int i =0;i<n;i++){
         for(int j=0;i<n;j++){
            if(arr[i]>=arr[j] && i!=j){
                cout<<"tw1"<<endl; 
                int c = arr[i]; 
                arr[i]= arr[j]; 
                arr[j] = c; 
            }
    cout<<"tw2"<<endl; 

        }
    cout<<"tw3"<<endl; 

    }
    cout<<"tw"<<endl; 
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" "; 
    }
    
    return 0 ; 
}