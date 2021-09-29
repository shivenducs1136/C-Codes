#include<bits/stdc++.h>
using namespace std;

int recbin(int arr[] ,int n, int ele ,int low,int high,int mid){
    mid = (low+high)/2; 
    if(arr[mid]==ele){
        return mid+1; 
    }
    if(arr[mid]<ele){
        low = mid+1; 
    }
    else if(arr[mid]>ele){
        high = mid-1;
    }
    if(low<=high)
    return recbin(arr,n,ele,low,high,mid); 
    else
    return -1; 
}
int main(){ 

    int n,ele; 
    cin>>n>>ele; 
    int arr[n]; 
    int i,j,k; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    sort(arr,arr+n);
    int low =0 , high = n-1; 
    int mid = (low + high) /2 ; 
    cout<<recbin(arr,n,ele,low,high,mid); 
    return 0; 
}