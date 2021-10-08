#include<bits/stdc++.h>
using namespace std; 
int main(){

    int n,ele; 
    cin>>n>>ele; 
    int arr[n]; 
    int i,j,k; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    sort(arr,arr+n); 
    int low= 0, high = n-1,mid=0;
    for(i=0;i<n;i++){
        mid = (low+high)/2; 
        if(ele>mid){
            low = mid+1; 
        }
        else if(ele<mid){
            high = mid-1; 
        }
        else{
            cout<<mid<<endl; 
            break; 
        }
    }

    return 0; 
}