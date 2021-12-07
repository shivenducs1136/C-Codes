// Kadanes Algorithm
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n; 
    cin>>n; 
    int arr[n]; 
    int i; 
    for(i=0;i<n;i++){
        cin>>arr[i]; 
    }
    int cursum =0, maxsum=0; 
    for(i=0;i<n;i++){
            cursum +=arr[i]; 
            if(cursum<0)cursum=0; 
            if(maxsum<cursum)maxsum = cursum; 
        }

    cout<<"Max subarray Sum "<<maxsum<<endl; 
    return 0; 
}