#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, k; 
    cin>>n>>k; 
    int i,count=0; 
    int arr[n]; 
    for(i=0;i<n;i++){
        cin>>arr[i];
        arr[i]+=k;
        if(arr[i]<=5){
            count++; 
        }  
    }
    cout<<count/3<<endl; 


    return 0; 
}