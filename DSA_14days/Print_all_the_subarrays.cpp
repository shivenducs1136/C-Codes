#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    cin>>n ; 
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i]; 
    }
    cout<<endl;
    int i,j,k; 
    for( i = 0; i < n;i++){
        for( j=i;j<n;j++){
            for( k = i;k<=j;k++){
                cout<<arr[k]<<" "; 
            }
            cout<<endl; 
        }
    }
    return 0; 
}