// Program For Linear Search 
#include<bits/stdc++.h>
using namespace std; 
template<typename T>
int search(T arr[],int n,int  k){

    int i,j; 
    for(i=0;i<n;i++){
        if(arr[i] == k){
            return i ; 
        }
    }
    return n; 

}
int main(){

    int n ; 
    cin>>n; 
    int arr[n]; 
    int i,j; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    int k; 
    cin>>k; 
    cout<<search(arr,n,k)<<endl;

    return 0; 
}